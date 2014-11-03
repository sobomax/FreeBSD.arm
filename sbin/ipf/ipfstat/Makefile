#	$FreeBSD: head/sbin/ipf/ipfstat/Makefile 270168 2014-08-19 15:04:32Z bdrewery $

NOGCCERROR=	# defined

PROG=		ipfstat
SRCS=		ipfstat.c
MAN=		ipfstat.8
DPADD+=  	${LIBCURSES}
LDADD+=  	-lcurses

.include <bsd.prog.mk>
