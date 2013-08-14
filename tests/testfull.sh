#!/bin/sh
list=""
for x in ../lib/*
do
	bx=`basename $x`
	y="$x/$bx.nit"
	test -f $y && list="$list $y"
done
./tests.sh "$@" *.nit ../examples/*.nit ../examples/leapfrog/leapfrog.nit ../examples/shoot/shoot_logic.nit ../lib/*.nit $list ../src/nitdoc.nit ../src/nits.nit ../src/nitc.nit ../src/test_parser.nit ../src/nit.nit ../src/nitmetrics.nit ../src/nitg.nit ../src/nitx.nit ../src/ni_nitdoc.nit ../src/netdbg.nit
