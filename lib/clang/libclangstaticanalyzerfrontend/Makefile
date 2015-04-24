# $FreeBSD: head/lib/clang/libclangstaticanalyzerfrontend/Makefile 280031 2015-03-15 13:31:13Z dim $

.include <bsd.own.mk>

LIB=	clangstaticanalyzerfrontend

SRCDIR=	tools/clang/lib/StaticAnalyzer/Frontend
SRCS=	AnalysisConsumer.cpp \
	CheckerRegistration.cpp \
	ModelConsumer.cpp \
	FrontendActions.cpp \
	ModelInjector.cpp

TGHDRS=	AttrList \
	AttrParsedAttrList \
	AttrVisitor \
	Attrs \
	Checkers \
	CommentCommandList \
	CommentNodes \
	DeclNodes \
	DiagnosticCommonKinds \
	DiagnosticFrontendKinds \
	StmtNodes

.include "../clang.lib.mk"
