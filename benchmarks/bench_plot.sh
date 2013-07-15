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

# This shell script generate gnuplot results

# perl function to compute min/max/avg.
# used by bench_command
#
# $1: file
# return: first min max avg label
function compute_stats()
{
	file="$1"
	# Compute statistics
	perl - "$file" <<'END'
	@lines = ();
	$first = undef;
	chomp($label = <>);
	while(<>) {
		chomp;
		if (/^\d/) {
			if (defined $first) {
				push @lines, $_;
			} else {
				$first = $_;
			}
		}
	}
	$len = scalar @lines;
	if ($len) {
		@lines = sort {$a <=> $b} @lines;
		$min = $lines[0];
		$max = $lines[$#lines];
		$avg = 0;
		for $i (@lines) { $avg += $i; }
		$avg = $avg / $len;
		print "${first} ${min} ${max} ${avg} \"${label}\"\n";
	} else {
		print "${first} ${first} ${first} ${first} \"${label}\"\n";
	}
END
}

# Create a new $res to be used in the next plot
#
# $1 = resfile
# $2 = title
# $3 = description
function prepare_res()
{
	echo
	echo "# [$2] $3 #"
	res=$1
	if [ "$plots" = "" ]; then
		plots="plot '$1' using 4:2:3:xticlabels(5) ti '$2';"
	else
		plots="$plots replot '$1' using 4:2:3 ti '$2';"
	fi
	if [ "$dry_run" = "true" ]; then return; fi
	echo "# [$2] $3 ; count=$count" > "$res"
	echo "# first min max avg title" >> "$res"
}

# Plot the last $res as an histogram
# $1: plot file (eg toto.gnu)
function plot()
{
	cat >"$1" <<END
set auto x;
set yrange [0:];
set style data histogram;
set style histogram cluster gap 2;
set style histogram errorbars linewidth 1;
set style fill solid 0.3 border -1;
set bars front;
set boxwidth 0.9;
set xtic nomirror rotate by -45 scale 0 font ',8';
set title "$1 ; avg. on $count-1 runs"
set ylabel "time (s)"
$plots
END
	echo "# gnuplot -p $1"
	gnuplot -p "$1"
	plots=
}

## GLOBAL VARIABLES ##

# The current $res (set by prepare_res, used by bench_command)
res=

# The current stuff to plot (set by prepare_res, used by plot)
plots=

