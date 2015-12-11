# $FreeBSD: head/lib/clang/libllvmbitwriter/Makefile 288943 2015-10-06 17:53:29Z dim $

.include <src.opts.mk>

LIB=	llvmbitwriter

SRCDIR=	lib/Bitcode/Writer
SRCS=	BitcodeWriter.cpp \
	BitcodeWriterPass.cpp \
	ValueEnumerator.cpp

.if ${MK_CLANG_EXTRAS} != "no"
SRCS+=	BitWriter.cpp
.endif

.include "../clang.lib.mk"
