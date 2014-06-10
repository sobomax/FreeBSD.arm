# $FreeBSD: head/gnu/usr.bin/groff/src/devices/grops/Makefile 267233 2014-06-08 17:29:31Z bdrewery $

PROG_CXX=	grops
SRCS=		ps.cpp psrm.cpp
DPADD=		${LIBDRIVER} ${LIBGROFF} ${LIBM}
LDADD=		${LIBDRIVER} ${LIBGROFF} -lm
CLEANFILES=	${MAN}

NO_PIE=	yes

.include <bsd.prog.mk>
