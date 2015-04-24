# $FreeBSD: head/lib/libexecinfo/Makefile 275024 2014-11-25 11:07:26Z bapt $

LIBEXECINFO=	${.CURDIR}/../../contrib/libexecinfo

LIB=		execinfo
SHLIB_MAJOR=	1

.PATH:		${LIBEXECINFO}

INCS=		execinfo.h
SRCS=		backtrace.c symtab.c unwind.c

LIBADD=		elf

MAN=		backtrace.3

MLINKS+=	backtrace.3 backtrace_symbols.3
MLINKS+=	backtrace.3 backtrace_symbols_fmt.3
MLINKS+=	backtrace.3 backtrace_symbols_fd.3
MLINKS+=	backtrace.3 backtrace_symbols_fd_fmt.3

.include <bsd.lib.mk>
