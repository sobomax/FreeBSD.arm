# $FreeBSD: head/lib/libblocksruntime/Makefile 276852 2015-01-08 20:08:00Z dim $

LIB=	BlocksRuntime
SHLIB_MAJOR=0
CFLAGS+=-I${.CURDIR}
WARNS?=	2

.PATH: ${.CURDIR}/../../contrib/compiler-rt/lib/BlocksRuntime

INCS=	Block.h Block_private.h
SRCS=	data.c runtime.c

.include <bsd.lib.mk>
