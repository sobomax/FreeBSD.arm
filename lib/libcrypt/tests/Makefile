# $FreeBSD: head/lib/libcrypt/tests/Makefile 275024 2014-11-25 11:07:26Z bapt $

# exercise libcrypt

TESTSDIR= ${TESTSBASE}/lib/libcrypt

ATF_TESTS_C= crypt_tests

CFLAGS+= -I${.CURDIR:H}
LIBADD=	crypt

.include <bsd.test.mk>
