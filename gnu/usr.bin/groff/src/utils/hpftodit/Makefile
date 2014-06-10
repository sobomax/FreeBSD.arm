# $FreeBSD: head/gnu/usr.bin/groff/src/utils/hpftodit/Makefile 267233 2014-06-08 17:29:31Z bdrewery $

PROG_CXX=	hpftodit
SRCS=		hpftodit.cpp hpuni.cpp
DPADD=		${LIBGROFF} ${LIBM}
LDADD=		${LIBGROFF} -lm
CLEANFILES=	${MAN}

NO_PIE=	yes

.include <bsd.prog.mk>
