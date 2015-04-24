# $FreeBSD: head/sbin/mdconfig/Makefile 275030 2014-11-25 11:23:12Z bapt $

.include <src.opts.mk>

PROG=		mdconfig
MAN=		mdconfig.8

LIBADD=		util geom

.if ${MK_TESTS} != "no"
SUBDIR+=    tests
.endif

.include <bsd.prog.mk>
