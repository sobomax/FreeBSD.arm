# $FreeBSD: head/tests/Makefile 283845 2015-05-31 22:24:29Z ngie $

.include <bsd.own.mk>

SUBDIR+= etc
SUBDIR+= sys

TESTSDIR= ${TESTSBASE}
KYUAFILE= yes

afterinstall: install-tests-local
install-tests-local: .PHONY
	${INSTALL_SYMLINK} ../local/tests ${DESTDIR}${TESTSDIR}/local

.include <bsd.test.mk>
