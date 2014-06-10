#	$FreeBSD: head/sbin/ipf/ipfstat/Makefile 267233 2014-06-08 17:29:31Z bdrewery $

NOGCCERROR=	# defined

PROG=		ipfstat
SRCS=		ipfstat.c
MAN=		ipfstat.8
DPADD+=  	${LIBCURSES}
LDADD+=  	-lcurses

NO_PIE=	yes

.include <bsd.prog.mk>
