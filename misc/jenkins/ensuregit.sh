#!/bin/sh
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

# This script ensure that the root direcroty of nit is a git repository with a fully fetched origin.
# It helps CI/CD in environments (like github action) that trim and hack the initial fetch.

if [ ! -f src/nitc.nit ]; then
	echo "Error: run the script in the root directory of nit"
	exit 1
fi
if [ ! -d .git ]; then
	echo "No git directory"
	exit 1
fi

set -x
git config --global --add safe.directory "$PWD" # Because github messes with the homedir
git fetch --unshallow # Because github does --depth=1
git fetch origin # Ensure origin/master is here
# Outputs some info...
git remote -v
git branch -av
git log --oneline --graph --decorate origin/master..HEAD
