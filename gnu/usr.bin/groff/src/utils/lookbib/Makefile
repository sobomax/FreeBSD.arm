# $FreeBSD: head/gnu/usr.bin/groff/src/utils/lookbib/Makefile 267233 2014-06-08 17:29:31Z bdrewery $

PROG_CXX=	lookbib
SRCS=		lookbib.cpp
DPADD=		${LIBBIB} ${LIBGROFF} ${LIBM}
LDADD=		${LIBBIB} ${LIBGROFF} -lm
CLEANFILES=	${MAN}

NO_PIE=	yes

.include <bsd.prog.mk>
