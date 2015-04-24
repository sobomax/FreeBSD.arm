# $FreeBSD: head/secure/usr.bin/scp/Makefile 275083 2014-11-25 22:25:13Z bapt $

.include <src.opts.mk>

PROG=	scp
SRCS=	scp.c
CFLAGS+=-I${SSHDIR} -include ssh_namespace.h

.if !defined(NO_SHARED)
# required when linking with a dynamic libssh
SRCS+=	roaming_dummy.c
.endif

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
