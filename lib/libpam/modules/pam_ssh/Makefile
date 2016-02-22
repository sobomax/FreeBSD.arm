# PAM module for SSH
# $FreeBSD: head/lib/libpam/modules/pam_ssh/Makefile 291941 2015-12-07 16:08:09Z bdrewery $

SSHDIR=	${.CURDIR}/../../../../crypto/openssh

LIB=	pam_ssh
MAN=	pam_ssh.8
SRCS=	pam_ssh.c

# required when linking with a dynamic libssh
SRCS+=	roaming_dummy.c

WARNS?=	3
CFLAGS+= -I${SSHDIR} -include ssh_namespace.h
SRCS+=	 ssh_namespace.h

LIBADD=	ssh

.include <bsd.lib.mk>

.PATH: ${SSHDIR}
