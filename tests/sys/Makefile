# $FreeBSD: head/tests/sys/Makefile 275732 2014-12-12 19:56:36Z jmg $

.include <bsd.own.mk>

TESTSDIR= ${TESTSBASE}/sys

TESTS_SUBDIRS+=		kern
TESTS_SUBDIRS+=		netinet
TESTS_SUBDIRS+=		opencrypto

# Items not integrated into kyua runs by default
SUBDIR+=		pjdfstest

.include <bsd.test.mk>
