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

# Shell script to bench json parsers over different documents

source ../bench_common.sh
source ../bench_plot.sh

## CONFIGURATION OPTIONS ##

# Default number of times a command must be run with bench_command
# Can be overrided with 'the option -n'
count=5

## HANDLE OPTIONS ##

function init_repo()
{
	echo "Preparing submodules"
	git submodule update --init
	echo "Submodules ready"
	mkdir -p inputs
	echo "Preparing data for benchmarks"
	if [ ! -e inputs/large_escaped.json ]; then
		echo "Downloading file 1/4"
		wget -O inputs/large_escaped.json https://github.com/seductiveapps/largeJSON/blob/master/100mb.json?raw=true
	fi
	echo "File 1/4 ready"
	if [ ! -e inputs/magic.json ]; then
		echo "Downloading file 2/4"
		wget -O inputs/magic.json http://mtgjson.com/json/AllSets-x.json
	fi
	echo "File 2/4 ready"
	if [ ! -e inputs/big_twitter.json ]; then
		echo "Downloading file 3/4"
		wget -O inputs/twitter.json https://github.com/miloyip/nativejson-benchmark/raw/master/data/twitter.json
		cd inputs
		./multiply_twitter.sh
		rm twitter.json
		cd ..
	fi
	echo "File 3/4 ready"
	if [ ! -e inputs/big_gov_data.json ]; then
		echo "Downloading file 4/4"
		wget -O inputs/gov_data.json https://edg.epa.gov/data.json
		cd inputs
		./multiply_gov.sh
		rm gov_data.json
		cd ..
	fi
	echo "File 4/4 ready"
}

function usage()
{
	echo "run_bench: ./bench_json.sh [options]"
	echo "  -v: verbose mode"
	echo "  -n count: number of execution for each bar (default: $count)"
	echo "  -fast: check only Nit"
	echo "  -h: this help"
}

stop=false
fast=
while [ "$stop" = false ]; do
	case "$1" in
		-v) verbose=true; shift;;
		--fast) fast=true; shift;;
		-h) usage; exit;;
		-n) count="$2"; shift; shift;;
		*) stop=true
	esac
done

init_repo

mkdir -p out
html="index.html"
echo >"$html" "<html><head></head><body>"

echo "Compiling engines"

if [ -z "$fast" ]; then
	declare -a script_names=('C' 'Python 3' 'Python 2' 'Go' 'Nit Ad-hoc UTF-8 No Ropes' 'Nit Ad-hoc UTF-8 + Ropes' 'Ruby ext')
	declare -a script_cmds=('./scripts/c_parser' 'python3 scripts/python.py' 'python2 scripts/python.py' './scripts/json_parse' './scripts/nit_adhoc_utf_noropes' './scripts/nit_adhoc_utf_ropes' 'ruby scripts/json_ext.rb')

	echo "C JSON Parser"

	gcc -O2 -I thirdparty/ujson4c/src -I thirdparty/ujson4c/3rdparty/ thirdparty/ujson4c/3rdparty/ultrajsondec.c scripts/c_parser.c -o scripts/c_parser -lm

	echo "Go JSON Parser"

	go build -o scripts/json_parse scripts/json_parse.go
else
	declare -a script_names=('Nit Ad-hoc UTF-8 No Ropes' 'Nit Ad-hoc UTF-8 + Ropes')
	declare -a script_cmds=('./scripts/nit_adhoc_utf_noropes' './scripts/nit_adhoc_utf_ropes')

fi

echo "Nit/NitCC Parser"

nitc --semi-global scripts/nitcc_parser.nit -o scripts/nitcc_parser

echo "Nit/Ad-Hoc UTF-8 Parser, No Ropes"

nitc --semi-global scripts/nit_adhoc_utf_noropes.nit -o scripts/nit_adhoc_utf_noropes

echo "Nit/Ad-Hoc UTF-8 Parser, With Ropes"

nitc --semi-global scripts/nit_adhoc_utf_ropes.nit -o scripts/nit_adhoc_utf_ropes


for script in `seq 1 ${#script_cmds[@]}`; do
	echo "Preparing res for ${script_names[$script - 1]}"
	prepare_res "./out/${script_names[$script - 1]}.dat" "${script_names[$script - 1]}" "${script_names[$script - 1]}"
	for file in inputs/*.json; do
		fname=`basename $file .json`
		bench_command $file "Benching file $file using ${script_cmds[$script - 1]} parser" ${script_cmds[$script - 1]} $file
	done;
done;

rm scripts/nitcc_parser
rm scripts/json_parse
rm scripts/c_parser
rm scripts/nit_adhoc_utf_noropes
rm scripts/nit_adhoc_utf_ropes

plot out/bench_json.gnu

echo >>"$html" "</body></html>"

if test -n "$died"; then
	echo "Some commands failed"
	exit 1
fi
exit 0
