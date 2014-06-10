# $FreeBSD: head/gnu/usr.bin/groff/src/preproc/refer/Makefile 267233 2014-06-08 17:29:31Z bdrewery $

PROG_CXX=	refer
SRCS=		command.cpp label.cpp ref.cpp refer.cpp token.cpp
CFLAGS+=	-I${DIST_DIR}
DPADD=		${LIBBIB} ${LIBGROFF} ${LIBM}
LDADD=		${LIBBIB} ${LIBGROFF} -lm
CLEANFILES=	label.cpp label_tab.h ${MAN} y.tab.c y.tab.h

NO_PIE=	yes

.include <bsd.prog.mk>
