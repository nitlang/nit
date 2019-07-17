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
export LANG=C.UTF-8

# Explore candidates for LC_ALL
#
# If C.UTF-8, the most agnostic UTF-8 locale is supported, we
# use it, otherwise we default to the UTF-8 system locale, and
# if unavailable, we default on C.
#
# Note that C however is not guaranteed to be UTF-8, and
# some tests may fail when relying on Unicode semantics.
locale_candidate=C.UTF-8
if ! locale -a 2>/dev/null | grep -q C.UTF-8; then
	locale_candidate="$(locale -a | grep -i utf8 | head -n1)"
	if [ -z "$locale_candidate" ]; then
		locale_candidate=C
	fi
fi
export LC_ALL="$locale_candidate"

# Darwin / macOS
if uname | grep Darwin 1>/dev/null 2>&1; then
	export LANG=en_US.UTF-8
	export LC_ALL=en_US.UTF-8

	# Fix for errors on some libevent/nitcorn clients
	export EVENT_NOKQUEUE=1
fi

export NIT_TESTING=true
# Use the pid as a collision prevention
export NIT_TESTING_ID=$$
export NIT_SRAND=0

# Identify this as a tests.sh test to differentiate from a nitunit test
export NIT_TESTING_TESTS_SH=true

unset NIT_DIR

# Get the first Java lib available
if which_java=$(which javac 2>/dev/null); then

	if sh -c "readlink -f ." 1>/dev/null 2>&1; then
		READLINK="readlink -f"
	else
		# Darwin?
		READLINK="readlink"
	fi
	JAVA_HOME=$(dirname $(dirname $($READLINK "$which_java")))

	shopt -s nullglob
	paths=`echo $JAVA_HOME/jre/lib/*/{client,server}/libjvm.so`
	if [ -n "$paths" ]; then
		paths=($paths)
		JNI_LIB_PATH=`dirname ${paths[0]}`
	fi
	shopt -u nullglob
fi

outdir="out"
compdir="nit_compile"

# User CPU time limit (in seconds)
# Is used to avoid to CPU intensive test (infinite loops). See ulimit -t
usertimelimit=600 # 1 CPU minute

# Real-time limit (in seconds)
# Is used to avoid waiting or sleeping tests.
# Require timeout or timelimit, or else is not used.
realtimelimit=300 # 5 min

# User limit for write files (in kilo-bytes)
# Is used to avoid execution that loop and fill the hard drive. See ulimit -f
# Note that a test might require a lot of temporary disk space (eg. nitc+gcc)
filelimit=100000 # ~100MB

# Limit (in bytes) for generated .res file.
# Larger ones are truncated and will fail tests
# Is used to avoid processing huge crappy res file (diff, xml, etc)
reslimit=100000 # ~100KB

usage()
{
	e=`basename "$0"`
	cat<<END
Usage: $e [options] modulenames
-o option   Pass option to the engine
-v          Verbose (show tests steps)
-h          This help
--engine    Use a specific engine (default=nitc)
--noskip    Do not skip a test even if the .skip file matches
--outdir    Use a specific output folder (default=out/)
--compdir   Use a specific temporary compilation folder (default=$compdir)
--node      Run as a node in parallel, will not output context information
--autosav   Copy the .res files directly in the sav folder overriding existing .res files
END
}

# Run a command with a timeout and a time count.
# Options:
#   -o file    write the user time into file (REQUIRED). see `-o` in `man time`
#   -a         append the time to the file (instead of overwriting it). see `-a` in `man time`
saferun()
{
	local stop=false
	local o=
	local a=
	while [ $stop = false ]; do
		case "$1" in
			-o) o="$2"; shift; shift;;
			-a) a="-a"; shift;;
			*) stop=true
		esac
	done
	(
	ulimit -f "$filelimit" 2> /dev/null
	ulimit -t "$usertimelimit" 2> /dev/null
	if test -d "$1"; then
		find $1 | sort
	elif test -n "$TIME"; then
		$TIME -o "$o" $a $TIMEOUT "$@"
	else
		if test -n "$a"; then echo 0 >> "$o"; else echo 0 > "$o"; fi
		$TIMEOUT "$@"
	fi
	)
}

