# $FreeBSD: head/tests/sys/aio/Makefile 291738 2015-12-04 03:17:47Z bdrewery $

TESTSDIR=	${TESTSBASE}/sys/aio

PLAIN_TESTS_C+=	aio_kqueue_test
PLAIN_TESTS_C+=	lio_kqueue_test
ATF_TESTS_C+=	aio_test

LIBADD.aio_test+=	util

CFLAGS+=	-I${.CURDIR:H:H}

WARNS?=	6

.include <bsd.test.mk>
