# $FreeBSD: head/lib/clang/libllvmobject/Makefile 288943 2015-10-06 17:53:29Z dim $

.include <src.opts.mk>

LIB=	llvmobject

SRCDIR=	lib/Object
SRCS=	Archive.cpp \
	ArchiveWriter.cpp \
	Binary.cpp \
	COFFObjectFile.cpp \
	COFFYAML.cpp \
	ELF.cpp \
	ELFObjectFile.cpp \
	ELFYAML.cpp \
	Error.cpp \
	IRObjectFile.cpp \
	MachOObjectFile.cpp \
	MachOUniversal.cpp \
	ObjectFile.cpp \
	RecordStreamer.cpp \
	SymbolicFile.cpp

.if ${MK_CLANG_EXTRAS} != "no"
SRCS+=	Object.cpp \
	SymbolSize.cpp
.endif
	
.include "../clang.lib.mk"
