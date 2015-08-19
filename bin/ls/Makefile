#	@(#)Makefile	8.1 (Berkeley) 6/2/93
# $FreeBSD: head/bin/ls/Makefile 285425 2015-07-12 18:40:31Z marius $

.include <src.opts.mk>

PROG=	ls
SRCS=	cmp.c ls.c print.c util.c
LIBADD=	util xo

.if !defined(RELEASE_CRUNCH) && \
	${MK_LS_COLORS} != no
CFLAGS+= -DCOLORLS
LIBADD+=	termcapw
.endif

.include <bsd.prog.mk>
