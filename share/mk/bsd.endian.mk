# $FreeBSD: head/share/mk/bsd.endian.mk 268351 2014-07-07 00:27:09Z marcel $

.if ${MACHINE_ARCH} == "amd64" || \
    ${MACHINE_ARCH} == "i386" || \
    ${MACHINE_ARCH} == "arm"  || \
    ${MACHINE_ARCH} == "armv6"  || \
    ${MACHINE_ARCH} == "armv6hf"  || \
    ${MACHINE_ARCH:Mmips*el} != ""
TARGET_ENDIANNESS= 1234
.elif ${MACHINE_ARCH} == "powerpc" || \
    ${MACHINE_ARCH} == "powerpc64" || \
    ${MACHINE_ARCH} == "sparc64" || \
    ${MACHINE_ARCH} == "armeb" || \
    ${MACHINE_ARCH} == "armv6eb" || \
    ${MACHINE_ARCH:Mmips*} != ""
TARGET_ENDIANNESS= 4321
.endif
