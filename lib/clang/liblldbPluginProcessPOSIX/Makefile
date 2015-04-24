# $FreeBSD: head/lib/clang/liblldbPluginProcessPOSIX/Makefile 280031 2015-03-15 13:31:13Z dim $

.include <bsd.own.mk>

LIB=	lldbPluginProcessPOSIX

# include_directories(.)
CFLAGS+=-I${.CURDIR}/../../../contrib/llvm/tools/lldb/source/Plugins/Process/POSIX
CFLAGS+=-I${.CURDIR}/../../../contrib/llvm/tools/lldb/source/Plugins/Process/Utility
CFLAGS+=-I${.CURDIR}/../../../contrib/llvm/tools/lldb/source/Plugins/Process/FreeBSD

SRCDIR=	tools/lldb/source/Plugins/Process/POSIX
SRCS=	POSIXStopInfo.cpp \
	POSIXThread.cpp \
	ProcessMessage.cpp \
	ProcessPOSIX.cpp \
	ProcessPOSIXLog.cpp \
	RegisterContextPOSIXProcessMonitor_arm64.cpp \
	RegisterContextPOSIXProcessMonitor_mips64.cpp \
	RegisterContextPOSIXProcessMonitor_powerpc.cpp \
	RegisterContextPOSIXProcessMonitor_x86.cpp

TGHDRS=	AttrList \
	Attrs \
	DiagnosticCommonKinds \
	DeclNodes \
	StmtNodes \
	CommentCommandList

.include "../lldb.lib.mk"
