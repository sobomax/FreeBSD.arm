# $FreeBSD: head/libexec/rtld-elf/tests/libpythagoras/Makefile 269600 2014-08-05 18:09:39Z ngie $

.include <bsd.own.mk>

LIB=		pythagoras
SHLIB_MAJOR=	0

LIBDIR=		${TESTSBASE}/libexec/rtld-elf
SHLIBDIR=	${TESTSBASE}/libexec/rtld-elf

SRCS=		pythagoras.c

DPADD=		${LIBM}
LDADD=		-lm

.include <bsd.lib.mk>
