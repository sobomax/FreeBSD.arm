#	@(#)Makefile	8.2 (Berkeley) 3/27/94
#
# $FreeBSD: head/sbin/mount_nfs/Makefile 281691 2015-04-18 16:08:06Z trasz $

PROG=	mount_nfs
SRCS=	mount_nfs.c getmntopts.c mounttab.c
MAN=	mount_nfs.8

MOUNT=	${.CURDIR}/../mount
UMNTALL= ${.CURDIR}/../../usr.sbin/rpc.umntall
CFLAGS+= -DNFS -I${MOUNT} -I${UMNTALL}

.PATH: ${MOUNT} ${UMNTALL}

.include <bsd.prog.mk>
