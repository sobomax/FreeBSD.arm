# $FreeBSD: head/usr.bin/makewhatis/Makefile 291348 2015-11-26 01:14:40Z bdrewery $

PROG=		makewhatis
LIBADD=		z
SCRIPTS=	makewhatis.local.sh
MAN=		makewhatis.1 makewhatis.local.8
SCRIPTSDIR=	${LIBEXECDIR}
LINKS=		${SCRIPTSDIR}/makewhatis.local ${SCRIPTSDIR}/catman.local
MLINKS=		makewhatis.local.8 catman.local.8

.include <bsd.prog.mk>
