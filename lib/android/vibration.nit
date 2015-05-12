# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# Vibration services for Android
#
# Importing this module will trigger the use of the VIBRATE permission
module vibration is
	android_manifest("""<uses-permission android:name="android.permission.VIBRATE" />""")
end

import dalvik

# Handle to an Android vibrator
extern class Vibrator in "Java" `{ android.os.Vibrator `}
	super JavaObject

	# Vibrate for `n` miliseconds
	fun vibrate(n: Int) in "Java" `{ recv.vibrate(n); `}

	# Does this devices has a vibrator
	#
	# TODO activate in API 11
	#fun exists: Bool in "Java" `{ return recv.hasVibrator(); `}

	# Turn off the vibration
	fun cancel in "Java" `{ recv.cancel(); `}

	# HACK for bug #845
	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = Vibrator_sys(recv);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, recv);
	`}
end

redef class App
	# Get the handle to this device vibrator as a global ref
	var vibrator: Vibrator is lazy do
		var v = vibrator_native(native_activity)
		return v.new_global_ref
	end
	private fun vibrator_native(context: NativeActivity): Vibrator in "Java" `{
		android.os.Vibrator v = (android.os.Vibrator)
			context.getSystemService(android.content.Context.VIBRATOR_SERVICE);
		return v;
	`}
end
