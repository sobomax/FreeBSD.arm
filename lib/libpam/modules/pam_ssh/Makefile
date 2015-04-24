# PAM module for SSH
# $FreeBSD: head/lib/libpam/modules/pam_ssh/Makefile 275024 2014-11-25 11:07:26Z bapt $

SSHDIR=	${.CURDIR}/../../../../crypto/openssh

LIB=	pam_ssh
MAN=	pam_ssh.8
SRCS=	pam_ssh.c

# required when linking with a dynamic libssh
SRCS+=	roaming_dummy.c

WARNS?=	3
CFLAGS+= -I${SSHDIR} -include ssh_namespace.h

LIBADD=	ssh

.include <bsd.lib.mk>

.PATH: ${SSHDIR}

${OBJS} ${POBJS} ${SOBJS}: ssh_namespace.h
