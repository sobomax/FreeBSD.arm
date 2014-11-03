# $FreeBSD: head/gnu/usr.bin/groff/src/utils/lkbib/Makefile 270168 2014-08-19 15:04:32Z bdrewery $

PROG_CXX=	lkbib
SRCS=		lkbib.cpp
DPADD=		${LIBBIB} ${LIBGROFF} ${LIBM}
LDADD=		${LIBBIB} ${LIBGROFF} -lm
CLEANFILES=	${MAN}

.include <bsd.prog.mk>
