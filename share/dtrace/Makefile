# $FreeBSD: head/share/dtrace/Makefile 284964 2015-06-30 18:23:08Z hiren $
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
		nfsattrstats \
		nfsclienttime \
		siftr \
		tcpconn \
		tcpstate \
		tcptrack \
		udptrack

SCRIPTSDIR= ${SHAREDIR}/dtrace

NO_OBJ=

.include <bsd.prog.mk>
