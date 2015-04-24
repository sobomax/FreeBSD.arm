# $FreeBSD: head/etc/defaults/Makefile 277738 2015-01-26 09:31:48Z ngie $

.include <src.opts.mk>

FILES=	devfs.rules periodic.conf rc.conf
NO_OBJ=
FILESDIR= /etc/defaults

.if ${MK_BLUETOOTH} != "no"
FILES+=	bluetooth.device.conf
.endif

.include <bsd.prog.mk>
