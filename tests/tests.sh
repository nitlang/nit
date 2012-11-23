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

usage()
{
	e=`basename "$0"`
	cat<<END
Usage: $e [options] modulenames
-o option   Pass option to the engine
-v          Verbose (show tests steps)
-h          This help
--tap       Produce TAP output
--engine    Use a specific engine (default=nitc)
--noskip    Do not skip a test even if the .skip file matches
--[no]soso  Force enable (or disable) SOSO
END
}

# $1 is the pattern of the test
# $2 is the file to compare to
# the result is:
#   0: if the file to compare to do not exists
#   1: if the file match
#   2: if the file match with soso
#   3: if the file do not match
function compare_to_result()
{
	local pattern="$1"
	local sav="$2"
	if [ ! -r "$sav" ]; then return 0; fi
	diff -u "out/$pattern.res" "$sav" > "out/$pattern.diff.sav.log"
	if [ "$?" == 0 ]; then
		return 1
	fi
	[ -z "$soso" ] && return 3
	sed '/[Ww]arning/d;/[Ee]rror/d' "out/$pattern.res" > "out/$pattern.res2"
	sed '/[Ww]arning/d;/[Ee]rror/d' "$sav" > "out/$pattern.sav2"
	grep '[Ee]rror' "out/$pattern.res" >/dev/null && echo "Error" >> "out/$pattern.res2"
	grep '[Ee]rror' "$sav" >/dev/null && echo "Error" >> "out/$pattern.sav2"
	diff -u "out/$pattern.res2" "out/$pattern.sav2" > "out/$pattern.diff.sav2.log"
	if [ "$?" == 0 ]; then
		return 2
	else
		return 3
	fi
}

# As argument: the pattern used for the file
function process_result()
{
	((tapcount=tapcount+1))
	# Result
	pattern=$1
	description=$2
	SAV=""
	NSAV=""
	FIXME=""
	NFIXME=""
	SOSO=""
	NSOSO=""
	SOSOF=""
	NSOSOF=""
	for sav in "sav/$engine/$pattern.res" "sav/$pattern.res" "sav/$pattern.sav"; do
		compare_to_result "$pattern" "$sav"
		case "$?" in
			0)
				;; # no file
			1)
				SAV="$sav" ;;
			2)
				SOSO="$sav" ;;
			3)
				NSAV="$sav";;
		esac
	done
	for sav in "sav/$engine/fixme/$pattern.res" "sav/fixme/$pattern.res" "sav/$pattern.fail"; do
		compare_to_result "$pattern" "$sav"
		case "$?" in
			0)
				;; # no file
			1)
				FIXME="$sav" ;;
			2)
				SOSOF="$sav" ;;
			3)
				NFIXME="$sav";;
		esac
	done
	grep 'NOT YET IMPLEMENTED' "out/$pattern.res" >/dev/null
	NYI="$?"
	if [ -n "$SAV" ]; then
		if [ -n "$tap" ]; then
			echo "ok - $description"
		elif [ -z "$FIXME" ]; then
			echo "[ok] out/$pattern.res $SAV"
		else
			echo "[ok] out/$pattern.res $SAV - but $FIXME remains!"
		fi
		ok="$ok $pattern"
	elif [ -n "$FIXME" ]; then
		if [ -n "$tap" ]; then
			echo "not ok - $description # TODO expected failure"
		else
			echo "[fixme] out/$pattern.res $FIXME"
		fi
		todos="$todos $pattern"
	elif [ -n "$SOSO" ]; then
		if [ -n "$tap" ]; then
			echo "ok - $description # SOSO"
		else
			echo "[soso] out/$pattern.res $SOSO"
		fi
		ok="$ok $pattern"
	elif [ "x$NYI" = "x0" ]; then
		if [ -n "$tap" ]; then
			echo "not ok - $description # TODO not yet implemented"
		else
			echo "[todo] out/$pattern.res -> not yet implemented"
		fi
		todos="$todos $pattern"
	elif [ -n "$SOSOF" ]; then
		if [ -n "$tap" ]; then
			echo "not ok - $description # TODO SOSO expected failure"
		else
			echo "[fixme soso] out/$pattern.res $SOSOF"
		fi
		todos="$todos $pattern"
	elif [ -n "$NSAV" ]; then
		if [ -n "$tap" ]; then
			echo "not ok - $description"
		else
			echo "[======= fail out/$pattern.res $NSAV =======]"
		fi
		nok="$nok $pattern"
		echo "$ii" >> "$ERRLIST"
	elif [ -n "$NFIXME" ]; then
		if [ -n "$tap" ]; then
			echo "not ok - $description"
		else
			echo "[======= changed out/$pattern.res $NFIXME ======]"
		fi
		nok="$nok $pattern"
		echo "$ii" >> "$ERRLIST"
	else
		if [ -n "$tap" ]; then
			echo "ok - $description # skip no sav"
		else
			echo "[=== no sav ===] out/$pattern.res"
		fi
		nos="$nos $pattern"
	fi
}

