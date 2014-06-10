# Common defines for all of /sys/boot/amd64/
#
# $FreeBSD: head/sys/boot/amd64/Makefile.inc 265057 2014-04-28 18:25:21Z nwhitehorn $

BINDIR?=	/boot

# See conf/kern.mk for the correct set of these
CFLAGS+=	-ffreestanding
CFLAGS+=	-mno-mmx -mno-sse -mno-aes -mno-avx -msoft-float
LDFLAGS+=	-nostdlib

.include "../Makefile.inc"
