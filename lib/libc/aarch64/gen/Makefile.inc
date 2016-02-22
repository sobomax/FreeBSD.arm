# $FreeBSD: head/lib/libc/aarch64/gen/Makefile.inc 286959 2015-08-20 13:11:52Z andrew $

SRCS+=	_ctx_start.S \
	fabs.S \
	flt_rounds.c \
	fpgetmask.c \
	fpsetmask.c \
	infinity.c \
	ldexp.c \
	makecontext.c \
	_setjmp.S \
	_set_tp.c \
	setjmp.S \
	sigsetjmp.S \
	trivial-getcontextx.c
