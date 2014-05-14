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

in "Java" `{
	import android.content.Context;
	import android.widget.Toast;
`}

redef class MyApp
	redef fun input( ie )
	do
		if ie isa PointerEvent and ie.depressed then
			do_java_stuff
			loop
				test_shared_preferences
				sys.nanosleep(0, 500000)
			end
		end
		return super
	end

	fun test_shared_preferences 
	do
		# Private mode tests
		var sp = new SharedPreferences.mode_private(self, "test1")
		sp.boolean("a_boolean") =  true
		sp.float("a_float")=  66.6
		sp.int("a_int")= 666
		sp.int("a_second_int")= 666777
		sp.long("a_long")= 6666666666
		sp.string("a_string")= "Une chaine de caractère"
		sp.commit

		sp.remove("a_second_int")
		sp.commit

		print "#### PRIVATE MODE TESTS ####"
		print "a_boolean = {sp.boolean("a_boolean", false)}"
		print "a_float =  {sp.float("a_float", 0.0)}"
		print "a_int = {sp.int("a_int", 0)}"
		print "a_second_int = {sp.int("a_second_int", 0)}"
		print "a_long =  {sp.long("a_long", 0)}"
		print "a_string =  {sp.string("a_string", "ERREUR !")}"
	
		print "Contains a_int : {sp.contains("a_int")}"
		print "Contains a_second_int : {sp.contains("a_second_int")}"
		sp.destroy

		var sp2 = new SharedPreferences.mode_world_readable(self, "mode_world_readable")
		sp2.boolean("a_boolean") =  true
		sp2.float("a_float")=  66.6
		sp2.int("a_int")= 666
		sp2.int("a_second_int")= 666777
		sp2.long("a_long")= 6666666666
		sp2.string("a_string")= "Une chaine de caractère"
		sp2.commit

		sp2.remove("a_second_int")
		sp2.commit

		print "#### WORLD READABLE MODE TESTS ####"
		print "a_boolean = {sp2.boolean("a_boolean", false)}"
		print "a_float =  {sp2.float("a_float", 0.0)}"
		print "a_int = {sp2.int("a_int", 0)}"
		print "a_second_int = {sp2.int("a_second_int", 0)}"
		print "a_long =  {sp2.long("a_long", 0)}"
		print "a_string =  {sp2.string("a_string", "ERREUR !")}"
	
		print "Contains a_int : {sp2.contains("a_int")}"
		print "Contains a_second_int : {sp2.contains("a_second_int")}"
		sp2.destroy

		var sp3 = new SharedPreferences.mode_world_writeable(self, "mode_world_writeable")
		sp3.boolean("a_boolean") =  true
		sp3.float("a_float")=  66.6
		sp3.int("a_int")= 666
		sp3.int("a_second_int")= 666777
		sp3.long("a_long")= 6666666666
		sp3.string("a_string")= "Une chaine de caractère"
		sp3.commit

		sp3.remove("a_second_int")
		sp3.commit

		print "#### WORLD WRITEABLE MODE TESTS ####"
		print "a_boolean = {sp3.boolean("a_boolean", false)}"
		print "a_float =  {sp3.float("a_float", 0.0)}"
		print "a_int = {sp3.int("a_int", 0)}"
		print "a_second_int = {sp3.int("a_second_int", 0)}"
		print "a_long =  {sp3.long("a_long", 0)}"
		print "a_string =  {sp3.string("a_string", "ERREUR !")}"
	
		print "Contains a_int : {sp3.contains("a_int")}"
		print "Contains a_second_int : {sp3.contains("a_second_int")}"

		sp3.destroy

		var sp4 = new SharedPreferences.mode_world_writeable(self, "")
		sp4.boolean("a_boolean") =  true
		sp4.float("a_float")=  66.6
		sp4.int("a_int")= 666
		sp4.int("a_second_int")= 666777
		sp4.long("a_long")= 6666666
		sp4.string("a_string")= "Une chaine de caractère"
		sp4.commit

		sp4.remove("a_second_int")
		sp4.commit

		print "#### WORLD WRITEABLE MODE TESTS ####"
		print "a_boolean = {sp4.boolean("a_boolean", false)}"
		print "a_float =  {sp4.float("a_float", 0.0)}"
		print "a_int = {sp4.int("a_int", 0)}"
		print "a_second_int = {sp4.int("a_second_int", 0)}"
		print "a_long =  {sp4.long("a_long", 0)}"
		print "a_string =  {sp4.string("a_string", "ERREUR !")}"
	
		print "Contains a_int : {sp4.contains("a_int")}"
		print "Contains a_second_int : {sp4.contains("a_second_int")}"

		sp4.destroy
	end

	fun do_java_stuff import native_activity in "Java" `{
		// + Log (no context needed)
		android.util.Log.d("mnit_simple", "Java within NIT!!!");

		// - Context needed from now on
		// NativeActivity is a Java sub-class of Context
		final android.app.NativeActivity context = MyApp_native_activity(recv);

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
