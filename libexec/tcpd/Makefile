# $FreeBSD: head/libexec/tcpd/Makefile 275077 2014-11-25 21:18:18Z bapt $

.include <src.opts.mk>

.PATH: ${.CURDIR}/../../contrib/tcp_wrappers

PROG=	tcpd
MAN=	tcpd.8
CSTD?=	c89
CFLAGS+=-DREAL_DAEMON_DIR=\"/usr/libexec\" \
	-DSEVERITY=LOG_INFO -DRFC931_TIMEOUT=10 \
	-DHOSTS_DENY=\"/etc/hosts.deny\" -DHOSTS_ALLOW=\"/etc/hosts.allow\" \
	-DFACILITY=LOG_DAEMON
.if ${MK_INET6_SUPPORT} != "no"
CFLAGS+=-DINET6
.endif

LIBADD=	wrap

WARNS?=	1

.include <bsd.prog.mk>
