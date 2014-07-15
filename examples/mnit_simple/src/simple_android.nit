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
import android::shared_preferences
import android::assets_and_resources
import android::audio

in "Java" `{
	import android.content.Context;
	import android.widget.Toast;
`}

redef class App
	var soundsp: Sound
	var soundmp: Sound

	redef fun init_window
	do
		super
		manage_audio_mode
		# retrieve sound
		soundsp = load_sound("sound.ogg")
		soundmp = load_music("xylofon.ogg")
		default_mediaplayer.looping = true
		default_mediaplayer.prepare
		soundmp.play
	end

	redef fun input( ie )
	do
		if ie isa PointerEvent and ie.depressed then 
			do_java_stuff
			test_bundle
			test_shared_preferences
			soundsp.play
			test_assets
			test_resources
		end
		return super
	end

	#testing the assets manager
	fun test_assets
	do
		assert asset_manager.bitmap("fighter.png") != null
	end

	#testing the resources manager
	fun test_resources do
		assert resource_manager.string("string_test") == "string test"
		assert resource_manager.boolean("test_bool") == true
		assert resource_manager.dimension("test_dimen_1") != null
		assert resource_manager.dimension("test_dimen_2") != null
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

	fun test_shared_preferences
	do
		# Private mode tests
		var sp = new SharedPreferences.privately(self, "test")
		sp.add_bool("a_boolean",  true)
		sp.add_float("a_float", 66.6)
		sp.add_int("an_int", 666)
		sp.add_int("a_second_int", 666777)
		sp.add_long("a_long", 6666666666)
		sp.add_string("a_string", "A string")
		sp["another_int"] = 85
		sp["yet_another_string"] = "Another string"
		sp.remove("a_second_int")

		# Serialized object test
		var my_point = new Point(10, 10)
		sp["a_point"] = my_point
		var my_deserialized_point = sp["a_point"]
		assert my_point.to_s == my_deserialized_point.to_s

		assert sp.bool("a_boolean", false) == true
		assert sp.bool("wrong_boolean", false) == false
		assert sp.float("a_float", 0.0) != 0.0
		assert sp.float("wrong_float", 0.0) == 0.0
		assert sp.int("an_int", 0) == 666
		assert sp.int("a_second_int", 0) == 0
		assert sp.long("a_long", 0) == 6666666666
		assert sp.long("wrong_long", 0) == 0
		assert sp.string("a_string", "ERROR!") == "A string"
		assert sp.string("wrong_string", "ERROR!") == "ERROR!"
		assert sp.long("another_int", 0) == 85
		assert sp.string("yet_another_string", "ERROR!") == "Another string"
		assert sp.has("an_int") == true
		assert sp.has("a_second_int") == false

		sp.clear
		assert sp.all == null

		sp.destroy
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
