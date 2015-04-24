# $FreeBSD: head/lib/clang/libllvminstrumentation/Makefile 280031 2015-03-15 13:31:13Z dim $

.include <bsd.own.mk>

LIB=	llvminstrumentation

SRCDIR=	lib/Transforms/Instrumentation
SRCS=	AddressSanitizer.cpp \
	BoundsChecking.cpp \
	DataFlowSanitizer.cpp \
	GCOVProfiling.cpp \
	MemorySanitizer.cpp \
	Instrumentation.cpp \
	InstrProfiling.cpp \
	SanitizerCoverage.cpp \
	ThreadSanitizer.cpp

TGHDRS=	Intrinsics

.include "../clang.lib.mk"
