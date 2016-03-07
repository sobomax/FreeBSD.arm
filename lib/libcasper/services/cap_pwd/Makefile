# $FreeBSD: head/lib/libcasper/services/cap_pwd/Makefile 296126 2016-02-26 22:14:08Z bdrewery $

LIB=	cap_pwd

SHLIB_MAJOR=	0
SHLIBDIR?=	/lib/casper
INCSDIR?=	${INCLUDEDIR}/casper

SRCS=	cap_pwd.c

INCS=	cap_pwd.h

LIBADD=	nv

CFLAGS+=-I${.CURDIR}

.include <bsd.lib.mk>
