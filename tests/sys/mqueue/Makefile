# $FreeBSD: head/tests/sys/mqueue/Makefile 291738 2015-12-04 03:17:47Z bdrewery $

TESTSDIR=	${TESTSBASE}/sys/mqueue

ATF_TESTS_SH=	mqueue_test

BINDIR=		${TESTSDIR}

CFLAGS+=	-I${SRCTOP}/tests

PROGS+=		mqtest1
PROGS+=		mqtest2
#PROGS+=		mqtest3
#PROGS+=		mqtest4
PROGS+=		mqtest5

LIBADD+=	rt

WARNS?=		6

.include <bsd.test.mk>
