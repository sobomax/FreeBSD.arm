# $FreeBSD: head/lib/libc/mips/sys/Makefile.inc 283751 2015-05-29 19:42:55Z brooks $

SRCS+=	trivial-vdso_tc.c

MDASM=  Ovfork.S brk.S cerror.S exect.S \
	pipe.S ptrace.S sbrk.S syscall.S

# Don't generate default code for these syscalls:
NOASM=	break.o exit.o getlogin.o openbsd_poll.o sstk.o vfork.o yield.o

PSEUDO= _exit.o _getlogin.o