# Output a timestamp attribute for XML, or an empty line
timestamp()
{
	if test -n "$TIMESTAMP"; then
		echo "timestamp='`$TIMESTAMP`'"
	else
		echo ""
	fi

}

# Get platform specific commands ##########################

# Detect a working timeout
if sh -c "timelimit echo" 1>/dev/null 2>&1; then
	TIMEOUT="timelimit -t $realtimelimit"
elif sh -c "timeout 1 echo" 1>/dev/null 2>&1; then
	TIMEOUT="timeout ${realtimelimit}s"
else
	echo "No timelimit or timeout command detected. Tests may hang :("
fi

# Detect a working time command
if command time --quiet -f%e true 2>/dev/null; then
	TIME="command time --quiet -f%e"
elif command time -f%e true 2>/dev/null; then
	TIME="command time -f%e"
elif command gtime -f%e true 2>/dev/null; then
	TIME="command gtime -f%e"
else
	TIME=
fi

# Detect a working date command
if date -Iseconds >/dev/null 2>&1; then
	TIMESTAMP="date -Iseconds"
else
	TIMESTAMP=
fi

# Detect a working hostname command
if hostname --version 2>&1 | grep coreutils >/dev/null 2>&1; then
	HOSTNAME="hostname"
else
	HOSTNAME="hostname -s"
fi

UNAME=`uname | sed s/-.*//`

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
	test "`cat -- "$sav"`" = "UNDEFINED" && return 1
	diff -u --strip-trailing-cr -- "$sav" "$outdir/$pattern.res" > "$outdir/$pattern.diff.sav.log"
	if [ "$?" == 0 ]; then
		return 1
	fi
	sed '/[Ww]arning/d;/[Ee]rror/d' "$outdir/$pattern.res" > "$outdir/$pattern.res2"
	sed '/[Ww]arning/d;/[Ee]rror/d' "$sav" > "$outdir/$pattern.sav2"
	grep '[Ee]rror' "$outdir/$pattern.res" >/dev/null && echo "Error" >> "$outdir/$pattern.res2"
	grep '[Ee]rror' "$sav" >/dev/null && echo "Error" >> "$outdir/$pattern.sav2"
	diff -u --strip-trailing-cr "$outdir/$pattern.sav2" "$outdir/$pattern.res2" > "$outdir/$pattern.diff.sav.log2"
	if [ "$?" == 0 ]; then
		return 2
	else
		return 3
	fi
}

function xmlesc()
{
	sed 's/&/\&amp;/g; s/</\&lt;/g; s/>/\&gt;/g; s/"/\&quot;/g; s/'"'"'/\&#39;/g'<<EOF
$*
EOF
}

