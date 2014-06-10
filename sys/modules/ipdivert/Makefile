# $FreeBSD: head/sys/modules/ipdivert/Makefile 265420 2014-05-06 04:22:01Z imp $

.include <src.opts.mk>

.PATH: ${.CURDIR}/../../netinet

KMOD=   ipdivert
SRCS=   ip_divert.c opt_inet.h opt_inet6.h opt_sctp.h

.if !defined(KERNBUILDDIR)
.if ${MK_INET_SUPPORT} != "no"
opt_inet.h:
	echo "#define INET 1" > ${.TARGET}
.endif
.if ${MK_INET6_SUPPORT} != "no"
opt_inet6.h:
	echo "#define INET6 1" > ${.TARGET}
.endif
.endif

.include <bsd.kmod.mk>
