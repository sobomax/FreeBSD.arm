# $FreeBSD: head/usr.bin/compile_et/Makefile 267233 2014-06-08 17:29:31Z bdrewery $

.PATH: ${.CURDIR}/../../contrib/com_err

LIBVERS=	${.OBJDIR}/../../kerberos5/lib/libvers/libvers.a

PROG=	compile_et
SRCS=	compile_et.c parse.y lex.l
LDADD=	-lroken ${LIBVERS}
DPADD=	${LIBROKEN} ${LIBVERS}
CFLAGS+=-I. -I${.CURDIR}/../../contrib/com_err

WARNS?=	0

NO_PIE=	yes

.include <bsd.prog.mk>
