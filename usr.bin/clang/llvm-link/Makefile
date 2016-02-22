# $FreeBSD: head/usr.bin/clang/llvm-link/Makefile 288943 2015-10-06 17:53:29Z dim $

.include <bsd.own.mk>

PROG_CXX=llvm-link

SRCDIR=	tools/llvm-link
SRCS=	llvm-link.cpp

LIBDEPS=llvmirreader \
	llvmasmparser \
	llvmbitwriter \
	llvmbitreader \
	llvmlinker \
	llvmtransformutils \
	llvmipa \
	llvmanalysis \
	llvmcore \
	llvmsupport

.include "../clang.prog.mk"
