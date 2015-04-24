# $FreeBSD: head/lib/clang/libclangdriver/Makefile 280031 2015-03-15 13:31:13Z dim $

.include <bsd.own.mk>

LIB=	clangdriver

SRCDIR=	tools/clang/lib/Driver
SRCS=	Action.cpp \
	Compilation.cpp \
	CrossWindowsToolChain.cpp \
	Driver.cpp \
	DriverOptions.cpp \
	Job.cpp \
	MSVCToolChain.cpp \
	Multilib.cpp \
	Phases.cpp \
	SanitizerArgs.cpp \
	Tool.cpp \
	ToolChain.cpp \
	ToolChains.cpp \
	Tools.cpp \
	Types.cpp

TGHDRS=	DiagnosticCommonKinds \
	DiagnosticDriverKinds \
	DiagnosticSemaKinds \
	Options

.include "../clang.lib.mk"
