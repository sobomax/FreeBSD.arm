#	@(#)Makefile	8.1 (Berkeley) 6/5/93
# $FreeBSD: head/sbin/ping/Makefile 275030 2014-11-25 11:23:12Z bapt $

.include <src.opts.mk>

PROG=	ping
MAN=	ping.8
BINOWN=	root
BINMODE=4555
WARNS?=	3
LIBADD=	m

.if ${MK_CASPER} != "no" && !defined(RESCUE)
LIBADD+=	capsicum
CFLAGS+=-DHAVE_LIBCAPSICUM
.endif

.if !defined(RELEASE_CRUNCH)
CFLAGS+=-DIPSEC
LIBADD+=	ipsec
.endif

.include <bsd.prog.mk>
