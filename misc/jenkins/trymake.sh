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

# Try to make targets (like pre-build). If the rule does on exists this does nothing instead of failing.
# This also generate xml JUnit files
#
# Usage
#
#     trymake.sh name directory [targets]..
#
# Example
#
#     trymake.sh foo contrib/foo check android

shdir="`dirname "$BASH_SOURCE"`"

name="$1"
dir="$2"
shift
shift
failed=
# Check each rules, if they exists
for rule in "$@"; do
	make -C "$dir" $rule -n >/dev/null 2>/dev/null || {
		# Special case for `all` that falls back as the default target
		if [ "$rule" = "all" ]; then
			echo "*** make -C $dir ***"
			$shdir/unitrun.sh "cmd-$name-make" make -C "$dir" ||
				failed="$failed $name"
		fi
		continue
	}
	echo "*** make $rule -C $dir ***"
	$shdir/unitrun.sh "cmd-$name-make$rule" make -C "$dir" $rule ||
	failed="$failed $name-$rule"
done
if test -n "$failed"; then
	echo "FAILED: $failed"
	exit 1
fi
exit 0
