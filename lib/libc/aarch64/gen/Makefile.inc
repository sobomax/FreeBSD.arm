# $FreeBSD: head/lib/libc/aarch64/gen/Makefile.inc 284807 2015-06-25 08:22:25Z andrew $

SRCS+=	fabs.S \
	flt_rounds.c \
	fpgetmask.c \
	fpsetmask.c \
	ldexp.c \
	_setjmp.S \
	_set_tp.c \
	setjmp.S \
	sigsetjmp.S \
	trivial-getcontextx.c
