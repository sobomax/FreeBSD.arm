#	$OpenBSD: Makefile,v 1.10 2002/04/26 13:13:41 espie Exp $
# $FreeBSD: head/usr.bin/m4/Makefile 265420 2014-05-06 04:22:01Z imp $

# -DEXTENDED 
# 	if you want the paste & spaste macros.

.include <src.opts.mk>

PROG=	m4
CFLAGS+=-DEXTENDED -I${.CURDIR} -I${.CURDIR}/lib
DPADD=	${LIBY} ${LIBL} ${LIBM}
LDADD=	-ly -ll -lm

NO_WMISSING_VARIABLE_DECLARATIONS=

SRCS=	eval.c expr.c look.c main.c misc.c gnum4.c trace.c parser.y tokenizer.l
.PATH: ${.CURDIR}/lib
SRCS+=	ohash_create_entry.c ohash_delete.c ohash_do.c ohash_entries.c \
	ohash_enum.c ohash_init.c ohash_int.h ohash_interval.c \
	ohash_lookup_interval.c ohash_lookup_memory.c ohash_qlookup.c \
	ohash_qlookupi.c

tokenizer.o: parser.h

CLEANFILES+=	parser.c parser.h tokenizer.o

.if ${MK_TESTS} != "no"
SUBDIR+= tests
.endif

.include <bsd.prog.mk>
