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

# Check missing "This file is part of NIT…" comment in committed scripts.
#
# Usage: checklicense.sh from to

set -e

from=${1:-origin/master}
to=${2:-HEAD}

err=0

cd `git rev-parse --show-toplevel`

echo "checklicense $from (`git rev-parse "$from"`) .. $to (`git rev-parse "$to"`)"
git diff --name-status $from..$to -- "*.nit" "*.sh" | sed -n 's/^A\s*//p' > checklicense_new_files.out
if test \! -s checklicense_new_files.out; then
	echo "No new files"
	exit 0
fi
grep -L '\(^\|\b\)# [Tt]his file is part of NIT ' `cat checklicense_new_files.out` 2>/dev/null > checklicense_missing.out || true
if test -s checklicense_missing.out; then
	echo "These files are missing their licence:"
	echo ""
	cat checklicense_missing.out
	echo ""
	echo "Please double check that the licence text (i.e. \`This file is part of NIT...\`) is included at the begin of these files."
	exit 1
else
	echo "All `cat checklicense_new_files.out | wc -l` checked new files have a correct license."
	exit 0
fi
