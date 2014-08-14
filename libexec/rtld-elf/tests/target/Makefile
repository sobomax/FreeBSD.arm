# $FreeBSD: head/libexec/rtld-elf/tests/target/Makefile 269506 2014-08-04 05:50:21Z ngie $

.include <bsd.own.mk>

PROG=		target
BINDIR=		${TESTSBASE}/libexec/rtld-elf

CFLAGS+=	-I${.CURDIR}/../libpythagoras

LDFLAGS+=	-L${.OBJDIR}/../libpythagoras
LDADD=		-lpythagoras

MAN=

.include <bsd.prog.mk>
