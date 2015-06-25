# $FreeBSD: head/usr.bin/mkimg/Makefile 284658 2015-06-21 02:45:31Z marcel $

.include <src.opts.mk>

PROG=	mkimg
SRCS=	format.c image.c mkimg.c scheme.c
MAN=	mkimg.1

MKIMG_VERSION=20150620
mkimg.o: Makefile

CFLAGS+=-DMKIMG_VERSION=${MKIMG_VERSION}
CFLAGS+=-DSPARSE_WRITE

# List of formats to support
SRCS+= \
	qcow.c \
	raw.c \
	vhd.c \
	vmdk.c

# List of schemes to support
SRCS+=	\
	apm.c \
	bsd.c \
	ebr.c \
	gpt.c \
	mbr.c \
	pc98.c \
	vtoc8.c

BINDIR?=/usr/bin

LIBADD=	util

WARNS?=	6

.if ${MK_TESTS} != "no"
SUBDIR+= tests
.endif

.include <bsd.prog.mk>
