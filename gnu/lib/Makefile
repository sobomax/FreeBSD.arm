# $FreeBSD: head/gnu/lib/Makefile 289393 2015-10-15 22:55:08Z bdrewery $

.include <src.opts.mk>

SUBDIR= csu libgcc libdialog libregex

.if ${MK_GCC} != "no"
SUBDIR+= libgcov libgomp
.endif

.if ${MK_SSP} != "no"
SUBDIR+= libssp
.endif

.if ${MK_TESTS} != "no"
SUBDIR+= tests
.endif

.if ${MK_BINUTILS} != "no" && ${MK_GDB} != "no"
SUBDIR+=	libreadline
.endif

# libsupc++ uses libstdc++ headers, although 'make includes' should
# have taken care of that already.
.if ${MK_GNUCXX} != "no"
SUBDIR+= libstdc++ libsupc++
SUBDIR_DEPENDS_libsupc++:= libstdc++
.endif

SUBDIR_PARALLEL=

.include <bsd.subdir.mk>
