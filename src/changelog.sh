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

# This shell script is used to generate stats for the next niteration (news letter)

orig_def=`git describe --abbrev=0`
cur_def=origin/master

orig=${1-$orig_def}
cur=${2-$cur_def}

echo "changelog: ${orig} .. ${cur}"
echo "shortstat"
git diff --shortstat "$orig".."$cur"
echo "PR"
git log --first-parent "$orig".."$cur" | grep 'Pull-Request: #' | wc -l
echo "non-merge commits"
git log --no-merges --oneline "$orig".."$cur"  | wc -l
echo "shortlog"
git shortlog -ens --no-merges "$orig".."$cur"
echo log
echo
git log --format="* %s [[!commit %h]]" --first-parent "$orig".."$cur" | tac
