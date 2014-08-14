# $FreeBSD: head/usr.bin/ncal/Makefile 268804 2014-07-17 18:24:34Z brooks $

.include <src.opts.mk>

PROG=	ncal

DPADD=	${LIBCALENDAR} ${LIBTERMCAPW}
LDADD=	-lcalendar -ltermcapw

LINKS=	${BINDIR}/ncal ${BINDIR}/cal
MLINKS=	ncal.1 cal.1

.if ${MK_TESTS} != "no"
SUBDIR+= tests
.endif

.include <bsd.prog.mk>
