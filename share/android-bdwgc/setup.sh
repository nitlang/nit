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

# cd to the installation path
cd "`dirname "$0"`" || exit 1

# Download upstream bdwgc at a pinned release, unless it is already present.
BDWGC_VERSION=v8.2.12
if [ -d bdwgc ]; then
	: # Already present, skip the clone
else
	git clone --depth 1 -b "$BDWGC_VERSION" https://github.com/bdwgc/bdwgc.git || exit 1
fi
