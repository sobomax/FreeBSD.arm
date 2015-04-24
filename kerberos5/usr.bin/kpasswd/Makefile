# $FreeBSD: head/kerberos5/usr.bin/kpasswd/Makefile 275022 2014-11-25 09:57:42Z bapt $

PROG=	kpasswd
CFLAGS+=-I${KRB5DIR}/lib/roken
LIBADD=	hdb krb5 roken vers crypto

.include <bsd.prog.mk>

.PATH: ${KRB5DIR}/kpasswd
