#	From: @(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD: head/usr.sbin/lpr/lpr/Makefile 267233 2014-06-08 17:29:31Z bdrewery $

.PATH: ${.CURDIR}/../common_source

BINDIR=	/usr/bin

PROG=	lpr
MAN=	lpr.1 printcap.5
BINOWN=	root
BINGRP=	daemon
BINMODE= 6555

CFLAGS+= -I${.CURDIR}/../common_source

WARNS?=	2

DPADD=	${LIBLPR}
LDADD=	${LIBLPR}

NO_PIE=	yes

.include <bsd.prog.mk>
