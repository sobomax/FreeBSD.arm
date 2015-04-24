# $FreeBSD: head/sbin/gvinum/Makefile 275030 2014-11-25 11:23:12Z bapt $

PROG=	gvinum
SRCS=	gvinum.c gvinum.h geom_vinum_share.c
MAN=	gvinum.8

WARNS?=	2
CFLAGS+=	-I${.CURDIR}/../../sys -I${DESTDIR}/${INCLUDEDIR}/edit

LIBADD=	edit geom

.PATH: ${.CURDIR}/../../sys/geom/vinum

.include <bsd.prog.mk>
