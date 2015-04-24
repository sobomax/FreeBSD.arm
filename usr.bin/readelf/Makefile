# $FreeBSD: head/usr.bin/readelf/Makefile 276587 2015-01-02 22:26:54Z emaste $

ELFTCDIR=	${.CURDIR}/../../contrib/elftoolchain
READELFDIR=	${ELFTCDIR}/readelf

.PATH: ${READELFDIR}

PROG=	readelf

LIBADD=	dwarf elftc elf

CFLAGS+=-I${ELFTCDIR}/libelftc -I${ELFTCDIR}/common

.include <bsd.prog.mk>
