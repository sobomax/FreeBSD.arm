# $FreeBSD: head/share/mk/src.sys.mk 266349 2014-05-17 20:31:34Z imp $

# Note: This file is also duplicated in the sys/conf/kern.pre.mk so
# it will always grab SRCCONF, even if it isn't being built in-tree
# to preserve historical (and useful) behavior. Changes here need to
# be reflected there so SRCCONF isn't included multiple times.

# Allow user to configure things that only effect src tree builds.
SRCCONF?=	/etc/src.conf
.if (exists(${SRCCONF}) || ${SRCCONF} != "/etc/src.conf") && !target(_srcconf_included_)
.include "${SRCCONF}"
_srcconf_included_:
.endif
