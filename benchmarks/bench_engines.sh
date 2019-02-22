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

# HELPER FOR NIT #

# Run standards benchs on a compiler command
# $1: title
# rest: command to run (executable + options)
function run_compiler()
{
	local title=$1
	shift
	if test "$fast" = truetrue; then
		run_command "$@" ../examples/hello_world.nit -o "hello.$title.bin"
		bench_command "hello" "hello_world" "./hello.$title.bin"
	elif test -n "$fast"; then
		run_command "$@" ../src/nitc.nit -o "nitc.$title.bin"
		bench_command "nitc-g" "nitc --global ../src/test_parser.nit" "./nitc.$title.bin" -v --global --no-cc ../src/test_parser.nit
		run_command "$@" ../src/nit.nit -o "nit.$title.bin"
		bench_command "nit" "nit ../src/test_parser.nit ../src/location.nit" "./nit.$title.bin" -v ../src/test_parser.nit -- -n ../src/location.nit
		run_command "$@" ../tests/bench_bintree_gen.nit -o "bintrees.$title.bin"
		bench_command "bintrees" "bench_bintree_gen 16" "./bintrees.$title.bin" 16
	else
		rm -r out 2> /dev/null
		mkdir out 2> /dev/null
		run_command "$@" ../src/nitc.nit -o "nitc.$title.bin"
		bench_command "nitc-g" "nitc --global --no-cc ../src/nitls.nit" "./nitc.$title.bin" -v --global --no-cc ../src/nitls.nit
		bench_command "nitc-s" "nitc --separate ../src/nitc.nit" "./nitc.$title.bin" -v --no-cc --separate ../src/nitc.nit
		run_command "$@" ../src/nit.nit -o "nit.$title.bin"
		bench_command "nit-queens" "nit queens.nit 8" "./nit.$title.bin" ../lib/ai/examples/queens.nit -q 8
		bench_command "nit-nitcc" "nit nitcc.nit calc.sablecc" "./nit.$title.bin" ../contrib/nitcc/src/nitcc.nit ../contrib/nitcc/examples/calc.sablecc
		rm calc* 2> /dev/null # remove generated cruft
		run_command "$@" ../src/nitdoc.nit -o "nitdoc.$title.bin"
		bench_command "nitdoc" "nitdoc ../src/nitls.nit" "./nitdoc.$title.bin" -v ../src/nitls.nit -d out
		run_command "$@" ../src/nitlight.nit -o "nitlight.$title.bin"
		bench_command "nitlight" "nitlight ../lib/[a-f]*/" "./nitlight.$title.bin" ../lib/[a-f]*/ -d out
		run_command "$@" ../tests/bench_bintree_gen.nit -o "bintrees.$title.bin"
		bench_command "bintrees" "bench_bintree_gen 17" "./bintrees.$title.bin" 17
		#run_command "$@" "../contrib/pep8analysis/src/pep8analysis.nit" -o "pep8a.$title.bin"
		#bench_command "pep8analisis" "bench_pep8analisis" "./pep8a.$title.bin" "../contrib/pep8analysis/tests/privat/"*.pep
		run_command "$@" "../lib/ai/examples/queens.nit" -o "queens.$title.bin"
		bench_command "queens" "bench_queens 13" "./queens.$title.bin" 13
		run_command "$@" "../lib/ai/examples/puzzle.nit" -o "puzzle.$title.bin"
		bench_command "puzzle" "puzzle 15-hard" "./puzzle.$title.bin" kleg.mondcafjhbi
		run_command "$@" "markdown/engines/nitmd/nitmd.nit" -o "nitmd.$title.bin"
		bench_command "nitmd" "markdown" "./nitmd.$title.bin" markdown/benches/out/mixed.md 80
		run_command "$@" ../contrib/jwrapper/src/jwrapper.nit -o "jwrapper.$title.bin"
		bench_command "jwrapper" "jwrapper ant.jar" "./jwrapper.$title.bin" /usr/share/java/ant.jar -o out/ant_jar.nit
		rm -r tmp 2> /dev/null # remove jwrapper output directory
	fi

	rm -r *.bin out 2> /dev/null
}

## HANDLE OPTIONS ##

function usage()
{
	echo "run_bench: [options]* benchname"
	echo "  -v: verbose mode"
	echo "  -n count: number of execution for each bar (default: $count)"
	echo "  --dry: Do not run the commands, just reuse the data and generate the graph"
	echo "  --fast: Run less and faster tests"
	echo "  -h: this help"
}

