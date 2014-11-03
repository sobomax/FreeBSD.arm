# $FreeBSD: head/gnu/usr.bin/groff/src/utils/lookbib/Makefile 270168 2014-08-19 15:04:32Z bdrewery $

PROG_CXX=	lookbib
SRCS=		lookbib.cpp
DPADD=		${LIBBIB} ${LIBGROFF} ${LIBM}
LDADD=		${LIBBIB} ${LIBGROFF} -lm
CLEANFILES=	${MAN}

.include <bsd.prog.mk>
