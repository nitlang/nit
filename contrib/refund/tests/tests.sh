#!/bin/bash
# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2015 Alexandre Terrasa <alexandre@moz-code.org>.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

BIN=../bin
OUT=out
RES=res

# Execute test with name $1.
run_test()
{
	local test="$1"
	$BIN/refund $test.json $OUT/$test.res > $OUT/$test.out 2> $OUT/$test.err
	diff $OUT/$test.res $RES/$test.res > $OUT/$test.diff 2> /dev/null
}

# Return
#  0 if the sav not exists
#  1 if the file does match
#  2 if the file does not match
check_result() {
	local test="$1"

	if [ ! -r "$RES/$test.res" ]; then
		return 0
	elif [ ! -s $OUT/$test.diff ]; then
		return 1
	else
		return 2
	fi
}

echo "Testing..."
echo ""

rm -rf $OUT 2>/dev/null
mkdir $OUT 2>/dev/null

all=0
ok=0
ko=0
sk=0

for file in `ls *.json`; do
	((all++))
	test="${file%.*}"
	echo -n "* $test: "

	run_test $test
	check_result $test

	case "$?" in
		0)
			echo "skip ($test.res not found)"
			((sk++))
			continue;;
		1)
			echo "success"
			((ok++))
			;;
		2)
			echo "error (diff $OUT/$test.res $RES/$test.res)"
			((ko++))
			;;
	esac
done

# clear tmp stats file.
rm stats.json

echo ""
echo "==> success $ok/$all ($ko tests failed, $sk skipped)"
