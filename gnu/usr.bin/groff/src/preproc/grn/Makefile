# $FreeBSD: head/gnu/usr.bin/groff/src/preproc/grn/Makefile 267233 2014-06-08 17:29:31Z bdrewery $

PROG_CXX=	grn
SRCS=		hdb.cpp hpoint.cpp hgraph.cpp main.cpp
DPADD=	 	${LIBGROFF} ${LIBM}
LDADD=	 	${LIBGROFF} -lm
CLEANFILES=	${MAN}

NO_PIE=	yes

.include <bsd.prog.mk>
