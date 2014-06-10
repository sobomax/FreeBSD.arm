#
# $FreeBSD: head/tools/regression/pipe/Makefile 264400 2014-04-13 05:21:56Z imp $
#
# "make" then "make regress".
#
PROG=	bigpipetest
MAN=

regress:
	@if ./bigpipetest; then \
		echo "PASS"; \
	else \
		echo "FAIL"; \
	fi

.include <bsd.prog.mk>
