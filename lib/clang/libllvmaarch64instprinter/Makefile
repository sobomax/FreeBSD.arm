# $FreeBSD: head/lib/clang/libllvmaarch64instprinter/Makefile 276783 2015-01-07 19:06:27Z dim $

.include <bsd.own.mk>

LIB=	llvmaarch64instprinter

SRCDIR=	lib/Target/AArch64/InstPrinter
INCDIR=	lib/Target/AArch64
SRCS=	AArch64InstPrinter.cpp

TGHDRS=	AArch64GenAsmWriter \
	AArch64GenAsmWriter1 \
	AArch64GenInstrInfo \
	AArch64GenRegisterInfo \
	AArch64GenSubtargetInfo

.include "../clang.lib.mk"
