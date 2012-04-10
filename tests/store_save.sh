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

# This shell script convert .res into .sav

[ $# = 0 ] && exit 0;

f=`basename "$1" .res`
shift

echo -n "=> $f: "

if [ -r out/$f.res ]; then
	# Result
	if [ -r sav/$f.sav ]; then
		diff -q out/$f.res sav/$f.sav > /dev/null;
		if [ $? == 0 ]; then
			echo "[ok] $f"
		else
			echo "======== [update] sav/$f.sav ========="
			cp out/$f.res sav/$f.sav
		fi
	else
		echo "======== [new] sav/$f.sav ========="
		cp out/$f.res sav/$f.sav
	fi
else
	if [ -r sav/$f.sav ]; then
		echo "[no res] $f"
	else
		echo "[not yet] $f"
	fi
fi

exec $0 "$@"
