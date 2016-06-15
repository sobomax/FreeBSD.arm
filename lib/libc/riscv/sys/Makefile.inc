# $FreeBSD: head/lib/libc/riscv/sys/Makefile.inc 300689 2016-05-25 16:38:10Z br $

SRCS+=	trivial-vdso_tc.c

#MDASM= ptrace.S
MDASM=	cerror.S \
	pipe.S \
	shmat.S \
	sigreturn.S \
	syscall.S \
	vfork.S

# Don't generate default code for these syscalls:
NOASM=	break.o \
	exit.o \
	getlogin.o \
	openbsd_poll.o \
	sbrk.o \
	sstk.o \
	vfork.o \
	yield.o

PSEUDO= _exit.o \
	_getlogin.o
