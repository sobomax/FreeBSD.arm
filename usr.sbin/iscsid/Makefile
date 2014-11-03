# $FreeBSD: head/usr.sbin/iscsid/Makefile 273459 2014-10-22 08:59:23Z trasz $

PROG=		iscsid
SRCS=		chap.c discovery.c iscsid.c keys.c log.c login.c pdu.c
CFLAGS+=	-I${.CURDIR}
CFLAGS+=	-I${.CURDIR}/../../sys/cam
CFLAGS+=	-I${.CURDIR}/../../sys/dev/iscsi
#CFLAGS+=	-DICL_KERNEL_PROXY
MAN=		iscsid.8

DPADD=		${LIBCRYPTO} ${LIBSSL} ${LIBUTIL}
LDADD=		-lcrypto -lssl -lutil

WARNS=		6

.include <bsd.prog.mk>
