#	@(#)Makefile	8.1 (Berkeley) 6/2/93
# $FreeBSD: head/bin/ls/Makefile 288330 2015-09-28 03:36:15Z ngie $

.include <src.opts.mk>

PROG=	ls
SRCS=	cmp.c ls.c print.c util.c
LIBADD=	xo util

.if !defined(RELEASE_CRUNCH) && \
	${MK_LS_COLORS} != no
CFLAGS+= -DCOLORLS
LIBADD+=	termcapw
.endif

.if ${MK_TESTS} != "no"
SUBDIR+=	tests
.endif

.include <bsd.prog.mk>
