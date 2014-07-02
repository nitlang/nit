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
	../contrib/*/src/*.nit \
	../contrib/sort_downloads/src/sort_downloads.nit \
	../contrib/pep8analysis/src/pep8analysis.nit \
	../contrib/github_search_for_jni/src/github_search_for_jni.nit \
	../contrib/inkscape_tools/src/svg_to_png_and_nit.nit \
	../contrib/inkscape_tools/src/svg_to_icons.nit
