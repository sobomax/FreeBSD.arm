# $FreeBSD: head/lib/libc/aarch64/gen/Makefile.inc 285352 2015-07-10 08:36:22Z andrew $

SRCS+=	_ctx_start.S \
	fabs.S \
	flt_rounds.c \
	fpgetmask.c \
	fpsetmask.c \
	ldexp.c \
	makecontext.c \
	_setjmp.S \
	_set_tp.c \
	setjmp.S \
	sigsetjmp.S \
	trivial-getcontextx.c
