# $FreeBSD: head/usr.sbin/crunch/crunchgen/Makefile 267233 2014-06-08 17:29:31Z bdrewery $

PROG=	crunchgen
SRCS=	crunchgen.c crunched_skel.c
CLEANFILES+= crunched_skel.c

NO_PIE=	yes

crunched_skel.c: crunched_main.c
	sh -e ${.CURDIR}/mkskel.sh ${.CURDIR}/crunched_main.c >crunched_skel.c

.include <bsd.prog.mk>
