#!/bin/bash
# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# This shell script helps running benchmarks

# TODO: cleanup and libify the helper-parts

source ./bench_common.sh
source ./bench_plot.sh

## CONFIGURATION OPTIONS ##

# Default number of times a command must be run with bench_command
# Can be overrided with 'the option -n'
count=2

### HELPER FUNCTIONS ##

function die()
{
	echo >&2 "error: $*"
	died=1
}

# HELPER FOR NIT #

# Run standards benchs on a compiler command
# $1: title
# rest: command to run (executable + options)
function run_compiler()
{
	local title=$1
	shift
	if test -n "$fast"; then
		run_command "$@" ../src/nitc.nit -o "nitc.$title.bin"
		bench_command "nitc-g" "nitc --global ../src/test_parser.nit" "./nitc.$title.bin" -v --global --no-cc ../src/test_parser.nit
		run_command "$@" ../src/nit.nit -o "nit.$title.bin"
		bench_command "nit" "nit ../src/test_parser.nit ../src/location.nit" "./nit.$title.bin" -v ../src/test_parser.nit -- -n ../src/location.nit
		run_command "$@" ../examples/shoot/src/shoot_logic.nit -o "shoot.$title.bin"
		bench_command "shoot" "shoot_logic" "./shoot.$title.bin"
		run_command "$@" ../tests/bench_bintree_gen.nit -o "bintrees.$title.bin"
		bench_command "bintrees" "bench_bintree_gen 16" "./bintrees.$title.bin" 16
	else
		run_command "$@" ../src/nitc.nit -o "nitc.$title.bin"
		bench_command "nitc-g" "nitc --global --no-cc ../src/nitls.nit" "./nitc.$title.bin" -v --global --no-cc ../src/nitls.nit
		bench_command "nitc-s" "nitc --separate ../src/nitc.nit" "./nitc.$title.bin" -v --no-cc --separate ../src/nitc.nit
		run_command "$@" ../src/nit.nit -o "nit.$title.bin"
		bench_command "nit" "nit ../src/test_parser.nit ../src/nitls.nit" "./nit.$title.bin" -v ../src/test_parser.nit -- -n ../src/nitls.nit
		run_command "$@" ../src/nitdoc.nit -o "nitdoc.$title.bin"
		rm -r out 2> /dev/null
		mkdir out 2> /dev/null
		bench_command "nitdoc" "nitdoc ../src/nitls.nit" "./nitdoc.$title.bin" -v ../src/nitls.nit -d out
		run_command "$@" ../examples/shoot/src/shoot_logic.nit -o "shoot.$title.bin"
		bench_command "shoot" "shoot_logic 15" "./shoot.$title.bin" 15
		run_command "$@" ../tests/bench_bintree_gen.nit -o "bintrees.$title.bin"
		bench_command "bintrees" "bench_bintree_gen 17" "./bintrees.$title.bin" 17
		#run_command "$@" "../contrib/pep8analysis/src/pep8analysis.nit" -o "pep8a.$title.bin"
		#bench_command "pep8analisis" "bench_pep8analisis" "./pep8a.$title.bin" "../contrib/pep8analysis/tests/privat/"*.pep
		run_command "$@" "../lib/ai/examples/queens.nit" -o "queens.$title.bin"
		bench_command "queens" "bench_queens 13" "./queens.$title.bin" 13
		run_command "$@" "../lib/ai/examples/puzzle.nit" -o "puzzle.$title.bin"
		bench_command "puzzle" "puzzle 15-hard" "./puzzle.$title.bin" kleg.mondcafjhbi
	fi

	rm -r *.bin .nit_compile out
}

## HANDLE OPTIONS ##

function usage()
{
	echo "run_bench: [options]* benchname"
	echo "  -v: verbose mode"
	echo "  -n count: number of execution for each bar (default: $count)"
	echo "  --dry: Do not run the commands, just reuse the data and generate the graph"
	echo "  --fast: Run less and faster tests"
	echo "  --html: Generate and HTML output"
	echo "  -h: this help"
}

stop=false
while [ "$stop" = false ]; do
	case "$1" in
		-v) verbose=true; shift;;
		-h) usage; exit;;
		-n) count="$2"; shift; shift;;
		--dry) dry_run=true; shift;;
		--fast) fast=true; shift;;
		--html) html="index.html"; echo >"$html" "<html><head></head><body>"; shift;;
		*) stop=true
	esac
