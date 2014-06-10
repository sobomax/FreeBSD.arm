# $FreeBSD: head/usr.bin/mkimg/Makefile 266176 2014-05-15 19:19:57Z marcel $

PROG=	mkimg
SRCS=	format.c image.c mkimg.c scheme.c
MAN=	mkimg.1

CFLAGS+=-DSPARSE_WRITE

# List of formats to support
SRCS+= \
	raw.c \
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

DPADD=	${LIBUTIL}
LDADD=	-lutil

WARNS?=	6

.include <bsd.prog.mk>
