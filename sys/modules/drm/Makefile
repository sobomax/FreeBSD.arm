# $FreeBSD: head/sys/modules/drm/Makefile 269812 2014-08-11 14:50:49Z imp $

SYSDIR?=${.CURDIR}/../..
.include "${SYSDIR}/conf/kern.opts.mk"

# Modules that include binary-only blobs of microcode should be selectable by
# MK_SOURCELESS_UCODE option (see below).

SUBDIR = \
	drm \
	i915 \
	mach64 \
	${_mga} \
	${_r128} \
	${_radeon} \
	savage \
	sis \
	tdfx \
	via

.if ${MK_SOURCELESS_UCODE} != "no"
_mga=		mga
_r128=		r128
_radeon=	radeon
.endif

.include <bsd.subdir.mk>
