# $FreeBSD: head/usr.sbin/camdd/Makefile 291718 2015-12-03 21:13:08Z bdrewery $

PROG=	camdd
SRCS=	camdd.c
SDIR=	${.CURDIR}/../../sys
LIBADD=	cam mt sbuf bsdxml util pthread
NO_WTHREAD_SAFETY=	1
MAN=	camdd.8

.include <bsd.prog.mk>
