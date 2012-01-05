#!/bin/bash
# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2008 Jean Privat <jean@pryen.org>
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

# Usage:
# showerr.sh [filelocation]...
#
# Show an colorize lines locations (with or without error messages) passed in arguments.
# If no arguments are given, line locations a read for the standard input (one per line)

red=$(printf "\033[0;31m")
bred=$(printf "\033[1;31m")
green=$(printf "\033[0;32m")
yellow=$(printf "\033[0;33m")
def=$(printf "\033[0m")

colorize()
{
	F='\([^:]*\)'
	D='\([0-9]*\)'
	M='\(.*\)'
	sed	-e "s!^$F:$D,$D--$D,$D: $M!X \1 \2 \3 \4 \5 \6!" \
		-e "s!^$F:$D,$D--$D: $M!X \1 \2 \3 \2 \4 \5!" \
		-e "s!^$F:$D,$D: $M!X \1 \2 \3 \2 \3 \4!" \
		-e "s!^$F:$D: $M!X \1 \2 1 \2 eol \3!" \
		-e "s!^$F:$D\$!X \1 \2 1 \2 eol!" |
	while read k f l1 c1 l2 c2 m; do
		if [ "$k" != "X" ]; then
			echo "$k $f $l1 $c1 $l2 $c2 $m"
		else
			# Colorize and rewrite the error message
			m=$( echo "$m" |
				sed	-e "s!^\(Warning:\)\(.*\)!$green\1$def\2!" \
					-e "s!^\([^:]*[Ee]rror:\)\(.*\)!$bred\1$def\2!"
			)
			echo "$yellow$f$def:$l1,$c1--$l2,$c2: $m"

			# Colorize and show the line
			if [ $c1 = 1 ]; then
				start="\(\)"
			else
				start="\(.\{$(($c1-1))\}\)"
			fi
			if [ $l1 = $l2 ]; then
				if [ $c2 = eol ]; then
					len="\(.*\)"
					red=""
				else
					len="\(.\{$(($c2 - $c1 + 1))\}\)"
				fi
				sed -n -e "${l1}s!^$start$len\(.*\)!	\1$red\2$def\3!p" $f
			else
				if [ $c2 = 1 ]; then
					start2="\(\)"
				else
					start2="\(.\{$(($c2-1))\}\)"
				fi
				# Show only the first line
				sed -n -e "${l1}s!^$start\(.*\)!	\1$red\2 (...)$def!p" $f
				#sed -n -e "${l1}s!^$start\(.*\)!	\1$red\2!p" $f
				#if [ $l1 = $(($l2-2)) ]; then
				#	sed -n -e "$(($l1+1))s!^\(.*\)!	\1!p" $f
				#elif [ $l1 != $(($l2-1)) ]; then
				#	sed -n -e "${l1}s!^\([	 ]*\).*!	\1...!p" $f
				#fi
				#sed -n -e "${l2}s!^$start2\(.*\)!	\1$def\2!p" $f
			fi
		fi
	done
}

if [ "$#" = 0 ]; then
	colorize
else
	for x in "$@"; do
		echo "$x" | colorize
	done
fi

