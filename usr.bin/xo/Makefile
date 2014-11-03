# $FreeBSD: head/usr.bin/xo/Makefile 273568 2014-10-23 23:16:21Z marcel $

LIBXO=	${.CURDIR:H:H}/contrib/libxo

.PATH:	${LIBXO}/xo

PROG=	xo
MAN=	xo.1

# XXX For xoversion.h
CFLAGS+=-I${LIBXO}/libxo

DPADD=	${LIBXO}
LDADD=	-lxo

.include <bsd.prog.mk>
