# $FreeBSD: head/tools/tools/bootparttest/Makefile 264400 2014-04-13 05:21:56Z imp $

.PATH:		${.CURDIR}/../../../sys/boot/common

BINDIR?=	/usr/bin

PROG=		bootparttest
MAN=

SRCS=		bootparttest.c crc32.c malloc.c part.c

CFLAGS=		-I${.CURDIR}/../../../sys/boot/common -I. \
		-DLOADER_GPT_SUPPORT -DLOADER_MBR_SUPPORT -DPART_DEBUG

DPADD+=		${LIBGEOM} ${LIBUTIL}
LDADD+=		${LIBGEOM} ${LIBUTIL}
LDFLAGS+=	-lgeom -lutil

.include <bsd.prog.mk>
