# $FreeBSD: head/usr.bin/fetch/Makefile 265420 2014-05-06 04:22:01Z imp $

.include <src.opts.mk>

PROG=		fetch
CSTD?=		c99
.if ${MK_OPENSSL} != "no"
DPADD=		${LIBFETCH} ${LIBSSL} ${LIBCRYPTO}
LDADD=		-lfetch -lssl -lcrypto
.else
DPADD=		${LIBFETCH} ${LIBMD}
LDADD=		-lfetch -lmd
.endif

.include <bsd.prog.mk>
