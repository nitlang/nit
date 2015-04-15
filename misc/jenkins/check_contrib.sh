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

# Check the build and the execution of software in examples/ and contrib/
# The script must be run from the root Nit directory.
#
# various .xml junit file will be generated in the root directory for jenkins.

projects=`echo examples/*/Makefile contrib/*/Makefile`

failed=
for p in $projects; do
	dir=`dirname "$p"`
	name=`basename "$dir"`
	echo "*** make $dir ***"
	if misc/jenkins/unitrun.sh "run-$name-make" make -C "$dir"; then
		# Make OK, is there a `check` rule?
		make -C "$dir" check -n 2>/dev/null || continue
		echo "*** makecheck $dir ***"
		if misc/jenkins/unitrun.sh "run-$name-makecheck" make -C "$dir" check; then
			:
		else
			failed="$failed $name-check"
		fi

	else
		failed="$failed $name"
	fi
done
grep '<error message' *-make.xml *-makecheck.xml
if test -n "$failed"; then
	echo "FAILED: $failed"
	exit 1
fi
exit 0
