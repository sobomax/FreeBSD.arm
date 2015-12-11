# $FreeBSD: head/lib/clang/libllvmvectorize/Makefile 288943 2015-10-06 17:53:29Z dim $

.include <src.opts.mk>

LIB=	llvmvectorize

SRCDIR=	lib/Transforms/Vectorize
SRCS=	BBVectorize.cpp \
	LoopVectorize.cpp \
	SLPVectorizer.cpp

.if ${MK_CLANG_EXTRAS} != "no"
SRCS+=	Vectorize.cpp
.endif

TGHDRS=	Intrinsics

.include "../clang.lib.mk"
