# $FreeBSD: head/usr.bin/size/Makefile 275373 2014-12-01 17:49:42Z emaste $

.include <src.opts.mk>

ELFTCDIR=	${.CURDIR}/../../contrib/elftoolchain
SIZEDIR=	${ELFTCDIR}/size

.PATH: ${SIZEDIR}

PROG=	size

LIBADD=	elftc elf

CFLAGS+=-I${ELFTCDIR}/libelftc -I${ELFTCDIR}/common

.include <bsd.prog.mk>
