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

# Check missing signed-off-by in commits

if test "$#" -lt 2; then
	echo "Usage: checksignedoffby from to"
	echo ""
	exit
fi

from=$1
to=$2

err=0

for ref in `git rev-list --no-merges "$from".."$to"`; do
	# What is the expected?
	sig=`git --no-pager show -s --format='Signed-off-by: %an <%ae>' $ref`
	# Do we found some signed-off-by?
	git --no-pager show -s --format="%b" $ref | grep "^Signed-off-by:" > check_signedoff_list.out || {
		git --no-pager show -s --oneline $ref
		echo "Missing $sig"
		err=1
		continue
	}
	# Do we found the expected thing?
	cat check_signedoff_list.out | grep -q "^$sig\$" && continue
	git --no-pager show -s --oneline $ref
	echo "Bad or missing $sig; got:"
	cat check_signedoff_list.out
	err=1
done

rm check_signedoff_list.out 2> /dev/null

exit $err
