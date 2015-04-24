#
# $FreeBSD: head/usr.sbin/bhyvectl/Makefile 281339 2015-04-09 21:39:58Z bapt $
#

PROG=	bhyvectl
SRCS=	bhyvectl.c

MAN=

LIBADD=	vmmapi

WARNS?=	3

CFLAGS+= -I${.CURDIR}/../../sys/amd64/vmm

.include <bsd.prog.mk>
