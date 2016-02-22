# $FreeBSD: head/lib/clang/libllvmprofiledata/Makefile 288943 2015-10-06 17:53:29Z dim $

.include <src.opts.mk>

LIB=	llvmprofiledata

SRCDIR=	lib/ProfileData
SRCS=	CoverageMapping.cpp \
	CoverageMappingReader.cpp \
	CoverageMappingWriter.cpp \
	InstrProf.cpp \
	InstrProfReader.cpp \
	InstrProfWriter.cpp \
	SampleProf.cpp \
	SampleProfReader.cpp

.if ${MK_CLANG_EXTRAS} != "no"
SRCS+=	SampleProfWriter.cpp
.endif

.include "../clang.lib.mk"
