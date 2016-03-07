# $FreeBSD: head/sys/modules/bhnd/cores/bhnd_chipc/Makefile 296078 2016-02-26 03:34:32Z adrian $

.PATH: ${.CURDIR}/../../../../dev/bhnd/cores/chipc

KMOD=	bhnd_chipc
SRCS=	chipc.c	\
	bhnd_chipc_if.c bhnd_chipc_if.h
SRCS+=	device_if.h bus_if.h bhnd_bus_if.h

.include <bsd.kmod.mk>
