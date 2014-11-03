# $FreeBSD: head/usr.sbin/gstat/Makefile 270650 2014-08-26 09:10:28Z ngie $

PROG=	gstat
MAN=	gstat.8
DPADD=	${LIBDEVSTAT} ${LIBKVM} ${LIBGEOM} ${LIBBSDXML} ${LIBSBUF} ${LIBEDIT} ${LIBNCURSESW}
LDADD=	-ldevstat -lkvm -lgeom -lbsdxml -lsbuf -ledit -lncursesw

.include <bsd.prog.mk>
