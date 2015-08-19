/*-
 * Copyright (c) 2002 Tim J. Robbins.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#include "namespace.h"
#include <sys/cdefs.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>
#include <fcntl.h>
#include <paths.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <wordexp.h>
#include "un-namespace.h"

__FBSDID("$FreeBSD: head/lib/libc/gen/wordexp.c 286941 2015-08-19 20:31:03Z jilles $");

static int	we_askshell(const char *, wordexp_t *, int);
static int	we_check(const char *, int);

/*
 * wordexp --
 *	Perform shell word expansion on `words' and place the resulting list
 *	of words in `we'. See wordexp(3).
 *
 *	Specified by IEEE Std. 1003.1-2001.
 */
int
wordexp(const char * __restrict words, wordexp_t * __restrict we, int flags)
{
	int error;

	if (flags & WRDE_REUSE)
		wordfree(we);
	if ((flags & WRDE_APPEND) == 0) {
		we->we_wordc = 0;
		we->we_wordv = NULL;
		we->we_strings = NULL;
		we->we_nbytes = 0;
	}
	if ((error = we_check(words, flags)) != 0) {
		wordfree(we);
		return (error);
	}
	if ((error = we_askshell(words, we, flags)) != 0) {
		wordfree(we);
		return (error);
	}
	return (0);
}

static size_t
we_read_fully(int fd, char *buffer, size_t len)
{
	size_t done;
	ssize_t nread;

	done = 0;
	do {
		nread = _read(fd, buffer + done, len - done);
		if (nread == -1 && errno == EINTR)
			continue;
		if (nread <= 0)
			break;
		done += nread;
	} while (done != len);
	return done;
}

/*
 * we_askshell --
 *	Use the `wordexp' /bin/sh builtin function to do most of the work
 *	in expanding the word string. This function is complicated by
 *	memory management.
 */
static int
we_askshell(const char *words, wordexp_t *we, int flags)
{
	int pdes[2];			/* Pipe to child */
	char buf[18];			/* Buffer for byte and word count */
	long nwords, nbytes;		/* Number of words, bytes from child */
	long i;				/* Handy integer */
	size_t sofs;			/* Offset into we->we_strings */
	size_t vofs;			/* Offset into we->we_wordv */
	pid_t pid;			/* Process ID of child */
	pid_t wpid;			/* waitpid return value */
	int status;			/* Child exit status */
	int error;			/* Our return value */
	int serrno;			/* errno to return */
	char *np, *p;			/* Handy pointers */
	char *nstrings;			/* Temporary for realloc() */
	char **nwv;			/* Temporary for realloc() */
	sigset_t newsigblock, oldsigblock;
	const char *ifs;
	char save;

	serrno = errno;
	ifs = getenv("IFS");

	if (pipe2(pdes, O_CLOEXEC) < 0)
		return (WRDE_NOSPACE);	/* XXX */
	(void)sigemptyset(&newsigblock);
	(void)sigaddset(&newsigblock, SIGCHLD);
	(void)_sigprocmask(SIG_BLOCK, &newsigblock, &oldsigblock);
	if ((pid = fork()) < 0) {
		serrno = errno;
		_close(pdes[0]);
		_close(pdes[1]);
		(void)_sigprocmask(SIG_SETMASK, &oldsigblock, NULL);
		errno = serrno;
		return (WRDE_NOSPACE);	/* XXX */
	}
	else if (pid == 0) {
		/*
		 * We are the child; make /bin/sh expand `words'.
		 */
		(void)_sigprocmask(SIG_SETMASK, &oldsigblock, NULL);
		if ((pdes[1] != STDOUT_FILENO ?
		    _dup2(pdes[1], STDOUT_FILENO) :
		    _fcntl(pdes[1], F_SETFD, 0)) < 0)
			_exit(1);
		execl(_PATH_BSHELL, "sh", flags & WRDE_UNDEF ? "-u" : "+u",
		    "-c", "IFS=$1;eval \"$2\";eval \"echo;set -- $3\";"
		    "IFS=;a=\"$*\";printf '%08x' \"$#\" \"${#a}\";"
		    "printf '%s\\0' \"$@\"",
		    "",
		    ifs != NULL ? ifs : " \t\n",
		    flags & WRDE_SHOWERR ? "" : "exec 2>/dev/null", words,
		    (char *)NULL);
		_exit(1);
	}

	/*
	 * We are the parent; read the output of the shell wordexp function,
	 * which is a byte indicating that the words were parsed successfully,
	 * a 32-bit hexadecimal word count, a 32-bit hexadecimal byte count
	 * (not including terminating null bytes), followed by the expanded
	 * words separated by nulls.
	 */
	_close(pdes[1]);
	switch (we_read_fully(pdes[0], buf, 17)) {
	case 1:
		error = WRDE_BADVAL;
		serrno = errno;
		goto cleanup;
	case 17:
		break;
	default:
		error = WRDE_SYNTAX;
		serrno = errno;
		goto cleanup;
	}
	save = buf[9];
	buf[9] = '\0';
	nwords = strtol(buf + 1, NULL, 16);
	buf[9] = save;
	buf[17] = '\0';
	nbytes = strtol(buf + 9, NULL, 16) + nwords;

	/*
	 * Allocate or reallocate (when flags & WRDE_APPEND) the word vector
	 * and string storage buffers for the expanded words we're about to
	 * read from the child.
	 */
	sofs = we->we_nbytes;
	vofs = we->we_wordc;
	if ((flags & (WRDE_DOOFFS|WRDE_APPEND)) == (WRDE_DOOFFS|WRDE_APPEND))
		vofs += we->we_offs;
	we->we_wordc += nwords;
	we->we_nbytes += nbytes;
	if ((nwv = realloc(we->we_wordv, (we->we_wordc + 1 +
	    (flags & WRDE_DOOFFS ?  we->we_offs : 0)) *
	    sizeof(char *))) == NULL) {
		error = WRDE_NOSPACE;
		goto cleanup;
	}
	we->we_wordv = nwv;
	if ((nstrings = realloc(we->we_strings, we->we_nbytes)) == NULL) {
		error = WRDE_NOSPACE;
		goto cleanup;
	}
	for (i = 0; i < vofs; i++)
		if (we->we_wordv[i] != NULL)
			we->we_wordv[i] += nstrings - we->we_strings;
	we->we_strings = nstrings;

	if (we_read_fully(pdes[0], we->we_strings + sofs, nbytes) != nbytes) {
		error = WRDE_NOSPACE; /* abort for unknown reason */
		serrno = errno;
		goto cleanup;
	}

	error = 0;
cleanup:
	_close(pdes[0]);
	do
		wpid = _waitpid(pid, &status, 0);
	while (wpid < 0 && errno == EINTR);
	(void)_sigprocmask(SIG_SETMASK, &oldsigblock, NULL);
	if (error != 0) {
		errno = serrno;
		return (error);
	}
	if (wpid < 0 || !WIFEXITED(status) || WEXITSTATUS(status) != 0)
		return (WRDE_NOSPACE); /* abort for unknown reason */

	/*
	 * Break the null-terminated expanded word strings out into
	 * the vector.
	 */
	if (vofs == 0 && flags & WRDE_DOOFFS)
		while (vofs < we->we_offs)
			we->we_wordv[vofs++] = NULL;
	p = we->we_strings + sofs;
	while (nwords-- != 0) {
		we->we_wordv[vofs++] = p;
		if ((np = memchr(p, '\0', nbytes)) == NULL)
			return (WRDE_NOSPACE);	/* XXX */
		nbytes -= np - p + 1;
		p = np + 1;
	}
	we->we_wordv[vofs] = NULL;

	return (0);
}

