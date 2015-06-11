# $FreeBSD: head/include/arpa/Makefile 284255 2015-06-11 04:22:17Z sjg $

.include <src.opts.mk>

INCS=	ftp.h inet.h nameser.h nameser_compat.h tftp.h
.if ${MK_TELNET} == "no"
INCS+=	telnet.h
.endif
INCSDIR=${INCLUDEDIR}/arpa

.include <bsd.prog.mk>
