# $FreeBSD: head/sys/modules/ahci/Makefile 271146 2014-09-04 22:22:53Z imp $

.PATH: ${.CURDIR}/../../dev/ahci

KMOD=	ahci
SRCS=	ahci.c ahci_pci.c ahciem.c ahci.h device_if.h bus_if.h pci_if.h opt_cam.h

.include <bsd.kmod.mk>
