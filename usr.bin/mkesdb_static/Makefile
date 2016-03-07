# $FreeBSD: head/usr.bin/mkesdb_static/Makefile 295977 2016-02-24 17:18:31Z bdrewery $

.PATH: ${.CURDIR}/../../lib/libc/iconv ${.CURDIR}/../mkesdb

PROG=	mkesdb_static
SRCS=	citrus_bcs.c citrus_db_factory.c citrus_db_hash.c \
	citrus_lookup_factory.c
MAN=
NO_SHARED= yes
NO_WMISSING_VARIABLE_DECLARATIONS=

build-tools: mkesdb_static

.include "${.CURDIR}/../mkesdb/Makefile.inc"
.include <bsd.prog.mk>
