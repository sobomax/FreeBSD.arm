# $FreeBSD: head/lib/libclang_rt/profile/Makefile 288943 2015-10-06 17:53:29Z dim $

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
	InstrProfilingUtil.c

.include <bsd.lib.mk>
