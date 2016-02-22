# $FreeBSD: head/usr.bin/xo/Makefile 289490 2015-10-18 07:30:50Z ngie $

.include <src.opts.mk>

LIBXOSRC=	${SRCTOP}/contrib/libxo

.PATH:	${LIBXOSRC}/xo

PROG=	xo
MAN=	xo.1

# XXX For xoversion.h
CFLAGS+=-I${LIBXOSRC}/libxo

LIBADD=	xo

.if ${MK_TESTS} != "no"
SUBDIR+=	tests
.endif

.include <bsd.prog.mk>
