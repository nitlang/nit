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

pep8analysis=../../pep8analysis

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
		run_command "$@" ../src/nitg.nit -o "nitg.$title.bin"
		bench_command "nitg-g" "nitg --global ../src/test_parser.nit" "./nitg.$title.bin" -v --global --no-cc ../src/test_parser.nit
		run_command "$@" ../src/nit.nit -o "nit.$title.bin"
		bench_command "nit" "nit ../src/test_parser.nit ../src/location.nit" "./nit.$title.bin" -v ../src/test_parser.nit -- -n ../src/location.nit
		run_command "$@" ../examples/shoot/src/shoot_logic.nit -o "shoot.$title.bin"
		bench_command "shoot" "shoot_logic" "./shoot.$title.bin"
		run_command "$@" ../tests/bench_bintree_gen.nit -o "bintrees.$title.bin"
		bench_command "bintrees" "bench_bintree_gen 16" "./bintrees.$title.bin" 16
	else
		run_command "$@" ../src/nitg.nit -o "nitg.$title.bin"
		bench_command "nitg-g" "nitg --global --no-cc ../src/nitmetrics.nit" "./nitg.$title.bin" -v --global --no-cc ../src/nitmetrics.nit
		bench_command "nitg-s" "nitg --separate ../src/nitg.nit" "./nitg.$title.bin" -v --no-cc --separate ../src/nitg.nit
		run_command "$@" ../src/nit.nit -o "nit.$title.bin"
		bench_command "nit" "nit ../src/test_parser.nit ../src/rapid_type_analysis.nit" "./nit.$title.bin" -v ../src/test_parser.nit -- -n ../src/rapid_type_analysis.nit
		run_command "$@" ../examples/shoot/src/shoot_logic.nit -o "shoot.$title.bin"
		bench_command "shoot" "shoot_logic 30" "./shoot.$title.bin" 30
		run_command "$@" ../tests/bench_bintree_gen.nit -o "bintrees.$title.bin"
		bench_command "bintrees" "bench_bintree_gen 18" "./bintrees.$title.bin" 18
		if test -f "$pep8analysis/src/pep8analysis.nit"; then
			run_command "$@" "$pep8analysis/src/pep8analysis.nit" -I "$pep8analysis/lib" -o "pep8a.$title.bin"
			bench_command "pep8analisis" "bench_bintree_gen 18" "./pep8a.$title.bin" "$pep8analysis/tests/privat/"*.pep
		fi
	fi
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

NOTSKIPED="$*"

if test -z "$NOTSKIPED"; then
	usage
	echo "List of available benches:"
	echo "* all: run all the benches"
fi

## COMPILE ENGINES

# force to use the last nitg, not the bootstraped one
test -f ./nitg || ../bin/nitg ../src/nitg.nit -v

## EFFECTIVE BENCHS ##

function bench_steps()
{
	name="$FUNCNAME"
	skip_test "$name" && return
	prepare_res "$name-nitg.dat" "nitg-g" "Various steps of nitg --global"
	bench_command "parse" "" ./nitg --global --only-parse ../src/nitg.nit
	bench_command "metamodel" "" ./nitg --global --only-metamodel ../src/nitg.nit
	bench_command "generate c" "" ./nitg --global --no-cc ../src/nitg.nit
	bench_command "full" "" ./nitg --global ../src/nitg.nit -o "nitg_nitg.bin"

	prepare_res "$name-nitg-s.dat" "nitg-s" "Various steps of nitg --separate"
	bench_command "parse" "" ./nitg --separate --only-parse ../src/nitg.nit
	bench_command "metamodel" "" ./nitg --separate --only-metamodel ../src/nitg.nit
	bench_command "generate c" "" ./nitg --separate --no-cc ../src/nitg.nit
	bench_command "full" "" ./nitg --separate ../src/nitg.nit -o "nitg_nitg-e.bin"

	prepare_res "$name-nitg-e.dat" "nitg-e" "Various steps of nitg --erasure"
	bench_command "parse" "" ./nitg --erasure --only-parse ../src/nitg.nit
	bench_command "metamodel" "" ./nitg --erasure --only-metamodel ../src/nitg.nit
	bench_command "generate c" "" ./nitg --erasure --no-cc ../src/nitg.nit
	bench_command "full" "" ./nitg --erasure ../src/nitg.nit -o "nitg_nitg-e.bin"

	plot "$name.gnu"
}
bench_steps

