# $FreeBSD: head/usr.bin/clang/llvm-profdata/Makefile 281049 2015-04-03 19:43:39Z dim $

.include <bsd.own.mk>

PROG_CXX=llvm-profdata

SRCDIR=	tools/llvm-profdata
SRCS=	llvm-profdata.cpp

LIBDEPS=llvmprofiledata \
	llvmobject \
	llvmmcparser \
	llvmmc \
	llvmbitreader \
	llvmcore \
	llvmsupport

.include "../clang.prog.mk"
