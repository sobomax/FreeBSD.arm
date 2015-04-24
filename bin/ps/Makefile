# $FreeBSD: head/bin/ps/Makefile 275028 2014-11-25 11:15:40Z bapt $
#	@(#)Makefile	8.1 (Berkeley) 6/2/93

PROG=	ps
SRCS=	fmt.c keyword.c nlist.c print.c ps.c

#
# To support "lazy" ps for non root/wheel users
# add -DLAZY_PS to the cflags.  This helps
# keep ps from being an unnecessary load
# on large systems.
#
CFLAGS+=-DLAZY_PS
LIBADD=	m kvm jail

.include <bsd.prog.mk>