# As argument: the pattern used for the file
function process_result()
{
	# Result
	local pattern=$1
	local description=$2
	local pack=$3
	local SAV=""
	local NSAV=""
	local FIXME=""
	local NFIXME=""
	local SOSO=""
	local NSOSO=""
	local SOSOF=""
	local NSOSOF=""
	local OLD=""
	local LIST=""
	local FIRST=""

	# Truncate too big res file
	local size=$(wc -c < "$outdir/$pattern.res")
	if test -n "$reslimit" -a "$size" -gt "$reslimit"; then
		# The most portable way to truncate a file is with Perl
		perl -e "truncate \"$outdir/$pattern.res\", $reslimit;"
		echo "***TRUNCATED***" >> "$outdir/$pattern.res"
	fi

	echo >>$xml "<testcase classname='`xmlesc "$pack"`' name='`xmlesc "$description"`' time='`cat -- "$outdir/$pattern.time.out"`' `timestamp`>"
	#for sav in "sav/$engine/fixme/$pattern.res" "sav/$engine/$pattern.res" "sav/fixme/$pattern.res" "sav/$pattern.res" "sav/$pattern.sav"; do
	for savdir in $savdirs; do
		local sav=$savdir/fixme/$pattern.res
		compare_to_result "$pattern" "$sav"
		case "$?" in
			0)
				;; # no file
			1)
				OLD="$LIST"
				FIXME="$sav"
				LIST="$LIST $sav"
				;;
			2)
				if [ -z "$FIRST" ]; then
					SOSOF="$sav"
					FIRST="$sav"
				fi
				LIST="$LIST $sav"
				;;
			3)
				if [ -z "$FIRST" ]; then
					NFIXME="$sav"
					FIRST="$sav"
				fi
				LIST="$LIST $sav"
				;;
		esac

		sav=$savdir/$pattern.res
		compare_to_result "$pattern" "$sav"
		case "$?" in
			0)
				;; # no file
			1)
				OLD="$LIST"
				SAV="$sav"
				LIST="$LIST $sav"
				;;
			2)
				if [ -z "$FIRST" ]; then
					SOSO="$sav"
					FIRST="$sav"
				fi
				LIST="$LIST $sav"
				;;
			3)
				if [ -z "$FIRST" ]; then
					NSAV="$sav"
					FIRST="$sav"
				fi
				LIST="$LIST $sav"
				;;
		esac
	done
	OLD=`echo "$OLD" | sed -e 's/   */ /g' -e 's/^ //' -e 's/ $//'`
	istodo  "$outdir/$pattern.res"
	NYI="$?"
	if [ -n "$SAV" ]; then
		if [ -n "$OLD" ]; then
			echo "[*ok*] $outdir/$pattern.res $SAV - but $OLD remains!"
			echo >>$xml "<error message='`xmlesc "ok $outdir/$pattern.res - but $OLD remains"`'/>"
			remains="$remains $OLD"
			test "$autosav" = "true" && rm "$OLD"
		else
			echo "[ok] $outdir/$pattern.res $SAV"
		fi
		ok="$ok $pattern"
	elif [ -n "$FIXME" ]; then
		if [ -n "$OLD" ]; then
			echo "[*fixme*] $outdir/$pattern.res $FIXME - but $OLD remains!"
			echo >>$xml "<error message='`xmlesc "ok $outdir/$pattern.res - but $OLD remains"`'/>"
			remains="$remains $OLD"
			test "$autosav" = "true" && rm "$OLD"
		else
			echo "[fixme] $outdir/$pattern.res $FIXME"
			echo >>$xml "<skipped/>"
		fi
		todos="$todos $pattern"
	elif [ "x$NYI" = "x0" ]; then
		echo "[todo] $outdir/$pattern.res -> not yet implemented"
		echo >>$xml "<skipped/>"
		todos="$todos $pattern"
	elif [ -n "$SOSO" ]; then
		echo "[======= soso $outdir/$pattern.res $SOSO =======]"
		echo >>$xml "<error message='`xmlesc "soso $outdir/$pattern.res $SOSO"`'/>"
		echo >>$xml "<system-out><![CDATA["
		cat -v -- "$outdir/$pattern.diff.sav.log" | head >>$xml -n 50
		echo >>$xml "]]></system-out>"
		nok="$nok $pattern"
		echo "$ii" >> "$ERRLIST"
		test "$autosav" = "true" && cp "$outdir/$pattern.res" "$SOSO"
	elif [ -n "$SOSOF" ]; then
		echo "[======= fixme soso $outdir/$pattern.res $SOSOF =======]"
		echo >>$xml "<error message='`xmlesc "soso $outdir/$pattern.res $SOSO"`'/>"
		echo >>$xml "<system-out><![CDATA["
		cat -v  -- "$outdir/$pattern.diff.sav.log" | head >>$xml -n 50
		echo >>$xml "]]></system-out>"
		nok="$nok $pattern"
		echo "$ii" >> "$ERRLIST"
		test "$autosav" = "true" && cp "$outdir/$pattern.res" && "$SOSO"
	elif [ -n "$NSAV" ]; then
		echo "[======= fail $outdir/$pattern.res $NSAV =======]"
		echo >>$xml "<error message='`xmlesc "fail $outdir/$pattern.res $NSAV"`'/>"
		echo >>$xml "<system-out><![CDATA["
		cat -v -- "$outdir/$pattern.diff.sav.log" | head >>$xml -n 50
		echo >>$xml "]]></system-out>"
		nok="$nok $pattern"
		echo "$ii" >> "$ERRLIST"
		test "$autosav" = "true" && cp "$outdir/$pattern.res" "$NSAV"
	elif [ -n "$NFIXME" ]; then
		echo "[======= changed $outdir/$pattern.res $NFIXME ======]"
		echo >>$xml "<error message='`xmlesc "changed $outdir/$pattern.res $NFIXME"`'/>"
		echo >>$xml "<system-out><![CDATA["
		cat -v -- "$outdir/$pattern.diff.sav.log" | head >>$xml -n 50
		echo >>$xml "]]></system-out>"
		nok="$nok $pattern"
		echo "$ii" >> "$ERRLIST"
		test "$autosav" = "true" && cp "$outdir/$pattern.res" "$NFIXME"
	elif [ -s "$outdir/$pattern.res" ]; then
		echo "[=== no sav ===] $outdir/$pattern.res is not empty"
		echo >>$xml "<error message='no sav and not empty'/>"
		echo >>$xml "<system-out><![CDATA["
		cat -v >>$xml -- "$outdir/$pattern.res"
		echo >>$xml "]]></system-out>"
		nos="$nos $pattern"
		echo "$ii" >> "$ERRLIST"
		test "$autosav" = "true" && cp "$outdir/$pattern.res" "sav/"
	else
		# no sav but empty res
		echo "[0k] $outdir/$pattern.res is empty"
		ok="$ok $pattern"
	fi
	if test -s "$outdir/$pattern.cmp.err"; then
		echo >>$xml "<system-err><![CDATA["
		cat -v >>$xml -- "$outdir/$pattern.cmp.err"
		echo >>$xml "]]></system-err>"
	fi
	echo >>$xml "</testcase>"
}

