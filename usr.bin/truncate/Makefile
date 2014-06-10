# $FreeBSD: head/usr.bin/truncate/Makefile 267265 2014-06-09 10:39:55Z jilles $

.include <src.opts.mk>

PROG=		truncate
DPADD=		${LIBUTIL}
LDADD=		-lutil

.if ${MK_TESTS} != "no"
SUBDIR+= tests
.endif

.include <bsd.prog.mk>
