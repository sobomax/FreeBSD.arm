# $FreeBSD: head/gnu/usr.bin/diff/tests/Makefile 289172 2015-10-12 08:16:03Z ngie $

TESTSRC=	${SRCTOP}/contrib/netbsd-tests/usr.bin/diff

NETBSD_ATF_TESTS_SH=	diff_test
ATF_TESTS_SH_SED_diff_test=	-e 's/t_diff/`basename $$0`/g'

FILESDIR=	${TESTSDIR}
FILES+=		d_mallocv1.in
FILES+=		d_mallocv2.in

.include <netbsd-tests.test.mk>

.include <bsd.test.mk>