need_skip()
{
	test "$noskip" = true && return 1
	if echo "$1" | grep -f "$engine.skip" >/dev/null 2>&1; then
		echo "=> $2: [skip]"
		echo >>$xml "<testcase classname='`xmlesc "$3"`' name='`xmlesc "$2"`' `timestamp`><skipped/></testcase>"
		return 0
	fi
	if test -n "$isinterpret" && echo "$1" | grep -f "exec.skip" >/dev/null 2>&1; then
		echo "=> $2: [skip exec]"
		echo >>$xml "<testcase classname='`xmlesc "$3"`' name='`xmlesc "$2"`' `timestamp`><skipped/></testcase>"
		return 0
	fi
	if test -n "GITLAB_CI" && echo "$1" | grep -f "gitlab_ci.skip" >/dev/null 2>&1; then
		echo "=> $2: [skip gitlab ci]"
		echo >>$xml "<testcase classname='`xmlesc "$3"`' name='`xmlesc "$2"`' `timestamp`><skipped/></testcase>"
		return 0
	fi

	# Skip by OS
	local os_skip_file=$UNAME.skip
	if test -e $os_skip_file && echo "$1" | grep -f "$os_skip_file" >/dev/null 2>&1; then
		echo "=> $2: [skip os]"
		echo >>$xml "<testcase classname='`xmlesc "$3"`' name='`xmlesc "$2"`' `timestamp`><skipped/></testcase>"
		return 0
	fi

	# Skip by hostname
	local host_skip_file=`$HOSTNAME`.skip
	if test -e $host_skip_file && echo "$1" | grep -f "$host_skip_file" >/dev/null 2>&1; then
		echo "=> $2: [skip hostname]"
		echo >>$xml "<testcase classname='`xmlesc "$3"`' name='`xmlesc "$2"`' `timestamp`><skipped/></testcase>"
		return 0
	fi
	return 1
}

skip_exec()
{
	test "$noskip" = true && return 1
	for savdir in $savdirs .; do
		local f="$savdir/exec.skip"
		test -f "$f" || continue
		if echo "$1" | grep -f "$f" >/dev/null 2>&1; then
			echo -n "_ no exec by $f; "
			return 0
		fi
	done
	return 1
}

skip_cc()
{
	test "$noskip" = true && return 1
	for savdir in $savdirs .; do
		local f="$savdir/cc.skip"
		test -f "$f" || continue
		if echo "$1" | grep -f "$f" >/dev/null 2>&1; then
			return 0
		fi
	done
	return 1
}

# Check that the resfile ($1) matches some magic strings in `todo` files.
istodo()
{
	test "$no" = true && return 1
	for savdir in $savdirs .; do
		local f="$savdir/todo"
		test -f "$f" || continue
		if grep -f "$f" "$1" >/dev/null 2>&1; then
			return 0
		fi
	done
	return 1
}

