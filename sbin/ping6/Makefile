# $FreeBSD: head/sbin/ping6/Makefile 273295 2014-10-20 00:27:40Z hrs $

PROG=	ping6
MAN=	ping6.8

CFLAGS+=-DIPSEC -DKAME_SCOPEID -DUSE_RFC2292BIS \
	-DHAVE_ARC4RANDOM
WARNS?=	3

BINOWN=	root
BINMODE=4555

LDADD=	-lipsec -lm -lmd
DPADD= ${LIBIPSEC} ${LIBM} ${LIBMD}

.include <bsd.prog.mk>
