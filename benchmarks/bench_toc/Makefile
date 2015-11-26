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

lvl=properties

all: clean namespaces groups shuffled ordered compare

clean:
	mkdir -p bin/
	../../bin/nitc bench_clean.nit -o bin/bench_clean
	bin/bench_clean experts/experts.in --expert-dir experts/origin --output-dir experts/clean -l $(lvl)

namespaces:
	mkdir -p bin/
	../../bin/nitc bench_namespaces.nit -o bin/bench_namespaces
	bin/bench_namespaces experts/experts.in --expert-dir experts/clean --output-dir experts/namespaces -l $(lvl)

groups:
	mkdir -p bin/
	../../bin/nitc bench_extract_groups.nit -o bin/bench_extract_groups
	bin/bench_extract_groups experts/experts.in --expert-dir experts/namespaces --output-dir experts/groups -l $(lvl)

shuffled:
	mkdir -p bin/
	../../bin/nitc bench_shuffle_groups.nit -o bin/bench_shuffle_groups
	bin/bench_shuffle_groups experts/experts.in --expert-dir experts/groups --output-dir experts/shuffled -l $(lvl)

ordered:
	mkdir -p bin/
	../../bin/nitc bench_gen_order.nit -o bin/bench_gen_order
	bin/bench_gen_order experts/experts.in --expert-dir experts/shuffled --output-dir experts/ordered -l $(lvl)

compare:
	mkdir -p bin/
	../../bin/nitc bench_compare_order.nit -o bin/bench_compare_order
	bin/bench_compare_order experts/experts.in --expert-dir experts/groups --compare-dir experts/ordered --csv-output output.csv -l $(lvl)
