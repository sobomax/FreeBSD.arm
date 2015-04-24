# $FreeBSD: head/lib/libc/tests/setjmp/Makefile 274075 2014-11-04 00:56:25Z ngie $

TESTSDIR=	${TESTSBASE}/lib/libc/setjmp

NETBSD_ATF_TESTS_C=	t_setjmp
NETBSD_ATF_TESTS_C+=	t_threadjmp

DPADD.t_threadjmp+= ${LIBPTHREAD}
LDADD.t_threadjmp+= -lpthread

WARNS?=	4

.include <bsd.test.mk>