find_nitc()
{
	local name="$enginebinname"
	local recent=`ls -t ../src/$name ../src/$name_[0-9] ../bin/$name ../contrib/nitin/bin/$name ../c_src/$name 2>/dev/null | head -1`
	if [[ "x$recent" == "x" ]]; then
		echo "Could not find binary for engine $engine, aborting"
		exit 1
	fi
	if [ "x$isnode" = "xfalse" ]; then
		echo "Found binary for engine $engine: $recent $OPT"
	fi
	NITC=$recent
}

verbose=false
isnode=false
autosav=false
stop=false
engine=nitc
noskip=
savdirs=
while [ $stop = false ]; do
	case $1 in
		-o) OPT="$OPT $2"; shift; shift;;
		-v) verbose=true; shift;;
		-h) usage; exit;;
		--engine) engine="$2"; shift; shift;;
		--noskip) noskip=true; shift;;
		--outdir) outdir="$2"; shift; shift;;
		--compdir) compdir="$2"; shift; shift;;
		--node) isnode=true; shift;;
		--autosav) autosav=true; shift;;
		*) stop=true
	esac
done
enginebinname=$engine
isinterpret=
isinteractive=
case $engine in
	nitc|nitg)
		engine=nitcs;
		enginebinname=nitc;
		OPT="--separate $OPT --compile-dir $compdir"
		savdirs="sav/nitc-common/"
		;;
	nitcs|nitg-s)
		engine=nitcs;
		enginebinname=nitc;
		OPT="--separate $OPT --compile-dir $compdir"
		savdirs="sav/nitc-common/"
		;;
	nitce|nitg-e)
		engine=nitce;
		enginebinname=nitc;
		OPT="--erasure $OPT --compile-dir $compdir"
		savdirs="sav/nitc-common/"
		;;
	nitcsg|nitg-sg)
		engine=nitcsg;
		enginebinname=nitc;
		OPT="--semi-global $OPT --compile-dir $compdir"
		savdirs="sav/nitc-common/"
		;;
	nitcg|nitg-g)
		engine=nitcg;
		enginebinname=nitc;
		OPT="--global $OPT --compile-dir $compdir"
		savdirs="sav/nitc-common/"
		;;
	nit)
		engine=niti
		isinterpret=true
		;;
	niti)
		enginebinname=nit
		isinterpret=true
		;;
	nitvm)
		isinterpret=true
		enginebinname=nit
		OPT="--vm $OPT"
		savdirs="sav/niti/"
		;;
	nitin)
		enginebinname=nitin
		isinteractive=true
		;;
	nitj)
		engine=nitj;
		OPT="--compile-dir $compdir --ant"
		enginebinname=nitj;
		savdirs="sav/nitc-common/"
		;;
	emscripten)
		enginebinname=nitc
		OPT="-m emscripten_nodejs.nit --semi-global $OPT --compile-dir $compdir"
		savdirs="sav/nitcsg/"
		;;
	*)
		echo "unknown engine $engine"
		exit 1
		;;
esac

savdirs="sav/`$HOSTNAME` sav/$UNAME sav/$engine $savdirs sav/"
test -n "$GITLAB_CI" && savdirs="sav/gitlab_ci $savdirs"

# The default nitc compiler
[ -z "$NITC" ] && find_nitc

# Set NIT_DIR if needed
[ -z "$NIT_DIR" ] && export NIT_DIR=..

# Mark to distinguish files among tests
# MARK=

