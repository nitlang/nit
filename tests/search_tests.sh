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

stop=false
while [ "$stop" = false ]; do
	case "$1" in
		-v) verbose=true; shift;;
		*) stop=true
	esac
done

if test $# = 0; then
	echo "Usage: search_test.sh [-v] prog/res/testname..."
	echo "Search program paths of tests for given nit files, res files, and test names"
	echo " -v  Try to find something and display it when a test is not found."
	exit
fi

res=0

# Build the full list once to filter results
./listfull.sh > listfull.out
find zzz_tests >> listfull.out

for f in "$@"; do
	# Get the basename
	case "$f" in
		*.nit)
			if test -f "$ff"; then
				echo "$f"
				continue
			fi
			b=`basename -- "$f" .nit`
			;;
		*.res)
			b=`basename -- "$f" .res`
			;;
		*)
			b=`basename -- "$f"`
			;;
	esac

	# remove bad chars
	c="$(printf '%s\n' "$b" | sed '
		# POSIX BRE metacharacters -> .
		s/[\\.*^$]\|\[\|]/./g

		# Escape the apostrophe the same way than `listfull.sh`,
		# then re-escape in POSIX BRE.
		# x -> x\\xx (where `x` is the apostrophe)
		s/'\''/'\''\\\\'\'\''/g
	')"

	# Remove alts of args test variations
	c=`echo "$c" | sed 's/\(_[0-9]*alt[0-9][0-9]*\)/\\\\(\1\\\\)\\\\?/g;s/\(_args[0-9][0-9]*\)/\\\\(\1\\\\)\\\\?/'`
	b=`echo "$b" | sed 's/_[0-9]*alt[0-9][0-9]*//g;s/_args[0-9][0-9]*//'`
	# Search the orig nit file in the list
	{
		grep -- "\(^'\|/\)$c.nit" listfull.out | xargs -E '' -- printf '%s\n'
	} || {
		res=1
		echo >&2 "No test $b.nit found for $f"
		test "$verbose" == "true" || continue
		# Search the nit file outside the list...
		find ../../nit* -name "$b.nit" >&2
		# Search the nit file in the git history...
		git log -1 -- "$b.nit" >&2
		# Search the orig file in the git history...
		git log -1 -- "$f" >&2
	}
done

exit $res
