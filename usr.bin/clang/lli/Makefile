# $FreeBSD: head/usr.bin/clang/lli/Makefile 291738 2015-12-04 03:17:47Z bdrewery $

.include <bsd.own.mk>

PROG_CXX=lli

SRCDIR=	tools/lli
SRCS=	OrcLazyJIT.cpp \
	RemoteMemoryManager.cpp \
	RemoteTarget.cpp \
	RemoteTargetExternal.cpp \
	lli.cpp

LIBDEPS=llvmx86disassembler \
	llvmx86asmparser \
	llvmirreader \
	llvmasmparser \
	llvmx86codegen \
	llvmx86desc \
	llvmx86info \
	llvmmcdisassembler \
	llvmx86instprinter \
	llvmx86utils \
	llvmselectiondag \
	llvmasmprinter \
	llvminterpreter \
	llvmcodegen \
	llvmscalaropts \
	llvmprofiledata \
	llvminstcombine \
	llvminstrumentation \
	llvmorcjit \
	llvmtransformutils \
	llvmipa \
	llvmmcjit \
	llvmexecutionengine \
	llvmtarget \
	llvmanalysis \
	llvmruntimedyld \
	llvmobject \
	llvmmcparser \
	llvmbitreader \
	llvmmc \
	llvmcore \
	llvmsupport

LIBADD=	z

.include "../clang.prog.mk"
