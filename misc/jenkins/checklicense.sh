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
	echo "Usage: checklicense from to"
	echo ""
	exit
fi

from=$1
to=$2

err=0

git diff --name-status $from..$to -- "*.nit" "*.sh" | sed -n 's/^A\s*//p' > checklicense_new_files.out
test -s checklicense_new_files.out || exit 0
grep -L 'his file is part of NIT' `cat checklicense_new_files.out` 2>/dev/null | tee checklicense_missing.out
test \! -s checklicense_missing.out
