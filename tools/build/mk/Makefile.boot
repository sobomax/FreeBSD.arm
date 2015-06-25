# $FreeBSD: head/tools/build/mk/Makefile.boot 284345 2015-06-13 19:20:56Z sjg $

CFLAGS+=	-I${WORLDTMP}/legacy/usr/include
DPADD+=		${WORLDTMP}/legacy/usr/lib/libegacy.a
LDADD+=		-legacy
LDFLAGS+=	-L${WORLDTMP}/legacy/usr/lib

# we do not want to capture dependencies refering to the above
UPDATE_DEPENDFILE= no
