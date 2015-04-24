# $FreeBSD: head/bin/expr/Makefile 280357 2015-03-22 22:40:32Z dim $

.include <src.opts.mk>

PROG=	expr
SRCS=	expr.y
YFLAGS=

# expr relies on signed integer wrapping
CFLAGS+= -fwrapv

NO_WMISSING_VARIABLE_DECLARATIONS=

.if ${MK_TESTS} != "no"
SUBDIR+=	tests
.endif

.include <bsd.prog.mk>
