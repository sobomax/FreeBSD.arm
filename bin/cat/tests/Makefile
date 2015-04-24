# $FreeBSD: head/bin/cat/tests/Makefile 276723 2015-01-05 20:38:47Z ngie $

OBJTOP=		${.OBJDIR}/../../..
SRCTOP=		${.CURDIR}/../../..
TESTSRC=	${SRCTOP}/contrib/netbsd-tests/bin/cat

TESTSDIR=	${TESTSBASE}/bin/cat

NETBSD_ATF_TESTS_SH=		cat_test

FILESDIR=	${TESTSDIR}

FILES=		d_align.in
FILES+=		d_align.out

.include <netbsd-tests.test.mk>

.include <bsd.test.mk>
