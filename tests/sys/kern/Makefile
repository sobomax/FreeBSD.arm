# $FreeBSD: head/tests/sys/kern/Makefile 283282 2015-05-22 11:04:54Z jhb $

TESTSDIR=	${TESTSBASE}/sys/kern

ATF_TESTS_C+=	kern_descrip_test
ATF_TESTS_C+=	ptrace_test
ATF_TESTS_C+=	unix_seqpacket_test
TEST_METADATA.unix_seqpacket_test+=	timeout="15"

LDADD.unix_seqpacket_test+=		-lpthread

WARNS?=	5

TESTS_SUBDIRS+=	execve

.include <bsd.test.mk>
