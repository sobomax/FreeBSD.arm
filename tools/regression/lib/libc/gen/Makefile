# $FreeBSD: head/tools/regression/lib/libc/gen/Makefile 274595 2014-11-16 20:29:57Z ngie $

TESTS=	test-fmtcheck test-fmtmsg test-fnmatch \
	test-ftw test-popen test-posix_spawn test-wordexp

.PHONY: tests
tests: ${TESTS}
	for p in ${TESTS}; do ${.OBJDIR}/$$p; done

.PHONY: clean
clean:
	-rm -f ${TESTS}

sh-tests: test-fnmatch
	./test-fnmatch -s 1 >../../../bin/sh/builtins/case2.0
	./test-fnmatch -s 2 >../../../bin/sh/builtins/case3.0
