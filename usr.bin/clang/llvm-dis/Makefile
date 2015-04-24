# $FreeBSD: head/usr.bin/clang/llvm-dis/Makefile 276479 2014-12-31 20:31:32Z dim $

.include <bsd.own.mk>

PROG_CXX=llvm-dis

SRCDIR=	tools/llvm-dis
SRCS=	llvm-dis.cpp

TGHDRS=	Intrinsics
LIBDEPS=llvmanalysis \
	llvmtarget \
	llvmmc \
	llvmbitreader \
	llvmcore \
	llvmsupport

.include "../clang.prog.mk"
