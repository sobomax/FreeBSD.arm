# $FreeBSD: head/lib/libc/secure/Makefile.inc 286760 2015-08-14 03:03:13Z pfg $
#
# libc sources related to security

.PATH: ${LIBC_SRCTOP}/secure

# Sources common to both syscall interfaces:
SRCS+=	\
	stack_protector.c \
	stack_protector_compat.c

SYM_MAPS+=    ${LIBC_SRCTOP}/secure/Symbol.map
