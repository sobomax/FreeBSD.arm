# $Id: Makefile,v 1.6 2006/09/07 21:36:55 max Exp $
# $FreeBSD: head/usr.sbin/bluetooth/bthidd/Makefile 275054 2014-11-25 16:57:27Z bapt $

PROG=		bthidd
MAN=		bthidd.8
#		bthidd.conf.5
SRCS=		bthidd.c client.c hid.c kbd.c lexer.l parser.y server.c \
		session.c

CFLAGS+=	-I${.CURDIR}
DEBUG_FLAGS=	-g

LIBADD+=	bluetooth usbhid

NO_WMISSING_VARIABLE_DECLARATIONS=

.include <bsd.prog.mk>
