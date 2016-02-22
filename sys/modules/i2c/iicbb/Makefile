# $FreeBSD: head/sys/modules/i2c/iicbb/Makefile 289710 2015-10-21 18:30:42Z emaste $

.PATH:		${.CURDIR}/../../../dev/iicbus
.if ${MACHINE_CPUARCH} == "aarch64" || ${MACHINE_CPUARCH} == "arm" || \
    ${MACHINE_CPUARCH} == "powerpc"
ofw_bus_if=	ofw_bus_if.h
.endif
KMOD		= iicbb
SRCS		= device_if.h bus_if.h iicbus_if.h \
		  iicbb_if.h iicbb_if.c iicbb.c ${ofw_bus_if} opt_platform.h

.include <bsd.kmod.mk>
