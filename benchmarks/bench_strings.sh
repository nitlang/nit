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

source ./bench_common.sh
source ./bench_plot.sh

# Default number of times a command must be run with bench_command
# Can be overrided with 'the option -n'
count=2

function usage()
{
	echo "run_bench: [options]* bench_name args"
	echo "  -v: verbose mode"
	echo "  -n count: number of execution for each bar (default: $count)"
	echo "  -h: this help"
	echo ""
	echo "Benches : "
	echo "  all : all benches"
	echo "    - usage : * max_nb_cct loops strlen"
	echo "  iter: bench iterations"
	echo "    - usage : iter max_nb_cct loops strlen"
	echo "  cct: concatenation benching"
	echo "    - usage : cct max_nb_cct loops strlen"
	echo "  substr: substring benching"
	echo "    - usage : substr max_nb_cct loops strlen"
	echo "  array: Benchmark for the to_s in array"
	echo "    - usage : array nb_cct loops max_arrlen"
}

function benches()
{
	bench_concat $@;
	bench_iteration $@;
	bench_substr $@;
	bench_array $@;
}

function bench_array()
{
	if $verbose; then
		echo "*** Benching Array.to_s performance ***"
	fi

	../bin/nitg --global ./strings/array_tos.nit -m ./strings/array_to_s_vars/array_to_s_flatstr.nit -m ../lib/standard/ropes.nit --make-flags "CFLAGS=\"-g -O2 -DNOBOEHM\""

	prepare_res arr_tos_ropes.out arr_tos_ropes ropes
	if $verbose; then
		echo "Ropes :"
	fi
	for i in `seq 1 "$3"`; do
		if $verbose; then
			echo "String length = $i, Concats/loop = $1, Loops = $2"
		fi
		bench_command $i ropes$i ./array_tos --loops $2 --strlen $i --ccts $1 "NIT_GC_CHOOSER=large"
	done

	../bin/nitg --global ./strings/array_tos.nit -m ./strings/array_to_s_vars/array_to_s_flatstr.nit -m ../lib/standard/ropes.nit -m ../lib/buffered_ropes.nit --make-flags "CFLAGS=\"-g -O2 -DNOBOEHM\""

	prepare_res arr_tos_buf_ropes.out arr_tos_buf_ropes buffered_ropes
	if $verbose; then
		echo "Buffered Ropes :"
	fi
	for i in `seq 1 "$3"`; do
		if $verbose; then
			echo "String length = $i, Concats/loop = $1, Loops = $2"
		fi
		bench_command $i buf_ropes$i ./array_tos --loops $2 --strlen $i --ccts $1 "NIT_GC_CHOOSER=large"
	done

	../bin/nitg --global ./strings/array_tos.nit -m ./strings/array_to_s_vars/array_to_s_flatstr.nit --make-flags "CFLAGS=\"-g -O2 -DNOBOEHM\""

	prepare_res arr_tos_flat.out arr_tos_flat flatstring
	if $verbose; then
		echo "FlatStrings :"
	fi
	for i in `seq 1 "$3"`; do
		if $verbose; then
			echo "String length = $i, Concats/loop = $1, Loops = $2"
		fi
		bench_command $i flatstring$i ./array_tos --loops $2 --strlen $i --ccts $1 "NIT_GC_CHOOSER=large"
	done

	../bin/nitg --global ./strings/array_tos.nit -m ./strings/array_to_s_vars/array_to_s_buffer.nit --make-flags "CFLAGS=\"-g -O2 -DNOBOEHM\""

	prepare_res arr_tos_buf.out arr_tos_buf flatbuffer
	if $verbose; then
		echo "FlatBuffers :"
	fi
	for i in `seq 1 "$3"`; do
		if $verbose; then
			echo "String length = $i, Concats/loop = $1, Loops = $2"
		fi
		bench_command $i flatbuffer$i ./array_tos --loops $2 --strlen $i --ccts $1 "NIT_GC_CHOOSER=large"
	done

	../bin/nitg --global ./strings/array_tos.nit -m ./strings/array_to_s_vars/array_to_s_manual.nit --make-flags "CFLAGS=\"-g -O2 -DNOBOEHM\""

	prepare_res arr_tos_man.out arr_tos_man memmove
	if $verbose; then
		echo "Memmove :"
	fi
	for i in `seq 1 "$3"`; do
		if $verbose; then
			echo "String length = $i, Concats/loop = $1, Loops = $2"
		fi
		bench_command $i memmove$i ./array_tos --loops $2 --strlen $i --ccts $1 "NIT_GC_CHOOSER=large"
	done

	../bin/nitg --global ./strings/array_tos.nit -m ./strings/array_to_s_vars/array_to_s_man_buf.nit --make-flags "CFLAGS=\"-g -O2 -DNOBOEHM\""

	prepare_res arr_tos_man_buf.out arr_tos_man_buf flatbuf_with_capacity
	if $verbose; then
		echo "FlatBuffer.with_capacity :"
	fi
	for i in `seq 1 "$3"`; do
		if $verbose; then
			echo "String length = $i, Concats/loop = $1, Loops = $2"
		fi
		bench_command $i flatbuf_with_capacity$i ./array_tos --loops $2 --strlen $i --ccts $1 "NIT_GC_CHOOSER=large"
	done

	../bin/nitg --global ./strings/array_tos.nit -m ./strings/array_to_s_vars/array_to_s_rope_buf.nit --make-flags "CFLAGS=\"-g -O2 -DNOBOEHM\""

	prepare_res arr_tos_rope_buf.out arr_tos_rope_buf ropebuf
	if $verbose; then
		echo "RopeBuffer :"
	fi
	for i in `seq 1 "$3"`; do
		if $verbose; then
			echo "String length = $i, Concats/loop = $1, Loops = $2"
		fi
		bench_command $i ropebuf$i ./array_tos --loops $2 --strlen $i --ccts $1 "NIT_GC_CHOOSER=large"
	done

	plot array_tos.gnu
}

