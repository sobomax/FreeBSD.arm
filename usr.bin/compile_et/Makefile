# $FreeBSD: head/usr.bin/compile_et/Makefile 270168 2014-08-19 15:04:32Z bdrewery $

.PATH: ${.CURDIR}/../../contrib/com_err

LIBVERS=	${.OBJDIR}/../../kerberos5/lib/libvers/libvers.a

PROG=	compile_et
SRCS=	compile_et.c parse.y lex.l
LDADD=	-lroken ${LIBVERS}
DPADD=	${LIBROKEN} ${LIBVERS}
CFLAGS+=-I. -I${.CURDIR}/../../contrib/com_err

WARNS?=	0

.include <bsd.prog.mk>
