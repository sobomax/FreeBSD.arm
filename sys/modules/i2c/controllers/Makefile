# $FreeBSD: head/sys/modules/i2c/controllers/Makefile 283766 2015-05-30 12:17:18Z grembo $

.if ${MACHINE} == "pc98"
SUBDIR = lpbb
.else
SUBDIR = alpm amdpm amdsmb ichiic ichsmb intpm ismt nfsmb viapm lpbb pcf
.endif

.include <bsd.subdir.mk>
