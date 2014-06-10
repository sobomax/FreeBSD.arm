# $FreeBSD: head/tools/tools/ncpus/Makefile 264400 2014-04-13 05:21:56Z imp $

PROG=	ncpus
MAN=
SRCS=	ncpus.c acpi.c
.if ${MACHINE_ARCH} == "amd64" || ${MACHINE_ARCH} == "i386"
SRCS+=	biosmptable.c
.endif
BINDIR=	/usr/local/bin
WARNS?=	6

DPADD=	${LIBDEVINFO}
LDADD=	-ldevinfo

.include <bsd.prog.mk>
