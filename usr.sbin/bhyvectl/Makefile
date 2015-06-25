#
# $FreeBSD: head/usr.sbin/bhyvectl/Makefile 284539 2015-06-18 06:00:17Z neel $
#

PROG=	bhyvectl
SRCS=	bhyvectl.c

MAN=

LIBADD=	vmmapi util

WARNS?=	3

CFLAGS+= -I${.CURDIR}/../../sys/amd64/vmm

.include <bsd.prog.mk>
