#	From: @(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD: head/usr.sbin/lpr/pac/Makefile 267233 2014-06-08 17:29:31Z bdrewery $

.PATH: ${.CURDIR}/../common_source

PROG=	pac
MAN=	pac.8

CFLAGS+= -I${.CURDIR}/../common_source

DPADD=	${LIBLPR}
LDADD=	${LIBLPR}

NO_PIE=	yes

.include <bsd.prog.mk>
