# $FreeBSD: head/usr.sbin/iscsid/Makefile 285086 2015-07-03 10:08:10Z trasz $

PROG=		iscsid
SRCS=		chap.c discovery.c iscsid.c keys.c log.c login.c pdu.c
CFLAGS+=	-I${.CURDIR}
CFLAGS+=	-I${.CURDIR}/../../sys/cam
CFLAGS+=	-I${.CURDIR}/../../sys/dev/iscsi
#CFLAGS+=	-DICL_KERNEL_PROXY
MAN=		iscsid.8

LIBADD=		md util

WARNS=		6

.include <bsd.prog.mk>
