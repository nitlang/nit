# This file is part of NIT (https://nitlanguage.org).
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

# Android Activities wrapper
module activities

import platform

# An Android activity context
extern class NativeContext in "Java" `{ android.content.Context `}
	super JavaObject
end

# A wrapper of context
extern class NativeContextWrapper in "Java" `{ android.content.ContextWrapper `}
	super NativeContext
end

# An activity, a single, focused thing a user can do on Android
extern class NativeActivity in "Java" `{ android.app.Activity `}
	super NativeContextWrapper

	# HACK for bug #845
	redef fun new_global_ref: SELF import sys, Sys.jni_env `{
		Sys sys = NativeActivity_sys(self);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, self);
	`}

	# Notify the OS that this activity is done and should be closed
	fun finish in "Java" `{ self.finish(); `}

	# Execute `task.main` on the UI thread when possible
	fun run_on_ui_thread(task: Task) import Task.main in "Java" `{
		final nit.app.NitObject final_task = task;
		Runnable runnable = new Runnable() {
			@Override
			public void run() {
				Task_main(final_task);
			}
		};
		self.runOnUiThread(runnable);
	`}
end
