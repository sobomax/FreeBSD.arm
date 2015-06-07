# $FreeBSD: head/tests/sys/aio/Makefile 282138 2015-04-28 10:59:06Z ngie $

TESTSDIR=	${TESTSBASE}/sys/aio

PLAIN_TESTS_C+=	aio_kqueue_test
PLAIN_TESTS_C+=	lio_kqueue_test
ATF_TESTS_C+=	aio_test

DPADD.aio_test+=	${LIBUTIL}
LDADD.aio_test+=	-lutil

CFLAGS+=	-I${.CURDIR:H:H}

WARNS?=	6

.include <bsd.test.mk>
