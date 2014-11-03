# $FreeBSD: head/usr.sbin/fifolog/fifolog_writer/Makefile 270168 2014-08-19 15:04:32Z bdrewery $

PROG=	fifolog_writer

CFLAGS+= -I${.CURDIR}/../lib

MAN=

DPADD=	${LIBFIFOLOG} ${LIBUTIL} ${LIBZ}
LDADD=	${LIBFIFOLOG} -lutil -lz

regress:
	date | ./${PROG} -z 0 /tmp/fifolog.0
	lptest 65 | ./${PROG} -z 9 /tmp/fifolog.1

.include <bsd.prog.mk>
