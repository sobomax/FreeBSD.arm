# $FreeBSD: head/sys/boot/Makefile 281081 2015-04-04 19:56:54Z bapt $

.include <src.opts.mk>

.if ${MK_FORTH} != "no"
# Build the add-in FORTH interpreter.
SUBDIR+=		ficl
SUBDIR+=		forth
.endif

.include <bsd.arch.inc.mk>

# Pick the machine-dependent subdir based on the target architecture.
ADIR=			${MACHINE:S/powerpc64/powerpc/}
.if exists(${.CURDIR}/${ADIR}/.)
SUBDIR+=		${ADIR}
.endif

.include <bsd.subdir.mk>
