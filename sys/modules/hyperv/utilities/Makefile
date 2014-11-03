# $FreeBSD: head/sys/modules/hyperv/utilities/Makefile 271493 2014-09-13 02:15:31Z delphij $

.PATH:	${.CURDIR}/../../../dev/hyperv/utilities

KMOD=	hv_utils
SRCS=	hv_util.c hv_kvp.c
SRCS+=	bus_if.h device_if.h

CFLAGS+= -I${.CURDIR}/../../../dev/hyperv/include \
	 -I${.CURDIR}/../../../dev/hyperv/vmbus

.include <bsd.kmod.mk>
