# $FreeBSD: head/usr.bin/clang/clang.prog.mk 284345 2015-06-13 19:20:56Z sjg $

LLVM_SRCS= ${.CURDIR}/../../../contrib/llvm

.include "../../lib/clang/clang.build.mk"

.for lib in ${LIBDEPS}
DPADD+=	${.OBJDIR}/../../../lib/clang/lib${lib}/lib${lib}.a
LDADD+=	${.OBJDIR}/../../../lib/clang/lib${lib}/lib${lib}.a
.endfor

DPADD+=	${LIBNCURSESW}
LDADD+=	-lncursesw

BINDIR?= /usr/bin


.if ${MK_SHARED_TOOLCHAIN} == "no"
NO_SHARED= yes
.endif

.include <bsd.prog.mk>
