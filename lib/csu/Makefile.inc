# $FreeBSD: head/lib/csu/Makefile.inc 284345 2015-06-13 19:20:56Z sjg $

SSP_CFLAGS=

SED_FIX_NOTE = -i "" -e '/\.note\.tag/s/progbits/note/'

NO_WMISSING_VARIABLE_DECLARATIONS=

.include "../Makefile.inc"

.if ${MK_STAGING} == "yes" && ${.TARGETS:Nall} == ""
FILES?= ${OBJS}
FILESDIR?= ${LIBDIR}
.endif
