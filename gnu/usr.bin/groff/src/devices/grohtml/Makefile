# $FreeBSD: head/gnu/usr.bin/groff/src/devices/grohtml/Makefile 267233 2014-06-08 17:29:31Z bdrewery $

PROG_CXX=	post-grohtml
SRCS=		post-html.cpp html-table.cpp html-text.cpp output.cpp
DPADD=		${LIBDRIVER} ${LIBGROFF} ${LIBM}
LDADD=		${LIBDRIVER} ${LIBGROFF} -lm
MAN=

NO_PIE=	yes

.include <bsd.prog.mk>
