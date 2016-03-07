#
# $FreeBSD: head/usr.sbin/bhyvectl/Makefile 293745 2016-01-12 10:16:15Z brueffer $
#

PROG=	bhyvectl
SRCS=	bhyvectl.c

MAN=	bhyvectl.8

LIBADD=	vmmapi util

WARNS?=	3

CFLAGS+= -I${.CURDIR}/../../sys/amd64/vmm

.include <bsd.prog.mk>
