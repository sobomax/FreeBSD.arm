# $FreeBSD: head/usr.sbin/unbound/anchor/Makefile 269648 2014-08-06 22:17:26Z bapt $

# Vendor sources and generated files
LDNSDIR= ${.CURDIR}/../../../contrib/ldns
UNBOUNDDIR= ${.CURDIR}/../../../contrib/unbound
EXPATDIR= ${.CURDIR}/../../../contrib/expat

.PATH: ${UNBOUNDDIR} ${UNBOUNDDIR}/smallapp ${UNBOUNDDIR}/doc

PROG=	unbound-anchor
SRCS=	unbound-anchor.c
CFLAGS=	-I${UNBOUNDDIR} -I${LDNSDIR} -I${EXPATDIR}/lib
DPADD=	${LIBUNBOUND} ${LIBLDNS} ${LIBUTIL} ${LIBBSDXML} ${LIBSSL} ${LIBCRYPTO} ${LIBPTHREAD}
LDADD=	${LDUNBOUND} ${LDLDNS} -lutil -lbsdxml -lssl -lcrypto -lpthread
USEPRIVATELIB=	ldns
MAN=	unbound-anchor.8

.include <bsd.prog.mk>
