# $FreeBSD: head/usr.bin/mkcsmapper_static/Makefile 264400 2014-04-13 05:21:56Z imp $

.PATH: ${.CURDIR}/../../lib/libc/iconv ${.CURDIR}/../mkcsmapper

PROG=	mkcsmapper_static
SRCS=	citrus_bcs.c citrus_db_factory.c citrus_db_hash.c \
	citrus_lookup_factory.c citrus_pivot_factory.c
MAN=
NO_SHARED= yes

build-tools: mkcsmapper_static

.include "${.CURDIR}/../mkcsmapper/Makefile.inc"
.include <bsd.prog.mk>
