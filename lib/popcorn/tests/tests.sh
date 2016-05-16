#!/bin/bash

# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2016 Alexandre Terrasa <alexandre@moz-code.org>.
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
OUT=./out
RES=./res

NITC=../../../bin/nitc

compile() {
	local test="$1"
	$NITC $test.nit -o $OUT/$test.bin 1>&2 2> $OUT/$test.cmp_err
}

test_prog()
{
	local test="$1"

	chmod +x $OUT/$test.bin 2> $OUT/$test.err
	$OUT/$test.bin > $OUT/$test.res 2> $OUT/$test.err

	diff $OUT/$test.res $RES/$test.res > $OUT/$test.diff 2> /dev/null
}

# return
#  0 if the sav not exists
#  1 if the file does match
#  2 if the file does not match
check_result() {
	local test="$1"

	if [ -s "$OUT/$test.cmp_err" ]; then
		return 0
	elif [ -s "$OUT/$test.err" ]; then
		return 1
	elif [ ! -r "$RES/$test.res" ]; then
		return 2
	elif [ -s "$OUT/$test.diff" ]; then
		return 3
	else
		return 4
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

for file in `ls test_*.nit`; do
	((all++))
	test="${file%.*}"
	echo -n "* $test: "

	compile $test
	test_prog $test
	check_result $test

	case "$?" in
		0)
			echo "compile error (cat $OUT/$test.cmp_err)"
			((ko++))
			;;
		1)
			echo "error (cat $OUT/$test.cmp_err)"
			((ko++))
			;;
		2)
			echo "skip ($test.res not found)"
			((sk++))
			continue;;
		3)
			echo "error (diff $OUT/$test.res $RES/$test.res)"
			((ko++))
			;;
		4)
			echo "success"
			((ok++))
			;;

	esac
done
echo ""
echo "==> success $ok/$all ($ko tests failed, $sk skipped)"

# return result
test "$ok" == "$all"
