# $FreeBSD: head/share/dtrace/Makefile 269765 2014-08-09 20:40:03Z jmg $
#
# Hand installing our scripts and optionally (based on MK_CDDL) installing
# the DTraceToolkit.
#

.include <src.opts.mk>

SUBDIR= ${_toolkit}

.if ${MK_CDDL} != "no"
_toolkit=	toolkit
.endif

SCRIPTS=	disklatency \
		disklatencycmd \
		hotopen \
		nfsclienttime

SCRIPTSDIR= ${SHAREDIR}/dtrace

NO_OBJ=

.include <bsd.prog.mk>
