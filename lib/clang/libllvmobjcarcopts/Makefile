# $FreeBSD: head/lib/clang/libllvmobjcarcopts/Makefile 280031 2015-03-15 13:31:13Z dim $

.include <bsd.own.mk>

LIB=	llvmobjcarcopts

SRCDIR=	lib/Transforms/ObjCARC
SRCS=	ObjCARC.cpp \
	ObjCARCOpts.cpp \
	ObjCARCExpand.cpp \
	ObjCARCAPElim.cpp \
	ObjCARCAliasAnalysis.cpp \
	ObjCARCUtil.cpp \
	ObjCARCContract.cpp \
	DependencyAnalysis.cpp \
	ProvenanceAnalysis.cpp \
	ProvenanceAnalysisEvaluator.cpp

TGHDRS=	Intrinsics

.include "../clang.lib.mk"
