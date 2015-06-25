# $FreeBSD: head/usr.bin/mkesdb_static/Makefile 284374 2015-06-14 03:34:09Z sjg $

.PATH: ${.CURDIR}/../../lib/libc/iconv ${.CURDIR}/../mkesdb

PROG=	mkesdb_static
SRCS=	citrus_bcs.c citrus_db_factory.c citrus_db_hash.c \
	citrus_lookup_factory.c
MAN=
NO_SHARED= yes
.if ${MACHINE} == "host"
NO_WARNS= yes
.endif

build-tools: mkesdb_static

.include "${.CURDIR}/../mkesdb/Makefile.inc"
.include <bsd.prog.mk>
