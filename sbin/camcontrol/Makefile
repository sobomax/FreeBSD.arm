# $FreeBSD: head/sbin/camcontrol/Makefile 275030 2014-11-25 11:23:12Z bapt $

PROG=	camcontrol
SRCS=	camcontrol.c util.c
.if !defined(RELEASE_CRUNCH)
SRCS+=	fwdownload.c modeedit.c persist.c progress.c
.else
CFLAGS+= -DMINIMALISTIC
.endif
# This is verboten
.if ${MACHINE_CPUARCH} == "arm"
WARNS?= 3
.endif
LIBADD=	cam sbuf util
MAN=	camcontrol.8

.include <bsd.prog.mk>
