# $FreeBSD: head/usr.bin/makewhatis/Makefile 275042 2014-11-25 14:29:10Z bapt $

PROG=		makewhatis
LIBADD=		z
SCRIPTS=	makewhatis.local.sh
MAN=		makewhatis.1 makewhatis.local.8
SCRIPTSDIR=	/usr/libexec
LINKS=		${SCRIPTSDIR}/makewhatis.local ${SCRIPTSDIR}/catman.local
MLINKS=		makewhatis.local.8 catman.local.8

.include <bsd.prog.mk>
