# $FreeBSD: head/lib/clang/libllvmaarch64disassembler/Makefile 276866 2015-01-09 01:57:11Z emaste $

.include <src.opts.mk>

LIB=	llvmaarch64disassembler

SRCDIR=	lib/Target/AArch64/Disassembler
INCDIR=	lib/Target/AArch64
SRCS=	AArch64Disassembler.cpp

.if ${MK_CLANG_EXTRAS} != "no" || ${MK_LLDB} != "no"
SRCS+=	AArch64ExternalSymbolizer.cpp
.endif

TGHDRS=	AArch64GenDisassemblerTables \
	AArch64GenInstrInfo \
	AArch64GenRegisterInfo \
	AArch64GenSubtargetInfo

.include "../clang.lib.mk"
