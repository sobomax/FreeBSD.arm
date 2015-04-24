#	@(#)Makefile	8.1 (Berkeley) 6/5/93
# $FreeBSD: head/sbin/swapon/Makefile 275030 2014-11-25 11:23:12Z bapt $

PROG=	swapon
MAN=	swapon.8
LINKS=	${BINDIR}/swapon ${BINDIR}/swapoff
LINKS+=	${BINDIR}/swapon ${BINDIR}/swapctl
MLINKS=	swapon.8 swapoff.8
MLINKS+=swapon.8 swapctl.8

LIBADD=	util

.include <bsd.prog.mk>
