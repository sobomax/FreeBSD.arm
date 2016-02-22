# $FreeBSD: head/lib/librt/Makefile 291439 2015-11-29 06:14:51Z deischen $

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

VERSION_DEF=${.CURDIR}/../libc/Versions.def
SYMBOL_MAPS=${.CURDIR}/Symbol.map

.if ${MK_TESTS} != "no"
SUBDIR+=	tests
.endif

.include <bsd.lib.mk>
