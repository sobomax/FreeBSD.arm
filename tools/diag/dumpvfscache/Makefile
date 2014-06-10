# $FreeBSD: head/tools/diag/dumpvfscache/Makefile 264400 2014-04-13 05:21:56Z imp $

PROG=	dumpvfscache
DPADD=	${LIBKVM}
LDADD=	-lkvm

MAN=

test:	${PROG}
	./${PROG} > a

.include <bsd.prog.mk>
