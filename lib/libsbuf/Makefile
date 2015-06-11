# $FreeBSD: head/lib/libsbuf/Makefile 284192 2015-06-09 21:39:38Z ken $

LIB=		sbuf
SHLIBDIR?= 	/lib
SRCS=		subr_prf.c subr_sbuf.c

SHLIB_MAJOR	= 6

SYMBOL_MAPS=    ${.CURDIR}/Symbol.map
VERSION_DEF=	${.CURDIR}/Version.def

.PATH:	${.CURDIR}/../../sys/kern

.include <bsd.lib.mk>
