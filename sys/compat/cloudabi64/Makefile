# $FreeBSD: head/sys/compat/cloudabi64/Makefile 285307 2015-07-09 07:20:15Z ed $

all:
	@echo "make sysent only"

sysent: cloudabi64_sysent.c cloudabi64_syscall.h cloudabi64_proto.h \
    cloudabi64_syscalls.c cloudabi64_systrace_args.c

cloudabi64_sysent.c cloudabi64_syscall.h cloudabi64_proto.h \
    cloudabi64_syscalls.c cloudabi64_systrace_args.c: \
    ../../kern/makesyscalls.sh syscalls.master syscalls.conf
	sh ../../kern/makesyscalls.sh syscalls.master syscalls.conf
