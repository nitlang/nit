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
if env time --quiet -f%U true 2>/dev/null; then
	TIME="env time --quiet -f%U -o '${name}.t.out'"
elif env time -f%U true 2>/dev/null; then
	TIME="env time -f%U -o '${name}.t.out'"
else
	TIME=
fi

# Magic here! This tee and save both stdout and stderr in distinct files without messing with them
# Time  just get the user time
$TIME "$@" > >(tee "${name}.out") 2> >(tee "${name}.2.out" >&2)
res=$?

c=`echo "${name%-*}" | tr "-" "."`
n=${name##*-}

cat > "${name}.xml"<<END
<testsuites><testsuite>
<testcase classname='$c' name='$n' time='`cat "${name}.t.out"`' timestamp='`date -Iseconds`'>
END
if test "$res" != "0"; then
echo >> "${name}.xml" "<error message='Command returned $res'/>"
echo "+ Command returned $res" >&2
fi
cat >> "${name}.xml"<<END
<system-out><![CDATA[
`cat -v ${name}.out`
]]></system-out>
<system-err><![CDATA[
`cat -v ${name}.2.out`
]]></system-err>
</testcase>
</testsuite></testsuites>
END

rm "${name}.out" "${name}.2.out" "${name}.t.out"
