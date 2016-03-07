# $FreeBSD: head/lib/libc/riscv/sys/Makefile.inc 294227 2016-01-17 15:21:23Z br $

SRCS+=	trivial-vdso_tc.c

#MDASM= ptrace.S
MDASM=	brk.S \
	cerror.S \
	pipe.S \
	sbrk.S \
	shmat.S \
	sigreturn.S \
	syscall.S \
	vfork.S

# Don't generate default code for these syscalls:
NOASM=	break.o \
	exit.o \
	getlogin.o \
	openbsd_poll.o \
	sstk.o \
	vfork.o \
	yield.o

PSEUDO= _exit.o \
	_getlogin.o
