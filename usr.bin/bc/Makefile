#	$FreeBSD: head/usr.bin/bc/Makefile 270650 2014-08-26 09:10:28Z ngie $
#	$OpenBSD: Makefile,v 1.7 2013/09/19 16:12:00 otto Exp $

PROG=		bc
SRCS=		bc.y scan.l tty.c
CFLAGS+=	-I. -I${.CURDIR}

DPADD+=		${LIBEDIT} ${LIBNCURSESW}
LDADD+=		-ledit -lncursesw

NO_WMISSING_VARIABLE_DECLARATIONS=

FILES+=	bc.library
FILESDIR=${SHAREDIR}/misc

.include <bsd.prog.mk>