stop=false
while [ "$stop" = false ]; do
	case "$1" in
		-v) verbose=true; shift;;
		-h) usage; exit;;
		-n) count="$2"; shift; shift;;
		--dry) dry_run=true; shift;;
		--fast) fast=true$fast; shift;;
		--html) shift;; # Deprecated
		*) stop=true
	esac
done

html="index.html"
echo >"$html" "<html><head></head><body>"

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

if test -z "$fast"; then
	make -C markdown/benches
	make -C ../contrib/nitcc
	make pre-build -C ../contrib/jwrapper
fi

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

# Simple script to compare various options on nitc
#
# usage: *name* *common* [NOALL] *options*...
#
# * *name*, the name of the bench
# * *common*, options to use on each case
# * NOALL, optional flag to avoid a last case including all additional options
# * *options*, sequences of options, one for each case
#
# Example: `bench_nitc_options "foo" "-a -b" -c "-d -e"` generates 4 cases:
#
# * only *common*: `nitc -a -b`
# * *common* and first *options*: `nitc -a -b -c`
# * *common* and second *options*: `nitc -a -b -d -e`
# * all: *common* and all *options*: `nitc -a -b -c -d -e`
function bench_nitc_options()
{
	tag=$1
	shift
	common=$1
	shift
	name="$FUNCNAME-$tag$common"
	name=${name// /}
	skip_test "$name" && return
	prepare_res "$name.dat" "no options" "nitc $common without more options"
	run_compiler "nitc-$name" ./nitc $common

	if test "$1" = NOALL; then
		withall=
		shift
	else
		withall=true
	fi

	for opt in "$@"; do
		ot=${opt// /}
		prepare_res "$name$ot.dat" "$opt" "nitc with option $opt"
		run_compiler "nitc-$name" ./nitc $common $opt
	done

	if test -n "$2" -a -n "$withall"; then
		prepare_res "$name-all.dat" "all" "nitc with all options $@"
		run_compiler "nitc-$name" ./nitc $common $@
	fi

	plot "$name.gnu"
}

bench_nitc_options "slower" --global --hardening --no-shortcut-range
bench_nitc_options "nocheck" --global --no-check-null --no-check-autocast --no-check-attr-isset --no-check-covariance --no-check-assert

bench_nitc_options "slower" --separate --hardening --no-shortcut-equal --no-union-attribute --no-shortcut-range --no-inline-intern "--no-gcc-directive likely --no-gcc-directive noreturn" "--no-tag-primitives" "--colo-dead-methods" --type-poset
bench_nitc_options "nocheck" --separate --no-check-null --no-check-autocast --no-check-attr-isset --no-check-covariance --no-check-assert
bench_nitc_options "faster" --separate --skip-dead-methods --inline-coloring-numbers --inline-some-methods --direct-call-monomorph "--inline-some-methods --direct-call-monomorph"

bench_nitc_options "slower" --erasure --hardening --no-shortcut-equal --no-union-attribute --no-shortcut-range --no-inline-intern
bench_nitc_options "nocheck" --erasure --no-check-null --no-check-autocast --no-check-attr-isset --no-check-covariance --no-check-assert --no-check-erasure-cast --no-check-all
bench_nitc_options "faster" --erasure --skip-dead-methods --inline-coloring-numbers --inline-some-methods --direct-call-monomorph --rta

bench_nitc_options "engine" "" NOALL "--separate" "--erasure" "--separate --semi-global" "--erasure --semi-global" "--erasure --semi-global --rta" "--global"
bench_nitc_options "policy" "" NOALL "--separate" "--erasure" "--separate --no-check-covariance" "--erasure --no-check-covariance --no-check-erasure-cast"
bench_nitc_options "nullables" "" "--no-check-attr-isset" "--no-union-attribute"
#bench_nitc_options "linkboost" "" NOALL --trampoline-call --colors-are-symbols "--colors-are-symbols --trampoline-call" "--separate --link-boost" "--separate --colors-are-symbols --guard-call" "--separate --colors-are-symbols --direct-call-monomorph0" "--substitute-monomorph" # --colors-are-symbols is broken :(
bench_nitc_options "linkboost" "" NOALL --trampoline-call --guard-call --substitute-monomorph
bench_nitc_options "monomorph" "" --direct-call-monomorph0 --direct-call-monomorph

bench_nitc_options "misc" "" --log --typing-test-metrics --invocation-metrics --isset-checks-metrics --tables-metrics --no-stacktrace --release --debug #FIXME add --sloppy

# sanitary just run the default configuration, this is used to check that `run_compiler` works.
bench_nitc_options "sanitary" ""

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

echo >>"$html" "</body></html>"

echo >>"$xml" "</testsuite></testsuites>"

if test -n "$died"; then
	echo "Some commands failed"
	exit 1
fi
exit 0
