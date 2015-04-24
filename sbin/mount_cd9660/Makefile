#	@(#)Makefile	8.3 (Berkeley) 3/27/94
# $FreeBSD: head/sbin/mount_cd9660/Makefile 275030 2014-11-25 11:23:12Z bapt $

PROG=	mount_cd9660
SRCS=	mount_cd9660.c getmntopts.c
MAN=	mount_cd9660.8
LIBADD=	kiconv

MOUNT=	${.CURDIR}/../mount
CFLAGS+= -I${MOUNT}

# Needs to be dynamically linked for optional dlopen() access to
# userland libiconv
NO_SHARED?=	NO

.PATH:	${MOUNT}

.include <bsd.prog.mk>
