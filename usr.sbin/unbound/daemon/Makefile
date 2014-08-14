# $FreeBSD: head/usr.sbin/unbound/daemon/Makefile 269648 2014-08-06 22:17:26Z bapt $

# Vendor sources and generated files
LDNSDIR= ${.CURDIR}/../../../contrib/ldns
UNBOUNDDIR= ${.CURDIR}/../../../contrib/unbound

.PATH: ${UNBOUNDDIR} ${UNBOUNDDIR}/daemon ${UNBOUNDDIR}/doc

PROG=	unbound
SRCS=	acl_list.c cachedump.c daemon.c remote.c stats.c unbound.c worker.c
CFLAGS=	-I${UNBOUNDDIR} -I${LDNSDIR}
DPADD=	${LIBUNBOUND} ${LIBLDNS} ${LIBUTIL} ${LIBSSL} ${LIBCRYPTO} ${LIBPTHREAD}
LDADD=	${LDUNBOUND} ${LDLDNS} -lutil -lssl -lcrypto -lpthread
USEPRIVATELIB=	ldns
MAN=	unbound.8 unbound.conf.5

.include <bsd.prog.mk>
