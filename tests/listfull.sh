#!/bin/sh
list=""
for x in ../lib/*
do
	bx=`basename $x`
	y="$x/$bx.nit"
	test -f $y && list="$list $y"
done
printf "%s\n" "$@" *.nit \
	../examples/*.nit \
	../examples/*/*.nit \
	../examples/shoot/src/shoot_logic.nit \
	../examples/*/src/*_android.nit \
	../examples/*/src/*_linux.nit \
	../examples/*/src/*_null.nit \
	../examples/pnacl/converter/converter.nit \
	../lib/*.nit $list \
	../src/nit*.nit \
	../src/test_*.nit \
	../contrib/*.nit \
	../contrib/*/*.nit \
	../contrib/*/src/*.nit
