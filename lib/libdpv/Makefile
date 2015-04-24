# $FreeBSD: head/lib/libdpv/Makefile 275024 2014-11-25 11:07:26Z bapt $

LIB=		dpv
SHLIB_MAJOR=	1
INCS=		dpv.h
MAN=		dpv.3
MLINKS=		dpv.3 dpv_free.3

LIBADD=	dialog figpar util ncursesw

SRCS=		dialog_util.c dialogrc.c dprompt.c dpv.c status.c util.c

CFLAGS+=	-I${.CURDIR}

WARNS?=		6

.include <bsd.lib.mk>
