# $FreeBSD: head/lib/libclang_rt/Makefile 277146 2015-01-13 19:54:47Z dim $

.include <src.opts.mk>

.if ${MACHINE_CPUARCH} == "i386" || ${MACHINE_CPUARCH} == "amd64"
SUBDIR+= asan\
	 asan_cxx\
	 san\
	 ubsan\
	 ubsan_cxx
.endif

.if ${MACHINE_CPUARCH} == "i386" || ${MACHINE_CPUARCH} == "amd64" || \
    (${MACHINE_CPUARCH} == "arm" && ${MACHINE_ARCH} != "armeb")
SUBDIR+= profile
.endif

.include <bsd.subdir.mk>
