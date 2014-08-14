# $FreeBSD: head/sys/modules/dummynet/Makefile 269540 2014-08-04 22:37:02Z imp $

.PATH:  ${.CURDIR}/../../netpfil/ipfw
KMOD=   dummynet
SRCS=   ip_dummynet.c
SRCS+= ip_dn_glue.c ip_dn_io.c
SRCS+= dn_heap.c dn_sched_fifo.c dn_sched_qfq.c dn_sched_rr.c dn_sched_wf2q.c 
SRCS+= dn_sched_prio.c
SRCS+=	opt_inet6.h

.include <bsd.kmod.mk>
