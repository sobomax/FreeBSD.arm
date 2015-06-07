# $FreeBSD: head/tests/sys/mqueue/Makefile 282137 2015-04-28 10:56:59Z ngie $

TESTSDIR=	${TESTSBASE}/sys/mqueue

ATF_TESTS_SH=	mqueue_test

BINDIR=		${TESTSDIR}

CFLAGS+=	-I${.CURDIR:H:H}

PROGS+=		mqtest1
PROGS+=		mqtest2
PROGS+=		mqtest3
PROGS+=		mqtest4
PROGS+=		mqtest5

LDADD+=		-lrt
DPADD+=		${LIBRT}

WARNS?=		6

.include <bsd.test.mk>
