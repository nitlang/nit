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

# List test files associated to modified file or sav

if test "$#" -lt 2; then
	echo "Usage: git_search_tests from to"
	echo "List test files associated to modified file or sav"
	exit
fi

from=$1
to=$2

err=0

# base tests that are empirically easy to brake
moretests="base_compile.nit base_attr.nit base_gen.nit base_gen_reassign.nit"

# Get the modified files
git diff --name-only $from..$to -- "../*.nit" "*.res" | grep -v zzz_test > git_search_tests.out

# filter it trough ./search_tests.sh
./search_tests.sh $moretests `cat git_search_tests.out` 2> /dev/null | sort -u
