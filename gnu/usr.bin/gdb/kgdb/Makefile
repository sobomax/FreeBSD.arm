# $FreeBSD: head/gnu/usr.bin/gdb/kgdb/Makefile 275077 2014-11-25 21:18:18Z bapt $

PROG=	kgdb${GDB_SUFFIX}
SRCS=	main.c kld.c kthr.c trgt.c trgt_${TARGET_CPUARCH}.c
WARNS?=	2

BULIBS= ${OBJ_BU}/libbfd/libbfd.a ${OBJ_BU}/libopcodes/libopcodes.a \
	${OBJ_BU}/libiberty/libiberty.a
GDBLIBS= ${OBJ_GDB}/libgdb/libgdb.a

DPADD=	${GDBLIBS} ${BULIBS} ${LIBKVM}
LDADD=	${GDBLIBS} ${BULIBS} -lkvm${GDB_SUFFIX}
LIBADD+=	m readline ncursesw gnuregex

.if defined(GDB_CROSS_DEBUGGER)
CFLAGS+= -Wl,-export-dynamic
.endif

.include <bsd.prog.mk>
