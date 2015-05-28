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

# Adapts OpenGL ES 1.0 for use on Android by offering services to get
# a handler to the native display and window.
module android_opengles1 is ldflags "-lEGL -lGLESv1_CM"

import android_app
import android

in "C" `{
	#include <android_native_app_glue.h>

	NativeWindowType mnit_window;
	EGLNativeDisplayType mnit_native_display = EGL_DEFAULT_DISPLAY;
`}

redef class Opengles1Display
	redef fun midway_init(format) import app_native_window `{
		mnit_window = Opengles1Display_app_native_window(self);
		if (ANativeWindow_setBuffersGeometry(mnit_window, 0, 0, (EGLint)format) != 0) {
			LOGW("Unable to ANativeWindow_setBuffersGeometry");
		}
	`}

	private fun app_native_window: ANativeWindow do return app.native_app_glue.window
end
