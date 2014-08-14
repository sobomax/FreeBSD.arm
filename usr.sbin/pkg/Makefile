# $FreeBSD: head/usr.sbin/pkg/Makefile 269648 2014-08-06 22:17:26Z bapt $

PROG=	pkg
SRCS=	pkg.c dns_utils.c config.c
MAN=	pkg.7

CFLAGS+=-I${.CURDIR}/../../contrib/libucl/include
.PATH:	${.CURDIR}/../../contrib/libucl/include
DPADD=	${LIBARCHIVE} ${LIBELF} ${LIBFETCH} ${LIBUCL} ${LIBSBUF} ${LIBSSL} \
	${LIBCRYPTO} ${LIBM}
LDADD=	-larchive -lelf -lfetch ${LDUCL} -lsbuf -lssl -lcrypto -lm
USEPRIVATELIB=	ucl

.include <bsd.prog.mk>
