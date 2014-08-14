# $FreeBSD: head/usr.bin/clang/clang.prog.mk 268804 2014-07-17 18:24:34Z brooks $

NO_PIE=	yes

LLVM_SRCS= ${.CURDIR}/../../../contrib/llvm

.include "../../lib/clang/clang.build.mk"

.for lib in ${LIBDEPS}
DPADD+=	${.OBJDIR}/../../../lib/clang/lib${lib}/lib${lib}.a
LDADD+=	${.OBJDIR}/../../../lib/clang/lib${lib}/lib${lib}.a
.endfor

DPADD+=	${LIBNCURSESW}
LDADD+=	-lncursesw

BINDIR?= /usr/bin

.include <bsd.prog.mk>
