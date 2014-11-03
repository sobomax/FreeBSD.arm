# $FreeBSD: head/usr.sbin/cron/cron/Makefile 270168 2014-08-19 15:04:32Z bdrewery $

PROG=	cron
MAN=	cron.8
SRCS=	cron.c database.c do_command.c job.c user.c popen.c

CFLAGS+= -DLOGIN_CAP -DPAM

DPADD=	${LIBCRON} ${LIBPAM} ${LIBUTIL}
LDADD=	${LIBCRON} ${MINUSLPAM} -lutil

WARNS?=	2

.include <bsd.prog.mk>
