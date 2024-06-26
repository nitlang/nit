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

# This script run nitunit of nit packages modified between revisions

from=${1:-origin/master}
to=${2:-HEAD}

git diff --name-only "$from..$to" -- "*.nit" "*.res" "README.*" | grep -v "^tests/\|contrib/" > list0.txt || true
test -s list0.txt || exit 0
xargs bin/nitls -pP < list0.txt > list.txt
test -s list.txt || exit 0
xargs bin/nitunit -v < list.txt
