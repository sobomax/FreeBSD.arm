# $FreeBSD: head/tests/Makefile 291089 2015-11-20 03:24:04Z rodrigc $

.include <bsd.own.mk>

SUBDIR+= etc
SUBDIR+= sys
SUBDIR_PARALLEL=

TESTSDIR= ${TESTSBASE}
KYUAFILE= yes

FILES+= README
FILESDIR_README= ${TESTSDIR}

afterinstall: install-tests-local
install-tests-local: .PHONY
	${INSTALL_SYMLINK} ../local/tests ${DESTDIR}${TESTSDIR}/local

.include <bsd.test.mk>
