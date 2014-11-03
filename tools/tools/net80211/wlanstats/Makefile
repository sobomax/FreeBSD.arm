# $FreeBSD: head/tools/tools/net80211/wlanstats/Makefile 270520 2014-08-25 06:14:57Z adrian $

.include <bsd.compiler.mk>

PROG=	wlanstats
BINDIR=	/usr/local/bin
MAN=
USEPRIVATELIB=  bsdstat
LDADD=  ${LDBSDSTAT}

SRCS=	wlanstats.c main.c

CFLAGS.clang+= -fbracket-depth=512

.include <bsd.prog.mk>
