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

# Check that options are documented in the manpages of the tool.
# Usage: check_manpages from to

set -e

ret=0
for bin in bin/nit*; do

	name=`basename $bin`

	manc=share/man/nitc.md
	man=share/man/$name.md

	if ! test -f $man; then
		echo "No manpage for binary $bin. Add one in $man"
		echo ""
		ret=1
		continue
	fi

	$bin --help | grep '^  ' | sed 's/    */;/;s/  //' > check_manpages-option_list.out
	while IFS=';' read opt cmt; do
		# Generate first lines for the man page from --help
		printf "%s\n" "$opt" | sed 's/, /`, `/g;s/^/### `/;s/$/`/' > check_manpages-from_help.out
		echo "$cmt." >> check_manpages-from_help.out

		# Generate grep pattern to search in the existing manpage
		printf "%s\n" "$opt" | sed 's/, /`\\|`/g;s/^/###.*\\(`/;s/$/`\\)/' > check_manpages-grep_pattern.out

		# Search pattern
		if ! grep -A 1 -f check_manpages-grep_pattern.out $man > check_manpages-from_man.out; then
			if ! grep -A 1 -f check_manpages-grep_pattern.out $manc > check_manpages-from_man.out; then
				# Motif not found :(
				echo "$opt: missing in the manpage $man. Here what is expected:"
				echo ""
				cat check_manpages-from_help.out
				echo ""
				ret=1
				continue
			fi

			# found in `nitc.md`, check more only if dealing with nitc
			[ "$man" = "$manc" ] || continue
		fi

		# Test what is expected
		if ! diff -q <(sed -E 's/\s*(.*)//' check_manpages-from_help.out) <(sed -E 's/\s*(.*)//' check_manpages-from_man.out) > /dev/null; then
			echo "$opt: mismatch documentation in the manpage $man. Here the word diff:"
			echo ""
			wdiff check_manpages-from_help.out check_manpages-from_man.out | colordiff
			echo ""
			ret=1
			continue
		fi
	done < check_manpages-option_list.out
done

exit "$ret"
