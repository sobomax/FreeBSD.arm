#	$NetBSD: Makefile,v 1.7 2000/06/14 20:22:19 matt Exp $
# $FreeBSD: head/usr.bin/xlint/llib/Makefile 284433 2015-06-15 22:04:29Z sjg $

LIBS=	llib-lposix.ln llib-lstdc.ln

FILES=	${LIBS}
FILESDIR= ${LINTLIBDIR}

CLEANFILES+= ${LIBS}

llib-lposix.ln: llib-lposix
	${LINT} ${LINTFLAGS} -Cposix ${.ALLSRC}

llib-lstdc.ln: llib-lstdc
	${LINT} ${LINTFLAGS} -Cstdc ${.ALLSRC}

.include <bsd.prog.mk>

.if ${MK_META_MODE} == "yes"
LINTFLAGS+= -I${STAGE_INCLUDEDIR}
.endif
