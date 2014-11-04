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

# Error handling.

# The program’s name.
prog_name=$0

# Run the specified command and exit in case of error.
function try {
	"$@"
	local status=$?
	if [ $status -ne 0 ]; then
		>&2 echo "${prog_name}: Error: \`$1\` failed with exit status ${status}."
		trace
		exit "$status"
	fi
	return 0
}

# Print the stack trace.
function trace {
	local frame=0
	>&2 caller $frame
	local has_next=$?
	while [ $has_next = 0 ]; do
		((frame++));
		>&2 caller $frame
		has_next=$?
	done
	>&2 echo "---"
	return 0
}
