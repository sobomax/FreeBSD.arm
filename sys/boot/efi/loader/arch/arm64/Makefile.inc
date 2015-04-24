# $FreeBSD: head/sys/boot/efi/loader/arch/arm64/Makefile.inc 281526 2015-04-14 13:55:01Z andrew $

LOADER_FDT_SUPPORT=yes
SRCS+=	exec.c \
	start.S

.PATH:	${.CURDIR}/../../arm64/libarm64
CFLAGS+=-I${.CURDIR}/../../arm64/libarm64
SRCS+=	cache.c
