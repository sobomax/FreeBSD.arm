# $FreeBSD: head/sys/modules/drm2/Makefile 265433 2014-05-06 11:12:56Z se $

.include <src.opts.mk>
.include <bsd.own.mk>

.if ${MACHINE_CPUARCH} == "amd64"
_radeonkms=	radeonkms
. if ${MK_SOURCELESS_UCODE} != "no"
_radeonkmsfw=	radeonkmsfw
. endif
.endif

.if ${MACHINE_CPUARCH} == "i386"
. if ${MACHINE} != "pc98"
_radeonkms=	radeonkms
.  if ${MK_SOURCELESS_UCODE} != "no"
_radeonkmsfw=	radeonkmsfw
.  endif
. endif
.endif

SUBDIR = \
	drm2 \
	i915kms \
	${_radeonkms} \
	${_radeonkmsfw}

.include <bsd.subdir.mk>
