# $FreeBSD: head/lib/libc/sparc64/sys/Makefile.inc 264155 2014-04-05 17:54:43Z imp $

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

MDASM+=	brk.S cerror.S exect.S pipe.S ptrace.S sbrk.S setlogin.S sigaction.S

# Don't generate default code for these syscalls:
NOASM=	break.o exit.o getlogin.o openbsd_poll.o sstk.o yield.o

PSEUDO=	_getlogin.o _exit.o
.if ${MK_SYSCALL_COMPAT} != "no"
PSEUDO+= _pread.o _pwrite.o _lseek.o _mmap.o _ftruncate.o _truncate.o
.endif
