# $FreeBSD: head/lib/libvmmapi/Makefile 281338 2015-04-09 21:38:40Z bapt $

LIB=	vmmapi
SRCS=	vmmapi.c vmmapi_freebsd.c
INCS=	vmmapi.h

WARNS?=	2

LIBADD=	util

CFLAGS+= -I${.CURDIR}

.include <bsd.lib.mk>
