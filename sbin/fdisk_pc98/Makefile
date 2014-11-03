# $FreeBSD: head/sbin/fdisk_pc98/Makefile 272243 2014-09-28 08:23:26Z nyan $

PROG=	fdisk
SRCS=	fdisk.c geom_pc98_enc.c
WARNS?=	4
MAN=	fdisk.8

.PATH:	${.CURDIR}/../../sys/geom

DPADD+=	${LIBGEOM} ${LIBBSDXML} ${LIBSBUF}
LDADD+=	-lgeom -lbsdxml -lsbuf

.include <bsd.prog.mk>
