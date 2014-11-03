# $FreeBSD: head/gnu/usr.bin/groff/src/preproc/grn/Makefile 270168 2014-08-19 15:04:32Z bdrewery $

PROG_CXX=	grn
SRCS=		hdb.cpp hpoint.cpp hgraph.cpp main.cpp
DPADD=	 	${LIBGROFF} ${LIBM}
LDADD=	 	${LIBGROFF} -lm
CLEANFILES=	${MAN}

.include <bsd.prog.mk>
