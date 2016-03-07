# $FreeBSD: head/sys/modules/bhnd/bhndb/Makefile 296078 2016-02-26 03:34:32Z adrian $

.PATH: ${.CURDIR}/../../../dev/bhnd/bhndb

KMOD=	bhndb
SRCS=	bhndb.c bhndb_subr.c bhndb_hwdata.c \
	bhndb_bus_if.c bhndb_bus_if.h \
	bhndb_if.c bhndb_if.h

SRCS+=	device_if.h bus_if.h

.include <bsd.kmod.mk>
