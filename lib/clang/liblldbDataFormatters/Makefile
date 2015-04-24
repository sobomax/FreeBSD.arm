# $FreeBSD: head/lib/clang/liblldbDataFormatters/Makefile 280031 2015-03-15 13:31:13Z dim $

.include <bsd.own.mk>

LIB=	lldbDataFormatters

SRCDIR=	tools/lldb/source/DataFormatters
SRCS=	CF.cpp \
	Cocoa.cpp \
	CXXFormatterFunctions.cpp \
	DataVisualization.cpp \
	FormatCache.cpp \
	FormatClasses.cpp \
	FormatManager.cpp \
	LibCxx.cpp \
	LibCxxInitializerList.cpp \
	LibCxxList.cpp \
	LibCxxMap.cpp \
	LibCxxUnorderedMap.cpp \
	LibCxxVector.cpp \
	LibStdcpp.cpp \
	NSArray.cpp \
	NSDictionary.cpp \
	NSIndexPath.cpp \
	NSSet.cpp \
	StringPrinter.cpp \
	TypeCategory.cpp \
	TypeCategoryMap.cpp \
	TypeFormat.cpp \
	TypeSummary.cpp \
	TypeSynthetic.cpp \
	TypeValidator.cpp \
	ValueObjectPrinter.cpp

TGHDRS=	AttrList \
	Attrs \
	DiagnosticCommonKinds \
	DeclNodes \
	StmtNodes \
	CommentCommandList

.include "../lldb.lib.mk"
