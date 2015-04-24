# $FreeBSD: head/usr.bin/xo/Makefile 275042 2014-11-25 14:29:10Z bapt $

LIBXO=	${.CURDIR:H:H}/contrib/libxo

.PATH:	${LIBXO}/xo

PROG=	xo
MAN=	xo.1

# XXX For xoversion.h
CFLAGS+=-I${LIBXO}/libxo

LIBADD=	xo

.include <bsd.prog.mk>
