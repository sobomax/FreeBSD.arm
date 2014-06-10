# $FreeBSD: head/usr.sbin/lpr/chkprintcap/Makefile 267233 2014-06-08 17:29:31Z bdrewery $

.PATH: ${.CURDIR}/../common_source

PROG=	chkprintcap
MAN=	chkprintcap.8
SRCS=	chkprintcap.c skimprintcap.c

CFLAGS+= -I${.CURDIR}/../common_source

DPADD=	${LIBLPR}
LDADD=	${LIBLPR}

NO_PIE=	yes

.include <bsd.prog.mk>