need_skip()
{
	test "$noskip" = true && return 1
	if echo "$1" | grep -f "$engine.skip" >/dev/null 2>&1; then
		((tapcount=tapcount+1))
		if [ -n "$tap" ]; then
			echo "ok - $2 # skip"
		else
			echo "=> $2: [skip]"
		fi
		return 0
	fi
	return 1
}

find_nitc()
{
	((tapcount=tapcount+1))
	name="$enginebinname"
	recent=`ls -t ../src/$name ../src/$name_[0-9] ../bin/$name ../c_src/$name 2>/dev/null | head -1`
	if [[ "x$recent" == "x" ]]; then
		if [ -n "$tap" ]; then
			echo "not ok - find engine $name"
			echo "Bail out! Could not find engine $name, aborting"
		else
			echo "Could not find engine $name, aborting"
		fi
		exit 1
	fi
	if [ -n "$tap" ]; then
		echo "ok - find engine $name: $recent"
	else
		echo "Using engine $name from: $recent"
	fi
	NITC=$recent
}

verbose=false
stop=false
tapcount=0
engine=nitc
noskip=
while [ $stop = false ]; do
	case $1 in
		-o) OPT="$OPT $2"; shift; shift;;
		-v) verbose=true; shift;;
		-h) usage; exit;;
		--tap) tap=true; shift;;
		--engine) engine="$2"; shift; shift;;
		--noskip) noskip=true; shift;;
		--soso) soso=true; shift;;
		--nososo) nososo=true; shift;;
		*) stop=true
	esac
done
enginebinname=$engine
case $engine in
	nitc) ;;
	nitg) ;;
	nit) engine=niti ;;
	niti) enginebinname=nit ;;
esac

# The default nitc compiler
[ -z "$NITC" ] && find_nitc

# Set NIT_DIR if needed
[ -z "$NIT_DIR" ] && export NIT_DIR=..


# Mark to distinguish files among tests
# MARK=

# File where error tests are outputed
# Old ERRLIST is backuped
ERRLIST=${ERRLIST:-errlist}
ERRLIST_TARGET=$ERRLIST

