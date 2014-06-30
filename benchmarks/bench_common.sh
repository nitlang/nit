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

	# Execute the commands $count times
	for i in `seq 1 "$count"`; do
		/usr/bin/time -f "%U" -o "$timeout" -a "$@" > $outputopts 2>&1 || die "$1: failed"
		echo -n "$i. "
		tail -n 1 "$timeout"
	done

	line=`compute_stats "$timeout"`
	echo "$line ($res)"
	echo $line >> "$res"
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
		echo >>"$html" "<h2>$1</h2>"
	fi
	echo "*"
	echo "* $1 *****"
	echo "*"
	return 1
}

