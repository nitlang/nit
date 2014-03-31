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
	../examples/*/src/*_android.nit \
	../examples/*/src/*_linux.nit \
	../lib/*.nit $list \
	../src/nit*.nit \
	../src/test_*.nit \
	../contrib/sort_downloads/src/sort_downloads.nit \
	../contrib/pep8analysis/src/pep8analysis.nit
