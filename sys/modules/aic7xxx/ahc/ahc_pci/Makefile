
# $FreeBSD: head/sys/modules/aic7xxx/ahc/ahc_pci/Makefile 276606 2015-01-03 03:35:18Z imp $

.PATH:	${.CURDIR}/../../../../dev/aic7xxx
KMOD=	ahc_pci

SRCS=	ahc_pci.c aic7xxx_pci.c
SRCS+=	device_if.h bus_if.h pci_if.h
SRCS+=	opt_scsi.h opt_cam.h opt_aic7xxx.h

CFLAGS+= -I${.CURDIR}/../../../../dev/aic7xxx -I..

.include <bsd.kmod.mk>

CWARNFLAGS.ahc_pci.c=	${NO_WCONSTANT_CONVERSION}
