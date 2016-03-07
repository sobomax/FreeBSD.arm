# $FreeBSD: head/lib/libcasper/services/cap_random/Makefile 296126 2016-02-26 22:14:08Z bdrewery $

LIB=	cap_random

SHLIB_MAJOR=	0
SHLIBDIR?=	/lib/casper
INCSDIR?=	${INCLUDEDIR}/casper

SRCS=	cap_random.c

INCS=	cap_random.h

LIBADD=	nv

CFLAGS+=-I${.CURDIR}

.include <bsd.lib.mk>
