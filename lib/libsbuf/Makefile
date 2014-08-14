# $FreeBSD: head/lib/libsbuf/Makefile 269179 2014-07-28 07:20:22Z gahr $

LIB=		sbuf
SHLIBDIR?= 	/lib
SRCS=		subr_sbuf.c 

SHLIB_MAJOR	= 6

SYMBOL_MAPS=    ${.CURDIR}/Symbol.map
VERSION_DEF=	${.CURDIR}/Version.def

.PATH:	${.CURDIR}/../../sys/kern

.include <bsd.lib.mk>
