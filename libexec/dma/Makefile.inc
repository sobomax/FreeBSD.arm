# $FreeBSD: head/libexec/dma/Makefile.inc 289123 2015-10-10 23:31:47Z bapt $

.sinclude "${.CURDIR}/../../Makefile.inc"
DMA_SOURCES=	${.CURDIR}/../../../contrib/dma
.PATH:	${DMA_SOURCES}

CFLAGS=	-I${DMA_SOURCES} \
	-DHAVE_REALLOCF -DHAVE_STRLCPY -DHAVE_GETPROGNAME \
	-DCONF_PATH='"/etc/dma"' \
	-DLIBEXEC_PATH='"/usr/libexec"' -DDMA_VERSION='"v0.10"' \
	-DDMA_ROOT_USER='"mailnull"' \
	-DDMA_GROUP='"mail"'
BINGRP=	mail
