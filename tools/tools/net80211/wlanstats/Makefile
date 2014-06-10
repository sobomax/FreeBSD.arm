# $FreeBSD: head/tools/tools/net80211/wlanstats/Makefile 264400 2014-04-13 05:21:56Z imp $

.include <bsd.compiler.mk>

PROG=	wlanstats
BINDIR=	/usr/local/bin
MAN=
USEPRIVATELIB=

SRCS=	wlanstats.c main.c
LDADD=	-lbsdstat
CFLAGS.clang+= -fbracket-depth=512

.include <bsd.prog.mk>
