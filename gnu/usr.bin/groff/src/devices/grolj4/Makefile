# $FreeBSD: head/gnu/usr.bin/groff/src/devices/grolj4/Makefile 270168 2014-08-19 15:04:32Z bdrewery $

PROG_CXX=	grolj4
MAN=		grolj4.1 lj4_font.5
SRCS=		lj4.cpp
DPADD=		${LIBDRIVER} ${LIBGROFF} ${LIBM}
LDADD=		${LIBDRIVER} ${LIBGROFF} -lm
CLEANFILES=	${MAN}

.include <bsd.prog.mk>
