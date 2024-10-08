#!/bin/bash
# This file is part of NIT ( https://nitlanguage.org ).
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

# Script to test Android apps using `adb monkey`

# Show the emulator window?
show=false

# Name of an already running device, as shown by `adb devices`
dev=none

# Parse command line options
stop=false
while [ $stop = false ]; do
	case $1 in
		--show)	show=true; shift;;
		--dev)	dev=$2; shift; shift;;
		*) stop=true
	esac
done

if [ $# = 0 ]; then
	echo "Test an apk"
	echo "Usage: check_android.sh [--show] [--dev android-device-name] file.apk [other_file.apk [...]]"
	exit 1
fi

set -x

# Create an AVD if none is specified
kill_emu=false
if [ $dev = none ]; then
	kill_emu=true

	# Name of the AVD
	# TODO have alternatives AVD with different specs
	avd=check_android_avd

	# Port for the emulator
	port=5600

	dev=emulator-$port

	# Time to wait for the emulator to be ready
	to_sleep=20

	# Does the AVD exists?
	android list avd | grep $avd
	if [ $? -eq 1 ]; then
		# Create it
		echo no | android create avd -n $avd --snapshot -t android-19 --abi x86 || true
		to_sleep=120
	fi

	# Show the emulator window on request only
	emu_opts=
	if [ $show = false ]; then
		emu_opts="-no-window"
	fi

	emulator -avd $avd -port $port -logcat app.nit $emu_opts &
	# To use hardware optimization add: -qemu -m 512 -enable-kvm

	sleep $to_sleep
fi

for apk in $@; do

	# Target package name
	pkg=`aapt dump badging $apk | grep package | sed -e "s/.*name='\([a-z._]*\)'.*/\1/"`

	# Force reinstall
	adb -s $dev uninstall $pkg
	adb -s $dev install -r "$apk"

	# Unlock screen
	adb -s $dev shell input keyevent 82
	adb -s $dev shell input keyevent 4

	# Run monkey
	tools_dir=`dirname $0`
	$tools_dir/unitrun.sh "android-`basename $apk .apk`" \
		adb -s $dev shell monkey -p $pkg \
			--monitor-native-crashes --throttle 2 --pct-touch 50 --pct-motion 50 5000
done

if [ $kill_emu = true ]; then
	# Kill emulator
	adb -s $dev emu kill
fi