function bench_concat()
{
	../bin/nitg --global ./strings/chain_concat.nit --make-flags "CFLAGS=\"-g -O2 -DNOBOEHM\""
	../bin/nitg --global ./strings/utf_chain_concat.nit --make-flags "CFLAGS=\"-g -O2 -DNOBOEHM\""

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
		bench_command $i flatstring$i ./chain_concat -m flatstr --loops $2 --strlen $3 --ccts $i "NIT_GC_CHOOSER=large"
	done

	prepare_res concat_buf.out concat_buf flatbuffer
	if $verbose; then
		echo "FlatBuffers :"
	fi
	for i in `seq 1 "$1"`; do
		if $verbose; then
			echo "String length = $i, Concats/loop = $2, Loops = $3"
		fi
		bench_command $i flatbuffer$i ./chain_concat -m flatbuf --loops $2 --strlen $3 --ccts $i "NIT_GC_CHOOSER=large"
	done

	prepare_res concat_flatstr_utf8_noindex.out concat_flatstr_utf8_noindex flatstring_utf8_noindex
	if $verbose; then
		echo "FlatString UTF-8 (without index) :"
	fi
	for i in `seq 1 "$1"`; do
		if $verbose; then
			echo "String length = $i, Concats/loop = $2, Loops = $3"
		fi
		bench_command $i flatstr_utf8_noindex$i ./utf_chain_concat -m flatstr_utf8_noindex --loops $2 --strlen $3 --ccts $i "NIT_GC_CHOOSER=large"
	done

	../bin/nitg --global ./strings/chain_concat.nit -m ../lib/standard/ropes.nit --make-flags "CFLAGS=\"-g -O2 -DNOBOEHM\""

	prepare_res concat_ropes.out concat_ropes ropes
	if $verbose; then
		echo "Ropes :"
	fi
	for i in `seq 1 "$1"`; do
		if $verbose; then
			echo "String length = $i, Concats/loop = $2, Loops = $3"
		fi
		bench_command $i ropes$i ./chain_concat -m flatstr --loops $2 --strlen $3 --ccts $i "NIT_GC_CHOOSER=large"
	done

	../bin/nitg --global ./strings/chain_concat.nit -m ../lib/standard/ropes.nit -m ../lib/buffered_ropes.nit --make-flags "CFLAGS=\"-g -O2 -DNOBOEHM\""

	prepare_res concat_buf_ropes.out concat_buf_ropes buffered_ropes
	if $verbose; then
		echo "buffered ropes :"
	fi
	for i in `seq 1 "$1"`; do
		if $verbose; then
			echo "string length = $i, concats/loop = $2, loops = $3"
		fi
		bench_command $i buf_ropes$i ./chain_concat -m flatstr --loops $2 --strlen $3 --ccts $i "NIT_GC_CHOOSER=large"
	done

	../bin/nitg --global ./strings/chain_cct_ropebuf.nit --make-flags "CFLAGS=\"-g -O2 -DNOBOEHM\""

	prepare_res cct_buf_ropes.out cct_buf_ropes cctbuf_ropes
	if $verbose; then
		echo "buffered ropes :"
	fi
	for i in `seq 1 "$1"`; do
		if $verbose; then
			echo "string length = $i, concats/loop = $2, loops = $3"
		fi
		bench_command $i cctbuf_ropes$i ./chain_cct_ropebuf --loops $2 --strlen $3 --ccts $i "NIT_GC_CHOOSER=large"
	done

	plot concat.gnu
}

