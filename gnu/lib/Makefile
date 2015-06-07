# $FreeBSD: head/gnu/lib/Makefile 283543 2015-05-25 20:29:35Z bapt $

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

.if ${MK_GDB} != "no"
SUBDIR+=	libreadline
.endif

# libsupc++ uses libstdc++ headers, although 'make includes' should
# have taken care of that already.
.if ${MK_GNUCXX} != "no"
SUBDIR+= libstdc++ libsupc++
.endif

.include <bsd.subdir.mk>
