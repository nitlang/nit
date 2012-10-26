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
	echo >&2 "DIE: $*"
	exit 1
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
	"$@"
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
	echo "# [$2] $3" > "$res"
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
set title "$1"
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
	elif echo "$1" | grep "$NOTSKIPED" >/dev/null 2>&1; then
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
	run_command "$@" nitg.nit -o "nitg.$title.bin"
	bench_command "nitg" "nitg test_parser.nit" "./nitg.$title.bin" -v test_parser.nit
	run_command "$@" nit.nit -o "nit.$title.bin"
	bench_command "nit" "nit test_parser.nit test_parser.nit" "./nit.$title.bin" -v test_parser.nit -- -n rapid_type_analysis.nit
	run_command "$@" ../examples/shoot/shoot_logic.nit -o "shoot.$title.bin"
	bench_command "shoot" "shoot_logic" "./shoot.$title.bin"
}

## HANDLE OPTIONS ##

function usage()
{
	echo "run_bench: [options]* benchname"
	echo "  -v: verbose mode"
	echo "  -n count: number of execution for each bar (default: $count)"
	echo "  --dry: Do not run the commands, just reuse the data and generate the graph"
	echo "  -h: this help"
}

stop=false
while [ "$stop" = false ]; do
	case "$1" in
		-v) verbose=true; shift;;
		-h) usage; exit;;
		-n) count="$2"; shift; shift;;
		--dry) dry_run=true; shift;;
		*) stop=true
	esac
done

NOTSKIPED="$*"

if test -z "$NOTSKIPED"; then
	usage
	echo "List of available benches:"
	echo "* all: run all the benches"
fi

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
	bench_command "full" "" ./nitc_3 -O nitg.nit

	prepare_res "$name-nitg.dat" "nitg" "Various steps of nitg"
	bench_command "parse" "" ./nitg --only-parse nitg.nit
	bench_command "metamodel" "" ./nitg --only-metamodel nitg.nit
	bench_command "generate c" "" ./nitg --no-cc nitg.nit
	bench_command "full" "" ./nitg nitg.nit

	plot "$name.gnu"
}
bench_steps

# $#: options to compare
function bench_nitg_options()
{
	name="$FUNCNAME"
	skip_test "$name" && return
	prepare_res "$name.dat" "no options" "nitg without options"
	run_compiler "nitg" ./nitg

	for opt in "$@"; do
		prepare_res "$name$opt.dat" "$opt" "nitg with option $opt"
		run_compiler "nitg$opt" ./nitg $opt
	done

	plot "$name.gnu"
}
bench_nitg_options --hardening

function bench_nitc_gc()
{
	name="$FUNCNAME"
	skip_test "$name" && return
	for gc in nitgc boehm malloc large; do
		prepare_res "$name-$gc".dat "$gc" "nitc with gc=$gc"
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
	plot "$name.gnu"
}
bench_engines

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
	prepare_res "$name-nitg_g.dat" "nitg/g" "nitg/g"
	for i in ../examples/hello_world.nit test_parser.nit nitg.nit; do
		bench_command `basename "$i" .nit` "" ./nitg.bin "$i" --no-cc
	done
	plot "$name.gnu"
}
bench_compilation_time
