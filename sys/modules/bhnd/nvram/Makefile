# $FreeBSD: head/sys/modules/bhnd/nvram/Makefile 296078 2016-02-26 03:34:32Z adrian $

.PATH: ${.CURDIR}/../../../dev/bhnd/nvram

KMOD=	bhnd_nvram
SRCS=	bhnd_nvram_if.c bhnd_nvram_if.h

SRCS+=	device_if.h bus_if.h

.include <bsd.kmod.mk>
