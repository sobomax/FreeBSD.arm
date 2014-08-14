#
# $FreeBSD: head/usr.sbin/pmcstat/Makefile 268804 2014-07-17 18:24:34Z brooks $
#

PROG=	pmcstat
MAN=	pmcstat.8

DPADD=	${LIBELF} ${LIBKVM} ${LIBPMC} ${LIBM} ${LIBNCURSESW}
LDADD=	-lelf -lkvm -lpmc -lm -lncursesw

SRCS=	pmcstat.c pmcstat.h pmcstat_log.c \
pmcpl_callgraph.c pmcpl_gprof.c pmcpl_annotate.c \
pmcpl_annotate_cg.c pmcpl_calltree.c

.include <bsd.prog.mk>
