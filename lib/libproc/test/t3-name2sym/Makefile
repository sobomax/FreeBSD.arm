# $FreeBSD: head/lib/libproc/test/t3-name2sym/Makefile 264400 2014-04-13 05:21:56Z imp $

PROG=	t3-name2sym

SRCS=	t3-name2sym.c

LDADD=	-lproc -lelf -lrtld_db -lutil
DPADD=	${LIBPROC} ${LIBELF}

MAN=

.include <bsd.prog.mk>
