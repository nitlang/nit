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
	mkdir -p inputs
	nitc --semi-global scripts/csv_gen.nit -o scripts/csv_gen
	echo "Generating 1000 lines documents"
	./scripts/csv_gen 10 1000 inputs/1000_l.csv
	./scripts/csv_gen 10 1000 inputs/1000_uni_l.csv --unicode
	echo "Generating 10000 lines documents"
	./scripts/csv_gen 10 10000 inputs/10000_l.csv
	./scripts/csv_gen 10 10000 inputs/10000_uni_l.csv --unicode
	echo "Generating 100000 lines documents"
	./scripts/csv_gen 10 100000 inputs/100000_l.csv
	./scripts/csv_gen 10 100000 inputs/100000_uni_l.csv --unicode
	echo "Generating 1000000 lines documents"
	./scripts/csv_gen 10 1000000 inputs/1000000_l.csv
	./scripts/csv_gen 10 1000000 inputs/1000000_uni_l.csv --unicode
}

function usage()
{
	echo "run_bench: ./csv_bench.sh [options]"
	echo "  -v: verbose mode"
	echo "  -n count: number of execution for each bar (default: $count)"
	echo "  -h: this help"
}

stop=false
fast=false
while [ "$stop" = false ]; do
	case "$1" in
		-v) verbose=true; shift;;
		--fast) fast=true; shift;;
		-h) usage; exit;;
		-n) count="$2"; shift; shift;;
		*) stop=true
	esac
done

if [ -z "$fast" ]; then
	init_repo
fi

mkdir -p out

echo "Compiling engines"

echo "Java Parser"

javac -cp './scripts/commons-csv-1.3.jar' scripts/JavaCSV.java

echo "Go parser"

go build -o scripts/go_csv scripts/go_csv.go

echo "Nit/Ad-Hoc Parser"

nitc --semi-global scripts/nit_csv.nit -o scripts/nit_csv

declare -a script_names=('Python 3 - Pandas' 'Python 2 - Pandas' 'Go' 'Nit' 'Python 3 - Standard' 'Python 2 - Standard' 'Java - Apache commons' 'Ruby')
declare -a script_cmds=('python3 scripts/python_csv.py' 'python2 scripts/python_csv.py' './scripts/go_csv' './scripts/nit_csv' 'python3 scripts/python_stdcsv.py' 'python2 scripts/python_stdcsv.py' "java -cp /usr/share/java/commons-csv.jar:. scripts.JavaCSV" 'ruby scripts/ruby_csv.rb')

for script in `seq 1 ${#script_cmds[@]}`; do
	echo "Preparing res for ${script_names[$script - 1]}"
	prepare_res "./out/${script_names[$script - 1]}.dat" "${script_names[$script - 1]}" "${script_names[$script - 1]}"
	for file in inputs/*.csv; do
		fname=`basename $file .csv`
		bench_command $file "Benching file $file using ${script_cmds[$script - 1]} parser" ${script_cmds[$script - 1]} $file
	done;
done;

rm scripts/nit_csv
rm scripts/JavaCSV.class
rm scripts/go_csv

plot out/bench_csv.gnu
