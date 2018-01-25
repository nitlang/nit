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

# Fetch libgc/bdwgc

# cd to the absolute installation path
if expr match "$0" "^/.*"; then
	install="`dirname "$0"`"
else
	install="`pwd`/`dirname "$0"`"
fi
cd $install

# Download or redownload
rm -rf bdwgc
git clone -b android https://github.com/xymus/bdwgc.git || exit 1

# Setup libatomic_ops too
cd bdwgc || exit 1
git submodule init || exit 1
git submodule update || exit 1
