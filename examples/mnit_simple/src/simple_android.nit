# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2012-2014 Alexis Laferrière <alexis.laf@xymus.net>
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

module simple_android is
	android_manifest("""<uses-permission android:name="android.permission.VIBRATE" />""")
end

import simple
import mnit_android
import serialization

in "Java" `{
	import android.content.Context;
	import android.widget.Toast;
`}

redef class App
	redef fun input( ie )
	do
		if ie isa PointerEvent and ie.depressed then 
			test_java_ffi
		end
		return super
	end

	fun test_java_ffi import native_activity in "Java" `{
		// + Log (no context needed)
		android.util.Log.d("mnit_simple", "Java within NIT!!!");

		// - Context needed from now on
		// NativeActivity is a Java sub-class of Context
		final android.app.NativeActivity context = App_native_activity(recv);

		// Vibration
		android.os.Vibrator v = (android.os.Vibrator)
			context.getSystemService(android.content.Context.VIBRATOR_SERVICE);
		v.vibrate(500);

		// - UI thread needed from now on
		context.runOnUiThread(new Runnable() {
			@Override
			public void run()  {
				// + Toast
				CharSequence text = "Java within Nit!";
				int duration = Toast.LENGTH_SHORT;
				Toast toast = Toast.makeText(context, text, duration);
				toast.show();
			}
		});
	`}
end

class Point
	auto_serializable

	var x: Int
	var y: Int

	init(x, y: Int)
	do
		self.x = x
		self.y = y
	end

	redef fun to_s do return "({x}, {y})"
end
