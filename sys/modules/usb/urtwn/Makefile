# $FreeBSD: head/sys/modules/usb/urtwn/Makefile 295871 2016-02-22 00:48:53Z avos $

.PATH: ${.CURDIR}/../../../dev/usb/wlan

.include <src.opts.mk>

KMOD    = if_urtwn
SRCS    = if_urtwn.c if_urtwnreg.h if_urtwnvar.h \
	  bus_if.h device_if.h \
	  opt_bus.h opt_urtwn.h opt_usb.h opt_wlan.h usb_if.h usbdevs.h

.if ${MK_SOURCELESS_UCODE} == "no"
opt_urtwn.h:
	@echo "#define URTWN_WITHOUT_UCODE 1" > ${.TARGET}
.endif

.include <bsd.kmod.mk>
