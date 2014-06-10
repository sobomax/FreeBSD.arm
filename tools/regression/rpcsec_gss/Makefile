# $FreeBSD: head/tools/regression/rpcsec_gss/Makefile 264400 2014-04-13 05:21:56Z imp $

PROG=	rpctest
MAN=
WARNS?=	6
DPADD=	${LIBRPCSEC_GSS}
LDADD=	-lrpcsec_gss
DEBUG_FLAGS= -g -O0

.include <bsd.prog.mk>
