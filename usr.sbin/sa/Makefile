# $FreeBSD: head/usr.sbin/sa/Makefile 265420 2014-05-06 04:22:01Z imp $

.include <src.opts.mk>

.PATH: ${.CURDIR}/../../usr.bin/lastcomm

PROG=	sa
MAN=	sa.8
SRCS=	main.c db.c pdb.c usrdb.c readrec.c

.if ${MK_TESTS} != "no"
SUBDIR+= tests
.endif

.include <bsd.prog.mk>
