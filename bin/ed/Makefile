# $FreeBSD: head/bin/ed/Makefile 275028 2014-11-25 11:15:40Z bapt $

.include <src.opts.mk>

PROG=	ed
SRCS=	buf.c cbc.c glbl.c io.c main.c re.c sub.c undo.c
LINKS=	${BINDIR}/ed ${BINDIR}/red
MLINKS=	ed.1 red.1

.if ${MK_OPENSSL} != "no" && ${MK_ED_CRYPTO} != "no"
CFLAGS+=-DDES
LIBADD=	crypto
.endif

.include <bsd.prog.mk>
