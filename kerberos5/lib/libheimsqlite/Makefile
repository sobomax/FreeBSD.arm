# $FreeBSD: head/kerberos5/lib/libheimsqlite/Makefile 275022 2014-11-25 09:57:42Z bapt $

LIB=	heimsqlite
SRCS=	sqlite3.c
LIBADD=	pthread
CFLAGS+=-I${KRB5DIR}/lib/sqlite

.include <bsd.lib.mk>

.PATH: ${KRB5DIR}/lib/sqlite
