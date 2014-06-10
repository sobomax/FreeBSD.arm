# $FreeBSD: head/usr.sbin/lpr/Makefile.inc 265420 2014-05-06 04:22:01Z imp $

.include <src.opts.mk>

.if ${MK_INET6_SUPPORT} != "no"
CFLAGS+= -DINET6
.endif

LIBLPR=	${.OBJDIR}/../common_source/liblpr.a

.include "../Makefile.inc"
