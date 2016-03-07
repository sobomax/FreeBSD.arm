/* $FreeBSD: head/lib/libelftc/elftc_version.c 295577 2016-02-12 20:54:02Z emaste $ */

#include <sys/types.h>
#include <libelftc.h>

const char *
elftc_version(void)
{
	return "elftoolchain r3400M";
}
