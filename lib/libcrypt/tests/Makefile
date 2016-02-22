# $FreeBSD: head/lib/libcrypt/tests/Makefile 291616 2015-12-01 21:25:18Z rodrigc $

ATF_TESTS_C+= crypt_tests

NETBSD_ATF_TESTS_C+= crypt_test

CFLAGS+= -I${.CURDIR:H}
LIBADD=	crypt

.include <netbsd-tests.test.mk>

.include <bsd.test.mk>
