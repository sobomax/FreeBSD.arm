# $FreeBSD: head/sys/modules/bhnd/cores/bhnd_pci/Makefile 296078 2016-02-26 03:34:32Z adrian $

.PATH: ${.CURDIR}/../../../../dev/bhnd/cores/pci

KMOD=	bhnd_pci
SRCS=	bhnd_pci.c \
	mdio_pcie.c
SRCS+=	device_if.h bus_if.h bhnd_bus_if.h \
	mdio_if.h

.include <bsd.kmod.mk>