function bench_iteration()
{
	if $verbose; then
		echo "*** Benching iteration performance ***"
	fi

	../bin/nitg --global ./strings/iteration_bench.nit --make-flags "CFLAGS=\"-g -O2 -DNOBOEHM\""
	../bin/nitg --global ./strings/utf_iteration_bench.nit --make-flags "CFLAGS=\"-g -O2 -DNOBOEHM\""

	prepare_res iter_flat_iter.out iter_flat_iter flatstring_iter
	if $verbose; then
		echo "FlatStrings by iterator :"
	fi
	for i in `seq 1 "$1"`; do
		if $verbose; then
			echo "String base length = $1, Concats = $i, Loops = $3"
		fi
		bench_command $i flatstr_iter$i ./iteration_bench -m flatstr --iter-mode iterator --loops $2 --strlen $3 --ccts $i "NIT_GC_CHOOSER=large"
	done

	prepare_res iter_flat_index.out iter_flat_index flatstring_index
	if $verbose; then
		echo "FlatStrings by index :"
	fi
	for i in `seq 1 "$1"`; do
		if $verbose; then
			echo "String base length = $1, Concats = $i, Loops = $3"
		fi
		bench_command $i flatstr_index$i ./iteration_bench -m flatstr --iter-mode index --loops $2 --strlen $3 --ccts $i "NIT_GC_CHOOSER=large"
	done

	prepare_res iter_buf_iter.out iter_buf_iter flatbuffer_iter
	if $verbose; then
		echo "FlatBuffers by iterator :"
	fi
	for i in `seq 1 "$1"`; do
		if $verbose; then
			echo "String base length = $1, Concats = $i, Loops = $3"
		fi
		bench_command $i flatbuf_iter$i ./iteration_bench -m flatbuf --iter-mode iterator --loops $2 --strlen $3 --ccts $i "NIT_GC_CHOOSER=large"
	done

	prepare_res iter_buf_index.out iter_buf_index flatbuffer_index
	if $verbose; then
		echo "FlatBuffers by index:"
	fi
	for i in `seq 1 "$1"`; do
		if $verbose; then
			echo "String base length = $1, Concats = $i, Loops = $3"
		fi
		bench_command $i flatbuf_index$i ./iteration_bench -m flatbuf --iter-mode index --loops $2 --strlen $3 --ccts $i "NIT_GC_CHOOSER=large"
	done

	prepare_res iter_flat_utf8_noindex_iter.out iter_flat_iter_utf8_noindex flatstring_utf8_noindex_iter
	if $verbose; then
		echo "FlatStrings by iterator :"
	fi
	for i in `seq 1 "$1"`; do
		if $verbose; then
			echo "String base length = $1, Concats = $i, Loops = $3"
		fi
		bench_command $i flatstr_iter_utf8_noindex$i ./utf_iteration_bench -m flatstr_utf8_noindex --iter-mode iterator --loops $2 --strlen $3 --ccts $i "NIT_GC_CHOOSER=large"
	done

	prepare_res iter_flat_utf8_noindex_index.out iter_flat_index_utf8_noindex flatstring_utf8_noindex_index
	if $verbose; then
		echo "FlatStrings by index :"
	fi
	for i in `seq 1 "$1"`; do
		if $verbose; then
			echo "String base length = $1, Concats = $i, Loops = $3"
		fi
		bench_command $i flatstr_index_utf8_noindex$i ./utf_iteration_bench -m flatstr_utf8_noindex --iter-mode index --loops $2 --strlen $3 --ccts $i "NIT_GC_CHOOSER=large"
	done

	../bin/nitg --global ./strings/iteration_bench.nit -m ../lib/standard/ropes.nit --make-flags "CFLAGS=\"-g -O2 -DNOBOEHM\""

	prepare_res iter_ropes_iter.out iter_ropes_iter ropes_iter
	if $verbose; then
		echo "Ropes by iterator :"
	fi
	for i in `seq 1 "$1"`; do
		if $verbose; then
			echo "String base length = $1, Concats (depth of the rope) = $i, Loops = $3"
		fi
		bench_command $i ropes_iter$i ./iteration_bench -m flatstr --iter-mode iterator --loops $2 --strlen $3 --ccts $i "NIT_GC_CHOOSER=large"
	done

	prepare_res iter_ropes_index.out iter_ropes_index ropes_index
	if $verbose; then
		echo "Ropes by index :"
	fi
	for i in `seq 1 "$1"`; do
		if $verbose; then
			echo "String base length = $1, Concats (depth of the rope) = $i, Loops = $3"
		fi
		bench_command $i ropes_index$i ./iteration_bench -m flatstr --iter-mode index --loops $2 --strlen $3 --ccts $i "NIT_GC_CHOOSER=large"
	done

	../bin/nitg --global ./strings/iteration_bench.nit -m ../lib/standard/ropes.nit -m ../lib/buffered_ropes.nit --make-flags "CFLAGS=\"-g -O2 -DNOBOEHM\""

	prepare_res iter_buf_ropes_iter.out iter_buf_ropes_iter buf_ropes_iter
	if $verbose; then
		echo "Buffered Ropes by iterator :"
	fi
	for i in `seq 1 "$1"`; do
		if $verbose; then
			echo "String base length = $1, Concats (depth of the rope) = $i, Loops = $3"
		fi
		bench_command $i buf_ropes_iter$i ./iteration_bench -m flatstr --iter-mode iterator --loops $2 --strlen $3 --ccts $i "NIT_GC_CHOOSER=large"
	done

	prepare_res iter_buf_ropes_index.out iter_buf_ropes_index buf_ropes_index
	if $verbose; then
		echo "Buffered Ropes by index :"
	fi
	for i in `seq 1 "$1"`; do
		if $verbose; then
			echo "String base length = $1, Concats (depth of the rope) = $i, Loops = $3"
		fi
		bench_command $i buf_ropes_index$i ./iteration_bench -m flatstr --iter-mode index --loops $2 --strlen $3 --ccts $i "NIT_GC_CHOOSER=large"
	done

	plot iter.gnu
}

