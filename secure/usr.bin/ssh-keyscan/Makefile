# $FreeBSD: head/secure/usr.bin/ssh-keyscan/Makefile 275083 2014-11-25 22:25:13Z bapt $

.include <src.opts.mk>

PROG=	ssh-keyscan
SRCS=	ssh-keyscan.c roaming_dummy.c
CFLAGS+=-I${SSHDIR} -include ssh_namespace.h

LIBADD=	ssh

.if ${MK_LDNS} != "no"
CFLAGS+=	-DHAVE_LDNS=1
#DPADD+=	${LIBLDNS}
#LDADD+=	-lldns
#USEPRIVATELIB+= ldns
.endif

.include <bsd.prog.mk>

.PATH:	${SSHDIR}

${OBJS} ${POBJS} ${SOBJS}: ssh_namespace.h
