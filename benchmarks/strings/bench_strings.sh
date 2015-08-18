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

source ../bench_common.sh
source ../bench_plot.sh

# Default number of times a command must be run with bench_command
# Can be overrided with 'the option -n'
count=5

benches="iteration
concat
substring
index
compiler
basic"

function usage()
{
	echo "run_bench: [options]* bench_name args"
	echo ""
	echo "Options:"
	echo "  -v: verbose mode"
	echo "  -n count: number of execution for each bar (default: $count)"
	echo "  -h: this help"
	echo ""
	echo "Benches : "
	echo "  index: indexed access benchmark"
	echo "    - usage : index loops strlen_min strlen_inc strlen_max"
	echo "  concat: string concatenation benchmark"
	echo "    - usage : concat loops strlen min_cct cct_inc max_cct"
	echo "  iteration: iteration benchmark"
	echo "    - usage : iteration loops strlen_min strlen_inc strlen_max"
	echo "  substring: substring benchmark"
	echo "    - usage : substring loops strlen_min strlen_inc strlen_max"
	echo "  compiler: compiler benchmark"
	echo "    - usage : compiler"
	echo "  basic : basic functionnality test of the variants on Hello World"
	echo "    - usage : basic"
}

function bench_index()
{
	if [ $# -lt 4 ]; then
		echo "Wrong arguments for benchmark index."
		usage
		exit
	fi
	echo "Generating executable index_bench for variant $variant"
	../../bin/nitc --global index_bench.nit

	bench_indexed_variant "string" $1 $2 $3 $4
	bench_indexed_variant "buffer" $1 $2 $3 $4

	rm index_bench
}

# $1: string or buffer
# $2: loops
# $3: strlen min
# $4: strlen inc
# $5: strlen max
function bench_indexed_variant()
{
	tmp="${variant}_$1"
	prepare_res index_$tmp.out $tmp $tmp
	for i in `seq "$3" "$4" "$5"`; do
		bench_command $i index_$tmp$i ./index_bench -m $1 --loops $2 --strlen $i
	done
}

function bench_concat()
{
	if [ $# -lt 5 ]; then
		echo "Wrong arguments for benchmark concat."
		usage
		exit
	fi

	echo "Generating executable chain_concat for variant $variant"
	../../bin/nitc --global chain_concat.nit

	bench_concat_variant "string" $1 $2 $3 $4 $5
	bench_concat_variant "buffer" $1 $2 $3 $4 $5

	rm chain_concat
}

# $1: string or buffer
# $2: loops
# $3: strlen
# $4: concatenations min
# $5: concatenations inc
# $6: concatenations max
function bench_concat_variant()
{
	tmp="${variant}_$1"
	prepare_res out/concat/concat_$tmp.out $tmp $tmp
	for i in `seq "$4" "$5" "$6"`; do
		bench_command $i $tmp$i ./chain_concat -m $1 --loops $2 --strlen $3 --ccts $i
	done
}

function bench_iteration()
{
	if [ $# -lt 4 ]; then
		echo "Wrong arguments for benchmark iteration."
		usage
		exit
	fi
	echo "Generating executable iteration_bench for variant $variant"
	../../bin/nitc --global iteration_bench.nit

	bench_iterate_variant "iterator" "string" $1 $2 $3 $4
	bench_iterate_variant "index" "string" $1 $2 $3 $4
	bench_iterate_variant "iterator" "buffer" $1 $2 $3 $4
	bench_iterate_variant "index" "buffer" $1 $2 $3 $4

	rm iteration_bench
}

# $1: iterator or index
# $2: string or buffer
# $3: loops
# $4: strlen min
# $5: strlen increment
# $6: strlen max
function bench_iterate_variant()
{
	tmp="${variant}_$1_$2"
	prepare_res out/iteration/iteration_$tmp.out $tmp $tmp
	for i in `seq "$4" "$5" "$6"`; do
		bench_command $i $tmp$i ./iteration_bench -m $2 --iter-mode $1 --loops $3 --strlen $i
	done
}

function bench_substring()
{
	if [ $# -lt 4 ]; then
		echo "Wrong arguments for benchmark substring."
		usage
		exit
	fi
	echo "Generating executable substr_bench for variant $variant"
	../../bin/nitc --global substr_bench.nit

	bench_substring_variant "string" $1 $2 $3 $4
	bench_substring_variant "buffer" $1 $2 $3 $4

	rm substr_bench
}

# $1: string or buffer
# $2: loops
# $3: strlen min
# $4: strlen increment
# $5: strlen max
function bench_substring_variant()
{
	tmp="${variant}_$1"
	prepare_res out/substring/substring_$tmp.out $tmp $tmp
	for i in `seq "$3" "$4" "$5"`; do
		bench_command $i $tmp$i ./substr_bench -m $1 --loops $2 --strlen $i
	done
}

function bench_compiler()
{
	prepare_res out/compiler/compiler_$variant.out compiler_$variant compiler_$variant

	echo "Pre-compiling nitc"
	# Do it twice before bench to have stable times when generating C
	../../bin/nitc ../../src/nitc.nit -o ../../bin/nitc
	echo "nitc (1/2)"
	../../bin/nitc ../../src/nitc.nit -o ../../bin/nitc
	echo "nitc (2/2)"

	bench_command nitc nitc_$variant ../../bin/nitc ../../src/nitc.nit

	rm nitc
}

function bench_basic()
{
	../../bin/nitc ../../examples/hello_world.nit
	./hello_world
	rm hello_world
}

function launch_bench()
{
	echo "---------------------------------------------------------"
	echo "  Trying variant $variant for benchmark $bench"
	echo "---------------------------------------------------------"
	git diff-index --quiet HEAD || {
		echo "Cannot run benches on a dirty working directory."
		echo "Please commit or stash your modifications and relaunch the command."
		exit 1
	}
	git am $curr_rev || {
		echo "Error when applying patch $curr_rev"
		git am --abort;
		exit 1;
	}
	if [ "$need_bootstrap" = true ]; then
		prepare_compiler
	fi
	bench_$bench "$@";
	git reset --hard $head
}

function prepare_compiler()
{
	cd ../../c_src
	rm nitc
	make clean
	cd ../src
	./ncall.sh
	mv nitc.good ../bin/nitc
	cd ../benchmarks/strings
}

function main()
{
	stop=false
	while [ "$stop" = false ]; do
		case "$1" in
			-v) verbose=true; shift;;
			-h) usage; exit;;
			-n) count="$2"; shift; shift;;
			*) stop=true
		esac
	done

	if [ $# -lt 1 ]; then
		usage;
		exit;
	fi

	isok=false
	for i in $benches; do
		if [ $1 = $i ]; then
			isok=true;
		fi
	done
	if [ "$isok" = false ]; then
		usage;
		exit;
	fi

	bench=$1
	shift;

	git diff-index --quiet HEAD || {
		echo "Cannot run benches on a dirty working directory."
		echo "Please commit or stash your modifications and relaunch the command."
		exit 1
	}

	head=`git rev-parse HEAD`
	variant="HEAD"
	need_plot=true
	need_bootstrap=false

	if [ "$bench" = "basic" ]; then
		need_plot=false
	fi

	if [ ! -d out ]; then
		mkdir out
	fi
	cd out

	if [ -d $bench ]; then
		rm $bench/*
	else
		mkdir $bench
	fi
	cd ..

	echo "---------------------------------------------------------"
	echo "  Trying variant HEAD for benchmark $bench"
	echo "---------------------------------------------------------"
	bench_$bench "$@";

	for i in lib_variants/regular/*; do
		curr_rev=$i
		variant=`basename "$i" | cut -f 1 -d '.'`
		launch_bench "$@"
	done

	need_bootstrap=true
	for i in lib_variants/need_bootstrap/*; do
		curr_rev=$i
		variant=`basename "$i" | cut -f 1 -d '.'`
		launch_bench "$@"
	done

	if [ "${need_plot}" = true ]; then
		plot out/$bench/$bench.gnu
	fi
}

main "$@";
