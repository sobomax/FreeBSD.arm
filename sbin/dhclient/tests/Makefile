# $FreeBSD: head/sbin/dhclient/tests/Makefile 270118 2014-08-18 01:21:41Z ngie $

TESTSDIR=	${TESTSBASE}/sbin/dhclient

.PATH:	${.CURDIR}/..

PLAIN_TESTS_C=				option-domain-search_test
SRCS.option-domain-search_test=		alloc.c convert.c hash.c options.c \
					tables.c fake.c option-domain-search.c
CFLAGS.option-domain-search_test+=	-I${.CURDIR}/..
DPADD.option-domain-search_test=	${LIBUTIL}
LDADD.option-domain-search_test=	-lutil

WARNS?=	2

.include <bsd.test.mk>
