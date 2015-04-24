# $FreeBSD: head/tools/tools/net80211/wlanstats/Makefile 275084 2014-11-25 22:37:27Z bapt $

.include <bsd.compiler.mk>

PROG=	wlanstats
BINDIR=	/usr/local/bin
MAN=
LIBADD=	bsdstat

SRCS=	wlanstats.c main.c

CFLAGS.clang+= -fbracket-depth=512

.include <bsd.prog.mk>
