# $FreeBSD: head/tools/regression/posixsem/Makefile 264400 2014-04-13 05:21:56Z imp $

PROG=	posixsem
SRCS=	posixsem.c test.c
DPADD=	${LIBKVM}
LDADD=	-lkvm
MAN=

WARNS?=	3

.include <bsd.prog.mk>
