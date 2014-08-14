# $FreeBSD: head/usr.sbin/pppctl/Makefile 268804 2014-07-17 18:24:34Z brooks $

PROG=	pppctl
MAN=	pppctl.8

WARNS?=	2

DPADD=	${LIBPTHREAD} ${LIBEDIT} ${LIBTERMCAPW}
LDADD=	-lpthread -ledit -ltermcapw

.include <bsd.prog.mk>
