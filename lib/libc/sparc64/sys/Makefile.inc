# $FreeBSD: head/lib/libc/sparc64/sys/Makefile.inc 281714 2015-04-18 21:50:13Z kib $

SRCS+=	__sparc_sigtramp_setup.c \
	__sparc_utrap.c \
	__sparc_utrap_align.c \
	__sparc_utrap_emul.c \
	__sparc_utrap_fp_disabled.S \
	__sparc_utrap_gen.S \
	__sparc_utrap_install.c \
	__sparc_utrap_setup.c \
	sigcode.S

CFLAGS+= -I${LIBC_SRCTOP}/sparc64/fpu

MDASM+=	brk.S cerror.S exect.S pipe.S ptrace.S sbrk.S setlogin.S sigaction1.S

# Don't generate default code for these syscalls:
NOASM=	break.o exit.o getlogin.o openbsd_poll.o sstk.o yield.o

PSEUDO=	_getlogin.o _exit.o
