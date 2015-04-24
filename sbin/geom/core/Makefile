# $FreeBSD: head/sbin/geom/core/Makefile 275030 2014-11-25 11:23:12Z bapt $

.PATH: ${.CURDIR}/../misc

PROG=	geom
MAN=	geom.8
SRCS=	geom.c subr.c

NO_SHARED=NO

CFLAGS+= -DGEOM_CLASS_DIR=\"${GEOM_CLASS_DIR}\"
CFLAGS+= -I${.CURDIR}/../../../sys -I${.CURDIR} -I${.CURDIR}/..

LIBADD=	geom util

.include <bsd.prog.mk>
