#!/bin/bash

# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2014 Alexandre Terrasa <alexandre@moz-code.org>.
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

# check args files
test_args()
{
	local test="$1"
	local args=`cat $test.args`
	local outdir=$OUT/$test.files

	echo $BIN/$args > $OUT/$test.bin
	chmod +x $OUT/$test.bin
	OUTDIR=$outdir $OUT/$test.bin > $OUT/$test.res 2> $OUT/$test.err

	if [ -r $outdir ]; then
		ls -aR $outdir >> $OUT/$test.res
	fi

	diff $OUT/$test.res $RES/$test.res > $OUT/$test.diff 2> /dev/null
}

# return
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

for file in `ls *.args`; do
	((all++))
	test="${file%.*}"
	echo -n "* $test: "

	test_args $test
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
echo ""
echo "==> success $ok/$all ($ko tests failed, $sk skipped)"

# return result
test "$ok" == "$all"
