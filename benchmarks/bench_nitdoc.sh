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

# Bench nitdoc perfs.

source ./bench_common.sh
source ./bench_plot.sh

## CONFIGURATION OPTIONS ##

# Default number of times a command must be run with bench_command
# Can be overrided with 'the option -n'
count=3

## HANDLE OPTIONS ##

function usage()
{
	echo "bench_nitdoc [options]* git-ref"
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

REF="$*"

if test -z "$REF"; then
	usage
fi

## COMPILE ENGINES
current_branch=`git rev-parse --abbrev-ref HEAD`
git checkout origin/master && ../bin/nitc ../src/nitdoc.nit -o ./nitdoc.orig
git checkout $current_branch && ../bin/nitc ../src/nitdoc.nit -o ./nitdoc.new

## EFFECTIVE BENCHS ##

function bench_nitdoc()
{
	basedir="./bench_nitdoc.out/${name}.out"
	tests=(../tests/test_prog ../lib/standard/kernel.nit ../lib/standard)
	mkdir -p $basedir

	prepare_res $basedir/orig.dat $REF "nitdoc.orig"
	for path in ${tests[@]}; do
		run_gen $basedir ./nitdoc.orig $path
	done

	prepare_res $basedir/new.dat "HEAD" "nitdoc.new"
	for path in ${tests[@]}; do
		run_gen $basedir ./nitdoc.new $path
	done

	plot $basedir/bench_nitdoc.gnu
}

function run_gen()
{
	basedir="$1"
	bin="$2"
	path="$3"
	name=`basename $path .nit`
	bench_command $name $path $bin $path -d $basedir/$bin.out
}

bench_nitdoc

if test -n "$died"; then
	echo "Some commands failed"
	exit 1
fi
exit 0