if [ $# = 0 ]; then
	usage;
	exit
fi

# CLEAN the out directory
rm -rf "$outdir/" 2>/dev/null
mkdir "$outdir" 2>/dev/null

# File where error tests are outputed
# Old ERRLIST is backuped
ERRLIST=${ERRLIST:-errlist}
ERRLIST_TARGET=$ERRLIST

# Initiate new ERRLIST
if [ "x$ERRLIST" = "x" ]; then
	ERRLIST=/dev/null
else
	ERRLIST=$ERRLIST.tmp
	> "$ERRLIST"
fi

ok=""
nok=""
todos=""

if [ "x$XMLDIR" = "x" ]; then
	xml="tests-$engine.xml"
else
	sum=`echo $@ | md5sum | cut -f1 -d " "`
	xml="$XMLDIR/tests-$engine-$sum.xml"
	mkdir -p "$XMLDIR"
fi

echo >$xml "<testsuites><testsuite>"

for ii in "$@"; do
	if [ ! -f "$ii" ]; then
		echo "File '$ii' does not exist."
		continue
	fi
	f=`basename -- "$ii" .nit`

	pack="tests.${engine}".`echo $ii | perl -p -e 's|^../([^/]*)/([a-zA-Z_]*).*|\1.\2| || s|^([a-zA-Z]*)[^_]*_([a-zA-Z]*).*|\1.\2| || s|\W*([a-zA-Z_]*).*|\1|'`

	# Sould we skip the file for this engine?
	need_skip "$f" "$f" "$pack" && continue

	local_tmp=${ii/../AA}
	if [ "x$local_tmp" = "x$ii" ]; then
		includes="-I . -I ../lib/core -I ../lib/core/collection -I alt"
	else
		includes="-I alt"
	fi

	for i in "$ii" `./alterner.pl --start '#' --altsep '_' -- "$ii"`; do
		bf=`basename -- "$i" .nit`
		ff="$outdir/$bf"

		# Sould we skip the alternative for this engine?
		need_skip "$bf" "$bf" "$pack" && continue

		echo -n "=> $bf: "

		if [ -f "$f.inputs" ]; then
			inputs="$f.inputs"
			export MNIT_READ_INPUT="$f.inputs"
		else
			inputs=/dev/null
			export MNIT_READ_INPUT=/dev/null
		fi

		ffout="$ff.bin"
		if [ "$engine" = "emscripten" ]; then
			ffout="$ff.bin.js"
		fi

		if [ -n "$isinterpret" ]; then
			cat > "$ff.bin" <<END
exec $NITC --no-color $OPT $includes -- $(printf '%q' "$i") "\$@"
END
			chmod +x "$ff.bin"
			> "$ff.cmp.err"
			> "$ff.compile.log"
			ERR=0
			echo 0.0 > "$ff.time.out"
		elif [ -n "$isinteractive" ]; then
			cat > "$ff.bin" <<END
exec $NITC --no-color --no-prompt --source-name $(printf '%q' "$i") $OPT $includes < $(printf '%q' "$i") "\$@"
END
			chmod +x "$ff.bin"
			> "$ff.cmp.err"
			> "$ff.compile.log"
			ERR=0
			echo 0.0 > "$ff.time.out"
		else
			if skip_cc "$bf"; then
				nocc="--no-cc"
			else
				nocc=
			fi
			# Compile
			if [ "x$verbose" = "xtrue" ]; then
				echo ""
				echo $NITC --no-color $OPT -o "$ffout" "$includes" $nocc "$i"
			fi
			NIT_NO_STACK=1 JNI_LIB_PATH=$JNI_LIB_PATH JAVA_HOME=$JAVA_HOME \
				saferun -o "$ff.time.out" $NITC --no-color $OPT -o "$ffout" $includes $nocc "$i" 2> "$ff.cmp.err" > "$ff.compile.log"
			ERR=$?
			if [ "x$verbose" = "xtrue" ]; then
				cat -- "$ff.compile.log"
				cat >&2 -- "$ff.cmp.err"
			fi
			# Clean
			rm -r "$compdir" 2>/dev/null
		fi
		if [ "$engine" = "emscripten" ]; then
			echo > "$ff.bin" "nodejs $ffout \"\$@\""
			chmod +x "$ff.bin"
			if grep "Fatal Error: more than one primitive class" "$ff.compile.log" > /dev/null; then
				echo " [skip] do no not imports kernel"
				echo >>$xml "<testcase classname='`xmlesc "$pack"`' name='`xmlesc "$bf"`' `timestamp`><skipped/></testcase>"
				continue
			fi
		fi
		if [ "$ERR" != 0 ]; then
			echo -n "! "
			cat -- "$ff.compile.log" "$ff.cmp.err" > "$ff.res"
			process_result "$bf" "$bf" "$pack"
		elif [ -n "$nocc" ]; then
			# not compiled
			echo -n "nocc "
			> "$ff.res"
			process_result "$bf" "$bf" "$pack"
		elif [ -x "$ff.bin" ]; then
			if skip_exec "$bf"; then
				# No exec
				> "$ff.res"
				process_result "$bf" "$bf" "$pack"
				break
			fi
			echo -n ". "
			# Execute
			args=""
			if [ "x$verbose" = "xtrue" ]; then
				echo ""
				echo "NIT_NO_STACK=1 $ff.bin" $args
			fi
			NIT_NO_STACK=1 LD_LIBRARY_PATH=$JNI_LIB_PATH WRITE="$ff.write" \
				saferun -a -o "$ff.time.out" "$ff.bin" $args < "$inputs" > "$ff.res" 2>"$ff.err"
			mv "$ff.time.out" "$ff.times.out"
			awk '{ SUM += $1} END { print SUM }' "$ff.times.out" > "$ff.time.out"

			if [ "x$verbose" = "xtrue" ]; then
				cat -- "$ff.res"
				cat >&2 -- "$ff.err"
			fi
			if [ -f "$ff.write" ]; then
				cat -- "$ff.write" >> "$ff.res"
			elif [ -d "$ff.write" ]; then
				/bin/ls -F "$ff.write" >> "$ff.res"
			fi
			cp -- "$ff.res"  "$ff.res2"
			cat -- "$ff.cmp.err" "$ff.err" "$ff.res2" > "$ff.res"
			process_result "$bf" "$bf" "$pack"

			if [ -f "$f.args" ]; then
				fargs=$f.args
				cptr=0
				while read line; do
					((cptr=cptr+1))
					args="$line"
					bff=$bf"_args"$cptr
					fff=$ff"_args"$cptr
					name="$bf args $cptr"

					# Sould we skip the input for this engine?
					need_skip "$bff" "  $name" "$pack" && continue

					# use a specific inputs file, if required
					if [ -f "$bff.inputs" ]; then
						ffinputs="$bff.inputs"
					else
						ffinputs="$inputs"
					fi

					rm -rf "$fff.res" "$fff.err" "$fff.write" 2> /dev/null
					if [ "x$verbose" = "xtrue" ]; then
						echo ""
						echo "NIT_NO_STACK=1 $ff.bin" $args
					fi
					echo -n "==> $name "
					echo "$ff.bin $args" > "$fff.bin"
					chmod +x "$fff.bin"
					WRITE="$fff.write" saferun -o "$fff.time.out" sh -c "NIT_NO_STACK=1 $fff.bin < $ffinputs > $fff.res 2>$fff.err"
					if [ "x$verbose" = "xtrue" ]; then
						cat -- "$fff.res"
						cat >&2 -- "$fff.err"
					fi
					if [ -f "$fff.write" ]; then
						cat -- "$fff.write" >> "$fff.res"
					elif [ -d "$fff.write" ]; then
						/bin/ls -F -- "$fff.write" >> "$fff.res"
					fi
					if [ -s "$fff.err" ]; then
						cp -- "$fff.res"  "$fff.res2"
						cat -- "$fff.err" "$fff.res2" > "$fff.res"
					fi
					process_result "$bff" "  $name" "$pack"
				done < "$fargs"
			fi
		elif [ -f "$ff.bin" ]; then
			#Not executable (platform?)"
			> "$ff.res"
			process_result "$bf" "$bf" "$pack"
		else
			echo -n "! "
			cat -- "$ff.cmp.err" > "$ff.res"
			echo "Compilation error" > "$ff.res"
			process_result "$bf" "$bf" "$pack"
		fi
	done
done

if [ "x$isnode" = "xfalse" ]; then
	echo "engine: $engine ($enginebinname $OPT)"
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
	if [ -n "$remains" ]; then
		echo "sav that remains: $remains"
	fi
fi

# write $ERRLIST
if [ "x$ERRLIST" != "x" ]; then
	if [ -f "$ERRLIST_TARGET" ]; then
		mv "$ERRLIST_TARGET" "${ERRLIST_TARGET}.bak"
	fi
	uniq $ERRLIST > $ERRLIST_TARGET
	rm $ERRLIST
fi

echo >>$xml "</testsuite></testsuites>"

if type junit2html >/dev/null; then
	junit2html "$xml"
fi

if [ -n "$nok" ]; then
	exit 1
else
	exit 0
fi
