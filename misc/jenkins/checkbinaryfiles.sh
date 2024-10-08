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

# Check binary files that might be wrongly committed.
#
# Usage: checkbinaryfiles.sh from to

from=${1:-origin/master}
to=${2:-HEAD}

err=0

cd `git rev-parse --show-toplevel`

err=0

echo "checkbinaryfiles $from (`git rev-parse "$from"`) .. $to (`git rev-parse "$to"`)"
git diff --name-only --diff-filter=d --no-renames $from..$to -z > checkbinaryfiles_files.out
if test \! -s checkbinaryfiles_files.out; then
	echo "No committed files"
	exit 0
fi
# Identify binary files with the presence of a null byte or a control char (except \n \r \t)
xargs -0 grep -Pal '[\x00-\x08\x0B-\x0C\x0E-\x1F]' < checkbinaryfiles_files.out > checkbinaryfiles_application.out 2> /dev/null
if test -s checkbinaryfiles_application.out; then
	echo "These files type need a manual check:"
	echo ""
	cat checkbinaryfiles_application.out
	echo ""
	echo "Please double check that they are not wrongly committed files or that unexpected strange control characters are not included in them."
	exit 1
else
	echo "All committed files seem good"
	exit 0
fi
