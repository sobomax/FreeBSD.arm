#        @(#)Makefile	8.1 (Berkeley) 5/31/93
# $FreeBSD: head/bin/test/Makefile 265420 2014-05-06 04:22:01Z imp $

.include <src.opts.mk>

PROG=	test
LINKS=	${BINDIR}/test ${BINDIR}/[
MLINKS=	test.1 [.1

.if ${MK_TESTS} != "no"
SUBDIR+=    tests
.endif

.include <bsd.prog.mk>
