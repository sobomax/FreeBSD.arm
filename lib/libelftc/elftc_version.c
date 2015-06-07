/* $FreeBSD: head/lib/libelftc/elftc_version.c 283616 2015-05-27 14:28:19Z emaste $ */

#include <sys/types.h>
#include <libelftc.h>

const char *
elftc_version(void)
{
	return "elftoolchain r3223M";
}
