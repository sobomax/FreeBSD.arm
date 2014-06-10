# ex:ts=8
#
# Makefile for amd
# 	This file is under a "BSD" copyright (c) by David O'Brien 1998
#
# $FreeBSD: head/usr.sbin/amd/pawd/Makefile 267233 2014-06-08 17:29:31Z bdrewery $

.PATH: ${.CURDIR}/../../../contrib/amd/amq

BINDIR=	/usr/bin

PROG=	pawd
SRCS=	pawd.c amq_clnt.c amq_xdr.c

CFLAGS+= -I${.CURDIR}/../../../contrib/amd/amq

DPADD=	${LIBAMU}
LDADD=	${LIBAMU}

NO_PIE=	yes

.include <bsd.prog.mk>
