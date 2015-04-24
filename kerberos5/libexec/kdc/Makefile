# $FreeBSD: head/kerberos5/libexec/kdc/Makefile 275022 2014-11-25 09:57:42Z bapt $

PROG=	kdc
MAN=	kdc.8

SRCS=	config.c \
	connect.c \
	announce.c \
	main.c

CFLAGS+=-I${KRB5DIR}/lib/krb5 -I${KRB5DIR}/lib/asn1 -I${KRB5DIR}/lib/roken \
	-I${KRB5DIR}/kdc ${LDAPCFLAGS}
LIBADD=	kdc hdb krb5 roken crypt vers

.include <bsd.prog.mk>

.PATH: ${KRB5DIR}/kdc
