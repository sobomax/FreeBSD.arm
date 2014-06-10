# $FreeBSD: head/usr.bin/units/Makefile 264458 2014-04-14 14:04:59Z eadler $

PROG=	units
FILES=	units.lib
FILESDIR=	${SHAREDIR}/misc

LDADD+=-ledit -ltermcap
DPADD+=${LIBEDIT} ${LIBTERMCAP}

.include <bsd.prog.mk>
