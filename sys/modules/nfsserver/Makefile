# $FreeBSD: head/sys/modules/nfsserver/Makefile 269540 2014-08-04 22:37:02Z imp $

.PATH: ${.CURDIR}/../../nfsserver ${.CURDIR}/../../nfs
KMOD=	nfsserver
SRCS=	vnode_if.h \
	nfs_fha.c nfs_fha_old.c nfs_serv.c nfs_srvkrpc.c nfs_srvsubs.c \
	opt_mac.h \
	opt_kgssapi.h \
	opt_nfs.h
SRCS+=	opt_inet6.h

.include <bsd.kmod.mk>
