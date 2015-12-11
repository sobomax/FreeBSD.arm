# $FreeBSD: head/usr.bin/clang/llvm-dis/Makefile 288943 2015-10-06 17:53:29Z dim $

.include <bsd.own.mk>

PROG_CXX=llvm-dis

SRCDIR=	tools/llvm-dis
SRCS=	llvm-dis.cpp

TGHDRS=	Intrinsics
LIBDEPS=llvmanalysis \
	llvmbitreader \
	llvmcore \
	llvmsupport

.include "../clang.prog.mk"
