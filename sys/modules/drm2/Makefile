# $FreeBSD: head/sys/modules/drm2/Makefile 280183 2015-03-17 18:50:33Z dumbbell $

SYSDIR?=${.CURDIR}/../..
.include "${SYSDIR}/conf/kern.opts.mk"

SUBDIR_PARALLEL=

.if ${MACHINE_CPUARCH} == "amd64"
_i915kms=	i915kms
_radeonkms=	radeonkms
. if ${MK_SOURCELESS_UCODE} != "no"
_radeonkmsfw=	radeonkmsfw
. endif
.endif

.if ${MACHINE_CPUARCH} == "i386"
. if ${MACHINE} != "pc98"
_i915kms=	i915kms
_radeonkms=	radeonkms
.  if ${MK_SOURCELESS_UCODE} != "no"
_radeonkmsfw=	radeonkmsfw
.  endif
. endif
.endif

.if ${MACHINE_CPUARCH} == "powerpc"
_radeonkms=	radeonkms
. if ${MK_SOURCELESS_UCODE} != "no"
_radeonkmsfw=	radeonkmsfw
. endif
.endif

SUBDIR = \
	drm2 \
	${_i915kms} \
	${_radeonkms} \
	${_radeonkmsfw}

.include <bsd.subdir.mk>
