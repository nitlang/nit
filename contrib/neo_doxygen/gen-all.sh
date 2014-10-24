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

# ./gen-all.sh directory
#
# Document all projects in the specified directory.
#
# Projects are direct sub-directories of the specified directory.
# Every project directory must contain a `.nx_config` file.
# Also, every project must include the Doxygen XML output in its `doxygen/xml`
# directory.

NEO_DOXYGEN="${PWD}/bin/neo_doxygen"
NX="${PWD}/../../bin/nx"

for dir in "$1"/*; do
	if [ -d "$dir" ]; then
		if [ -f "$dir/.nx_config" ]; then
			./gen-one.sh $dir
		fi
	fi
done