if [ $# = 0 ]; then
	usage;
	exit
fi

# Initiate new ERRLIST
if [ "x$ERRLIST" = "x" ]; then
	ERRLIST=/dev=null
else
	ERRLIST=$ERRLIST.tmp
	> "$ERRLIST"
fi

ok=""
nok=""
todos=""

# CLEAN the out directory
rm -rf out/ 2>/dev/null
mkdir out 2>/dev/null

for ii in "$@"; do
	if [ ! -f $ii ]; then
		echo "File '$ii' does not exist."
		continue
	fi
	f=`basename "$ii" .nit`

	# Sould we skip the file for this engine?
	need_skip $f $f && continue

	tmp=${ii/../AA}
	if [ "x$tmp" = "x$ii" ]; then
		includes="-I . -I ../lib/standard -I ../lib/standard/collection -I alt"
	else
		includes="-I alt"
	fi

	for i in "$ii" `./alterner.pl --start '#' --altsep '_' $ii`; do
		bf=`basename $i .nit`
		ff="out/$bf"

		# Sould we skip the alternative for this engine?
		need_skip $bf $bf && continue

		test -z "$tap" && echo -n "=> $bf: "

		if [ -f "$f.inputs" ]; then
			inputs="$f.inputs"
		else
			inputs=/dev/null
		fi

		if [ "$engine" = "niti" ]; then
			cat > "./$ff.bin" <<END
exec $NITC --no-color $OPT "$i" $includes -- "\$@"
END
			chmod +x "./$ff.bin"
			> "$ff.cmp.err"
			> "$ff.compile.log"
			ERR=0
		else
			# Compile
			if [ "x$verbose" = "xtrue" ]; then
				echo ""
				echo $NITC --no-color $OPT -o "$ff.bin" "$i" "$includes"
			fi
			NIT_NO_STACK=1 $NITC --no-color $OPT -o "$ff.bin" "$i" $includes 2> "$ff.cmp.err" > "$ff.compile.log"
			ERR=$?
			if [ "x$verbose" = "xtrue" ]; then
				cat "$ff.compile.log"
				cat >&2 "$ff.cmp.err"
			fi
		fi
		if [ "$ERR" != 0 ]; then
			test -z "$tap" && echo -n "! "
			cat "$ff.compile.log" "$ff.cmp.err" > "$ff.res"
			process_result $bf $bf
		elif [ -x "./$ff.bin" ]; then
			cp "$ff.cmp.err" "$ff.res"
			test -z "$tap" && echo -n ". "
			# Execute
			args=""
			if [ "x$verbose" = "xtrue" ]; then
				echo ""
				echo "NIT_NO_STACK=1 ./$ff.bin" $args
			fi
			NIT_NO_STACK=1 "./$ff.bin" $args < "$inputs" >> "$ff.res" 2>"$ff.err"
			if [ "x$verbose" = "xtrue" ]; then
				cat "$ff.res"
				cat >&2 "$ff.err"
			fi
			if [ -f "$ff.write" ]; then
				cat "$ff.write" >> "$ff.res"
			elif [ -d "$ff.write" ]; then
				LANG=C /bin/ls -F $ff.write >> "$ff.res"
			fi
			if [ -s "$ff.err" ]; then
				cat "$ff.err" >> "$ff.res"
			fi
			process_result $bf $bf

			if [ -f "$f.args" ]; then
				fargs=$f.args
				cptr=0
				while read line; do
					((cptr=cptr+1))
					args="$line"
					bff=$bf"_args"$cptr
					fff=$ff"_args"$cptr

					# Sould we skip the input for this engine?
					need_skip $bff "  args #$cptr" && continue

					rm -rf "$fff.res" "$fff.err" "$fff.write" 2> /dev/null
					if [ "x$verbose" = "xtrue" ]; then
						echo ""
						echo "NIT_NO_STACK=1 ./$ff.bin" $args
					fi
					test -z "$tap" && echo -n "==> args #"$cptr " "
					sh -c "NIT_NO_STACK=1 ./$ff.bin  ''$args < $inputs > $fff.res 2>$fff.err"
					if [ "x$verbose" = "xtrue" ]; then
						cat "$fff.res"
						cat >&2 "$fff.err"
					fi
					if [ -f "$fff.write" ]; then
						cat "$fff.write" >> "$fff.res"
					elif [ -d "$fff.write" ]; then
						LANG=C /bin/ls -F $fff.write >> "$fff.res"
					fi
					if [ -s "$fff.err" ]; then
						cat "$fff.err" >> "$fff.res"
					fi
					process_result $bff "  args #$cptr"
				done < $fargs
			fi
		else
			test -z "$tap" && echo -n "! "
			cat "$ff.cmp.err" > "$ff.res"
			echo "Compilation error" > "$ff.res"
			process_result $bf "$bf"
		fi
	done
done

if [ -n "$tap" ]; then
	echo "1..$tapcount"
	echo "# ok:" `echo $ok | wc -w`
	echo "# not ok:" `echo $nok | wc -w`
	echo "# no sav:" `echo $nos | wc -w`
	echo "# todo/fixme:" `echo $todos | wc -w`
	exit
fi

echo "ok: " `echo $ok | wc -w` "/" `echo $ok $nok $nos $todos | wc -w`

if [ -n "$nok" ]; then
	echo "fail: $nok"
	echo "There were $(echo $nok | wc -w) errors ! (see file $ERRLIST)"
fi
if [ -n "$nos" ]; then
	echo "no sav: $nos"
fi
if [ -n "$todos" ]; then
	echo "todo/fixme: $todos"
fi

# write $ERRLIST
if [ "x$ERRLIST" != "x" ]; then
	if [ -x "$ERRLIST_TARGET" ]; then
		mv "$ERRLIST_TARGET" "${ERRLIST_TARGET}.bak"
	fi
	mv $ERRLIST $ERRLIST_TARGET
fi

if [ -n "$nok" ]; then
	exit 1
else
	exit 0
fi
