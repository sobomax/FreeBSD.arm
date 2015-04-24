#	$NetBSD: Makefile,v 1.1 2002/03/01 11:21:58 ad Exp $
# $FreeBSD: head/bin/pkill/Makefile 275028 2014-11-25 11:15:40Z bapt $

.include <src.opts.mk>

PROG=	pkill

LIBADD=	kvm

LINKS=	${BINDIR}/pkill ${BINDIR}/pgrep
MLINKS=	pkill.1 pgrep.1

#
# If considering retirement of these compatibility symlinks,
# keep in mind that pkill is installed to /usr/bin in other
# OS types, e.g., NetBSD, OpenBSD, Solaris, and Linux.
#
SYMLINKS=	${BINDIR}/pkill /usr/bin/pkill
SYMLINKS+=	${BINDIR}/pgrep /usr/bin/pgrep

.if ${MK_TESTS} != "no"
SUBDIR+= tests
.endif

.include <bsd.prog.mk>
