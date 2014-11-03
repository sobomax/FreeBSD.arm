# $FreeBSD: head/usr.sbin/ntp/ntptime/Makefile 270168 2014-08-19 15:04:32Z bdrewery $

.PATH: ${.CURDIR}/../../../contrib/ntp/util

PROG=	ntptime
MAN=

CFLAGS+= -I${.CURDIR}/../../../contrib/ntp/include -I${.CURDIR}/../

DPADD=	${LIBNTP}
LDADD=	${LIBNTP}

.include <bsd.prog.mk>
