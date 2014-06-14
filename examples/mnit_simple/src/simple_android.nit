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
	java_package("org.nitlanguage.simple")
	android_manifest("""<uses-permission android:name="android.permission.VIBRATE" />""")
end

import simple
import mnit_android
import android::bundle

in "Java" `{
	import android.content.Context;
	import android.widget.Toast;
`}

redef class App
	redef fun input( ie )
	do
		if ie isa PointerEvent and ie.depressed then 
			do_java_stuff
			test_bundle
		end

		return super
	end

	fun test_bundle
	do
		var bundle = new Bundle(self)
		 
		bundle["anInt"] = 1
		bundle["aFloat"] = 1.1
		bundle["aString"] = "A string"
		bundle["aBool"] = true
		
		var int_array = new Array[Int]
		var bool_array = new Array[Bool]

		var value = true

		for i in [0..5] do
			int_array.add(i)
			bool_array.add(value)
			value = not value
		end

		bundle["anArrayOfInt"] = int_array
		bundle["anArrayOfBool"] = bool_array

		assert bundle.int("anInt", 0) == 1
		assert bundle.int("wrongInt", 0) == 0
		assert bundle.float("aFloat", 0.0) == 1.1
		assert bundle.float("wrongFloat", 0.0) == 0.0
		assert bundle.string("aString") == "A string"
		assert bundle.string("wrongString") == null
		assert bundle.bool("aBool", false)
		assert bundle.bool("wrongBool", false) == false
		
		var int_array_test = bundle.array_of_int("anArrayOfInt")
		var bool_array_test = bundle.array_of_bool("anArrayOfBool")

		value = true

		for i in [0..5] do
			assert int_array_test[i] == i
			assert bool_array_test[i] == value
			value = not value
		end
		
		assert bundle.size == 6
		assert bundle.has("aBool")
		assert not bundle.is_empty

		bundle.remove("aString")
		bundle.remove("anArrayOfBool")

		assert bundle.string("aString") == null
		assert bundle.array_of_bool("anArrayOfBool") == null

		# Serializable tests
		var p1 = new Point(10, 10)
		bundle["aPoint"] = p1
		var p2 = bundle.deserialize("aPoint")

		assert p1.to_s == p2.to_s

		var point_array = new Array[Point]

		for i in [0..5] do point_array.add(new Point(i, i))

		bundle["anArrayOfPoint"] = point_array

		var deserialized_point_array = bundle.deserialize_array("anArrayOfPoint")

		for i in [0..5] do 
			var point = new Point(i, i)
			assert deserialized_point_array[i].to_s == point.to_s
		end

		bundle.clear

		assert bundle.keys.is_empty
		assert bundle.is_empty
	end

	fun do_java_stuff import native_activity in "Java" `{
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
	super Serializable

	var x: Int
	var y: Int

	init(x, y: Int) 
	do
		self.x = x
		self.y = y
	end

	redef fun to_s do return "({x}, {y})"
end
