# $FreeBSD: head/sys/modules/bhnd/siba_bhndb/Makefile 296078 2016-02-26 03:34:32Z adrian $

.PATH:	${.CURDIR}/../../../dev/bhnd/siba

KMOD=	siba_bhndb
SRCS=	siba_bhndb.c

SRCS+=	bhnd_bus_if.h bhndb_if.h
SRCS+=	device_if.h bus_if.h

.include <bsd.kmod.mk>
