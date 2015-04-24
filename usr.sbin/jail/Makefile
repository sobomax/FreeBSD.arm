# $FreeBSD: head/usr.sbin/jail/Makefile 275054 2014-11-25 16:57:27Z bapt $

.include <src.opts.mk>

PROG=	jail
MAN=	jail.8 jail.conf.5
SRCS=	jail.c command.c config.c state.c jailp.h jaillex.l jailparse.y y.tab.h

LIBADD=	jail kvm util l

NO_WMISSING_VARIABLE_DECLARATIONS=

YFLAGS+=-v
CFLAGS+=-I. -I${.CURDIR}

.if ${MK_INET6_SUPPORT} != "no"
CFLAGS+= -DINET6
.endif
.if ${MK_INET_SUPPORT} != "no"
CFLAGS+= -DINET
.endif

CLEANFILES= y.output

.include <bsd.prog.mk>
