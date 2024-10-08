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

# Check missing signed-off-by in commits
# Usage: checksignedoffby from to

set -e

from=${1:-origin/master}
to=${2:-HEAD}

err=0

cd `git rev-parse --show-toplevel`

echo "checksignedoffby $from (`git rev-parse "$from"`) .. $to (`git rev-parse "$to"`)"
for ref in `git rev-list --no-merges "$from".."$to"`; do
	# What is the expected?
	sig=`git --no-pager show -s --format='Signed-off-by: %an <%ae>' $ref`
	# Do we found some signed-off-by?
	git --no-pager show -s --format="%b" $ref | grep "^Signed-off-by:" > check_signedoff_list.out || {
		echo ""
		echo "Missing $sig for commit"
		git --no-pager show -s --oneline $ref
		err=1
		continue
	}
	# Do we found the expected thing?
	cat check_signedoff_list.out | grep -q "^$sig\$" && continue
	echo ""
	echo "Bad or missing Signed-off-by for commit"
	git --no-pager show -s --oneline $ref
	echo "Expected (from local git config):"
	echo "$sig"
	echo "Got:"
	cat check_signedoff_list.out
	err=1
done

rm check_signedoff_list.out 2> /dev/null || true

if test "$err" = 1; then
	echo ""
	echo "Please check that each commit contains a \`Signed-off-by:\` statement that matches the author's name and email."
	echo "Note that existing commits should be amended; pushing new commit is not sufficient."
fi

exit $err
