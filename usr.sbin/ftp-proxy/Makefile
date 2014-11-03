# $FreeBSD: head/usr.sbin/ftp-proxy/Makefile 273065 2014-10-13 22:15:26Z delphij $

.PATH:	${.CURDIR}/../../contrib/pf/ftp-proxy

PROG=	ftp-proxy
MAN=	ftp-proxy.8

SRCS=	ftp-proxy.c filter.c

CFLAGS+=-I${.CURDIR}/../../contrib/pf/libevent

LDADD+=	${LIBEVENT}
DPADD+=	${LIBEVENT}

WARNS?=	3

.include <bsd.prog.mk>
