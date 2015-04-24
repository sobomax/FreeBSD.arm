# $FreeBSD: head/usr.sbin/unbound/checkconf/Makefile 275054 2014-11-25 16:57:27Z bapt $

# Vendor sources and generated files
LDNSDIR= ${.CURDIR}/../../../contrib/ldns
UNBOUNDDIR= ${.CURDIR}/../../../contrib/unbound

.PATH: ${UNBOUNDDIR} ${UNBOUNDDIR}/smallapp ${UNBOUNDDIR}/doc

PROG=	unbound-checkconf
SRCS=	unbound-checkconf.c worker_cb.c
CFLAGS=	-I${UNBOUNDDIR} -I${LDNSDIR}
LIBADD=	unbound pthread
MAN=	unbound-checkconf.8

.include <bsd.prog.mk>
