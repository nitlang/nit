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

# Run a single command multiple time and store the execution times
# in the current $res file.
#
#  $1: title of the command
#  $2: long desription of the command
#  rest: the command to execute
function bench_command()
{
	if [ "$dry_run" = "true" ]; then return; fi
	local title="$1"
	local desc="$2"
	shift
	shift
	if test "$verbose" = true; then outputopts="/dev/stdout"; else outputopts="/dev/null"; fi
	timeout="time.out"
	echo "$title" > "$timeout"
	echo "# $desc" >> "$timeout"
	echo "\$ $@" >> "$timeout"
	echo
	echo "** [$title] $desc **"
	echo " $ $@"

	# Execute the commands $count times
	for i in `seq 1 "$count"`; do
		/usr/bin/time -f "%U" -o "$timeout" -a "$@" > $outputopts 2>&1 || die "$1: failed"
		echo -n "$i. "
		tail -n 1 "$timeout"
	done

	line=`compute_stats "$timeout"`
	echo "$line ($res)"
	echo $line >> "$res"
}

# Run a simble command witout storing the execution time
# Used to display command on verbose and skip long executions when dry_run is given
# $@ command to execute
function run_command()
{
	if [ "$dry_run" = "true" ]; then return; fi
	echo " $ $@"
	"$@" || die "$@: failed"
}

