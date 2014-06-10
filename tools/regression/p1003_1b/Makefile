# $FreeBSD: head/tools/regression/p1003_1b/Makefile 264400 2014-04-13 05:21:56Z imp $

PROG=p1003_1b

SRCS=\
	fifo.c \
	main.c \
	memlock.c \
	prutil.c \
	p26.c \
	sched.c \
	yield.c

MAN=

CFLAGS+=-DNO_MEMLOCK
.include <bsd.prog.mk>
