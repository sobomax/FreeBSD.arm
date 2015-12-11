# $FreeBSD: head/usr.bin/clang/llvm-cov/Makefile 288943 2015-10-06 17:53:29Z dim $

.include <bsd.own.mk>

PROG_CXX=llvm-cov

SRCDIR=	tools/llvm-cov
SRCS=	CodeCoverage.cpp \
	CoverageFilters.cpp \
	CoverageReport.cpp \
	CoverageSummaryInfo.cpp \
	SourceCoverageView.cpp \
	TestingSupport.cpp \
	gcov.cpp \
	llvm-cov.cpp

LIBDEPS=llvmprofiledata \
	llvmobject \
	llvmmcparser \
	llvmmc \
	llvmbitreader \
	llvmcore \
	llvmsupport

.include "../clang.prog.mk"
