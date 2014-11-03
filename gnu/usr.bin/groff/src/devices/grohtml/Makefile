# $FreeBSD: head/gnu/usr.bin/groff/src/devices/grohtml/Makefile 270168 2014-08-19 15:04:32Z bdrewery $

PROG_CXX=	post-grohtml
SRCS=		post-html.cpp html-table.cpp html-text.cpp output.cpp
DPADD=		${LIBDRIVER} ${LIBGROFF} ${LIBM}
LDADD=		${LIBDRIVER} ${LIBGROFF} -lm
MAN=

.include <bsd.prog.mk>
