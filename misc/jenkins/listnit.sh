#!/bin/sh
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

# This program list git-registered nit files that correspond to real compilable modules.
# Real modules exclude basic tests and broken files.
# Note: `make full` is required in order to build potential generated dependencies.
#
# With the flag `-I`, the list of required -I options is also generated.
# Thus, it allows to use the command as arguments of tools.
#
#     nitmetrics `./listnit.sh -I`

# Filepaths of modules to exclude (regular expression)
exclude="parser_abs.nit\|nitcc_lexer0"

# Directories needed for explicit -I options.
includedirs="src contrib/tnitter/src/ contrib/benitlux/src/ examples/ contrib/wiringPi/lib/ contrib/opportunity/src/"

# Flag -I
incl=""
if test "$1" = "-I"; then
	incl=true
	shift
fi

# Get the relative directory to the root of the workdir
p=`git rev-parse --show-cdup`

# List files
git ls-files "${p}src/**.nit" "${p}lib/**.nit" "${p}contrib/**.nit" "${p}examples/**.nit" | \
	grep -v "$exclude" | tee listnit.out

# List -I if needed
if test -n "$incl"; then
	for i in $includedirs; do
		echo "-I $p$i"
	done
fi
