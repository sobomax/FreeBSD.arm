# $FreeBSD: head/usr.sbin/ntp/ntptime/Makefile 267233 2014-06-08 17:29:31Z bdrewery $

.PATH: ${.CURDIR}/../../../contrib/ntp/util

PROG=	ntptime
MAN=

CFLAGS+= -I${.CURDIR}/../../../contrib/ntp/include -I${.CURDIR}/../

DPADD=	${LIBNTP}
LDADD=	${LIBNTP}

NO_PIE=	yes

.include <bsd.prog.mk>
