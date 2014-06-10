# $FreeBSD: head/gnu/usr.bin/texinfo/infokey/Makefile 267233 2014-06-08 17:29:31Z bdrewery $

PROG=	infokey
SRCS=	infokey.c key.c

DPADD=	${LIBTXI}
LDADD=	${LIBTXI}

NO_PIE=	yes

.include <bsd.prog.mk>

.PATH:	${TXIDIR}/info ${TXIDIR}/doc
