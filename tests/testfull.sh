#!/bin/sh
list=""
for x in ../lib/*
do
	bx=`basename $x`
	y="$x/$bx.nit"
	test -f $y && list="$list $y"
done
./tests.sh "$@" *.nit \
	../examples/*.nit \
	../examples/leapfrog/leapfrog.nit \
	../examples/shoot/src/shoot_logic.nit \
	../lib/*.nit $list \
	../src/nitdoc.nit \
	../src/test_parser.nit \
	../src/test_phase.nit \
	../src/nit.nit \
	../src/nitmetrics.nit \
	../src/nitg.nit \
	../src/nitx.nit \
	../src/nitunit.nit \
	../src/netdbg.nit \
	../src/nitlight.nit \
	../contrib/sort_downloads/src/sort_downloads.nit
