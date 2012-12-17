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

# perl function to compute min/max/avg.
# used by bench_command
#
# $1: file
# return: first min max avg label
function compute_stats()
{
	file="$1"
	# Compute statistics
	perl - "$file" <<'END'
	@lines = ();
	$first = undef;
	chomp($label = <>);
	while(<>) {
		chomp;
		if (/^\d/) {
			if (defined $first) {
				push @lines, $_;
			} else {
				$first = $_;
			}
		}
	}
	$len = scalar @lines;
	if ($len) {
		@lines = sort {$a <=> $b} @lines;
		$min = $lines[0];
		$max = $lines[$#lines];
		$avg = 0;
		for $i (@lines) { $avg += $i; }
		$avg = $avg / $len;
		print "${first} ${min} ${max} ${avg} \"${label}\"\n";
	} else {
		print "${first} ${first} ${first} ${first} \"${label}\"\n";
	}
END
}

# Create a new $res to be used in the next plot
#
# $1 = resfile
# $2 = title
# $3 = description
function prepare_res()
{
	echo
	echo "# [$2] $3 #"
	res=$1
	if [ "$plots" = "" ]; then
		plots="plot '$1' using 4:2:3:xticlabels(5) ti '$2';"
	else
		plots="$plots replot '$1' using 4:2:3 ti '$2';"
	fi
	if [ "$dry_run" = "true" ]; then return; fi
	echo "# [$2] $3 ; count=$count" > "$res"
	echo "# first min max avg title" >> "$res"
}

# Plot the last $res as an histogram
# $1: plot file (eg toto.gnu)
function plot()
{
	cat >"$1" <<END
set auto x;
set yrange [0:];
set style data histogram;
set style histogram cluster gap 2;
set style histogram errorbars linewidth 1;
set style fill solid 0.3 border -1;
set bars front;
set boxwidth 0.9;
set xtic nomirror rotate by -45 scale 0 font ',8';
set title "$1 ; avg. on $count-1 runs"
set ylabel "time (s)"
$plots
END
	echo "# gnuplot -p $1"
	gnuplot -p "$1"
	plots=
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
	echo "*"
	echo "* $1 *****"
	echo "*"
	return 1
}

## GLOBAL VARIABLES ##

# The current $res (set by prepare_res, used by bench_command)
res=

# The current stuff to plot (set by prepare_res, used by plot)
plots=

# HELPER FOR NIT #

# Run standards benchs on a compiler command
# $1: title
# rest: command to run (executable + options)
function run_compiler()
{
	local title=$1
	shift
	if test -n "$fast"; then
		run_command "$@" nitg.nit -o "nitg.$title.bin"
		bench_command "nitg" "nitg test_parser.nit" "./nitg.$title.bin" -v --no-cc test_parser.nit
		run_command "$@" nit.nit -o "nit.$title.bin"
		bench_command "nit" "nit test_parser.nit location.nit" "./nit.$title.bin" -v test_parser.nit -- -n location.nit
		run_command "$@" ../examples/shoot/shoot_logic.nit -o "shoot.$title.bin"
		bench_command "shoot" "shoot_logic" "./shoot.$title.bin"
		run_command "$@" ../tests/bench_bintree_gen.nit -o "bintrees.$title.bin"
		bench_command "bintrees" "bench_bintree_gen 16" "./bintrees.$title.bin" 16
	else
		run_command "$@" nitg.nit -o "nitg.$title.bin"
		bench_command "nitg" "nitg --no-cc nitstats.nit" "./nitg.$title.bin" -v --no-cc nitstats.nit
		bench_command "nitg-s" "nitg --separate nitg.nit" "./nitg.$title.bin" -v --no-cc --separate nitg.nit
		run_command "$@" nit.nit -o "nit.$title.bin"
		bench_command "nit" "nit test_parser.nit rapid_type_analysis.nit" "./nit.$title.bin" -v test_parser.nit -- -n rapid_type_analysis.nit
		run_command "$@" ../examples/shoot/shoot_logic.nit -o "shoot.$title.bin"
		bench_command "shoot" "shoot_logic 30" "./shoot.$title.bin" 30
		run_command "$@" ../tests/bench_bintree_gen.nit -o "bintrees.$title.bin"
		bench_command "bintrees" "bench_bintree_gen 18" "./bintrees.$title.bin" 18
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

test -f ./nitc_3 || ./ncall.sh -O
test -f ./nitg || ./nitc_3 nitg.nit -O -v

## EFFECTIVE BENCHS ##

function bench_nitg_bootstrap()
{
	name="$FUNCNAME"
	skip_test "$name" && return
	prepare_res "$name.dat" "" "Steps of the bootstrap of nitg by nitc"
	rm nit?_nit*
	cp ./nitc_3 ./nitc_nitc.bin
	bench_command "c/c c" "nitc_nitc nitc.nit -> nitc_nitc (stability)" ./nitc_nitc.bin -O nitc.nit -o nitc_nitc.bin
	bench_command "c/c g" "nitc_nitc nitg.nit -> nitg_nitc" ./nitc_nitc.bin -O nitg.nit -o nitg_nitc.bin
	bench_command "g/c g" "nitg_nitc nitg.nit -> nitg_nitg" ./nitg_nitc.bin nitg.nit -o nitg_nitg.bin
	bench_command "g/g g" "nitg_nitg nitg.nit -> nitg_nitg (stability)" ./nitg_nitg.bin nitg.nit -o nitg_nitg.bin

	plot "$name.gnu"
}
bench_nitg_bootstrap

function bench_steps()
{
	name="$FUNCNAME"
	skip_test "$name" && return
	prepare_res "$name-nitc.dat" "nitc" "Various steps of nitc"
	bench_command "parse" "" ./nitc_3 --only-parse nitg.nit
	bench_command "metamodel" "" ./nitc_3 --only-metamodel nitg.nit
	bench_command "generate c" "" ./nitc_3 --no-cc nitg.nit
	bench_command "full" "" ./nitc_3 -O nitg.nit -o "nitg_nitg.bin"

	prepare_res "$name-nitc-g.dat" "nitc-g" "Various steps of nitc --global"
	bench_command "parse" "" ./nitc_3 --global --only-parse nitg.nit
	bench_command "metamodel" "" ./nitc_3 --global --only-metamodel nitg.nit
	bench_command "generate c" "" ./nitc_3 --global --no-cc nitg.nit
	bench_command "full" "" ./nitc_3 -O --global nitg.nit -o "nitg_nitc-g.bin"

	prepare_res "$name-nitg.dat" "nitg" "Various steps of nitg"
	bench_command "parse" "" ./nitg --only-parse nitg.nit
	bench_command "metamodel" "" ./nitg --only-metamodel nitg.nit
	bench_command "generate c" "" ./nitg --no-cc nitg.nit
	bench_command "full" "" ./nitg nitg.nit -o "nitg_nitg.bin"

	prepare_res "$name-nitg-e.dat" "nitg-e" "Various steps of nitg --erasure"
	bench_command "parse" "" ./nitg --erasure --only-parse nitg.nit
	bench_command "metamodel" "" ./nitg --erasure --only-metamodel nitg.nit
	bench_command "generate c" "" ./nitg --erasure --no-cc nitg.nit
	bench_command "full" "" ./nitg --erasure nitg.nit -o "nitg_nitg-e.bin"

	plot "$name.gnu"
}
bench_steps

# $#: options to compare
function bench_nitg_options()
{
	tag=$1
	shift
	name="$FUNCNAME-$tag"
	skip_test "$name" && return
	prepare_res "$name.dat" "no options" "nitg without options"
	run_compiler "nitg" ./nitg

	if test -n "$2"; then
		prepare_res "$name-all.dat" "all" "nitg with all options $@"
		run_compiler "nitg-$tag" ./nitg $@
	fi

	for opt in "$@"; do
		prepare_res "$name$opt.dat" "$opt" "nitg with option $opt"
		run_compiler "nitg$opt" ./nitg $opt
	done

	plot "$name.gnu"
}
bench_nitg_options "hardening" --hardening
bench_nitg_options "nocheck" --no-check-covariance --no-check-initialization --no-check-assert --no-check-autocast --no-check-other

function bench_nitg-s_options()
{
	tag=$1
	shift
	name="$FUNCNAME-$tag"
	skip_test "$name" && return
	prepare_res "$name.dat" "no options" "nitg-s without options"
	run_compiler "nitg-s" ./nitg --separate

	if test -n "$2"; then
		prepare_res "$name-all.dat" "all" "nitg-s with all options $@"
		run_compiler "nitg-s-$tag" ./nitg --separate $@
	fi

	for opt in "$@"; do
		prepare_res "$name$opt.dat" "$opt" "nitg-s with option $opt"
		run_compiler "nitg-s$opt" ./nitg --separate $opt
	done

	plot "$name.gnu"
}
bench_nitg-s_options "slower" --hardening --no-inline-intern --generic-resolution-tree --no-union-attribute --no-shortcut-equal --no-shortcut-range
bench_nitg-s_options "nocheck" --no-check-covariance --no-check-initialization --no-check-assert --no-check-autocast --no-check-other
bench_nitg-s_options "faster" --inline-coloring-numbers
bench_nitg-s_options "typing" --bm-typing --phand-typing --phmod-typing

function bench_nitg-e_options()
{
	tag=$1
	shift
	name="$FUNCNAME-$tag"
	skip_test "$name" && return
	prepare_res "$name.dat" "no options" "nitg-e without options"
	run_compiler "nitg-e" ./nitg --erasure

	if test -n "$2"; then
		prepare_res "$name-all.dat" "all" "nitg-e with all options $@"
		run_compiler "nitg-e-$tag" ./nitg --erasure $@
	fi

	for opt in "$@"; do
		prepare_res "$name$opt.dat" "$opt" "nitg-e with option $opt"
		run_compiler "nitg-e$opt" ./nitg --erasure $opt
	done

	plot "$name.gnu"
}
bench_nitg-e_options "slower" --hardening --no-inline-intern --no-union-attribute --no-shortcut-equal --no-shortcut-range
bench_nitg-e_options "nocheck" --no-check-covariance --no-check-initialization --no-check-assert --no-check-autocast --no-check-other --no-check-erasure-cast
bench_nitg-e_options "faster" --inline-coloring-numbers
bench_nitg-e_options "typing" --bm-typing --phand-typing --phmod-typing

function bench_nitc_gc()
{
	name="$FUNCNAME"
	skip_test "$name" && return
	for gc in nitgc boehm malloc large; do
		prepare_res "$name-$gc.dat" "$gc" "nitc with gc=$gc"
		export NIT_GC_OPTION="$gc"
		run_compiler "nitc" ./nitc_3 -O
	done

	plot "$name.gnu"
}
bench_nitc_gc

function bench_nitc_boost()
{
	name="$FUNCNAME"
	skip_test "$name" && return
	prepare_res "$name-slow.dat" "no -O" "nitc without -O"
	run_compiler "nitc_slow" ./nitc_3
	prepare_res "$name-fast.dat" "-O" "nitc with -O"
	run_compiler "nitc" ./nitc_3 -O

	plot "$name.gnu"
}
bench_nitc_boost

function bench_engines()
{
	name="$FUNCNAME"
	skip_test "$name" && return
	prepare_res "$name-nitc.dat" "nitc" "nitc"
	run_compiler "nitc" ./nitc_3 -O
	prepare_res "$name-nitc-g.dat" "nitc-g" "nitc with --global"
	run_compiler "nitc-g" ./nitc_3 -O --global
	prepare_res "$name-nitg.dat" "nitg" "nitg"
	run_compiler "nitg" ./nitg
	prepare_res "$name-nitg-s.dat" "nitg-s" "nitg with --separate"
	run_compiler "nitg-s" ./nitg --separate
	prepare_res "$name-nitg-e.dat" "nitg-e" "nitg with --erasure"
	run_compiler "nitg-e" ./nitg --erasure
	plot "$name.gnu"
}
bench_engines

function bench_nitc_vc_nitg-e()
{
	name="$FUNCNAME"
	skip_test "$name" && return
	prepare_res "$name-nitc.dat" "nitc" "nitc"
	run_compiler "nitc" ./nitc_3 -O
	prepare_res "$name-nitc-malloc.dat" "nitc-malloc" "nitc with malloc"
	NIT_GC_OPTION="malloc" run_compiler "nitc" ./nitc_3 -O
	prepare_res "$name-nitc-bohem.dat" "nitc-boehm" "nitc with boehm"
	NIT_GC_OPTION="boehm" run_compiler "nitc" ./nitc_3 -O
	prepare_res "$name-nitg-e-nockeck-malloc.dat" "nitg-e-nc-malloc" "nitg with --erasure --no-check-autocast --no-check-erasure-cast and malloc"
	run_compiler "nitg-e-nc-malloc" ./nitg --erasure --no-check-autocast --no-check-erasure-cast --make-flags "CFLAGS=\"-O2 -DNOBOEHM\""
	prepare_res "$name-nitg-e-nockeck.dat" "nitg-e-nc" "nitg with --erasure --no-check-autocast --no-check-erasure-cast"
	run_compiler "nitg-e-nc" ./nitg --erasure --no-check-autocast --no-check-erasure-cast
	prepare_res "$name-nitg-e.dat" "nitg-e" "nitg with --erasure"
	run_compiler "nitg-e" ./nitg --erasure
	plot "$name.gnu"
}
bench_nitc_vc_nitg-e

function bench_nitg-e_gc()
{
	name="$FUNCNAME"
	skip_test "$name" && return
	prepare_res "$name-nitg-e-malloc.dat" "nitg-e-malloc" "nitg with --erasure and malloc"
	run_compiler "nitg-e-malloc" ./nitg --erasure --make-flags "CFLAGS=\"-g -O2 -DNOBOEHM\""
	prepare_res "$name-nitg-e-noatomic.dat" "nitg-e-noatomic" "nitg with --erasure and no atomic"
	run_compiler "nitg-e-noatomic" ./nitg --erasure --make-flags "CFLAGS=\"-g -O2 -DNOBOEHM_ATOMIC\""
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

function bench_compilation_time
{
	name="$FUNCNAME"
	skip_test "$name" && return
	prepare_res "$name-nitc.dat" "nitc" "nitc"
	for i in ../examples/hello_world.nit test_parser.nit nitg.nit; do
		bench_command `basename "$i" .nit` "" ./nitc_3 -O "$i" --no-cc
	done
	prepare_res "$name-nitg.dat" "nitg" "nitg"
	for i in ../examples/hello_world.nit test_parser.nit nitg.nit; do
		bench_command `basename "$i" .nit` "" ./nitg "$i" --no-cc
	done
	prepare_res "$name-nitg-e.dat" "nitg-e" "nitg --erasure"
	for i in ../examples/hello_world.nit test_parser.nit nitg.nit; do
		bench_command `basename "$i" .nit` "" ./nitg --erasure "$i" --no-cc
	done
	plot "$name.gnu"
}
bench_compilation_time

function bench_typetest_languages()
{
	name="$FUNCNAME"
	skip_test "$name" && return

	t=t
	s=20
	seq="w2_h2 w50_h2 w2_h25 w50_h25"
	for b in $seq; do
		run_command ./nitg benchs/gen.nit
		run_command ./gen.bin "${t}_$b" "$b"
	done

	prepare_res "$name-g++.dat" "g++" "g++"
	for b in $seq; do
		run_command g++ "${t}_$b.cpp" -O2 -o "${t}_$b.g++.bin"
		bench_command "$b" "" "./${t}_$b.g++.bin" $s
	done

	prepare_res "$name-clang++.dat" "clang++" "clang++"
	for b in $seq; do
		run_command clang++ "${t}_$b.cpp" -O2 -o "${t}_$b.clang++.bin"
		bench_command "$b" "" "./${t}_$b.clang++.bin" $s
	done

	prepare_res "$name-java.dat" "java" "java"
	for b in $seq; do
		run_command javac ${t}_$b.java
		bench_command "$b" "" java "${t}_$b" $s
	done

	prepare_res "$name-es.dat" "es" "es"
	for b in $seq; do
		run_command ec -clean -finalize ${t}_$b/app${t}_$b.e
		chmod +x app${t}_$b
		mv app${t}_$b  ${t}_$b.es.bin
		bench_command "$b" "" "./${t}_$b.es.bin" $s
	done

	prepare_res "$name-se.dat" "se" "se"
	for b in $seq; do
		run_command se compile -no_check app${t}_${b}_se.e -loadpath ${t}_${b}_se -o ${t}_$b.se.bin
		bench_command "$b" "" "./${t}_$b.se.bin" $s
	done

	#too slow
	#prepare_res "$name-nitg.dat" "nitg" "nitg"
	#for b in $seq; do
	#	run_command ./nitg "${t}_$b.nit" -o "${t}_$b.nitg.bin" --make-flags "CFLAGS=\"-g -O2 -DNOBOEHM\""
	#	bench_command "$b" "" "./${t}_$b.nitg.bin" $s
	#done

	prepare_res "$name-nitg-s.dat" "nitg-s" "nitg-s"
	for b in $seq; do
		run_command ./nitg ${t}_$b.nit --separate -o "${t}_$b.nitg-s.bin" --make-flags "CFLAGS=\"-g -O2 -DNOBOEHM\""
		bench_command "$b" "" "./${t}_$b.nitg-s.bin" $s
	done

	prepare_res "$name-nitg-su.dat" "nitg-su" "nitg-su"
	for b in $seq; do
		run_command ./nitg ${t}_$b.nit --separate --no-check-covariance -o "${t}_$b.nitg-su.bin" --make-flags "CFLAGS=\"-g -O2 -DNOBOEHM\""
		bench_command "$b" "" "./${t}_$b.nitg-su.bin" $s
	done


	prepare_res "$name-nitg-e.dat" "nitg-e" "nitg-e"
	for b in $seq; do
		run_command ./nitg ${t}_$b.nit --erasure -o "${t}_$b.nitg-e.bin" --make-flags "CFLAGS=\"-g -O2 -DNOBOEHM\""
		bench_command "$b" "" "./${t}_$b.nitg-e.bin" $s
	done

	prepare_res "$name-nitg-eu.dat" "nitg-eu" "nitg-eu"
	for b in $seq; do
		run_command ./nitg ${t}_$b.nit --erasure --no-check-covariance --no-check-erasure-cast -o "${t}_$b.nitg-eu.bin" --make-flags "CFLAGS=\"-g -O2 -DNOBOEHM\""
		bench_command "$b" "" "./${t}_$b.nitg-eu.bin" $s
	done

	plot "$name.gnu"
}
bench_typetest_languages

if test -n "$died"; then
	echo "Some commands failed"
	exit 1
fi
exit 0
