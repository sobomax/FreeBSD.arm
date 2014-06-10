# $FreeBSD: head/usr.sbin/cron/cron/Makefile 267233 2014-06-08 17:29:31Z bdrewery $

PROG=	cron
MAN=	cron.8
SRCS=	cron.c database.c do_command.c job.c user.c popen.c

CFLAGS+= -DLOGIN_CAP -DPAM

DPADD=	${LIBCRON} ${LIBPAM} ${LIBUTIL}
LDADD=	${LIBCRON} ${MINUSLPAM} -lutil

WARNS?=	2

NO_PIE=	yes

.include <bsd.prog.mk>
