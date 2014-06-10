# $FreeBSD: head/usr.sbin/fifolog/fifolog_writer/Makefile 267233 2014-06-08 17:29:31Z bdrewery $

PROG=	fifolog_writer

CFLAGS+= -I${.CURDIR}/../lib

MAN=

DPADD=	${LIBFIFOLOG} ${LIBUTIL} ${LIBZ}
LDADD=	${LIBFIFOLOG} -lutil -lz

NO_PIE=	yes

regress:
	date | ./${PROG} -z 0 /tmp/fifolog.0
	lptest 65 | ./${PROG} -z 9 /tmp/fifolog.1

.include <bsd.prog.mk>
