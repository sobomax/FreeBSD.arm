# $FreeBSD: head/usr.bin/addr2line/Makefile 275373 2014-12-01 17:49:42Z emaste $

.include <src.opts.mk>

ELFTCDIR=	${.CURDIR}/../../contrib/elftoolchain
ADDR2LINEDIR=	${ELFTCDIR}/addr2line

.PATH: ${ADDR2LINEDIR}

PROG=	addr2line

LIBADD=	elftc dwarf elf

CFLAGS+=-I${ELFTCDIR}/libelftc -I${ELFTCDIR}/common

.include <bsd.prog.mk>
