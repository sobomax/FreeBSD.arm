# $FreeBSD: head/sys/modules/cxgb/iw_cxgb/Makefile 290135 2015-10-29 08:28:39Z hselasky $

CXGB = ${.CURDIR}/../../../dev/cxgb
.PATH: ${CXGB}/ulp/iw_cxgb

KMOD=   iw_cxgb
SRCS=   iw_cxgb.c iw_cxgb_cm.c iw_cxgb_hal.c 
SRCS+=  iw_cxgb_provider.c iw_cxgb_qp.c iw_cxgb_resource.c
SRCS+=  iw_cxgb_ev.c iw_cxgb_mem.c iw_cxgb_dbg.c iw_cxgb_cq.c
SRCS+=  bus_if.h device_if.h opt_sched.h pci_if.h pcib_if.h opt_ktr.h
SRCS+=  opt_inet.h opt_ofed.h vnode_if.h
CFLAGS+= -I${CXGB} -I${.CURDIR}/../../../ofed/include -DLINUX_TYPES_DEFINED
CFLAGS+= -I${.CURDIR}/../../../compat/linuxkpi/common/include

.include <bsd.kmod.mk>
