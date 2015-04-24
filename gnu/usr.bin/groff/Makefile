# $FreeBSD: head/gnu/usr.bin/groff/Makefile 276551 2015-01-02 18:45:03Z bapt $

SUBDIR=		contrib font man src tmac

.for subdir in ${SUBDIR:Nsrc}
SUBDIR_DEPEND_${subdir}=	src
.endfor

.include <bsd.subdir.mk>
