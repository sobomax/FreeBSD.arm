# $FreeBSD: head/usr.sbin/fifolog/fifolog_reader/Makefile 270168 2014-08-19 15:04:32Z bdrewery $

PROG=	fifolog_reader

CFLAGS+= -I${.CURDIR}/../lib

MAN=

DPADD=	${LIBFIFOLOG} ${LIBUTIL} ${LIBZ}
LDADD=	${LIBFIFOLOG} -lutil -lz

regress:
	./${PROG} /tmp/fifolog.0
	./${PROG} -t /tmp/fifolog.0
	./${PROG} /tmp/fifolog.1
	./${PROG} -B "00:00" /tmp/fifolog.1
	./${PROG} -T "%y%m%d-%H%M%S" /tmp/fifolog.1
	./${PROG} -T "" /tmp/fifolog.1

.include <bsd.prog.mk>
