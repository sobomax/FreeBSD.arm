# $FreeBSD: head/tools/regression/sockets/so_setfib/Makefile 264400 2014-04-13 05:21:56Z imp $

PROG=	so_setfib
MAN=
WARNS?=	6

.ifdef INET6
CFLAGS+=	-DINET6
.endif
.ifdef INET
CFLAGS+=	-DINET
.endif

.include <bsd.prog.mk>
