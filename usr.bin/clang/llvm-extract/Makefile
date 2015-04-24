# $FreeBSD: head/usr.bin/clang/llvm-extract/Makefile 280031 2015-03-15 13:31:13Z dim $

.include <bsd.own.mk>

PROG_CXX=llvm-extract

SRCDIR=	tools/llvm-extract
SRCS=	llvm-extract.cpp

LIBDEPS=llvmirreader \
	llvmasmparser \
	llvmbitwriter \
	llvmipo \
	llvmvectorize \
	llvmscalaropts \
	llvmprofiledata \
	llvmobject \
	llvmmcparser \
	llvmbitreader \
	llvminstcombine \
	llvmtransformutils \
	llvmipa \
	llvmanalysis \
	llvmtarget \
	llvmmc \
	llvmcore \
	llvmsupport

.include "../clang.prog.mk"
