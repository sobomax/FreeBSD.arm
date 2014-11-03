# $FreeBSD: head/kerberos5/usr.bin/kgetcred/Makefile 270168 2014-08-19 15:04:32Z bdrewery $

PROG=	kgetcred
CFLAGS+=	-I${KRB5DIR}/lib/asn1 \
		-I${KRB5DIR}/lib/roken
DPADD=	${LIBKRB5} ${LIBROKEN} ${LIBASN1} ${LIBCRYPTO} ${LIBCRYPT} ${LIBVERS}
LDADD=	-lkrb5 -lroken -lasn1 -lcrypto -lcrypt ${LIBVERS}

.include <bsd.prog.mk>

.PATH: ${KRB5DIR}/kuser
