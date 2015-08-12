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

set -x

avd=android4.0
sleep=20

android list avd | grep $avd

if [ $? -eq 1 ]; then
	echo no | android create avd -n $avd --snapshot -t android-15 --abi x86 || true
	sleep=120
fi

#-no-window
emulator -avd android4.0 -no-window -qemu -m 512 -enable-kvm &

sleep $sleep

dev=`adb devices | grep emulator | sed "s/\(.*\)\s*device/\1/"`

adb -s $dev install -r bin/moles.apk

# Unlock screen
adb -s $dev shell input keyevent 82

adb -s $dev shell monkey -p org.nitlanguage.moles_android_debug \
	--monitor-native-crashes --throttle 5 --pct-touch 50 --pct-motion 50 1000

adb -s $dev emu kill
