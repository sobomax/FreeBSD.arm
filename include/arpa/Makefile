# $FreeBSD: head/include/arpa/Makefile 265420 2014-05-06 04:22:01Z imp $

.include <src.opts.mk>

NO_OBJ=
INCS=	ftp.h inet.h nameser.h nameser_compat.h tftp.h
.if ${MK_TELNET} == "no"
INCS+=	telnet.h
.endif
INCSDIR=${INCLUDEDIR}/arpa

.include <bsd.prog.mk>
