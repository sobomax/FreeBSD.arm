# $FreeBSD: head/lib/libcom_err/Makefile 276551 2015-01-02 18:45:03Z bapt $

LIB=	com_err
SRCS=	com_err.c error.c
INCS=	${COM_ERRDIR}/com_err.h ${COM_ERRDIR}/com_right.h
MAN=	com_err.3
COM_ERRDIR=	${.CURDIR}/../../contrib/com_err
CFLAGS+=	-I${COM_ERRDIR}

LDFLAGS=	-Wl,--no-undefined
VERSION_MAP=	${COM_ERRDIR}/version-script.map

.include <bsd.lib.mk>

.PATH:	${COM_ERRDIR}
