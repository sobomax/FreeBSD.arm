# Make `routed` for FreeBSD
# $FreeBSD: head/sbin/routed/Makefile 275030 2014-11-25 11:23:12Z bapt $

PROG=	routed
MAN=	routed.8
SRCS=	if.c input.c main.c output.c parms.c radix.c rdisc.c table.c trace.c
WARNS?=	3
LIBADD=	md

SUBDIR= rtquery

.include <bsd.prog.mk>
