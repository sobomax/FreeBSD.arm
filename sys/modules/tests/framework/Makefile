#
# $FreeBSD: head/sys/modules/tests/framework/Makefile 290996 2015-11-17 18:28:56Z uqs $
#

.PATH: ${.CURDIR}/../../../tests/framework

KMOD=	kern_testfrwk
SRCS=	kern_testfrwk.c
SRCS+=	bus_if.h device_if.h

#
# Enable full debugging
#
#CFLAGS += -g

.include <bsd.kmod.mk>
