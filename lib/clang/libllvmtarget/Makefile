# $FreeBSD: head/lib/clang/libllvmtarget/Makefile 288943 2015-10-06 17:53:29Z dim $

.include <src.opts.mk>

LIB=	llvmtarget

SRCDIR=	lib/Target
SRCS=	Target.cpp \
	TargetLoweringObjectFile.cpp \
	TargetMachine.cpp \
	TargetMachineC.cpp \
	TargetRecip.cpp \
	TargetSubtargetInfo.cpp

.if ${MK_CLANG_EXTRAS} != "no"
SRCS+=	TargetIntrinsicInfo.cpp
.endif
	
TGHDRS=	Intrinsics

.include "../clang.lib.mk"