# $#: options to compare
function bench_nitg-g_options()
{
	tag=$1
	shift
	name="$FUNCNAME-$tag"
	skip_test "$name" && return
	prepare_res "$name.dat" "no options" "nitg-g without options"
	run_compiler "nitg-g" ./nitg --global

	if test "$1" = NOALL; then
		shift
	elif test -n "$2"; then
		prepare_res "$name-all.dat" "all" "nitg-g with all options $@"
		run_compiler "nitg-g-$tag" ./nitg --global $@
	fi

	for opt in "$@"; do
		ot=${opt// /+}
		prepare_res "$name$ot.dat" "$opt" "nitg-g with option $opt"
		run_compiler "nitg-g$ot" ./nitg --global $opt
	done

	plot "$name.gnu"
}
bench_nitg-g_options "slower" --hardening
bench_nitg-g_options "nocheck" --no-check-covariance --no-check-attr-isset --no-check-assert --no-check-autocast --no-check-other

function bench_nitg-s_options()
{
	tag=$1
	shift
	name="$FUNCNAME-$tag"
	skip_test "$name" && return
	prepare_res "$name.dat" "no options" "nitg-s without options"
	run_compiler "nitg-s" ./nitg --separate

	if test "$1" = NOALL; then
		shift
	elif test -n "$2"; then
		prepare_res "$name-all.dat" "all" "nitg-s with all options $@"
		run_compiler "nitg-s-$tag" ./nitg --separate $@
	fi

	for opt in "$@"; do
		ot=${opt// /+}
		prepare_res "$name-$ot.dat" "$opt" "nitg-s with option $opt"
		run_compiler "nitg-s$ot" ./nitg --separate $opt
	done

	plot "$name.gnu"
}
bench_nitg-s_options "slower" --hardening --no-inline-intern --no-union-attribute --no-shortcut-equal --no-shortcut-range "--no-gcc-directive likely" "--no-gcc-directive noreturn"
bench_nitg-s_options "nocheck" --no-check-covariance --no-check-attr-isset --no-check-assert --no-check-autocast --no-check-other
bench_nitg-s_options "faster" --inline-coloring-numbers --inline-some-methods --direct-call-monomorph "--inline-some-methods --direct-call-monomorph"

function bench_nitg-e_options()
{
	tag=$1
	shift
	name="$FUNCNAME-$tag"
	skip_test "$name" && return
	prepare_res "$name.dat" "no options" "nitg-e without options"
	run_compiler "nitg-e" ./nitg --erasure

	if test "$1" = NOALL; then
		shift
	elif test -n "$2"; then
		prepare_res "$name-all.dat" "all" "nitg-e with all options $@"
		run_compiler "nitg-e-$tag" ./nitg --erasure $@
	fi

	for opt in "$@"; do
		ot=${opt// /+}
		prepare_res "$name$ot.dat" "$opt" "nitg-e with option $opt"
		run_compiler "nitg-e$ot" ./nitg --erasure $opt
	done

	plot "$name.gnu"
}
bench_nitg-e_options "slower" --hardening --no-inline-intern --no-union-attribute --no-shortcut-equal --no-shortcut-range
bench_nitg-e_options "nocheck" --no-check-covariance --no-check-attr-isset --no-check-assert --no-check-autocast --no-check-other --no-check-erasure-cast
bench_nitg-e_options "faster" --inline-coloring-numbers

function bench_engines()
{
	name="$FUNCNAME"
	skip_test "$name" && return
	prepare_res "$name-nitg-g.dat" "nitg-g" "nitg with --global"
	run_compiler "nitg-g" ./nitg --global
	prepare_res "$name-nitg-s.dat" "nitg-s" "nitg with --separate"
	run_compiler "nitg-s" ./nitg --separate
	prepare_res "$name-nitg-e.dat" "nitg-e" "nitg with --erasure"
	run_compiler "nitg-e" ./nitg --erasure
	plot "$name.gnu"
}
bench_engines

function bench_nitg-e_gc()
{
	name="$FUNCNAME"
	skip_test "$name" && return
	prepare_res "$name-nitg-e-malloc.dat" "nitg-e-malloc" "nitg with --erasure and malloc"
	NIT_GC_OPTION="malloc" run_compiler "nitg-e-malloc" ./nitg --erasure
	prepare_res "$name-nitg-e.dat" "nitg-e" "nitg with --erasure"
	run_compiler "nitg-e" ./nitg --erasure
	plot "$name.gnu"
}
bench_nitg-e_gc

function bench_cc_nitg-e()
{
	name="$FUNCNAME"
	skip_test "$name" && return
	for o in "gcc0:CC=\"ccache gcc\" CFLAGS=-O0" "cl0:CC=\"ccache clang\" CFLAGS=-O0" "gccs:CC=\"ccache gcc\" CFLAGS=-Os" "cls:CC=\"ccache clang\" CFLAGS=-Os" "gcc2:CC=\"ccache gcc\" CFLAGS=-O2" "cl2:CC=\"ccache clang\" CFLAGS=-O2" "gcc3:CC=\"ccache gcc\" CFLAGS=-O3"  "cl3:CC=\"ccache clang\" CFLAGS=-O3"; do
		f=`echo "$o" | cut -f1 -d:`
		o=`echo "$o" | cut -f2 -d:`
		prepare_res "$name-nitg-e-$f.dat" "nitg-e-$f" "nitg with --erasure --make-flags $o"
		run_compiler "nitg-e-$f" ./nitg --erasure --make-flags "$o"
	done
	plot "$name.gnu"
}
bench_cc_nitg-e

function bench_policy()
{
	name="$FUNCNAME"
	skip_test "$name" && return
	prepare_res "$name-nitg-s.dat" "nitg-s" "nitg with --separate"
	run_compiler "nitg-s" ./nitg --separate
	prepare_res "$name-nitg-e.dat" "nitg-e" "nitg with --erasure"
	run_compiler "nitg-e" ./nitg --erasure
	prepare_res "$name-nitg-su.dat" "nitg-su" "nitg with --separate --no-check-covariance"
	run_compiler "nitg-su" ./nitg --separate --no-check-covariance
	prepare_res "$name-nitg-eu.dat" "nitg-eu" "nitg with --erasure --no-check-covariance --no-check-erasure-cast"
	run_compiler "nitg-eu" ./nitg --erasure --no-check-covariance --no-check-erasure-cast
	plot "$name.gnu"
}
bench_policy

function bench_nullables()
{
	name="$FUNCNAME"
	skip_test "$name" && return
	prepare_res "$name-nitc.dat" "nitc" "nitc no options"
	run_compiler "nitc" ./nitg --separate
	prepare_res "$name-nitc-ni.dat" "nitc-ni" "nitc --no-check-attr-isset"
	run_compiler "nitc" ./nitg --separate --no-check-attr-isset
	prepare_res "$name-nitc-nu.dat" "nitc-nu" "nitc --no-union-attribute"
	run_compiler "nitc" ./nitg --separate --no-union-attribute
	prepare_res "$name-nitc-nu-ni.dat" "nitc-nu-ni" "nitc --no-union-attribute --no-check-attr-isset"
	run_compiler "nitc" ./nitg --separate --no-union-attribute --no-check-attr-isset
	plot "$name.gnu"
}
bench_nullables

function bench_compilation_time
{
	name="$FUNCNAME"
	skip_test "$name" && return
	prepare_res "$name-nitg-g.dat" "nitg-g" "nitg --global"
	for i in ../examples/hello_world.nit ../src/test_parser.nit ../src/nitg.nit; do
		bench_command `basename "$i" .nit` "" ./nitg --global "$i" --no-cc
	done
	prepare_res "$name-nitg-s.dat" "nitg-s" "nitg --separate"
	for i in ../examples/hello_world.nit ../src/test_parser.nit ../src/nitg.nit; do
		bench_command `basename "$i" .nit` "" ./nitg --separate "$i" --no-cc
	done
	prepare_res "$name-nitg-e.dat" "nitg-e" "nitg --erasure"
	for i in ../examples/hello_world.nit ../src/test_parser.nit ../src/nitg.nit; do
		bench_command `basename "$i" .nit` "" ./nitg --erasure "$i" --no-cc
	done
	plot "$name.gnu"
}
bench_compilation_time

if test -n "$html"; then
	echo >>"$html" "</body></html>"
fi

if test -n "$died"; then
	echo "Some commands failed"
	exit 1
fi
exit 0
