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

# This shell script compile, run and verify Nit program files

# Set lang do default to avoid failed tests because of locale
export LANG=C

# The default nitc compiler
[ -z "$NITC" ] && NITC=../bin/nitc

usage()
{
	e=`basename "$0"`
	cat<<END
Usage: $e [options] modulenames
-o option   Pass option to nitc
-v          Verbose (show tests steps)
-h          This help
END
}

verbose=false
stop=false
while [ $stop = false ]; do
	case $1 in
		-o) OPT="$OPT $2"; shift; shift;;
		-v) verbose=true; shift;;
		-h) usage; exit;;
		*) stop=true
	esac
done

# Mark to distinguish files among tests
# MARK=

# File where error tests are outputed
# Old ERRLIST is backuped
ERRLIST=${ERRLIST:-errlist}

if [ $# = 0 ]; then
	usage;
	exit
fi

# Backup and initiate new ERRLIST
if [ "x$ERRLIST" = "x" ]; then
	ERRLIST=/dev=null
else
	if [ -x "$ERRLIST" ]; then
		mv "$ERRLIST" "${ERRLIST}.bak"
	fi
	> "$ERRLIST"
fi

ok=""
nok=""

for ii in "$@"; do
	for alt in "" `sed -n 's/.*#!*\(alt[0-9]*\)#.*/\1/p' "$ii" | sort -u`; do
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

		rm "$ff.res" "$ff.err" "$ff.write" "$ff.bin" 2> /dev/null

		# Compile
		if [ "x$verbose" = "xtrue" ]; then
			echo ""
			echo $NITC $OPT -o "$ff.bin" "$i" -I . -I alt -I ../lib/standard
		fi
		$NITC $OPT -o "$ff.bin" "$i" -I . -I alt -I ../lib/standard 2> "$ff.cmp.err" > "$ff.compile.log"
		ERR=$?
		if [ "x$verbose" = "xtrue" ]; then
			cat "$ff.compile.log"
			cat >&2 "$ff.cmp.err"
		fi
		egrep '^[A-Z0-9_]*$' "$ff.compile.log" > "$ff.res"
		if [ "$ERR" != 0 ]; then
			echo -n "! "
			cp "$ff.cmp.err" "$ff.res"
		else
			echo -n ". "
			# Execute
			if [ -f "$f.args" ]; then
				args=`cat "$f.args"`
			else
				args=""
			fi
			if [ "x$verbose" = "xtrue" ]; then
				echo ""
				echo "./$ff.bin" $args
			fi
			if [ -f "$f.inputs" ]; then
				"./$ff.bin" $args < "$f.inputs" > "$ff.res" 2>"$ff.err"
			else
				"./$ff.bin" $args > "$ff.res" 2>"$ff.err"
			fi
			if [ "x$verbose" = "xtrue" ]; then
				cat "$ff.res"
				cat >&2 "$ff.err"
			fi
			if [ -f "$ff.write" ]; then
				cat "$ff.write" >> "$ff.res"
			fi
			if [ -s "$ff.err" ]; then
				cat "$ff.err" >> "$ff.res"
			fi
		fi

		# Result
		SAV=""
		FAIL=""
		if [ -r "sav/$ff.sav" ]; then
			diff -u "$ff.res" "sav/$ff.sav" > "$ff.diff.sav.log"
			if [ "$?" == 0 ]; then
				SAV=OK
			else
				SAV=NOK
			fi
		fi
		if [ -r "sav/$ff.fail" ]; then
			diff -u "$ff.res" "sav/$ff.fail" > "$ff.diff.fail.log"
			if [ "$?" == 0 ]; then
				FAIL=OK
			else
				FAIL=NOK
			fi
		fi
		if [ "x$SAV" = "xOK" ]; then
			if [ "x$FAIL" = "x" ]; then
				echo "[ok] $ff.res"
			else
				echo "[ok] $ff.res - but sav/$ff.fail remains!"
			fi
			ok="$ok $ff"
		elif [ "x$FAIL" = "xOK" ]; then
			echo "[fail] $ff.res"
			ok="$ok $ff"
		elif [ "x$SAV" = "xNOK" ]; then
			echo "[======= fail $ff.res sav/$ff.sav =======]"
			nok="$nok $ff"
			echo "$ii" >> "$ERRLIST"
		elif [ "x$FAIL" = "xNOK" ]; then
			echo "[======= changed $ff.res sav/$ff.fail ======]"
			nok="$nok $ff"
			echo "$ii" >> "$ERRLIST"
		else
			echo "[=== no sav ===] $ff.res"
			nos="$nos $ff"
		fi
	done
done

echo "ok: " `echo $ok | wc -w` "/" `echo $ok $nok $nos | wc -w`

if [ -n "$nok" ]; then
	echo "fail: $nok"
	echo "There were $(echo $nok | wc -w) errors ! (see file $ERRLIST)"
fi
if [ -n "$nos" ]; then
	echo "no sav: $nos"
fi

if [ -n "$nok" ]; then
	exit 1
else
	exit 0
fi
