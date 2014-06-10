# $FreeBSD: head/lib/clang/libllvmipa/Makefile 265420 2014-05-06 04:22:01Z imp $

.include <src.opts.mk>

LIB=	llvmipa

SRCDIR=	lib/Analysis/IPA
SRCS=	CallGraph.cpp \
	CallGraphSCCPass.cpp \
	CallPrinter.cpp \
	FindUsedTypes.cpp \
	GlobalsModRef.cpp \
	InlineCost.cpp

.if ${MK_CLANG_EXTRAS} != "no"
SRCS+=	IPA.cpp
.endif

TGHDRS=	Intrinsics

.include "../clang.lib.mk"
