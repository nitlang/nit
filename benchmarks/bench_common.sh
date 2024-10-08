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

# Global variables

# Number of times a command must be run with bench_command
count=1

# User time limit (in second) before a command is aborted
usertimelimit=120

# Common functions for all the bench scripts

# Run a single command multiple time and store the execution times
# in the current $res file.
#
#  $1: title of the command
#  $2: long desription of the command
#  rest: the command to execute
function bench_command()
{
	if [ "$dry_run" = "true" ]; then return; fi
	local title="$1"
	local desc="$2"
	shift
	shift
	if test "$verbose" = true; then outputopts="/dev/stdout"; else outputopts="/dev/null"; fi
	timeout="time.out"
	echo "$title" > "$timeout"
	echo "# $desc" >> "$timeout"
	echo "\$ $@" >> "$timeout"
	echo
	echo "** [$title] $desc **"
	echo " $ $@"

	failed=

	# Execute the commands $count times
	for i in `seq 1 "$count"`; do
		(
			ulimit -t "$usertimelimit" 2> /dev/null
			/usr/bin/time -f "%U" -o "$timeout" -a "$@" > $outputopts 2>&1
		) || { err=$?; failed=true; die "$1: failed with $err"; }
		echo -n "$i. "
		tail -n 1 "$timeout"
		test -n "$failed" && break
	done

	line=`compute_stats "$timeout"`
	echo "$line ($res)"
	echo $line >> "$res"

	if test -n "$xml"; then
		echo >>"$xml" "<testcase classname='bench.`basename $res .dat`' name='$title' time='`echo $line | cut -f 1 -d " "`' timestamp='`date -Iseconds`'>"
		if test -n "$failed"; then
			echo >>"$xml" "<error message='Command failed'/>"
		fi
		echo >>"$xml" "</testcase>"
	fi
	test -z "$failed"
}

# Run a simble command witout storing the execution time
# Used to display command on verbose and skip long executions when dry_run is given
# $@ command to execute
function run_command()
{
	if [ "$dry_run" = "true" ]; then return; fi
	echo " $ $@"
	"$@" || die "$@: failed"
}

# Check if the test should be skiped according to its name
# $1: name of the test
# $2: description of the test
# $NOTSKIPED: arguments
function skip_test()
{
	if test -z "$NOTSKIPED"; then
		echo "* $1"
		return 0
	fi
	if test "$NOTSKIPED" = "all"; then
		: # Execute anyway
	elif echo "$1" | egrep "$NOTSKIPED" >/dev/null 2>&1; then
		: # Found one to execute
	else
		return 0
	fi
	if test -n "$html"; then
		echo >>"$html" "<h2 id="$1">$1</h2>"
	fi
	echo "*"
	echo "* $1 *****"
	echo "*"
	return 1
}

# Helper function. Print the error message and set $died to 1
function die()
{
	echo >&2 "error: $*"
	died=1
	return 1
}
