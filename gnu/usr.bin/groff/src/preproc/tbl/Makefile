# $FreeBSD: head/gnu/usr.bin/groff/src/preproc/tbl/Makefile 270168 2014-08-19 15:04:32Z bdrewery $

PROG_CXX=	tbl
SRCS=		main.cpp table.cpp
DPADD=		${LIBGROFF} ${LIBM}
LDADD=		${LIBGROFF} -lm
CLEANFILES=	${MAN}

.include <bsd.prog.mk>
