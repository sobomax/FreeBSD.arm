# $FreeBSD: head/usr.sbin/bsdconfig/share/Makefile 264840 2014-04-23 22:04:04Z dteske $

NO_OBJ=

SUBDIR=	media packages

FILESDIR=	${SHAREDIR}/bsdconfig
FILES=		common.subr device.subr dialog.subr geom.subr keymap.subr \
		mustberoot.subr script.subr strings.subr struct.subr \
		sysrc.subr variable.subr

beforeinstall:
	mkdir -p ${DESTDIR}${FILESDIR}

.include <bsd.prog.mk>
