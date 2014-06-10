# $FreeBSD: head/usr.bin/clang/clang.prog.mk 267233 2014-06-08 17:29:31Z bdrewery $

NO_PIE=	yes

LLVM_SRCS= ${.CURDIR}/../../../contrib/llvm

.include "../../lib/clang/clang.build.mk"

.for lib in ${LIBDEPS}
DPADD+=	${.OBJDIR}/../../../lib/clang/lib${lib}/lib${lib}.a
LDADD+=	${.OBJDIR}/../../../lib/clang/lib${lib}/lib${lib}.a
.endfor

DPADD+=	${LIBNCURSES}
LDADD+=	-lncurses

BINDIR?= /usr/bin

.include <bsd.prog.mk>
