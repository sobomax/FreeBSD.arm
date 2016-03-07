# $FreeBSD: head/usr.sbin/jls/Makefile 292580 2015-12-22 00:58:35Z rodrigc $

.include <src.opts.mk>

PROG=	jls
MAN=	jls.8
LIBADD=	jail xo

.if ${MK_INET6_SUPPORT} != "no"
CFLAGS+= -DINET6
.endif
.if ${MK_INET_SUPPORT} != "no"
CFLAGS+= -DINET
.endif

.include <bsd.prog.mk>
