# $FreeBSD: head/sbin/casperd/Makefile 275030 2014-11-25 11:23:12Z bapt $

PROG=	casperd

SRCS=	casperd.c zygote.c

LIBADD=	casper nv pjdlog util

MAN=	casperd.8

CFLAGS+=-I${.CURDIR}
CFLAGS+=-I${.CURDIR}/../../lib/libcapsicum
CFLAGS+=-I${.CURDIR}/../../lib/libcasper
CFLAGS+=-I${.CURDIR}/../../lib/libnv
CFLAGS+=-I${.CURDIR}/../../lib/libpjdlog

.include <bsd.prog.mk>
