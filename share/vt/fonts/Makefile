# $FreeBSD: head/share/vt/fonts/Makefile 266851 2014-05-29 18:05:03Z emaste $

FILES=	gallant.fnt \
	vgarom-8x8.fnt \
	vgarom-8x14.fnt \
	vgarom-8x16.fnt

CLEANFILES+=	${FILES}

.SUFFIXES: .uu
.uu:
	uudecode < ${.IMPSRC}

FILESDIR=	${SHAREDIR}/vt/fonts

.include <bsd.prog.mk>
