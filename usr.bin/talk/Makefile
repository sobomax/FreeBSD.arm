#	From: @(#)Makefile	8.1 (Berkeley) 6/6/93
# $FreeBSD: head/usr.bin/talk/Makefile 270650 2014-08-26 09:10:28Z ngie $

PROG=	talk
SRCS=	ctl.c ctl_transact.c display.c get_addrs.c get_iface.c get_names.c \
	init_disp.c invite.c io.c look_up.c msgs.c talk.c
DPADD=	${LIBNCURSESW}
LDADD=	-lncursesw

.include <bsd.prog.mk>
