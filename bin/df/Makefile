#	@(#)Makefile	8.3 (Berkeley) 5/8/95
# $FreeBSD: head/bin/df/Makefile 275028 2014-11-25 11:15:40Z bapt $

MOUNT=	${.CURDIR}/../../sbin/mount
.PATH: ${MOUNT}

PROG=	df
SRCS=	df.c vfslist.c

CFLAGS+= -I${MOUNT}

LIBADD=	xo util

.include <bsd.prog.mk>
