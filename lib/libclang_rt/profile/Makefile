# $FreeBSD: head/lib/libclang_rt/profile/Makefile 276857 2015-01-08 22:40:56Z dim $

.include <bsd.init.mk>

LIB=	clang_rt.profile-${CRTARCH}

.PATH:	${CRTSRC}/lib/profile

SRCS=	GCDAProfiling.c\
	InstrProfiling.c\
	InstrProfilingBuffer.c\
	InstrProfilingFile.c\
	InstrProfilingPlatformDarwin.c\
	InstrProfilingPlatformOther.c\
	InstrProfilingRuntime.cc\

.include <bsd.lib.mk>
