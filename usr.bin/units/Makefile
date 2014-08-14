# $FreeBSD: head/usr.bin/units/Makefile 268804 2014-07-17 18:24:34Z brooks $

.include <src.opts.mk>

PROG=	units
FILES=	units.lib
FILESDIR=	${SHAREDIR}/misc

LDADD+=-ledit -ltermcapw
DPADD+=${LIBEDIT} ${LIBTERMCAPW}

.if ${MK_TESTS} != "no"
SUBDIR+= tests
.endif

.include <bsd.prog.mk>
