# $FreeBSD: head/sbin/geom/class/journal/Makefile 275030 2014-11-25 11:23:12Z bapt $

.PATH: ${.CURDIR}/../../misc

GEOM_CLASS=	journal
SRCS+=	geom_journal_ufs.c

LIBADD=	ufs md

CFLAGS+=-I${.CURDIR}/../../../../sys

.include <bsd.lib.mk>
