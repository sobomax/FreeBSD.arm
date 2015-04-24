# $FreeBSD: head/usr.sbin/pkg/Makefile 275054 2014-11-25 16:57:27Z bapt $

PROG=	pkg
SRCS=	pkg.c dns_utils.c config.c
MAN=	pkg.7

CFLAGS+=-I${.CURDIR}/../../contrib/libucl/include
.PATH:	${.CURDIR}/../../contrib/libucl/include
LIBADD=	archive fetch ucl sbuf crypto

.include <bsd.prog.mk>
