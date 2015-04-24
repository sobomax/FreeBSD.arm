# $FreeBSD: head/sys/modules/ipoib/Makefile 278913 2015-02-17 19:27:14Z glebius $
.PATH:  ${.CURDIR}/../../ofed/drivers/infiniband/ulp/ipoib
.PATH:  ${.CURDIR}/../../ofed/include/linux

KMOD=	ipoib
SRCS=	device_if.h bus_if.h vnode_if.h pci_if.h \
	opt_inet.h opt_inet6.h opt_ofed.h \
	ipoib_cm.c ipoib_ib.c ipoib_main.c \
	ipoib_multicast.c ipoib_verbs.c

CFLAGS+= -I${.CURDIR}/../../ofed/drivers/infiniband/ulp/ipoib
CFLAGS+= -I${.CURDIR}/../ibcore
CFLAGS+= -I${.CURDIR}/../../ofed/include/
CFLAGS+= -DINET6 -DINET

.include <bsd.kmod.mk>

CFLAGS+= -Wno-cast-qual -Wno-pointer-arith
