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

# Check whitespace errors in commits
# Usage: checkwhitespaces from to
#
# This script is in fact a more friendly version of `git log --check`

set -e

from=${1:-origin/master}
to=${2:-HEAD}

err=0

cd `git rev-parse --show-toplevel`

echo "checkwhitespaces $from (`git rev-parse "$from"`) .. $to (`git rev-parse "$to"`)"
for ref in `git rev-list --no-merges "$from".."$to"`; do
	# Show nothing if no error
	if git --no-pager show --check --oneline $ref > /dev/null; then
		continue
	fi

	# Run the command again to display things
	echo ""
	echo "Found whitespace errors in commit"
	git --no-pager show --check --oneline $ref || true
	err=1
done

if test "$err" = 1; then
	echo ""
	echo "Please check that each file in each commit does not contain whitespace errors."
	echo "Note that existing commits should be amended; pushing new commit is not sufficient."
	echo "Hint: use \"git log --check\" to see whitespace errors."
fi

exit $err
