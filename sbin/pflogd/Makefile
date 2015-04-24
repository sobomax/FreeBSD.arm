# $FreeBSD: head/sbin/pflogd/Makefile 275030 2014-11-25 11:23:12Z bapt $

.PATH:	${.CURDIR}/../../contrib/pf/pflogd

PROG=	pflogd
SRCS= 	pflogd.c pidfile.c privsep.c privsep_fdpass.c
MAN=	pflogd.8

CFLAGS+=-include ${.CURDIR}/../../lib/libpcap/config.h

LIBADD=	pcap

WARNS?=	2

.include <bsd.prog.mk>
