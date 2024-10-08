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

# nitc all
# fully build, time and check nitc

rm nitc nitc_? hello_world 2>/dev/null
set -x
set -e
make -C ../c_src
sh git-gen-version.sh
time ../c_src/nitc nitc.nit -v -o nitc_0
time ./nitc_0 nitc.nit -v "$@" -o nitc_2
cp nitc_2 nitc
time ./nitc_2 nitc.nit -v "$@" -o nitc_3
time ./nitc_3 nitc.nit -v "$@" -o nitc_4
./nitc_4 ../examples/hello_world.nit "$@" -o hello_world
./hello_world

# save the last one; may be useful...
cp ./nitc_4 nitc.good