done

xml="bench_engines.xml"
echo "<testsuites><testsuite>" > "$xml"

NOTSKIPED="$*"

if test -z "$NOTSKIPED"; then
	usage
	echo "List of available benches:"
	echo "* all: run all the benches"
fi

## COMPILE ENGINES

# get the bootstrapped nitc
cp ../bin/nitc .

## EFFECTIVE BENCHS ##

function bench_steps()
{
	name="$FUNCNAME"
	skip_test "$name" && return
	prepare_res "$name-nitc.dat" "nitc-g" "Various steps of nitc --global"
	bench_command "parse" "" ./nitc --global --only-parse ../src/nitc.nit
	bench_command "metamodel" "" ./nitc --global --only-metamodel ../src/nitc.nit
	bench_command "generate c" "" ./nitc --global --no-cc ../src/nitc.nit
	bench_command "full" "" ./nitc --global ../src/nitc.nit -o "nitc_nitc.bin"

	prepare_res "$name-nitc-s.dat" "nitc-s" "Various steps of nitc --separate"
	bench_command "parse" "" ./nitc --separate --only-parse ../src/nitc.nit
	bench_command "metamodel" "" ./nitc --separate --only-metamodel ../src/nitc.nit
	bench_command "generate c" "" ./nitc --separate --no-cc ../src/nitc.nit
	bench_command "full" "" ./nitc --separate ../src/nitc.nit -o "nitc_nitc-e.bin"

	prepare_res "$name-nitc-e.dat" "nitc-e" "Various steps of nitc --erasure"
	bench_command "parse" "" ./nitc --erasure --only-parse ../src/nitc.nit
	bench_command "metamodel" "" ./nitc --erasure --only-metamodel ../src/nitc.nit
	bench_command "generate c" "" ./nitc --erasure --no-cc ../src/nitc.nit
	bench_command "full" "" ./nitc --erasure ../src/nitc.nit -o "nitc_nitc-e.bin"

	plot "$name.gnu"
}
bench_steps

