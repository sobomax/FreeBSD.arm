/* $FreeBSD: head/lib/libelftc/elftc_version.c 281147 2015-04-06 13:55:33Z emaste $ */

#include <sys/types.h>
#include <libelftc.h>

const char *
elftc_version(void)
{
	return "elftoolchain r3179M";
}
