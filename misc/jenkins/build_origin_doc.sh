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

# This script build the nitdoc bin from in origin/master
#
# Result is saved in bin/

current_branch=`git rev-parse --abbrev-ref HEAD`

git checkout origin/master
bin/nitc src/nitdoc.nit -o bin/nitdoc.orig
git checkout $current_branch
