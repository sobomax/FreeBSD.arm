# $FreeBSD: head/usr.bin/clang/llvm-symbolizer/Makefile 291738 2015-12-04 03:17:47Z bdrewery $

.include <bsd.own.mk>

PROG_CXX=llvm-symbolizer

SRCDIR=	tools/llvm-symbolizer
SRCS=	llvm-symbolizer.cpp \
	LLVMSymbolize.cpp

LIBDEPS=llvmdebuginfopdb \
	llvmdebuginfodwarf \
	llvmobject \
	llvmmcparser \
	llvmmc \
	llvmbitreader \
	llvmcore \
	llvmsupport

LIBADD=	z

.include "../clang.prog.mk"
