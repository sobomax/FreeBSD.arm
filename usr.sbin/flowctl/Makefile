#
# $FreeBSD: head/usr.sbin/flowctl/Makefile 265420 2014-05-06 04:22:01Z imp $
#

.include <src.opts.mk>
	
PROG=	flowctl
MAN=	flowctl.8

WARNS?= 2
DPADD=  ${LIBNETGRAPH}
LDADD=  -lnetgraph

.if ${MK_INET6_SUPPORT} != "no"
CFLAGS+= -DINET6
.endif
.if ${MK_INET_SUPPORT} != "no"
CFLAGS+= -DINET
.endif

.include <bsd.prog.mk>