# Check if the test should be skiped according to its name
# $1: name of the test
# $2: description of the test
# $NOTSKIPED: arguments
function skip_test()
{
	if test -z "$NOTSKIPED"; then
		echo "* $1"
		return 0
	fi
	if test "$NOTSKIPED" = "all"; then
		: # Execute anyway
	elif echo "$1" | egrep "$NOTSKIPED" >/dev/null 2>&1; then
		: # Found one to execute
	else
		return 0
	fi
	if test -n "$html"; then
		echo >>"$html" "<h2>$1</h2>"
	fi
	echo "*"
	echo "* $1 *****"
	echo "*"
	return 1
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
		run_command "$@" ../src/nith.nit -o "nith.$title.bin"
		bench_command "nith-g" "nith --global ../src/test_parser.nit" "./nith.$title.bin" -v --global --no-cc ../src/test_parser.nit
		run_command "$@" ../src/nit.nit -o "nit.$title.bin"
		bench_command "nit" "nit ../src/test_parser.nit ../src/location.nit" "./nit.$title.bin" -v ../src/test_parser.nit -- -n ../src/location.nit
		run_command "$@" ../examples/shoot/src/shoot_logic.nit -o "shoot.$title.bin"
		bench_command "shoot" "shoot_logic" "./shoot.$title.bin"
		run_command "$@" ../tests/bench_bintree_gen.nit -o "bintrees.$title.bin"
		bench_command "bintrees" "bench_bintree_gen 16" "./bintrees.$title.bin" 16
	else
		run_command "$@" ../src/nith.nit -o "nith.$title.bin"
		bench_command "nith-g" "nith --global --no-cc ../src/nitmetrics.nit" "./nith.$title.bin" -v --global --no-cc ../src/nitmetrics.nit
		bench_command "nith-s" "nith --separate ../src/nith.nit" "./nith.$title.bin" -v --no-cc --separate ../src/nith.nit
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

# force to use the last nith, not the bootstraped one
test -f ./nith || ../bin/nith ../src/nith.nit -v

## EFFECTIVE BENCHS ##

function bench_steps()
{
	name="$FUNCNAME"
	skip_test "$name" && return
	prepare_res "$name-nith.dat" "nith-g" "Various steps of nith --global"
	bench_command "parse" "" ./nith --global --only-parse ../src/nith.nit
	bench_command "metamodel" "" ./nith --global --only-metamodel ../src/nith.nit
	bench_command "generate c" "" ./nith --global --no-cc ../src/nith.nit
	bench_command "full" "" ./nith --global ../src/nith.nit -o "nith_nith.bin"

	prepare_res "$name-nith-s.dat" "nith-s" "Various steps of nith --separate"
	bench_command "parse" "" ./nith --separate --only-parse ../src/nith.nit
	bench_command "metamodel" "" ./nith --separate --only-metamodel ../src/nith.nit
	bench_command "generate c" "" ./nith --separate --no-cc ../src/nith.nit
	bench_command "full" "" ./nith --separate ../src/nith.nit -o "nith_nith-e.bin"

	prepare_res "$name-nith-e.dat" "nith-e" "Various steps of nith --erasure"
	bench_command "parse" "" ./nith --erasure --only-parse ../src/nith.nit
	bench_command "metamodel" "" ./nith --erasure --only-metamodel ../src/nith.nit
	bench_command "generate c" "" ./nith --erasure --no-cc ../src/nith.nit
	bench_command "full" "" ./nith --erasure ../src/nith.nit -o "nith_nith-e.bin"

	plot "$name.gnu"
}
bench_steps

# $#: options to compare
function bench_nith-g_options()
{
	tag=$1
	shift
	name="$FUNCNAME-$tag"
	skip_test "$name" && return
	prepare_res "$name.dat" "no options" "nith-g without options"
	run_compiler "nith-g" ./nith --global

	if test "$1" = NOALL; then
		shift
	elif test -n "$2"; then
		prepare_res "$name-all.dat" "all" "nith-g with all options $@"
		run_compiler "nith-g-$tag" ./nith --global $@
	fi

	for opt in "$@"; do
		ot=${opt// /+}
		prepare_res "$name$ot.dat" "$opt" "nith-g with option $opt"
		run_compiler "nith-g$ot" ./nith --global $opt
	done

	plot "$name.gnu"
}
bench_nith-g_options "slower" --hardening
bench_nith-g_options "nocheck" --no-check-covariance --no-check-initialization --no-check-assert --no-check-autocast --no-check-other

function bench_nith-s_options()
{
	tag=$1
	shift
	name="$FUNCNAME-$tag"
	skip_test "$name" && return
	prepare_res "$name.dat" "no options" "nith-s without options"
	run_compiler "nith-s" ./nith --separate

	if test "$1" = NOALL; then
		shift
	elif test -n "$2"; then
		prepare_res "$name-all.dat" "all" "nith-s with all options $@"
		run_compiler "nith-s-$tag" ./nith --separate $@
	fi

	for opt in "$@"; do
		ot=${opt// /+}
		prepare_res "$name-$ot.dat" "$opt" "nith-s with option $opt"
		run_compiler "nith-s$ot" ./nith --separate $opt
	done

	plot "$name.gnu"
}
bench_nith-s_options "slower" --hardening --no-inline-intern --no-union-attribute --no-shortcut-equal --no-shortcut-range "--no-gcc-directive likely" "--no-gcc-directive noreturn"
bench_nith-s_options "nocheck" --no-check-covariance --no-check-initialization --no-check-assert --no-check-autocast --no-check-other
bench_nith-s_options "faster" --inline-coloring-numbers --inline-some-methods --direct-call-monomorph "--inline-some-methods --direct-call-monomorph"
bench_nith-s_options "typing" NOALL --bm-typing --phand-typing

function bench_nith-e_options()
{
	tag=$1
	shift
	name="$FUNCNAME-$tag"
	skip_test "$name" && return
	prepare_res "$name.dat" "no options" "nith-e without options"
	run_compiler "nith-e" ./nith --erasure

	if test "$1" = NOALL; then
		shift
	elif test -n "$2"; then
		prepare_res "$name-all.dat" "all" "nith-e with all options $@"
		run_compiler "nith-e-$tag" ./nith --erasure $@
	fi

	for opt in "$@"; do
		ot=${opt// /+}
		prepare_res "$name$ot.dat" "$opt" "nith-e with option $opt"
		run_compiler "nith-e$ot" ./nith --erasure $opt
	done

	plot "$name.gnu"
}
bench_nith-e_options "slower" --hardening --no-inline-intern --no-union-attribute --no-shortcut-equal --no-shortcut-range
bench_nith-e_options "nocheck" --no-check-covariance --no-check-initialization --no-check-assert --no-check-autocast --no-check-other --no-check-erasure-cast
bench_nith-e_options "faster" --inline-coloring-numbers
bench_nith-e_options "typing" NOALL --bm-typing # --phand-typing

function bench_engines()
{
	name="$FUNCNAME"
	skip_test "$name" && return
	prepare_res "$name-nith-g.dat" "nith-g" "nith with --global"
	run_compiler "nith-g" ./nith --global
	prepare_res "$name-nith-s.dat" "nith-s" "nith with --separate"
	run_compiler "nith-s" ./nith --separate
	prepare_res "$name-nith-e.dat" "nith-e" "nith with --erasure"
	run_compiler "nith-e" ./nith --erasure
	plot "$name.gnu"
}
bench_engines

function bench_nith-e_gc()
{
	name="$FUNCNAME"
	skip_test "$name" && return
	prepare_res "$name-nith-e-malloc.dat" "nith-e-malloc" "nith with --erasure and malloc"
	NIT_GC_OPTION="malloc" run_compiler "nith-e-malloc" ./nith --erasure
	prepare_res "$name-nith-e.dat" "nith-e" "nith with --erasure"
	run_compiler "nith-e" ./nith --erasure
	plot "$name.gnu"
}
bench_nith-e_gc

function bench_cc_nith-e()
{
	name="$FUNCNAME"
	skip_test "$name" && return
	for o in "gcc0:CC=\"ccache gcc\" CFLAGS=-O0" "cl0:CC=\"ccache clang\" CFLAGS=-O0" "gccs:CC=\"ccache gcc\" CFLAGS=-Os" "cls:CC=\"ccache clang\" CFLAGS=-Os" "gcc2:CC=\"ccache gcc\" CFLAGS=-O2" "cl2:CC=\"ccache clang\" CFLAGS=-O2" "gcc3:CC=\"ccache gcc\" CFLAGS=-O3"  "cl3:CC=\"ccache clang\" CFLAGS=-O3"; do
		f=`echo "$o" | cut -f1 -d:`
		o=`echo "$o" | cut -f2 -d:`
		prepare_res "$name-nith-e-$f.dat" "nith-e-$f" "nith with --erasure --make-flags $o"
		run_compiler "nith-e-$f" ./nith --erasure --make-flags "$o"
	done
	plot "$name.gnu"
}
bench_cc_nith-e

function bench_policy()
{
	name="$FUNCNAME"
	skip_test "$name" && return
	prepare_res "$name-nith-s.dat" "nith-s" "nith with --separate"
	run_compiler "nith-s" ./nith --separate
	prepare_res "$name-nith-e.dat" "nith-e" "nith with --erasure"
	run_compiler "nith-e" ./nith --erasure
	prepare_res "$name-nith-su.dat" "nith-su" "nith with --separate --no-check-covariance"
	run_compiler "nith-su" ./nith --separate --no-check-covariance
	prepare_res "$name-nith-eu.dat" "nith-eu" "nith with --erasure --no-check-covariance --no-check-erasure-cast"
	run_compiler "nith-eu" ./nith --erasure --no-check-covariance --no-check-erasure-cast
	plot "$name.gnu"
}
bench_policy

function bench_compilation_time
{
	name="$FUNCNAME"
	skip_test "$name" && return
	prepare_res "$name-nith-g.dat" "nith-g" "nith --global"
	for i in ../examples/hello_world.nit ../src/test_parser.nit ../src/nith.nit; do
		bench_command `basename "$i" .nit` "" ./nith --global "$i" --no-cc
	done
	prepare_res "$name-nith-s.dat" "nith-s" "nith --separate"
	for i in ../examples/hello_world.nit ../src/test_parser.nit ../src/nith.nit; do
		bench_command `basename "$i" .nit` "" ./nith --separate "$i" --no-cc
	done
	prepare_res "$name-nith-e.dat" "nith-e" "nith --erasure"
	for i in ../examples/hello_world.nit ../src/test_parser.nit ../src/nith.nit; do
		bench_command `basename "$i" .nit` "" ./nith --erasure "$i" --no-cc
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
