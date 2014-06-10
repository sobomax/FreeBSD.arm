# $FreeBSD: head/sys/boot/pc98/btx/lib/Makefile 267233 2014-06-08 17:29:31Z bdrewery $

PROG=	crt0.o
INTERNALPROG=
MAN=
SRCS=	btxcsu.S btxsys.s btxv86.s
CFLAGS+=-I${.CURDIR}/../../../i386/common
LDFLAGS=-Wl,-r

NO_PIE=	yes

.include <bsd.prog.mk>
