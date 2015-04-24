#	@(#)Makefile	8.1 (Berkeley) 6/4/93
# $FreeBSD: head/libexec/rlogind/Makefile 275077 2014-11-25 21:18:18Z bapt $

.include <src.opts.mk>

PROG=	rlogind
MAN=	rlogind.8
LIBADD=	util
WARNS?=	2

.if ${MK_INET6_SUPPORT} != "no"
CFLAGS+= -DINET6
.endif

.include <bsd.prog.mk>
