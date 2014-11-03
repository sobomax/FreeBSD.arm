# $FreeBSD: head/lib/libc/arm/Makefile.inc 272369 2014-10-01 16:08:19Z andrew $
#
# Machine dependent definitions for the arm architecture.
#

SOFTFLOAT_BITS=32

# Long double is just double precision.
MDSRCS+=machdep_ldisd.c
SYM_MAPS+=${LIBC_SRCTOP}/arm/Symbol.map

.include "${LIBC_SRCTOP}/arm/aeabi/Makefile.inc"

.if ${MACHINE_ARCH:Marm*hf*} != ""
SYM_MAPS+=${LIBC_SRCTOP}/arm/Symbol_vfp.map
.endif

