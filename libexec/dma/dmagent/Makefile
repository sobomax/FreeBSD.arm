# $FreeBSD: head/libexec/dma/dmagent/Makefile 289148 2015-10-11 19:25:39Z bapt $

LIBADD=	ssl crypto

PROG=	dma
SRCS=	aliases_parse.y \
	aliases_scan.l \
	base64.c \
	conf.c \
	crypto.c \
	dma.c \
	dns.c \
	local.c \
	mail.c \
	net.c \
	spool.c \
	util.c
MAN8=	dma.8
CONFS=	dma.conf
CONFSDIR=	${CONFDIR}/dma
YFLAGS+=	-i
CLEANFILES=	aliases_parse.i
FILES=	mailer.conf
FILESDIR=	${SHAREDIR}/examples/dma

BINMODE=	2555

.include <bsd.compiler.mk>

.if ${COMPILER_TYPE} == gcc
WARNS=	5
.endif

.include <bsd.prog.mk>
