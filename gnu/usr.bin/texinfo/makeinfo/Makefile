# $FreeBSD: head/gnu/usr.bin/texinfo/makeinfo/Makefile 270168 2014-08-19 15:04:32Z bdrewery $

PROG=	makeinfo
SRCS=	cmds.c defun.c files.c float.c footnote.c html.c \
	index.c insertion.c lang.c macro.c makeinfo.c multi.c \
	node.c sectioning.c toc.c xml.c xref.c

DPADD=	${LIBTXI}
LDADD=	${LIBTXI}

.include <bsd.prog.mk>

.PATH:	$(TXIDIR)/makeinfo $(TXIDIR)/doc
