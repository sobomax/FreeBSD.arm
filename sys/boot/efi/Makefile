# $FreeBSD: head/sys/boot/efi/Makefile 294029 2016-01-14 18:53:54Z smh $

.include <src.opts.mk>

# In-tree GCC does not support __attribute__((ms_abi)).
.if ${COMPILER_TYPE} != "gcc"

.if ${MACHINE_CPUARCH} == "aarch64" || ${MACHINE_CPUARCH} == "arm"
.if ${MK_FDT} != "no"
SUBDIR+=	fdt
.endif
.endif

.if ${MACHINE_CPUARCH} == "aarch64" || \
    ${MACHINE_CPUARCH} == "amd64" || \
    ${MACHINE_CPUARCH} == "arm"
SUBDIR+=	libefi loader boot1
.endif

.endif # ${COMPILER_TYPE} != "gcc"

.include <bsd.subdir.mk>

