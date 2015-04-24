#	@(#)Makefile	8.1 (Berkeley) 6/2/93
# $FreeBSD: head/bin/ls/Makefile 275028 2014-11-25 11:15:40Z bapt $

.include <src.opts.mk>

PROG=	ls
SRCS=	cmp.c ls.c print.c util.c
LIBADD=	util

.if !defined(RELEASE_CRUNCH) && \
	${MK_LS_COLORS} != no
CFLAGS+= -DCOLORLS
LIBADD+=	termcapw
.endif

.include <bsd.prog.mk>
