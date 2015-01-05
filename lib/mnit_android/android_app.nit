# This file is part of NIT (http://www.nitlanguage.org).
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

# Impements the services of `mnit:app` using the API from the Android ndk
module android_app is
	android_manifest_activity """
		android:theme="@android:style/Theme.NoTitleBar.Fullscreen"
		android:configChanges="orientation|keyboardHidden"
		android:screenOrientation="portrait""""
end

import mnit
import android
import mnit::opengles1
intrude import ::android::input_events

in "C" `{
	#include <EGL/egl.h>

	extern EGLDisplay mnit_display;
	extern EGLSurface mnit_surface;
	extern EGLContext mnit_context;
	extern EGLConfig mnit_config;
	extern int32_t mnit_width;
	extern int32_t mnit_height;
	extern float mnit_zoom;

	//int mnit_orientation_changed;
	float mnit_zoom;
`}

redef class App
	redef type D: Opengles1Display

	redef fun init_window
	do
		display = new Opengles1Display

		super
	end

	redef fun full_frame do if not paused then super

	redef fun generate_input do poll_looper 0

	redef fun native_input_key(event)
	do
		return input(event)
	end

	redef fun native_input_motion(event)
	do
		var ie = new AndroidMotionEvent(event)
		var handled = input(ie)

		if not handled then
			for pe in ie.pointers do
				input(pe)
			end
		end

		return handled
	end
end
