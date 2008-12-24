#!/bin/bash
# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
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

# This shell script compile, run and verify NIT program files

# Ruby binary (none if you want to let the program to decide)
#RUBY=
[ -z "$NITC" ] && NITC=../bin/nitc

# Options to use with the ruby compiler
# OPT=

# Mark to distinguish files among tests 
# MARK=

if [ $# = 0 ]; then
	echo "usage: $0 file.nit ..."
fi

if [ -z "$HTM" ]; then
	HTM=/dev/null
elif [ ! -f "$HTM" ]; then
	echo "<html><body><table border=\"1\">" > $HTM
	echo "<tr><td>Mode</td>" >> $HTM
	for i in "$@"; do
		f=`echo $i | cut -f1 -d.`
		echo -n "<td><a href=\"$f.nit\">$f</a>" >> $HTM
		if [ -r "sav/$f.sav" ]; then
			echo -n " - <a href=\"sav/$f.sav\">sav</a>" >> $HTM
		fi
		if [ -f "$f.inputs" ]; then
			echo -n " - <a href=\"$f.inputs\">inputs</a>" >> $HTM
		fi
		echo "</td>" >> $HTM
	done
	echo "<td>ok</td><td>fails</td></tr>" >> $HTM
fi

ok=""
nok=""
echo "<tr><td>$MARK</td>" >> $HTM

for ii in "$@"; do
    for alt in "" `sed -n 's/.*#\(alt[0-9]*\)#.*/\1/p' "$ii" | sort -u`; do
	f=`basename "$ii" .nit`
	d=`dirname "$ii"`
	ff="$f"
	i="$ii"
	if [ "x$alt" != "x" ]; then
		test -d alt || mkdir -p alt
		i="alt/${f}_$alt.nit"
		ff="${ff}_$alt"
		sed "s/#$alt#//g;/#!$alt#/d" "$ii" > "$i"
	fi
	ff="$ff$MARK"

	echo -n "=> $i: "
	
	rm "$ff.res" "$ff.err" "$ff.write" 2> /dev/null

	# Compile
	$NITC $OPT -o "$f.bin" "$i" -I . -I alt -I ../lib/standard 2> "$ff.cmp.err" > "$ff.compile.log"
	ERR=$?
        mv "$f.bin" "$ff.bin" 2> /dev/null
	egrep '^[A-Z0-9_]*$' "$ff.compile.log" > "$ff.res"
	echo -n "<td><a href=\"$ff.compile.log\">compil " >> $HTM
	if [ "$ERR" != 0 ]; then
		echo -n "! "
		echo -n "fail</a> - " >> $HTM
		cp "$ff.cmp.err" "$ff.res"
	else
		echo -n ". "
		echo -n "ok</a> - " >> $HTM
		# Execute
		if [ -f "$f.args" ]; then
			args=`cat "$f.args"`
		else
			args=""
		fi
		if [ -f "$f.inputs" ]; then
			"./$ff.bin" $args < "$f.inputs" > "$ff.res" 2>"$ff.err"
		else
			"./$ff.bin" $args > "$ff.res" 2>"$ff.err"
		fi
		if [ -f "$ff.write" ]; then
			cat "$ff.write" >> "$ff.res"
			echo -n "<a href=\"$ff.err\">write</a> - " >> $HTM
		fi
		if [ -s "$ff.err" ]; then
			cat "$ff.err" >> "$ff.res"
			echo -n "<a href=\"$ff.err\">err</a> - " >> $HTM
		fi
	fi

	# Result	
	if [ -r "sav/$ff.sav" ]; then
		diff "$ff.res" "sav/$ff.sav" > "$ff.diff.log"
		if [ "$?" == 0 ]; then
			echo "[ok] $ff.res"
			ok="$ok $ff"
			echo -n "<a href=\"$ff.res\">res ok</a>" >> $HTM
		else
			echo "[======= fail $ff.res sav/$ff.sav =======]"
			nok="$nok $ff"
			echo -n "<strong style=\"background-color:red\"><a href=\"$ff.res\">res fail</a> - <a href=\"$ff.diff.log\">diff</a></strong>" >> $HTM
		fi
	else
		echo "[=== no sav ===] $ff.res"
		echo -n "<a href=\"$ff.res\">res</a>" >> $HTM
	fi
	echo "</td>" >> $HTM
   done
done

echo "ok: " `echo $ok | wc -w` "/ $#"
echo "<td>" `echo $ok | wc -w` "</td><td>" `echo $nok | wc -w` "</td></tr>" >> $HTM

if [ -n "$nok" ]; then
	echo "fail: $nok"
	echo "There were errors !"
fi
