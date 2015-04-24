# $FreeBSD: head/lib/clang/libclangrewritefrontend/Makefile 276479 2014-12-31 20:31:32Z dim $

.include <bsd.own.mk>

LIB=	clangrewritefrontend

SRCDIR=	tools/clang/lib/Frontend/Rewrite
SRCS=	FixItRewriter.cpp \
	FrontendActions.cpp \
	HTMLPrint.cpp \
	InclusionRewriter.cpp \
	RewriteMacros.cpp \
	RewriteTest.cpp

TGHDRS=	AttrList \
	AttrParsedAttrList \
	Attrs \
	CommentCommandList \
	DeclNodes \
	DiagnosticCommonKinds \
	DiagnosticFrontendKinds \
	StmtNodes

.include "../clang.lib.mk"
