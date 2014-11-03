# $FreeBSD: head/gnu/usr.bin/groff/src/utils/hpftodit/Makefile 270168 2014-08-19 15:04:32Z bdrewery $

PROG_CXX=	hpftodit
SRCS=		hpftodit.cpp hpuni.cpp
DPADD=		${LIBGROFF} ${LIBM}
LDADD=		${LIBGROFF} -lm
CLEANFILES=	${MAN}

.include <bsd.prog.mk>