# $#: options to compare
function bench_nitc-g_options()
{
	tag=$1
	shift
	name="$FUNCNAME-$tag"
	skip_test "$name" && return
	prepare_res "$name.dat" "no options" "nitc-g without options"
	run_compiler "nitc-g" ./nitc --global

	if test "$1" = NOALL; then
		shift
	elif test -n "$2"; then
		prepare_res "$name-all.dat" "all" "nitc-g with all options $@"
		run_compiler "nitc-g-$tag" ./nitc --global $@
	fi

	for opt in "$@"; do
		ot=${opt// /+}
		prepare_res "$name$ot.dat" "$opt" "nitc-g with option $opt"
		run_compiler "nitc-g$ot" ./nitc --global $opt
	done

	plot "$name.gnu"
}
bench_nitc-g_options "slower" --hardening --no-shortcut-range
bench_nitc-g_options "nocheck" --no-check-null --no-check-autocast --no-check-attr-isset --no-check-covariance --no-check-assert

function bench_nitc-s_options()
{
	tag=$1
	shift
	name="$FUNCNAME-$tag"
	skip_test "$name" && return
	prepare_res "$name.dat" "no options" "nitc-s without options"
	run_compiler "nitc-s" ./nitc --separate

	if test "$1" = NOALL; then
		shift
	elif test -n "$2"; then
		prepare_res "$name-all.dat" "all" "nitc-s with all options $@"
		run_compiler "nitc-s-$tag" ./nitc --separate $@
	fi

	for opt in "$@"; do
		ot=${opt// /+}
		prepare_res "$name-$ot.dat" "$opt" "nitc-s with option $opt"
		run_compiler "nitc-s$ot" ./nitc --separate $opt
	done

	plot "$name.gnu"
}
bench_nitc-s_options "slower" --hardening --no-shortcut-equal --no-union-attribute --no-shortcut-range --no-inline-intern "--no-gcc-directive likely --no-gcc-directive noreturn"
bench_nitc-s_options "nocheck" --no-check-null --no-check-autocast --no-check-attr-isset --no-check-covariance --no-check-assert
bench_nitc-s_options "faster" --skip-dead-methods --inline-coloring-numbers --inline-some-methods --direct-call-monomorph "--inline-some-methods --direct-call-monomorph" ""

function bench_nitc-e_options()
{
	tag=$1
	shift
	name="$FUNCNAME-$tag"
	skip_test "$name" && return
	prepare_res "$name.dat" "no options" "nitc-e without options"
	run_compiler "nitc-e" ./nitc --erasure

	if test "$1" = NOALL; then
		shift
	elif test -n "$2"; then
		prepare_res "$name-all.dat" "all" "nitc-e with all options $@"
		run_compiler "nitc-e-$tag" ./nitc --erasure $@
	fi

	for opt in "$@"; do
		ot=${opt// /+}
		prepare_res "$name$ot.dat" "$opt" "nitc-e with option $opt"
		run_compiler "nitc-e$ot" ./nitc --erasure $opt
	done

	plot "$name.gnu"
}
bench_nitc-e_options "slower" --hardening --no-shortcut-equal --no-union-attribute --no-shortcut-range --no-inline-intern
bench_nitc-e_options "nocheck" --no-check-null --no-check-autocast --no-check-attr-isset --no-check-covariance --no-check-assert --no-check-erasure-cast
bench_nitc-e_options "faster" --skip-dead-methods --inline-coloring-numbers --inline-some-methods --direct-call-monomorph --rta

function bench_engines()
{
	name="$FUNCNAME"
	skip_test "$name" && return
	prepare_res "$name-nitc-s.dat" "nitc-s" "nitc with --separate"
	run_compiler "nitc-s" ./nitc --separate
	prepare_res "$name-nitc-e.dat" "nitc-e" "nitc with --erasure"
	run_compiler "nitc-e" ./nitc --erasure
	prepare_res "$name-nitc-sg.dat" "nitc-sg" "nitc with --separate --semi-global"
	run_compiler "nitc-sg" ./nitc --separate --semi-global
	prepare_res "$name-nitc-eg.dat" "nitc-eg" "nitc with --erasure --semi-global"
	run_compiler "nitc-eg" ./nitc --erasure --semi-global
	prepare_res "$name-nitc-egt.dat" "nitc-egt" "nitc with --erasure --semi-global --rta"
	run_compiler "nitc-egt" ./nitc --erasure --semi-global --rta
	prepare_res "$name-nitc-g.dat" "nitc-g" "nitc with --global"
	run_compiler "nitc-g" ./nitc --global
	plot "$name.gnu"
}
bench_engines

function bench_nitc-e_gc()
{
	name="$FUNCNAME"
	skip_test "$name" && return
	prepare_res "$name-nitc-e.dat" "nitc-e" "nitc with --erasure"
	run_compiler "nitc-e" ./nitc --erasure
	prepare_res "$name-nitc-e-malloc.dat" "nitc-e-malloc" "nitc with --erasure and malloc"
	NIT_GC_OPTION="malloc" run_compiler "nitc-e-malloc" ./nitc --erasure
	prepare_res "$name-nitc-e-large.dat" "nitc-e-large" "nitc with --erasure and large"
	NIT_GC_OPTION="large" run_compiler "nitc-e-large" ./nitc --erasure
	plot "$name.gnu"
}
bench_nitc-e_gc

function bench_cc_nitc-e()
{
	name="$FUNCNAME"
	skip_test "$name" && return
	for o in "gcc0:CC=\"ccache gcc\" CFLAGS=-O0" "cl0:CC=\"ccache clang\" CFLAGS=-O0" "gccs:CC=\"ccache gcc\" CFLAGS=-Os" "cls:CC=\"ccache clang\" CFLAGS=-Os" "gcc2:CC=\"ccache gcc\" CFLAGS=-O2" "cl2:CC=\"ccache clang\" CFLAGS=-O2" "gcc3:CC=\"ccache gcc\" CFLAGS=-O3"  "cl3:CC=\"ccache clang\" CFLAGS=-O3"; do
		f=`echo "$o" | cut -f1 -d:`
		o=`echo "$o" | cut -f2 -d:`
		prepare_res "$name-nitc-e-$f.dat" "nitc-e-$f" "nitc with --erasure --make-flags $o"
		run_compiler "nitc-e-$f" ./nitc --erasure --make-flags "$o"
	done
	plot "$name.gnu"
}
bench_cc_nitc-e

function bench_policy()
{
	name="$FUNCNAME"
	skip_test "$name" && return
	prepare_res "$name-nitc-s.dat" "nitc-s" "nitc with --separate"
	run_compiler "nitc-s" ./nitc --separate
	prepare_res "$name-nitc-e.dat" "nitc-e" "nitc with --erasure"
	run_compiler "nitc-e" ./nitc --erasure
	prepare_res "$name-nitc-su.dat" "nitc-su" "nitc with --separate --no-check-covariance"
	run_compiler "nitc-su" ./nitc --separate --no-check-covariance
	prepare_res "$name-nitc-eu.dat" "nitc-eu" "nitc with --erasure --no-check-covariance --no-check-erasure-cast"
	run_compiler "nitc-eu" ./nitc --erasure --no-check-covariance --no-check-erasure-cast
	plot "$name.gnu"
}
bench_policy

function bench_nullables()
{
	name="$FUNCNAME"
	skip_test "$name" && return
	prepare_res "$name-nitc.dat" "nitc" "nitc no options"
	run_compiler "nitc" ./nitc --separate
	prepare_res "$name-nitc-ni.dat" "nitc-ni" "nitc --no-check-attr-isset"
	run_compiler "nitc" ./nitc --separate --no-check-attr-isset
	prepare_res "$name-nitc-nu.dat" "nitc-nu" "nitc --no-union-attribute"
	run_compiler "nitc" ./nitc --separate --no-union-attribute
	prepare_res "$name-nitc-nu-ni.dat" "nitc-nu-ni" "nitc --no-union-attribute --no-check-attr-isset"
	run_compiler "nitc" ./nitc --separate --no-union-attribute --no-check-attr-isset
	plot "$name.gnu"
}
bench_nullables

function bench_compilation_time
{
	name="$FUNCNAME"
	skip_test "$name" && return
	prepare_res "$name-nitc-g.dat" "nitc-g" "nitc --global"
	for i in ../examples/hello_world.nit ../src/test_parser.nit ../src/nitc.nit; do
		bench_command `basename "$i" .nit` "" ./nitc --global "$i" --no-cc
	done
	prepare_res "$name-nitc-s.dat" "nitc-s" "nitc --separate"
	for i in ../examples/hello_world.nit ../src/test_parser.nit ../src/nitc.nit; do
		bench_command `basename "$i" .nit` "" ./nitc --separate "$i" --no-cc
	done
	prepare_res "$name-nitc-e.dat" "nitc-e" "nitc --erasure"
	for i in ../examples/hello_world.nit ../src/test_parser.nit ../src/nitc.nit; do
		bench_command `basename "$i" .nit` "" ./nitc --erasure "$i" --no-cc
	done
	plot "$name.gnu"
}
bench_compilation_time

function bench_linkboost()
{
	name="$FUNCNAME"
	skip_test "$name" && return
	prepare_res "$name-nitc-st.dat" "nitc-st" "nitc with --separate --trampoline-call"
	run_compiler "nitc-st" ./nitc --separate --trampoline-call
	prepare_res "$name-nitc-s.dat" "nitc-s" "nitc with --separate"
	run_compiler "nitc-s" ./nitc --separate
	prepare_res "$name-nitc-sc.dat" "nitc-sc" "nitc with --separate --colors-are-symbols"
	run_compiler "nitc-sc" ./nitc --separate --colors-are-symbols
	prepare_res "$name-nitc-sct.dat" "nitc-sct" "nitc with --separate --colors-are-symbols --trampoline-call"
	run_compiler "nitc-sct" ./nitc --separate --colors-are-symbols --trampoline-call
	prepare_res "$name-nitc-sl.dat" "nitc-sl" "nitc with --separate --link-boost"
	run_compiler "nitc-scts" ./nitc --separate --link-boost
	prepare_res "$name-nitc-sg.dat" "nitc-sg" "nitc with --separate --semi-global"
	run_compiler "nitc-sg" ./nitc --separate --semi-global
	plot "$name.gnu"
}
bench_linkboost

if test -n "$html"; then
	echo >>"$html" "</body></html>"
fi

echo >>"$xml" "</testsuite></testsuites>"

if test -n "$died"; then
	echo "Some commands failed"
	exit 1
fi
exit 0
