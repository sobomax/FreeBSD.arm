#!/bin/sh
# $FreeBSD: head/tests/sys/geom/class/gate/conf.sh 293878 2016-01-14 07:27:14Z ngie $

name="$(mktemp -u gate.XXXXXX)"
class="gate"
base=`basename $0`

. `dirname $0`/../geom_subr.sh
