#	@(#)Makefile	8.1 (Berkeley) 6/2/93
# $FreeBSD: head/bin/ls/Makefile 284198 2015-06-10 01:27:38Z marcel $

.include <src.opts.mk>

PROG=	ls
SRCS=	cmp.c ls.c print.c util.c
LIBADD=	util

.if !defined(RELEASE_CRUNCH) && \
	${MK_LS_COLORS} != no
CFLAGS+= -DCOLORLS
LIBADD+=	termcapw xo
.endif

.include <bsd.prog.mk>
