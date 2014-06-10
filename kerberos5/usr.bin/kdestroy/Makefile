# $FreeBSD: head/kerberos5/usr.bin/kdestroy/Makefile 267233 2014-06-08 17:29:31Z bdrewery $

PROG=	kdestroy
CFLAGS+=-I${KRB5DIR}/lib/roken
DPADD=	${LIBKAFS5} ${LIBKRB5} ${LIBHEIMNTLM} ${LIBROKEN} ${LIBVERS} \
	${LIBASN1} ${LIBCRYPTO} ${LIBCRYPT}
LDADD=	-lkafs5 -lkrb5 -lheimntlm -lroken ${LIBVERS} \
	-lasn1 -lcrypto -lcrypt
MAN=	kdestroy.1

NO_PIE=	yes

.include <bsd.prog.mk>

.PATH: ${KRB5DIR}/kuser
