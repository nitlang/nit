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

function usage()
{
	echo "run_bench: [options]* bench_name args"
	echo "  -v: verbose mode"
	echo "  -n count: number of execution for each bar (default: $count)"
	echo "  -h: this help"
	echo ""
	echo "Benches : "
	echo "  iter: bench iterations"
	echo "    - usage : iter max_nb_cct loops strlen"
	echo "  cct: concatenation benching"
	echo "    - usage : cct max_nb_cct loops strlen"
	echo "  substr: substring benching"
	echo "    - usage : substr max_nb_cct loops strlen"
	echo "  array: Benchmark for the to_s in array"
	echo "    - usage : array nb_cct loops max_arrlen"
}

function bench_array()
{
	if [ -d arraytos ]; then
		rm arraytos/*
	else
		mkdir arraytos
	fi
	cd arraytos

	if $verbose; then
		echo "*** Benching Array.to_s performance ***"
	fi

	../../../bin/nitc --global ../array_tos.nit -m ../array_to_s_vars/array_to_s_rope.nit

	prepare_res arr_tos_ropes.out arr_tos_ropes ropes
	if $verbose; then
		echo "Ropes :"
	fi
	for i in `seq 1 "$3"`; do
		if $verbose; then
			echo "String length = $i, Concats/loop = $1, Loops = $2"
		fi
		bench_command $i ropes$i ./array_tos --loops $2 --strlen $i --ccts $1
	done

	../../../bin/nitc --global ../array_tos.nit -m ../array_to_s_vars/array_to_s_flatstr.nit

	prepare_res arr_tos_flat.out arr_tos_flat flatstring
	if $verbose; then
		echo "FlatStrings :"
	fi
	for i in `seq 1 "$3"`; do
		if $verbose; then
			echo "String length = $i, Concats/loop = $1, Loops = $2"
		fi
		bench_command $i flatstring$i ./array_tos --loops $2 --strlen $i --ccts $1
	done

	../../../bin/nitc --global ../array_tos.nit -m ../array_to_s_vars/array_to_s_buffer.nit

	prepare_res arr_tos_buf.out arr_tos_buf flatbuffer
	if $verbose; then
		echo "FlatBuffers :"
	fi
	for i in `seq 1 "$3"`; do
		if $verbose; then
			echo "String length = $i, Concats/loop = $1, Loops = $2"
		fi
		bench_command $i flatbuffer$i ./array_tos --loops $2 --strlen $i --ccts $1
	done

	../../../bin/nitc --global ../array_tos.nit -m ../array_to_s_vars/array_to_s_manual.nit

	prepare_res arr_tos_man.out arr_tos_man memmove
	if $verbose; then
		echo "Memmove :"
	fi
	for i in `seq 1 "$3"`; do
		if $verbose; then
			echo "String length = $i, Concats/loop = $1, Loops = $2"
		fi
		bench_command $i memmove$i ./array_tos --loops $2 --strlen $i --ccts $1
	done

	../../../bin/nitc --global ../array_tos.nit -m ../array_to_s_vars/array_to_s_man_buf.nit

	prepare_res arr_tos_man_buf.out arr_tos_man_buf flatbuf_with_capacity
	if $verbose; then
		echo "FlatBuffer.with_capacity :"
	fi
	for i in `seq 1 "$3"`; do
		if $verbose; then
			echo "String length = $i, Concats/loop = $1, Loops = $2"
		fi
		bench_command $i flatbuf_with_capacity$i ./array_tos --loops $2 --strlen $i --ccts $1
	done

	../../../bin/nitc --global ../array_tos.nit -m ../array_to_s_vars/array_to_s_rope_buf.nit

	prepare_res arr_tos_rope_buf.out arr_tos_rope_buf ropebuf
	if $verbose; then
		echo "RopeBuffer :"
	fi
	for i in `seq 1 "$3"`; do
		if $verbose; then
			echo "String length = $i, Concats/loop = $1, Loops = $2"
		fi
		bench_command $i ropebuf$i ./array_tos --loops $2 --strlen $i --ccts $1
	done

	plot array_tos.gnu

	cd ..
}

function bench_concat()
{
	if [ -d string_concat ]; then
		rm string_concat/*
	else
		mkdir string_concat
	fi
	cd string_concat

	../../../bin/nitc --global ../chain_concat.nit

	if $verbose; then
		echo "*** Benching concat performance ***"
	fi

	prepare_res concat_flat.out concat_flat flatstring
	if $verbose; then
		echo "FlatStrings :"
	fi
	for i in `seq 1 "$1"`; do
		if $verbose; then
			echo "String length = $i, Concats/loop = $2, Loops = $3"
		fi
		bench_command $i flatstring$i ./chain_concat -m flatstr --loops $2 --strlen $3 --ccts $i
	done

	prepare_res concat_buf.out concat_buf flatbuffer
	if $verbose; then
		echo "FlatBuffers :"
	fi
	for i in `seq 1 "$1"`; do
		if $verbose; then
			echo "String length = $i, Concats/loop = $2, Loops = $3"
		fi
		bench_command $i flatbuffer$i ./chain_concat -m flatbuf --loops $2 --strlen $3 --ccts $i
	done

	prepare_res concat_ropes.out concat_ropes ropes
	if $verbose; then
		echo "Ropes :"
	fi
	for i in `seq 1 "$1"`; do
		if $verbose; then
			echo "String length = $i, Concats/loop = $2, Loops = $3"
		fi
		bench_command $i ropes$i ./chain_concat -m ropestr --loops $2 --strlen $3 --ccts $i
	done

	prepare_res concat_buf_ropes.out concat_buf_ropes buffered_ropes
	if $verbose; then
		echo "Rope Buffer:"
	fi
	for i in `seq 1 "$1"`; do
		if $verbose; then
			echo "string length = $i, concats/loop = $2, loops = $3"
		fi
		bench_command $i buf_ropes$i ./chain_concat -m ropebuf --loops $2 --strlen $3 --ccts $i
	done

	plot concat.gnu

	cd ..
}

function bench_iteration()
{
	if [ -d string_iter ]; then
		rm string_iter/*
	else
		mkdir string_iter
	fi
	cd string_iter

	if $verbose; then
		echo "*** Benching iteration performance ***"
	fi

	../../../bin/nitc --global ../iteration_bench.nit

	prepare_res iter_flat_iter.out iter_flat_iter flatstring_iter
	if $verbose; then
		echo "FlatStrings by iterator :"
	fi
	for i in `seq 1 "$1"`; do
		if $verbose; then
			echo "String base length = $1, Concats = $i, Loops = $3"
		fi
		bench_command $i flatstr_iter$i ./iteration_bench -m flatstr --iter-mode iterator --loops $2 --strlen $3 --ccts $i
	done

	prepare_res iter_flat_index.out iter_flat_index flatstring_index
	if $verbose; then
		echo "FlatStrings by index :"
	fi
	for i in `seq 1 "$1"`; do
		if $verbose; then
			echo "String base length = $1, Concats = $i, Loops = $3"
		fi
		bench_command $i flatstr_index$i ./iteration_bench -m flatstr --iter-mode index --loops $2 --strlen $3 --ccts $i
	done

	prepare_res iter_buf_iter.out iter_buf_iter flatbuffer_iter
	if $verbose; then
		echo "FlatBuffers by iterator :"
	fi
	for i in `seq 1 "$1"`; do
		if $verbose; then
			echo "String base length = $1, Concats = $i, Loops = $3"
		fi
		bench_command $i flatbuf_iter$i ./iteration_bench -m flatbuf --iter-mode iterator --loops $2 --strlen $3 --ccts $i
	done

	prepare_res iter_buf_index.out iter_buf_index flatbuffer_index
	if $verbose; then
		echo "FlatBuffers by index:"
	fi
	for i in `seq 1 "$1"`; do
		if $verbose; then
			echo "String base length = $1, Concats = $i, Loops = $3"
		fi
		bench_command $i flatbuf_index$i ./iteration_bench -m flatbuf --iter-mode index --loops $2 --strlen $3 --ccts $i
	done

	prepare_res iter_ropes_iter.out iter_ropes_iter ropes_iter
	if $verbose; then
		echo "Ropes by iterator :"
	fi
	for i in `seq 1 "$1"`; do
		if $verbose; then
			echo "String base length = $1, Concats (depth of the rope) = $i, Loops = $3"
		fi
		bench_command $i ropes_iter$i ./iteration_bench -m ropestr --iter-mode iterator --loops $2 --strlen $3 --ccts $i
	done

	prepare_res iter_ropes_index.out iter_ropes_index ropes_index
	if $verbose; then
		echo "Ropes by index :"
	fi
	for i in `seq 1 "$1"`; do
		if $verbose; then
			echo "String base length = $1, Concats (depth of the rope) = $i, Loops = $3"
		fi
		bench_command $i ropes_index$i ./iteration_bench -m ropestr --iter-mode index --loops $2 --strlen $3 --ccts $i
	done

	prepare_res iter_buf_ropes_iter.out iter_buf_ropes_iter buf_ropes_iter
	if $verbose; then
		echo "RopeBuffer by iterator :"
	fi
	for i in `seq 1 "$1"`; do
		if $verbose; then
			echo "String base length = $1, Concats (depth of the rope) = $i, Loops = $3"
		fi
		bench_command $i buf_ropes_iter$i ./iteration_bench -m ropebuf --iter-mode iterator --loops $2 --strlen $3 --ccts $i
	done

	prepare_res iter_buf_ropes_index.out iter_buf_ropes_index buf_ropes_index
	if $verbose; then
		echo "RopeBuffer by index :"
	fi
	for i in `seq 1 "$1"`; do
		if $verbose; then
			echo "String base length = $1, Concats (depth of the rope) = $i, Loops = $3"
		fi
		bench_command $i buf_ropes_index$i ./iteration_bench -m ropebuf --iter-mode index --loops $2 --strlen $3 --ccts $i
	done

	plot iter.gnu

	cd ..
}

function bench_substr()
{
	if [ -d string_substr ]; then
		rm string_substr/*
	else
		mkdir string_substr
	fi
	cd string_substr

	if $verbose; then
		echo "*** Benching substring performance ***"
	fi

	../../../bin/nitc --global ../substr_bench.nit

	prepare_res substr_flat.out substr_flat flatstring
	if $verbose; then
		echo "FlatStrings :"
	fi
	for i in `seq 1 "$1"`; do
		if $verbose; then
			echo "String length = $i, loops = $2, Loops = $3"
		fi
		bench_command $i flatstring$i ./substr_bench -m flatstr --loops $2 --strlen $3 --ccts $i
	done

	prepare_res substr_buf.out substr_buf flatbuffer
	if $verbose; then
		echo "FlatBuffers :"
	fi
	for i in `seq 1 "$1"`; do
		if $verbose; then
			echo "String length = $i, loops = $2, Loops = $3"
		fi
		bench_command $i flatbuffer$i ./substr_bench -m flatbuf --loops $2 --strlen $3 --ccts $i
	done

	prepare_res substr_ropes.out substr_ropes ropes
	if $verbose; then
		echo "Ropes :"
	fi
	for i in `seq 1 "$1"`; do
		if $verbose; then
			echo "String length = $i, loops = $2, Loops = $3"
		fi
		bench_command $i ropes$i ./substr_bench -m ropestr --loops $2 --strlen $3 --ccts $i
	done

	prepare_res substr_buf_ropes.out substr_buf_ropes buf_ropes
	if $verbose; then
		echo "RopeBuffers :"
	fi
	for i in `seq 1 "$1"`; do
		if $verbose; then
			echo "String length = $i, loops = $2, Loops = $3"
		fi
		bench_command $i buf_ropes$i ./substr_bench -m ropebuf --loops $2 --strlen $3 --ccts $i
	done

	plot substr.gnu

	cd ..
}

stop=false
while [ "$stop" = false ]; do
	case "$1" in
		-v) verbose=true; shift;;
		-h) usage; exit;;
		-n) count="$2"; shift; shift;;
		*) stop=true
	esac
done

if test $# -ne 4; then
	usage
	exit
fi

case "$1" in
	iter) shift; bench_iteration $@ ;;
	cct) shift; bench_concat $@ ;;
	substr) shift; bench_substr $@ ;;
	array) shift; bench_array $@ ;;
	*) usage; exit;;
esac
