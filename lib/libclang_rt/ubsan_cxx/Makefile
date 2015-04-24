# $FreeBSD: head/lib/libclang_rt/ubsan_cxx/Makefile 276857 2015-01-08 22:40:56Z dim $

.include <bsd.init.mk>

LIB=	clang_rt.ubsan_cxx-${CRTARCH}

CXXFLAGS+=-frtti

.PATH:	${CRTSRC}/lib/ubsan

SRCS=	ubsan_handlers_cxx.cc\
	ubsan_type_hash.cc

.include <bsd.lib.mk>