/*
 * we_check --
 *	Check that the string contains none of the following unquoted
 *	special characters: <newline> |&;<>(){}
 *	or command substitutions when WRDE_NOCMD is set in flags.
 */
static int
we_check(const char *words, int flags)
{
	char c;
	int dquote, level, quote, squote;

	quote = squote = dquote = 0;
	while ((c = *words++) != '\0') {
		switch (c) {
		case '\\':
			if (squote == 0)
				quote ^= 1;
			continue;
		case '\'':
			if (quote + dquote == 0)
				squote ^= 1;
			break;
		case '"':
			if (quote + squote == 0)
				dquote ^= 1;
			break;
		case '`':
			if (quote + squote == 0 && flags & WRDE_NOCMD)
				return (WRDE_CMDSUB);
			while ((c = *words++) != '\0' && c != '`')
				if (c == '\\' && (c = *words++) == '\0')
					break;
			if (c == '\0')
				return (WRDE_SYNTAX);
			break;
		case '|': case '&': case ';': case '<': case '>':
		case '{': case '}': case '(': case ')': case '\n':
			if (quote + squote + dquote == 0)
				return (WRDE_BADCHAR);
			break;
		case '$':
			if ((c = *words++) == '\0')
				break;
			else if (quote + squote == 0 && c == '(') {
				if (flags & WRDE_NOCMD && *words != '(')
					return (WRDE_CMDSUB);
				level = 1;
				while ((c = *words++) != '\0') {
					if (c == '\\') {
						if ((c = *words++) == '\0')
							break;
					} else if (c == '(')
						level++;
					else if (c == ')' && --level == 0)
						break;
				}
				if (c == '\0' || level != 0)
					return (WRDE_SYNTAX);
			} else if (quote + squote == 0 && c == '{') {
				level = 1;
				while ((c = *words++) != '\0') {
					if (c == '\\') {
						if ((c = *words++) == '\0')
							break;
					} else if (c == '{')
						level++;
					else if (c == '}' && --level == 0)
						break;
				}
				if (c == '\0' || level != 0)
					return (WRDE_SYNTAX);
			} else
				--words;
			break;
		default:
			break;
		}
		quote = 0;
	}
	if (quote + squote + dquote != 0)
		return (WRDE_SYNTAX);

	return (0);
}

/*
 * wordfree --
 *	Free the result of wordexp(). See wordexp(3).
 *
 *	Specified by IEEE Std. 1003.1-2001.
 */
void
wordfree(wordexp_t *we)
{

	if (we == NULL)
		return;
	free(we->we_wordv);
	free(we->we_strings);
	we->we_wordv = NULL;
	we->we_strings = NULL;
	we->we_nbytes = 0;
	we->we_wordc = 0;
}
