# $FreeBSD: head/lib/clang/libllvmobjcarcopts/Makefile 288943 2015-10-06 17:53:29Z dim $

.include <bsd.own.mk>

LIB=	llvmobjcarcopts

SRCDIR=	lib/Transforms/ObjCARC
SRCS=	ARCInstKind.cpp \
	DependencyAnalysis.cpp \
	ObjCARC.cpp \
	ObjCARCAPElim.cpp \
	ObjCARCAliasAnalysis.cpp \
	ObjCARCContract.cpp \
	ObjCARCExpand.cpp \
	ObjCARCOpts.cpp \
	ProvenanceAnalysis.cpp \
	ProvenanceAnalysisEvaluator.cpp \
	PtrState.cpp

TGHDRS=	Intrinsics

.include "../clang.lib.mk"
