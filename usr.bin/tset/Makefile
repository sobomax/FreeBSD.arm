#	@(#)Makefile	8.1 (Berkeley) 6/9/93
# $FreeBSD: head/usr.bin/tset/Makefile 268804 2014-07-17 18:24:34Z brooks $

PROG=	tset
SRCS=	map.c misc.c set.c term.c tset.c wrterm.c

DPADD=	${LIBTERMCAPW}
LDADD=	-ltermcapw
LINKS=	${BINDIR}/tset ${BINDIR}/reset
MLINKS=	tset.1 reset.1

.include <bsd.prog.mk>
