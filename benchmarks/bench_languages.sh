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
cd ../src
test -f ./nitc_3 || ./ncall.sh -O
cd ../benchmarks
test -f ./nitg || ../src/nitc_3 ../src/nitg.nit -O -v

## EFFECTIVE BENCHS ##

function bench_language()
{
	name="$1"
	skip_test "$name" && return
	rootdir=`pwd`
	basedir="./${name}.out"

	mkdir $basedir

	t=t
	s=20
	seq="2 4 8"
	for b in $seq; do
		run_command ./nitg languages/$name.nit -o $basedir/$name.bin
		run_command $basedir/$name.bin $basedir "${t}_$b" "$b"
	done

	prepare_res $basedir/$name-g++.dat "g++" "g++"
	cppdir="${basedir}/cpp"
	for b in $seq; do
		run_command g++ "${cppdir}/${t}_$b.cpp" -O2 -o "${cppdir}/${t}_$b.g++.bin"
		bench_command "$b" "" "${cppdir}/${t}_$b.g++.bin" $s
	done

	prepare_res $basedir/$name-clang++.dat "clang++" "clang++"
	for b in $seq; do
		run_command clang++ "${cppdir}/${t}_$b.cpp" -O2 -o "${cppdir}/${t}_$b.clang++.bin"
		bench_command "$b" "" "${cppdir}/${t}_$b.clang++.bin" $s
	done

	prepare_res $basedir/$name-java.dat "java" "java"
	javadir="${basedir}/java"
	for b in $seq; do
		run_command javac "${javadir}/${t}_$b.java"
		bench_command "$b" "" java -cp "${javadir}/" "${t}_$b" $s
	done

	prepare_res $basedir/$name-gcj.dat "gcj" "gcj"
	for b in $seq; do
		run_command gcj --main=${t}_$b -O2 "${javadir}/${t}_$b.java" -o "${javadir}/${t}_$b.gcj.bin"
		bench_command "$b" "" "${javadir}/${t}_$b.gcj.bin" $s
	done

	prepare_res $basedir/$name-scala.dat "scala" "scala"
	scaladir="${basedir}/scala"
	for b in $seq; do
		run_command scalac "${scaladir}/${t}_$b.scala" -d "${scaladir}"
		bench_command "$b" "" scala -cp "${scaladir}/" "${t}_$b" $s
	done

	prepare_res $basedir/$name-cs.dat "c#" "c#"
	csdir="${basedir}/cs"
	for b in $seq; do
		run_command gmcs "$csdir/${t}_$b.cs"
		bench_command "$b" "" mono "$csdir/${t}_$b.exe" $s
	done

	prepare_res $basedir/$name-es.dat "es" "es"
	esdir="${basedir}/es"
	for b in $seq; do
		cd $esdir
		run_command ec -clean -finalize ${t}_$b/app${t}_$b.e
		chmod +x app${t}_$b
		mv app${t}_$b ${t}_$b.es.bin
		cd $rootdir
		bench_command "$b" "" "$esdir/${t}_$b.es.bin" $s
	done

	prepare_res $basedir/$name-se.dat "se" "se"
	sedir="${basedir}/se"
	for b in $seq; do
		cd $sedir
		run_command se compile -no_check app${t}_${b}_se.e -loadpath ${t}_${b}_se -o ${t}_$b.se.bin
		cd $rootdir
		bench_command "$b" "" "$sedir/${t}_$b.se.bin" $s
	done

	nitdir="${basedir}/nit"
	prepare_res $nitdir/$name-nitg.dat "nitg" "nitg"
	for b in $seq; do
		run_command ./nitg $nitdir/${t}_$b.nit --global -o "$nitdir/${t}_$b.nitg.bin" --make-flags "CFLAGS=\"-g -O2 -DNOBOEHM\""
		bench_command "$b" "" "$nitdir/${t}_$b.nitg.bin" $s
	done

	prepare_res $nitdir/$name-nitg-s.dat "nitg-s" "nitg-s"
	for b in $seq; do
		run_command ./nitg $nitdir/${t}_$b.nit --separate -o "$nitdir/${t}_$b.nitg-s.bin" --make-flags "CFLAGS=\"-g -O2 -DNOBOEHM\""
		bench_command "$b" "" "$nitdir/${t}_$b.nitg-s.bin" $s
	done

<<XXX
	prepare_res $nitdir/$name-nitg-su.dat "nitg-su" "nitg-su"
	for b in $seq; do
		run_command ./nitg $nitdir/${t}_$b.nit --separate --no-check-covariance -o "$nitdir/${t}_$b.nitg-su.bin" --make-flags "CFLAGS=\"-g -O2 -DNOBOEHM\""
		bench_command "$b" "" "$nitdir/${t}_$b.nitg-su.bin" $s
	done

	prepare_res $nitdir/$name-nitg-e.dat "nitg-e" "nitg-e"
	for b in $seq; do
		run_command ./nitg $nitdir/${t}_$b.nit --erasure -o "$nitdir/${t}_$b.nitg-e.bin" --make-flags "CFLAGS=\"-g -O2 -DNOBOEHM\""
		bench_command "$b" "" "$nitdir/${t}_$b.nitg-e.bin" $s
	done

	prepare_res $nitdir/$name-nitg-eu.dat "nitg-eu" "nitg-eu"
	for b in $seq; do
		run_command ./nitg $nitdir/${t}_$b.nit --erasure --no-check-covariance --no-check-erasure-cast -o "$nitdir/${t}_$b.nitg-eu.bin" --make-flags "CFLAGS=\"-g -O2 -DNOBOEHM\""
		bench_command "$b" "" "$nitdir/${t}_$b.nitg-eu.bin" $s
	done
XXX

	plot $basedir/$name.gnu
}

for name in languages/*.nit; do
	n=`basename $name .nit`
	bench_language $n
done

if test -n "$died"; then
	echo "Some commands failed"
	exit 1
fi
exit 0
