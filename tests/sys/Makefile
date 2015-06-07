# $FreeBSD: head/tests/sys/Makefile 282104 2015-04-27 17:53:09Z ngie $

.include <bsd.own.mk>

TESTSDIR= ${TESTSBASE}/sys

TESTS_SUBDIRS+=		aio
TESTS_SUBDIRS+=		fifo
TESTS_SUBDIRS+=		file
TESTS_SUBDIRS+=		kern
TESTS_SUBDIRS+=		kqueue
TESTS_SUBDIRS+=		mqueue
TESTS_SUBDIRS+=		netinet
TESTS_SUBDIRS+=		opencrypto
TESTS_SUBDIRS+=		vm

# Items not integrated into kyua runs by default
SUBDIR+=		pjdfstest

.include <bsd.test.mk>
