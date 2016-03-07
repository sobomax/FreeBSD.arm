# $FreeBSD: head/lib/libcasper/services/cap_grp/Makefile 296126 2016-02-26 22:14:08Z bdrewery $

LIB=	cap_grp

SHLIB_MAJOR=	0
SHLIBDIR?=	/lib/casper
INCSDIR?=	${INCLUDEDIR}/casper

SRCS=	cap_grp.c

INCS=	cap_grp.h

LIBADD=	nv

CFLAGS+=-I${.CURDIR}

.include <bsd.lib.mk>
