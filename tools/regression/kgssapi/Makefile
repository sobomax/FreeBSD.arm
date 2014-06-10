# $FreeBSD: head/tools/regression/kgssapi/Makefile 264400 2014-04-13 05:21:56Z imp $

PROG=	gsstest
MAN=
WARNS?=	2
DPADD=	${LIBGSSAPI} ${LIBGSSAPI_KRB5}
LDADD=	-lgssapi -lgssapi_krb5
DEBUG_FLAGS= -g -O0

.include <bsd.prog.mk>
