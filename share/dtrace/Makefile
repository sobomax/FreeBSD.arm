# $FreeBSD: head/share/dtrace/Makefile 279768 2015-03-08 04:29:41Z gnn $
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
		nfsclienttime \
		udptrack \
		tcpstate \
		tcptrack \
		tcpconn 

SCRIPTSDIR= ${SHAREDIR}/dtrace

NO_OBJ=

.include <bsd.prog.mk>
