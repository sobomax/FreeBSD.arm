# $FreeBSD: head/usr.sbin/unbound/control/Makefile 275054 2014-11-25 16:57:27Z bapt $

# Vendor sources and generated files
LDNSDIR= ${.CURDIR}/../../../contrib/ldns
UNBOUNDDIR= ${.CURDIR}/../../../contrib/unbound

.PATH: ${UNBOUNDDIR} ${UNBOUNDDIR}/smallapp ${UNBOUNDDIR}/doc

PROG=	unbound-control
SCRIPTS=	unbound-control-setup.sh
SRCS=	unbound-control.c worker_cb.c
CFLAGS=	-I${UNBOUNDDIR} -I${LDNSDIR}
LIBADD=	unbound crypto ssl pthread
MAN=	unbound-control.8

.include <bsd.prog.mk>
