#!/bin/bash
# This file is part of NIT ( https://nitlanguage.org ).
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

source ../bench_common.sh
source ../bench_plot.sh

## CONFIGURATION OPTIONS ##

# Default number of times a command must be run with bench_command
# Can be overrided with 'the option -n'
count=2

xml=bench_languages.xml
html=bench_languages.html
verbose=true

echo "" > $xml
echo "<html><body>" > $html

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

function system_info()
{
	( # use a subshell to protect the set -x
	export LANG=C
	set -x
	uname -a
	lscpu
	git describe --always HEAD
	./nitc --version
	gcc --version
	clang --version
	javac -version
	java -version
	gcj --version
	scalac -version
	scala -version
	ec -version
	pypy --version
	)
}

stop=false
while [ "$stop" = false ]; do
	case "$1" in
		-v) verbose=true; system_info; shift;;
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
test -f ./nitc || ../../bin/nitc ../../src/nitc.nit --semi-global -v

today=`date +%Y-%m-%d_%H-%M-%S`
bdir="languages.${today}.out"
rm -r "$bdir" "./languages.out" 2> /dev/null
ln -sf "$bdir" "./languages.out"

## EFFECTIVE BENCHS ##

function bench_language()
{
	name="$1"
	skip_test "$name" && return
	rootdir=`pwd`
	basedir="${bdir}/${name}"
	mkdir -p "$basedir"

	t=t
	s=50000
	seq="3 4 8 16"

	if [ "$fast" = "true" ]; then
		s=10000
		seq=3
	fi

	for b in $seq; do
		run_command ./nitc benches/$name.nit -o $basedir/$name.bin &&
		run_command $basedir/$name.bin $basedir "${t}_$b" "$b" "$s"
	done

	prepare_res $basedir/$name-g++.dat "g++" "g++"
	cppdir="${basedir}/cpp"
	test -d $cppdir && for b in $seq; do
		run_command g++ "${cppdir}/${t}_$b.cpp" -O2 -o "${cppdir}/${t}_$b.g++.bin" &&
		bench_command "$b" "" "${cppdir}/${t}_$b.g++.bin" $s
	done

	prepare_res $basedir/$name-clang++.dat "clang++" "clang++"
	test -d $cppdir && for b in $seq; do
		run_command clang++ "${cppdir}/${t}_$b.cpp" -O2 -o "${cppdir}/${t}_$b.clang++.bin" &&
		bench_command "$b" "" "${cppdir}/${t}_$b.clang++.bin" $s
	done

	prepare_res $basedir/$name-java.dat "java" "java"
	javadir="${basedir}/java"
	test -d $javadir && for b in $seq; do
		run_command javac "${javadir}/${t}_$b.java" &&
		bench_command "$b" "" java -cp "${javadir}/" "${t}_$b" $s
	done

	prepare_res $basedir/$name-gcj.dat "gcj" "gcj"
	test -d $javadir && for b in $seq; do
		run_command gcj --main=${t}_$b -O2 "${javadir}/${t}_$b.java" -o "${javadir}/${t}_$b.gcj.bin" &&
		bench_command "$b" "" "${javadir}/${t}_$b.gcj.bin" $s
	done

	prepare_res $basedir/$name-scala.dat "scala" "scala"
	scaladir="${basedir}/scala"
	test -d $scaladir && for b in $seq; do
		run_command scalac "${scaladir}/${t}_$b.scala" -d "${scaladir}" &&
		bench_command "$b" "" scala -cp "${scaladir}/" "${t}_$b" $s
	done

	prepare_res $basedir/$name-cs.dat "c#" "c#"
	csdir="${basedir}/cs"
	test -d $csdir && for b in $seq; do
		run_command mcs "$csdir/${t}_$b.cs" &&
		bench_command "$b" "" mono "$csdir/${t}_$b.exe" $s
	done

	prepare_res $basedir/$name-es.dat "es" "es"
	esdir="${basedir}/es"
	test -d $esdir && for b in $seq; do
		run_command ec -clean -finalize "$esdir/${t}_$b/app${t}_$b.e" &&
		chmod +x "app${t}_$b" &&
		mv "app${t}_$b" "$esdir/${t}_$b.es.bin" &&
		bench_command "$b" "" "$esdir/${t}_$b.es.bin" $s
	done

<<XXX
	# SmartEiffel is so old...
	prepare_res $basedir/$name-se.dat "se" "se"
	sedir="${basedir}/se"
	test -d $sedir && for b in $seq; do
		cd $sedir
		run_command se compile -no_check app${t}_${b}_se.e -loadpath ${t}_${b}_se -o ${t}_$b.se.bin
		cd $rootdir
		bench_command "$b" "" "$sedir/${t}_$b.se.bin" $s
	done
XXX

	prepare_res $basedir/$name-python.dat "python" "python"
	pythondir="${basedir}/python"
	test -d $pythondir && for b in $seq; do
		bench_command "$b" "" "pypy" "$pythondir/${t}_$b.py" $s
	done

	nitdir="${basedir}/nit"
	prepare_res $basedir/$name-nitc-g.dat "nitc-g" "nitc-g"
	test -d $nitdir && for b in $seq; do
		run_command ./nitc $nitdir/${t}_$b.nit --global -o "$nitdir/${t}_$b.nitc-g.bin" --make-flags "CFLAGS=\"-g -O2 -DNOBOEHM\"" &&
		bench_command "$b" "" "$nitdir/${t}_$b.nitc-g.bin" $s
	done

	prepare_res $basedir/$name-nitc-sg.dat "nitc-sg" "nitc-sg"
	test -d $nitdir && for b in $seq; do
		run_command ./nitc $nitdir/${t}_$b.nit --semi-global -o "$nitdir/${t}_$b.nitc-sg.bin" --make-flags "CFLAGS=\"-g -O2 -DNOBOEHM\"" &&
		bench_command "$b" "" "$nitdir/${t}_$b.nitc-sg.bin" $s
	done

	prepare_res $basedir/$name-nitc-s.dat "nitc-s" "nitc-s"
	test -d $nitdir && for b in $seq; do
		run_command ./nitc $nitdir/${t}_$b.nit --separate -o "$nitdir/${t}_$b.nitc-s.bin" --make-flags "CFLAGS=\"-g -O2 -DNOBOEHM\"" &&
		bench_command "$b" "" "$nitdir/${t}_$b.nitc-s.bin" $s
	done
<<XXX
	prepare_res $basedir/$name-nitc-su.dat "nitc-su" "nitc-su"
	test -d $nitdir && for b in $seq; do
		run_command ./nitc $nitdir/${t}_$b.nit --separate --no-check-covariance -o "$nitdir/${t}_$b.nitc-su.bin" --make-flags "CFLAGS=\"-g -O2 -DNOBOEHM\"" &&
		bench_command "$b" "" "$nitdir/${t}_$b.nitc-su.bin" $s
	done

	prepare_res $basedir/$name-nitc-e.dat "nitc-e" "nitc-e"
	test -d $nitdir && for b in $seq; do
		run_command ./nitc $nitdir/${t}_$b.nit --erasure -o "$nitdir/${t}_$b.nitc-e.bin" --make-flags "CFLAGS=\"-g -O2 -DNOBOEHM\"" &&
		bench_command "$b" "" "$nitdir/${t}_$b.nitc-e.bin" $s
	done

	prepare_res $basedir/$name-nitc-eu.dat "nitc-eu" "nitc-eu"
	test -d $nitdir && for b in $seq; do
		run_command ./nitc $nitdir/${t}_$b.nit --erasure --no-check-covariance --no-check-erasure-cast -o "$nitdir/${t}_$b.nitc-eu.bin" --make-flags "CFLAGS=\"-g -O2 -DNOBOEHM\"" &&
		bench_command "$b" "" "$nitdir/${t}_$b.nitc-eu.bin" $s
	done
XXX

	plot $basedir/$name.gnu
}

for name in benches/*.nit; do
	n=`basename $name .nit`
	bench_language $n < /dev/null
done

echo "<h2>System Info</h2>" >> "$html"
system_info 2>&1 | sed -e 's/$/<br>/;s|+\( .*\)|<h3>\1</h3>|' >> "$html"

if test -n "$died"; then
	echo "Some commands failed"
	exit 1
fi
exit 0
