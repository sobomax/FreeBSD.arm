# $FreeBSD: head/sbin/newfs_msdos/Makefile 289376 2015-10-15 19:00:33Z emaste $

PROG=	newfs_msdos
MAN=	newfs_msdos.8
SRCS=	newfs_msdos.c mkfs_msdos.c

# XXX - this is verboten
.if ${MACHINE_CPUARCH} == "arm"
WARNS?= 3
.endif

.include <bsd.prog.mk>
