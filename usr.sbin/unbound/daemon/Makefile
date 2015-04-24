# $FreeBSD: head/usr.sbin/unbound/daemon/Makefile 275054 2014-11-25 16:57:27Z bapt $

# Vendor sources and generated files
LDNSDIR= ${.CURDIR}/../../../contrib/ldns
UNBOUNDDIR= ${.CURDIR}/../../../contrib/unbound

.PATH: ${UNBOUNDDIR} ${UNBOUNDDIR}/daemon ${UNBOUNDDIR}/doc

PROG=	unbound
SRCS=	acl_list.c cachedump.c daemon.c remote.c stats.c unbound.c worker.c
CFLAGS=	-I${UNBOUNDDIR} -I${LDNSDIR}
LIBADD=	unbound util ssl crypto pthread
MAN=	unbound.8 unbound.conf.5

.include <bsd.prog.mk>
