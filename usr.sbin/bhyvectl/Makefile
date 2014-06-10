#
# $FreeBSD: head/usr.sbin/bhyvectl/Makefile 264400 2014-04-13 05:21:56Z imp $
#

PROG=	bhyvectl
SRCS=	bhyvectl.c

MAN=

DPADD=	${LIBVMMAPI} ${LIBUTIL}
LDADD=	-lvmmapi -lutil

WARNS?=	3

CFLAGS+= -I${.CURDIR}/../../sys/amd64/vmm

.include <bsd.prog.mk>
