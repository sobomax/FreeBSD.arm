# $FreeBSD: head/sys/modules/lmc/Makefile 269540 2014-08-04 22:37:02Z imp $

KMOD  = if_lmc
.PATH: ${.CURDIR}/../../dev/lmc

SRCS  = if_lmc.c if_lmc.h
SRCS += device_if.h bus_if.h pci_if.h
SRCS += opt_inet.h opt_inet6.h
SRCS += opt_netgraph.h
SRCS += opt_global.h
SRCS += opt_bpf.h

opt_netgraph.h:
	echo "#define NETGRAPH 1" > ${.TARGET}
opt_global.h:
	echo "#define ALTQ 1"     > ${.TARGET}

.include <bsd.kmod.mk>
