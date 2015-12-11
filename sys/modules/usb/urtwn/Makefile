# $FreeBSD: head/sys/modules/usb/urtwn/Makefile 289167 2015-10-12 05:14:49Z adrian $

.PATH: ${.CURDIR}/../../../dev/usb/wlan

KMOD    = if_urtwn
SRCS    = if_urtwn.c if_urtwnreg.h if_urtwnvar.h \
	  bus_if.h device_if.h \
	  opt_bus.h opt_usb.h opt_wlan.h usb_if.h usbdevs.h

.include <bsd.kmod.mk>
