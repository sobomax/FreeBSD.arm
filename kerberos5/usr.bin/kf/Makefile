# $FreeBSD: head/kerberos5/usr.bin/kf/Makefile 267233 2014-06-08 17:29:31Z bdrewery $

PROG=	kf
MAN=	kf.1
CFLAGS+=	-I${KRB5DIR}/lib/asn1 \
		-I${KRB5DIR}/lib/roken
DPADD=	${LIBKRB5} ${LIBROKEN} ${LIBASN1} ${LIBCRYPTO} \
	${LIBCRYPT} ${LIBVERS}
LDADD=	-lkrb5 -lroken -lasn1 -lcrypto -lcrypt \
	${LIBVERS}

NO_PIE=	yes

.include <bsd.prog.mk>

.PATH: ${KRB5DIR}/appl/kf
