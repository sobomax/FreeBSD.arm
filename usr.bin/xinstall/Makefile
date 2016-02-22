#	@(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD: head/usr.bin/xinstall/Makefile 291026 2015-11-18 21:37:46Z bdrewery $

PROG=		xinstall
PROGNAME=	install
SRCS=		xinstall.c getid.c
MAN=		install.1

.PATH:		${.CURDIR}/../../contrib/mtree
CFLAGS+=	-I${.CURDIR}/../../contrib/mtree
CFLAGS+=	-I${.CURDIR}/../../lib/libnetbsd

LIBADD=	md

.include <bsd.prog.mk>
