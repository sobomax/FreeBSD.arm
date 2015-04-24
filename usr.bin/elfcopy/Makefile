# $FreeBSD: head/usr.bin/elfcopy/Makefile 275373 2014-12-01 17:49:42Z emaste $

.include <src.opts.mk>

ELFTCDIR=	${.CURDIR}/../../contrib/elftoolchain
ELFCOPYDIR=	${ELFTCDIR}/elfcopy

.PATH: ${ELFCOPYDIR}

PROG=	elfcopy

SRCS=	archive.c ascii.c binary.c main.c sections.c segments.c symbols.c

WARNS?=	5

LIBADD=	archive elftc elf

CFLAGS+=-I${ELFTCDIR}/libelftc -I${ELFTCDIR}/common

MAN=	elfcopy.1 strip.1

LINKS=	${BINDIR}/elfcopy ${BINDIR}/strip

.include <bsd.prog.mk>
