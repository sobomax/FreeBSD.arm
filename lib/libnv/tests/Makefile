# $FreeBSD: head/lib/libnv/tests/Makefile 269603 2014-08-05 18:41:27Z ngie $

TESTSDIR=	${TESTSBASE}/lib/libnv

TAP_TESTS_C+=	nvlist_add_test
TAP_TESTS_C+=	nvlist_exists_test
TAP_TESTS_C+=	nvlist_free_test
TAP_TESTS_C+=	nvlist_get_test
TAP_TESTS_C+=	nvlist_move_test
TAP_TESTS_C+=	nvlist_send_recv_test

DPADD+=		${LIBNV}
LDADD+=		-lnv

WARNS?=		6

.include <bsd.test.mk>
