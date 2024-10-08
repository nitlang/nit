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

# This script is a wrapper for `nitester` which also manages a local repo
#
# The first argument _must_ be the hash of the commit at the head of the
# branch to test. The other arguments are passed on to `nitester`.

hash=$1
shift

set -x

local_repo=nit/
tools_dir=misc/jenkins/

cd $local_repo
git clean -fdxq .
git fetch origin

if ! git checkout $hash; then
	exit 1
fi

# Make basic bootstrap
$tools_dir/unitrun.sh "cmd-make-csrc" make -C c_src
$tools_dir/unitrun.sh "cmd-make-version" src/git-gen-version.sh
$tools_dir/unitrun.sh "cmd-make-nitc_0" c_src/nitc -o bin/nitc_0 src/nitc.nit
$tools_dir/unitrun.sh "cmd-make-nitc" bin/nitc_0 --dir bin/ src/nitc.nit
$tools_dir/unitrun.sh "cmd-make-nit-and-nitvm" bin/nitc --dir bin/ src/nit.nit src/nitvm.nit

# Make nitester
$tools_dir/unitrun.sh "cmd-make-nitester" make -C contrib/nitester/

# Run tests
cd tests
mkdir -p out
rm ~/jenkins_xml/*.xml
mpirun -np 30 ../contrib/nitester/bin/nitester $@
