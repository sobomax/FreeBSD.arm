# $FreeBSD: head/lib/clang/libllvmmirparser/Makefile 287526 2015-09-06 22:02:13Z dim $

.include <src.opts.mk>

LIB=	llvmmirparser

SRCDIR=	lib/CodeGen/MIRParser
SRCS=	MIParser.cpp \
	MIRParser.cpp

.if ${MK_CLANG_EXTRAS} != "no"
SRCS+=	MILexer.cpp
.endif
	
.include "../clang.lib.mk"
