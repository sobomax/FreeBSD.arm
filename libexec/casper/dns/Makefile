# $FreeBSD: head/libexec/casper/dns/Makefile 275077 2014-11-25 21:18:18Z bapt $

.PATH:	${.CURDIR} ${.CURDIR}/../../../sbin/casper

PROG=	dns

SRCS=	dns.c

LIBADD=	casper nv

BINDIR=	/libexec/casper

CFLAGS+=-I${.CURDIR}
CFLAGS+=-I${.CURDIR}/../../../lib/libcapsicum
CFLAGS+=-I${.CURDIR}/../../../lib/libcasper
CFLAGS+=-I${.CURDIR}/../../../lib/libpjdlog
CFLAGS+=-I${.CURDIR}/../../../sbin/casper

MAN=

.include <bsd.prog.mk>
