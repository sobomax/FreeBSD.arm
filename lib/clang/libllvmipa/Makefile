# $FreeBSD: head/lib/clang/libllvmipa/Makefile 280031 2015-03-15 13:31:13Z dim $

.include <src.opts.mk>

LIB=	llvmipa

SRCDIR=	lib/Analysis/IPA
SRCS=	CallGraph.cpp \
	CallGraphSCCPass.cpp \
	CallPrinter.cpp \
	GlobalsModRef.cpp \
	InlineCost.cpp

.if ${MK_CLANG_EXTRAS} != "no"
SRCS+=	IPA.cpp
.endif

TGHDRS=	Intrinsics

.include "../clang.lib.mk"
