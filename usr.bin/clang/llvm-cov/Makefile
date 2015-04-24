# $FreeBSD: head/usr.bin/clang/llvm-cov/Makefile 281049 2015-04-03 19:43:39Z dim $

.include <bsd.own.mk>

PROG_CXX=llvm-cov

SRCDIR=	tools/llvm-cov
SRCS=	CodeCoverage.cpp \
	CoverageFilters.cpp \
	CoverageReport.cpp \
	CoverageSummary.cpp \
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
