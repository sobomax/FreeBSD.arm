# $FreeBSD: head/gnu/usr.bin/cc/c++filt/Makefile 264400 2014-04-13 05:21:56Z imp $

MAN=
.include <bsd.own.mk>

.include "../Makefile.inc"
.include "../Makefile.fe"

.PATH: ${GCCLIB}/libiberty

PROG=	c++filt
SRCS=	cp-demangle.c

CFLAGS+= -DSTANDALONE_DEMANGLER -DVERSION=\"$(GCC_VERSION)\"

DPADD=	${LIBIBERTY}
LDADD=	${LIBIBERTY}

.include <bsd.prog.mk>
