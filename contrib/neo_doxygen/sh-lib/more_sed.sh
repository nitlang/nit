#! /bin/sh

# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Functions related to the `sed` utility.

# Replace `$1` by `$2` in the specified files (the rest of the arguments).
#
# Replacements are done in place.
#
# SETS: `local_1`
# SETS: `local_2`
replace() {
	local_1=`escape_to_bre "$1"`
	local_2=`escape_to_bre "$2"`
	shift 2
	sed -s -i -e s."${local_1}"."${local_2}".g -- "$@"
	unset local_1
	unset local_2
}

# Escape `$1` for inclusion in a POSIX BRE.
escape_to_bre() {
	echo "$1" | sed -e 's/\*\|\.\|\^\|\$\|\[\|\\/\\\0/g'
}
