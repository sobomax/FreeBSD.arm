# $FreeBSD: head/sbin/ggate/ggated/Makefile 275030 2014-11-25 11:23:12Z bapt $

.PATH: ${.CURDIR}/../shared

PROG=	ggated
MAN=	ggated.8
SRCS=	ggated.c ggate.c

LIBADD=	pthread

CFLAGS+= -I${.CURDIR}/../shared

.include <bsd.prog.mk>
