# $FreeBSD: head/kerberos5/usr.bin/kpasswd/Makefile 267233 2014-06-08 17:29:31Z bdrewery $

PROG=	kpasswd
CFLAGS+=-I${KRB5DIR}/lib/roken
DPADD=	${LIBKRB5} ${LIBHX509} ${LIBROKEN} ${LIBVERS} \
	${LIBASN1} ${LIBCRYPTO} ${LIBCRYPT} ${LIBCOM_ERR}
LDADD=	-lkrb5 -lhx509 -lroken ${LIBVERS} \
	-lasn1 -lcrypto -lcrypt -lcom_err

NO_PIE=	yes

.include <bsd.prog.mk>

.PATH: ${KRB5DIR}/kpasswd