function bench_substr()
{
	if $verbose; then
		echo "*** Benching substring performance ***"
	fi

	../bin/nitg --global ./strings/substr_bench.nit --make-flags "CFLAGS=\"-g -O2 -DNOBOEHM\""
	../bin/nitg --global ./strings/utf_substr_bench.nit --make-flags "CFLAGS=\"-g -O2 -DNOBOEHM\""

	prepare_res substr_flat.out substr_flat flatstring
	if $verbose; then
		echo "FlatStrings :"
	fi
	for i in `seq 1 "$1"`; do
		if $verbose; then
			echo "String length = $i, loops = $2, Loops = $3"
		fi
		bench_command $i flatstring$i ./substr_bench -m flatstr --loops $2 --strlen $3 --ccts $i "NIT_GC_CHOOSER=large"
	done

	prepare_res substr_buf.out substr_buf flatbuffer
	if $verbose; then
		echo "FlatBuffers :"
	fi
	for i in `seq 1 "$1"`; do
		if $verbose; then
			echo "String length = $i, loops = $2, Loops = $3"
		fi
		bench_command $i flatbuffer$i ./substr_bench -m flatbuf --loops $2 --strlen $3 --ccts $i "NIT_GC_CHOOSER=large"
	done

	prepare_res substr_flat_utf8_noindex.out substr_flat_utf8_noindex flatstring_utf8_noindex
	if $verbose; then
		echo "FlatStrings UTF-8 (without index) :"
	fi
	for i in `seq 1 "$1"`; do
		if $verbose; then
			echo "String length = $i, loops = $2, Loops = $3"
		fi
		bench_command $i flatstring_utf8_noindex$i ./utf_substr_bench -m flatstr_utf8_noindex --loops $2 --strlen $3 --ccts $i "NIT_GC_CHOOSER=large"
	done

	../bin/nitg --global ./strings/substr_bench.nit -m ../lib/standard/ropes.nit --make-flags "CFLAGS=\"-g -O2 -DNOBOEHM\""

	prepare_res substr_ropes.out substr_ropes ropes
	if $verbose; then
		echo "Ropes :"
	fi
	for i in `seq 1 "$1"`; do
		if $verbose; then
			echo "String length = $i, loops = $2, Loops = $3"
		fi
		bench_command $i ropes$i ./substr_bench -m flatstr --loops $2 --strlen $3 --ccts $i "NIT_GC_CHOOSER=large"
	done

	../bin/nitg --global ./strings/substr_bench.nit -m ../lib/standard/ropes.nit -m ../lib/buffered_ropes.nit --make-flags "CFLAGS=\"-g -O2 -DNOBOEHM\""

	prepare_res substr_buf_ropes.out substr_buf_ropes buf_ropes
	if $verbose; then
		echo "Buffered Ropes :"
	fi
	for i in `seq 1 "$1"`; do
		if $verbose; then
			echo "String length = $i, loops = $2, Loops = $3"
		fi
		bench_command $i buf_ropes$i ./substr_bench -m flatstr --loops $2 --strlen $3 --ccts $i "NIT_GC_CHOOSER=large"
	done
	plot substr.gnu
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
	all) shift; benches $@ ;;
	*) usage; exit;;
esac
