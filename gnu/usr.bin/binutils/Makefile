# $FreeBSD: head/gnu/usr.bin/binutils/Makefile 286730 2015-08-13 17:50:47Z emaste $

.include <src.opts.mk>

SUBDIR=	doc\
	libiberty \
	libbfd \
	libopcodes \
	libbinutils \
	as \
	ld \
	${_objcopy} \
	objdump \

.if ${MK_ELFCOPY_AS_OBJCOPY} == "no"
_objcopy=	objcopy
.endif

.include <bsd.subdir.mk>
