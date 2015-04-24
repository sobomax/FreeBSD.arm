# $FreeBSD: head/lib/librt/Makefile 275024 2014-11-25 11:07:26Z bapt $

.include <src.opts.mk>

LIB=rt
SHLIB_MAJOR= 1
CFLAGS+=-I${.CURDIR}/../libc/include -I${.CURDIR}
.ifndef NO_THREAD_STACK_UNWIND
CFLAGS+=-fexceptions
.endif
CFLAGS+=-Winline -Wall
LIBADD=	pthread

WARNS?=	2

SRCS+= aio.c mq.c sigev_thread.c timer.c

PRECIOUSLIB=

VERSION_MAP=	${.CURDIR}/Version.map

.include <bsd.arch.inc.mk>

.include <bsd.lib.mk>
