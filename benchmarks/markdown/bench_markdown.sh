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

# Shell script to bench nitmd over different kind of document.

source ../bench_common.sh
source ../bench_plot.sh

## CONFIGURATION OPTIONS ##

# Default number of times a command must be run with bench_command
# Can be overrided with 'the option -n'
count=2

# Default number of times the input file is transformed during a single run
s=200

## HANDLE OPTIONS ##

function usage()
{
	echo "run_bench: [options]* benchname"
	echo "  -v: verbose mode"
	echo "  -n count: number of execution for each bar (default: $count)"
	echo "  -s size: number of transformations for each run (default: $s)"
	echo "  --dry: Do not run the commands, just reuse the data and generate the graph"
	echo "  -h: this help"
}

stop=false
while [ "$stop" = false ]; do
	case "$1" in
		-v) verbose=true; shift;;
		-h) usage; exit;;
		-n) count="$2"; shift; shift;;
		-s) s="$2"; shift; shift;;
		--dry) dry_run=true; shift;;
		*) stop=true
	esac
done

## GEN BENCHES
cd benches; make; cd ..

## COMPILE ENGINES
cd engines; make; cd ..

NOTSKIPED="$*"

if test -z "$NOTSKIPED"; then
	usage
	echo "List of available benches:"
	echo "* all: run all the benches"
fi

## EFFECTIVE BENCHS ##
outdir="./out"
engdir="./engines"
bncdir="./benches/out"
mkdir -p $outdir
html="index.html"
echo >"$html" "<html><head></head><body>"

function bench_nitmd()
{
	name="$FUNCNAME"
	skip_test "$name" && return
	prepare_res $outdir/nitmd.dat "nitmd" "nitmd"
	for file in $bncdir/*.md; do
		bench=`basename $file .md`
		bench_command "$bench" "" "$engdir/nitmd/nitmd" "$file" "$s"
	done
}
bench_nitmd

function bench_nitmd-o()
{
	name="$FUNCNAME"
	skip_test "$name" && return
	prepare_res $outdir/nitmd-o.dat "nitmd-o" "nitmd-o"
	for file in $bncdir/*.md; do
		bench=`basename $file .md`
		bench_command "$bench" "" "$engdir/nitmd/nitmd-o" "$file" "$s"
	done
}
bench_nitmd-o

function bench_nitmd2()
{
	name="$FUNCNAME"
	skip_test "$name" && return
	prepare_res $outdir/nitmd2.dat "nitmd2" "nitmd2"
	for file in $bncdir/*.md; do
		bench=`basename $file .md`
		bench_command "$bench" "" "$engdir/nitmd2/nitmd2" "$file" "$s"
	done
}
bench_nitmd2

function bench_nitmd2-o()
{
	name="$FUNCNAME"
	skip_test "$name" && return
	prepare_res $outdir/nitmd2-o.dat "nitmd2-o" "nitmd2-o"
	for file in $bncdir/*.md; do
		bench=`basename $file .md`
		bench_command "$bench" "" "$engdir/nitmd2/nitmd2-o" "$file" "$s"
	done
}
bench_nitmd2-o

function bench_txtmark()
{
	name="$FUNCNAME"
	skip_test "$name" && return
	prepare_res $outdir/txtmark.dat "txtmark" "txtmark"
	for file in $bncdir/*.md; do
		bench=`basename $file .md`
		bench_command "$bench" "" "java" "-cp" "$engdir/txtmark/.:$engdir/txtmark/txtmark-0.11.jar" "Txtmark" "$file" "$s"
	done
}
bench_txtmark

function bench_markdown4j()
{
	name="$FUNCNAME"
	skip_test "$name" && return
	prepare_res $outdir/markdown4j.dat "markdown4j" "markdown4j"
	for file in $bncdir/*.md; do
		name=`basename $file .md`
		bench_command "$bench" "" "java" "-cp" "$engdir/markdown4j/.:$engdir/markdown4j/markdown4j-2.2.jar" "Markdown4j" "$file" "$s"
	done
}
bench_markdown4j

function bench_pandoc()
{
	name="$FUNCNAME"
	skip_test "$name" && return
	prepare_res $outdir/pandoc.dat "pandoc" "pandoc"
	for file in $bncdir/*.md; do
		name=`basename $file .md`
		bench_command "$bench" "" "$engdir/pandoc/pandoc" "$file" "$s"
	done
}
# FIXME: Fix an reactivate the pandoc engine
#bench_pandoc

if test "$#" -gt 0; then
    plot $outdir/bench_markdown.gnu
fi

echo >>"$html" "</body></html>"

if test -n "$died"; then
	echo "Some commands failed"
	exit 1
fi
exit 0
