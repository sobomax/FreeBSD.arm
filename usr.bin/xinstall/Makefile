#	@(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD: head/usr.bin/xinstall/Makefile 275042 2014-11-25 14:29:10Z bapt $

PROG=		xinstall
PROGNAME=	install
SRCS=		xinstall.c getid.c
MAN=		install.1

.PATH:		${.CURDIR}/../../contrib/mtree
.PATH:		${.CURDIR}/../../lib/libmd
CFLAGS+=	-I${.CURDIR}/../../contrib/mtree
CFLAGS+=	-I${.CURDIR}/../../lib/libnetbsd
CFLAGS+=	-I${.CURDIR}/../../lib/libmd

LIBADD=	md

.include <bsd.prog.mk>
