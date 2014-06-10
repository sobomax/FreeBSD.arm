# $FreeBSD: head/usr.sbin/bsdinstall/distfetch/Makefile 266157 2014-05-15 16:44:25Z brooks $

BINDIR= /usr/libexec/bsdinstall
PROG=	distfetch
DPADD=	${LIBFETCH} ${LIBNCURSESW} ${LIBDIALOG} ${LIBM}
LDADD=	-lfetch -lncursesw -ldialog -lm

WARNS?=	6
MAN=

.include <bsd.prog.mk>
