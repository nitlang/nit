#! /bin/bash

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

# ./gen-one.sh <source_language> <directory>
#
# Document the project in the specified directory.
#
# The project name is the basename of the specified directory.
# The project directory must contain a `.nx_config` file.
# Also, the directory must include the Doxygen XML output in its `doxygen/xml`
# subdirectory.

NEO_DOXYGEN="${PWD}/bin/neo_doxygen"
NX="${PWD}/../../bin/nx"
dir=$2

. sh-lib/errors.sh

echo "$0: Documenting \"${dir##*/}\"..."
pushd "$dir"
try "$NEO_DOXYGEN" --src-lang "$1" --dest http://localhost:7474 -- "${dir##*/}" "$dir/doxygen/xml" > neo_doxygen.out
try echo "$0: [done] neo_doxygen"
try "$NX" neo doc "${dir##*/}"
try echo "$0: [done] nx"
popd
