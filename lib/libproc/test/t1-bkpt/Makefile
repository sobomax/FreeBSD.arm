# $FreeBSD: head/lib/libproc/test/t1-bkpt/Makefile 264400 2014-04-13 05:21:56Z imp $

PROG=	t1-bkpt

SRCS=	t1-bkpt.c

LDADD=	-lproc -lelf -lrtld_db -lutil
DPADD=	${LIBPROC} ${LIBELF}

MAN=

.include <bsd.prog.mk>
