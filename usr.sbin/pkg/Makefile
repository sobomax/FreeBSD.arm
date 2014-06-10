# $FreeBSD: head/usr.sbin/pkg/Makefile 263686 2014-03-24 13:13:52Z bdrewery $

PROG=	pkg
SRCS=	pkg.c dns_utils.c config.c
MAN=	pkg.7

CFLAGS+=-I${.CURDIR}/../../contrib/libucl/include
.PATH:	${.CURDIR}/../../contrib/libucl/include
DPADD=	${LIBARCHIVE} ${LIBELF} ${LIBFETCH} ${LIBUCL} ${LIBSBUF} ${LIBSSL} \
	${LIBCRYPTO} ${LIBM}
LDADD=	-larchive -lelf -lfetch -lucl -lsbuf -lssl -lcrypto -lm
USEPRIVATELIB=	ucl

.include <bsd.prog.mk>
