# $FreeBSD: head/usr.bin/clang/llvm-dwarfdump/Makefile 291738 2015-12-04 03:17:47Z bdrewery $

.include <bsd.own.mk>

PROG_CXX=llvm-dwarfdump

SRCDIR=	tools/llvm-dwarfdump
SRCS=	llvm-dwarfdump.cpp

LIBDEPS=llvmdebuginfodwarf \
	llvmobject \
	llvmmcparser \
	llvmmc \
	llvmbitreader \
	llvmcore \
	llvmsupport

LIBADD=	z

.include "../clang.prog.mk"
