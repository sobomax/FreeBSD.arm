# $FreeBSD: head/usr.sbin/jls/Makefile 265420 2014-05-06 04:22:01Z imp $

.include <src.opts.mk>

PROG=	jls
MAN=	jls.8
DPADD=	${LIBJAIL}
LDADD=	-ljail

.if ${MK_INET6_SUPPORT} != "no"
CFLAGS+= -DINET6
.endif
.if ${MK_INET_SUPPORT} != "no"
CFLAGS+= -DINET
.endif

.include <bsd.prog.mk>
