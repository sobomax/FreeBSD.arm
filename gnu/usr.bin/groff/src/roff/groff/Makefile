# $FreeBSD: head/gnu/usr.bin/groff/src/roff/groff/Makefile 270168 2014-08-19 15:04:32Z bdrewery $

PROG_CXX=	groff
SRCS=		groff.cpp pipeline.c
DPADD=		${LIBGROFF} ${LIBM}
LDADD=		${LIBGROFF} -lm
CLEANFILES=	${MAN}

.include <bsd.prog.mk>
