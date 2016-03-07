# $FreeBSD: head/usr.sbin/unbound/control/Makefile 295533 2016-02-11 17:33:55Z des $

# Vendor sources and generated files
LDNSDIR= ${.CURDIR}/../../../contrib/ldns
UNBOUNDDIR= ${.CURDIR}/../../../contrib/unbound

.PATH: ${UNBOUNDDIR} ${UNBOUNDDIR}/smallapp ${UNBOUNDDIR}/doc

PROG=	unbound-control
SRCS=	unbound-control.c worker_cb.c
CFLAGS=	-I${UNBOUNDDIR} -I${LDNSDIR}
LIBADD=	unbound crypto ssl pthread
MAN=	unbound-control.8

.include <bsd.prog.mk>
