# $FreeBSD: head/lib/libcrypt/tests/Makefile 270144 2014-08-18 17:35:39Z ngie $

# exercise libcrypt

TESTSDIR= ${TESTSBASE}/lib/libcrypt

ATF_TESTS_C= crypt_tests

CFLAGS+= -I${.CURDIR:H}
DPADD+=	${LIBCRYPT}
LDADD+= -lcrypt

.include <bsd.test.mk>
