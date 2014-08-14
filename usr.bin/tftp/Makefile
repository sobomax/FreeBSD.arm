#	@(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD: head/usr.bin/tftp/Makefile 268804 2014-07-17 18:24:34Z brooks $

.PATH: ${.CURDIR}/../../libexec/tftpd

PROG=	tftp
SRCS=	main.c tftp-file.c tftp-io.c tftp-options.c tftp-transfer.c
SRCS+=	tftp-utils.c tftp.c
CFLAGS+=-I${.CURDIR}/../../libexec/tftpd
DPADD=	${LIBEDIT} ${LIBTERMCAPW}
LDADD=	-ledit -ltermcapw

.include <bsd.prog.mk>
