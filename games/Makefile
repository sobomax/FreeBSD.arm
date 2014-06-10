# $FreeBSD: head/games/Makefile 265420 2014-05-06 04:22:01Z imp $

.include <src.opts.mk>

SUBDIR= \
	bcd \
	caesar \
	factor \
	fortune \
	grdc \
	morse \
	number \
	pom \
	ppt \
	primes \
	random \
	${_tests}

.if ${MK_TESTS} != "no"
_tests=	tests
.endif

.include <bsd.subdir.mk>
