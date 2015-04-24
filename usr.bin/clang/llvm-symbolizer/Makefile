# $FreeBSD: head/usr.bin/clang/llvm-symbolizer/Makefile 276945 2015-01-10 22:22:42Z dim $

.include <bsd.own.mk>

PROG_CXX=llvm-symbolizer

SRCDIR=	tools/llvm-symbolizer
SRCS=	llvm-symbolizer.cpp \
	LLVMSymbolize.cpp

LIBDEPS=llvmdebuginfo \
	llvmobject \
	llvmmcparser \
	llvmmc \
	llvmbitreader \
	llvmcore \
	llvmsupport

.include "../clang.prog.mk"

DPADD+= ${LIBZ}
LDADD+= -lz
