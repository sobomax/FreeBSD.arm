# $FreeBSD: head/tools/tools/cxgbetool/Makefile 276598 2015-01-03 00:26:21Z np $

PROG=	cxgbetool
SRCS=	cxgbetool.c
MAN=	cxgbetool.8
CFLAGS+= -I${.CURDIR}/../../../sys/dev/cxgbe -I${.CURDIR}/../../../sys -I.
BINDIR?= /usr/sbin

.include <bsd.prog.mk>
