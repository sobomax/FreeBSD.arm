# $FreeBSD: head/usr.bin/clang/bugpoint/Makefile 280031 2015-03-15 13:31:13Z dim $

.include <bsd.own.mk>

PROG_CXX=bugpoint

SRCDIR=	tools/bugpoint
SRCS=	BugDriver.cpp \
	CrashDebugger.cpp \
	ExecutionDriver.cpp \
	ExtractFunction.cpp \
	FindBugs.cpp \
	Miscompilation.cpp \
	OptimizerDriver.cpp \
	ToolRunner.cpp \
	bugpoint.cpp

TGHDRS=	Intrinsics
LIBDEPS=llvmcodegen \
	llvmobjcarcopts \
	llvmirreader \
	llvmbitwriter \
	llvmlinker \
	llvmipo \
	llvmvectorize \
	llvmscalaropts \
	llvmprofiledata \
	llvmobject \
	llvmmcparser \
	llvmbitreader \
	llvminstcombine \
	llvminstrumentation \
	llvmtransformutils \
	llvmipa \
	llvmanalysis \
	llvmtarget \
	llvmmc \
	llvmasmparser \
	llvmcore \
	llvmsupport

.include "../clang.prog.mk"
