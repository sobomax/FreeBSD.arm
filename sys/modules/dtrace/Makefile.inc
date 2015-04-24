# $FreeBSD: head/sys/modules/dtrace/Makefile.inc 275576 2014-12-07 11:21:41Z avg $

IGNORE_PRAGMA=	1

load	:
	-kldload dtrace
.if ${MACHINE_CPUARCH} == "i386"
	-kldload sdt
	-kldload lockstat
	-kldload fbt
	-kldload prototype
.endif
	-kldload profile
	-kldload systrace
	kldstat

unload	:
	-kldunload systrace
	-kldunload profile
.if ${MACHINE_CPUARCH} == "i386"
	-kldunload prototype
	-kldunload fbt
	-kldunload lockstat
	-kldunload sdt
.endif
	-kldunload dtrace
	kldstat
