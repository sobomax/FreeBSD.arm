# $Id: Makefile,v 1.7 2003/09/07 18:15:55 max Exp $
# $FreeBSD: head/usr.bin/bluetooth/rfcomm_sppd/Makefile 273548 2014-10-23 15:16:40Z emax $

PROG=		rfcomm_sppd
SRCS=		rfcomm_sppd.c rfcomm_sdp.c
WARNS?=		2

DPADD=		${LIBBLUETOOTH} ${LIBSDP}
LDADD=		-lbluetooth -lsdp -lutil

.include <bsd.prog.mk>
