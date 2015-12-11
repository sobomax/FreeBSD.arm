# $FreeBSD: head/usr.bin/dtc/Makefile 289995 2015-10-26 10:37:17Z theraven $

PROG_CXX=dtc
SRCS=	dtc.cc input_buffer.cc string.cc dtb.cc fdt.cc checking.cc
MAN=	dtc.1

WARNS?=	3

CXXFLAGS+=	-std=c++11

NO_SHARED?=NO

.include <bsd.prog.mk>
