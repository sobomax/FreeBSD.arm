# $FreeBSD: head/sys/modules/pflog/Makefile 269540 2014-08-04 22:37:02Z imp $

.PATH: ${.CURDIR}/../../netpfil/pf

KMOD=	pflog
SRCS=	if_pflog.c \
	opt_pf.h opt_inet.h opt_inet6.h opt_bpf.h
SRCS+=	bus_if.h device_if.h

.if defined(KERNBUILDDIR)
MKDEP+=		-include ${KERNBUILDDIR}/opt_global.h
.else
.if defined(VIMAGE)
opt_global.h:
	echo "#define VIMAGE 1" >> ${.TARGET}
CFLAGS+=	-include opt_global.h
MKDEP+=		-include opt_global.h
.endif
.endif

.include <bsd.kmod.mk>
