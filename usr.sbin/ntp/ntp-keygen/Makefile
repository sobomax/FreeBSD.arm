# $FreeBSD: head/usr.sbin/ntp/ntp-keygen/Makefile 267233 2014-06-08 17:29:31Z bdrewery $

MAN=

.include <src.opts.mk>

.PATH: ${.CURDIR}/../../../contrib/ntp/util \
       ${.CURDIR}/../../../contrib/ntp/ntpd

PROG=	ntp-keygen
SRCS=	ntp-keygen.c ntp-keygen-opts.c

CFLAGS+= -I${.CURDIR}/../../../contrib/ntp/include -I${.CURDIR}/../ \
	-I${.CURDIR}/../../../contrib/ntp/libopts

DPADD=	${LIBNTP} ${LIBOPTS}
LDADD=	${LIBNTP} ${LIBOPTS}

.if ${MK_OPENSSL} != "no"
DPADD+=	${LIBMD} ${LIBCRYPTO}
LDADD+=	-lmd -lcrypto
.endif

NO_PIE=	yes

.include <bsd.prog.mk>
