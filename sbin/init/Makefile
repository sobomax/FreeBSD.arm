#	@(#)Makefile	8.1 (Berkeley) 7/19/93
# $FreeBSD: head/sbin/init/Makefile 275030 2014-11-25 11:23:12Z bapt $

PROG=	init
MAN=	init.8
PRECIOUSPROG=
INSTALLFLAGS=-b -B.bak
CFLAGS+=-DDEBUGSHELL -DSECURE -DLOGIN_CAP -DCOMPAT_SYSV_INIT
LIBADD=	util crypt

NO_SHARED?=	YES

.include <bsd.prog.mk>
