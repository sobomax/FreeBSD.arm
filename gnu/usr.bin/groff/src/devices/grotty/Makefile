# $FreeBSD: head/gnu/usr.bin/groff/src/devices/grotty/Makefile 270168 2014-08-19 15:04:32Z bdrewery $

PROG_CXX=	grotty
SRCS=		tty.cpp
DPADD=		${LIBDRIVER} ${LIBGROFF} ${LIBM}
LDADD=		${LIBDRIVER} ${LIBGROFF} -lm
CLEANFILES=	${MAN}

.include <bsd.prog.mk>
