# $FreeBSD: head/gnu/usr.bin/groff/src/devices/grodvi/Makefile 270168 2014-08-19 15:04:32Z bdrewery $

PROG_CXX=	grodvi
SRCS=		dvi.cpp
DPADD=		${LIBDRIVER} ${LIBGROFF} ${LIBM}
LDADD=		${LIBDRIVER} ${LIBGROFF} -lm
CLEANFILES=	${MAN}

.include <bsd.prog.mk>
