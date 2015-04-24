# $FreeBSD: head/lib/libc/powerpc/sys/Makefile.inc 281714 2015-04-18 21:50:13Z kib $

MDASM+=	brk.S cerror.S exect.S pipe.S ptrace.S sbrk.S setlogin.S

# Don't generate default code for these syscalls:
NOASM=	break.o exit.o getlogin.o openbsd_poll.o sstk.o yield.o

PSEUDO=	_getlogin.o _exit.o
