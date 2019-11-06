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

# This shell script executes a shell command and generates a JUnit compatible XML file

if test $# -lt 2; then
	echo "Usage: unitrun.sh name command"
	echo "Runs the command and generates a JUnit XML file name.xml"
	exit
fi

name=$1
shift

# Detect a working time command
if command time --quiet -f%e true 2>/dev/null; then
	TIME="command time --quiet -f%e -o ${name}.t.out"
elif command time -f%e true 2>/dev/null; then
	TIME="command time -f%e -o ${name}.t.out"
elif command gtime -f%e true 2>/dev/null; then
	TIME="command gtime -f%e -o ${name}.t.out"
else
	TIME=
fi

# Detect a working date command
if date -Iseconds >/dev/null 2>&1; then
	TIMESTAMP="timestamp='`date -Iseconds`'"
else
	TIMESTAMP=
fi

# Magic here! This tee and save both stdout and stderr in distinct files without messing with them
# Time  just get the user time
$TIME "$@" > >(tee "${name}.out") 2> >(tee "${name}.2.out" >&2)
res=$?

c=`echo "${name%-*}" | tr "-" "."`
n=${name##*-}

# Do we have a time result?
if test -f "${name}.t.out"; then
	T="time='`cat "${name}.t.out"`'"
else
	T=
fi

cat > "${name}.xml"<<END
<testsuites><testsuite>
<testcase classname='$c' name='$n' $T $TIMESTAMP>
END
if test "$res" != "0"; then
echo >> "${name}.xml" "<error message='Command returned $res'/>"
echo "+ Command returned $res" >&2
fi
if test -s "${name}.out"; then
cat >> "${name}.xml"<<END
<system-out><![CDATA[
`cat -v ${name}.out`
]]></system-out>
END
fi
if test -s "${name}.2.out"; then
cat >> "${name}.xml"<<END
<system-err><![CDATA[
`cat -v ${name}.2.out`
]]></system-err>
END
fi
cat >> "${name}.xml"<<END
</testcase>
</testsuite></testsuites>
END

rm "${name}.out" "${name}.2.out" "${name}.t.out" 2> /dev/null || true
