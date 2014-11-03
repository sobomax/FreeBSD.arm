# $FreeBSD: head/sbin/mksnap_ffs/Makefile 270289 2014-08-21 19:04:15Z neel $

.PATH:	${.CURDIR}/../mount

PROG=	mksnap_ffs
SRCS=	mksnap_ffs.c getmntopts.c
MAN=	mksnap_ffs.8

WARNS?=	2
CFLAGS+=-I${.CURDIR}/../mount

.if defined(NOSUID)
BINMODE=554
.else
BINMODE=4554
BINOWN=	root
.endif
BINGRP=	operator

.include <bsd.prog.mk>
