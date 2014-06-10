# $FreeBSD: head/gnu/usr.bin/groff/src/utils/lkbib/Makefile 267233 2014-06-08 17:29:31Z bdrewery $

PROG_CXX=	lkbib
SRCS=		lkbib.cpp
DPADD=		${LIBBIB} ${LIBGROFF} ${LIBM}
LDADD=		${LIBBIB} ${LIBGROFF} -lm
CLEANFILES=	${MAN}

NO_PIE=	yes

.include <bsd.prog.mk>
