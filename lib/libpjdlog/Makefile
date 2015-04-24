#
# $FreeBSD: head/lib/libpjdlog/Makefile 275024 2014-11-25 11:07:26Z bapt $
#

SHLIBDIR?=	/lib

.include <bsd.own.mk>

LIB=		pjdlog
SRCS=		pjdlog.c

SHLIB_MAJOR=	0

CFLAGS+=-I${.CURDIR}

LIBADD=	util

WARNS?=	6

.include <bsd.lib.mk>
