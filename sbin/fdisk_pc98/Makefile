# $FreeBSD: head/sbin/fdisk_pc98/Makefile 275030 2014-11-25 11:23:12Z bapt $

PROG=	fdisk
SRCS=	fdisk.c geom_pc98_enc.c
WARNS?=	4
MAN=	fdisk.8

.PATH:	${.CURDIR}/../../sys/geom

LIBADD=	geom

.include <bsd.prog.mk>
