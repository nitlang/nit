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
module android_app

import mnit
import android
import mnit::opengles1

in "C header" `{
	#include <jni.h>
	#include <errno.h>
	#include <android/log.h>
	#include <android_native_app_glue.h>

	#define LOGW(...) ((void)__android_log_print(ANDROID_LOG_WARN, "mnit", __VA_ARGS__))
	#ifdef DEBUG
		#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, "mnit", __VA_ARGS__))
	#else
		#define LOGI(...) (void)0
	#endif
`}

in "C" `{
	#include <EGL/egl.h>
	#include <GLES/gl.h>
	#define GL_GLEXT_PROTOTYPES 1
	#include <GLES/glext.h>
	#include <errno.h>

	extern EGLDisplay mnit_display;
	extern EGLSurface mnit_surface;
	extern EGLContext mnit_context;
	extern EGLConfig mnit_config;
	extern int32_t mnit_width;
	extern int32_t mnit_height;
	extern float mnit_zoom;

	//int mnit_orientation_changed;
	float mnit_zoom;

	/* Handle inputs from the Android platform and sort them before
	   sending them in the Nit App */
	static int32_t mnit_handle_input(struct android_app* app, AInputEvent* event) {
		App nit_app = app->userData;
		LOGI("handle input %i", (int)pthread_self());
		if (AInputEvent_getType(event) == AINPUT_EVENT_TYPE_KEY) {
			LOGI("key");
			return App_extern_input_key(nit_app, event);
		}
		else if (AInputEvent_getType(event) == AINPUT_EVENT_TYPE_MOTION) {
			LOGI("motion");
			return App_extern_input_motion(nit_app, event);
		}

		return 0;
	}
`}


extern class InnerAndroidMotionEvent in "C" `{AInputEvent *`}
	super Pointer
	private fun pointers_count: Int is extern `{
	return AMotionEvent_getPointerCount(recv);
	`}
	private fun just_went_down: Bool is extern `{
	return (AMotionEvent_getAction(recv) & AMOTION_EVENT_ACTION_MASK) == AMOTION_EVENT_ACTION_DOWN;
	`}
	private fun edge: Int is extern `{
	return AMotionEvent_getEdgeFlags(recv);
	`}
	private fun index_down_pointer: Int is extern `{
	int a = AMotionEvent_getAction(recv);
	if ((a & AMOTION_EVENT_ACTION_MASK) == AMOTION_EVENT_ACTION_POINTER_DOWN)
		return (a & AMOTION_EVENT_ACTION_POINTER_INDEX_MASK) >> AMOTION_EVENT_ACTION_POINTER_INDEX_SHIFT;
	else return -1;
	`}

	private fun action: AMotionEventAction `{ return AMotionEvent_getAction(recv); `}
end

extern class AMotionEventAction `{ int32_t `}
	protected fun action: Int `{ return recv & AMOTION_EVENT_ACTION_MASK; `}
	fun is_down: Bool do return action == 0
	fun is_up: Bool do return action == 1
	fun is_move: Bool do return action == 2
	fun is_cancel: Bool do return action == 3
	fun is_outside: Bool do return action == 4
	fun is_pointer_down: Bool do return action == 5
	fun is_pointer_up: Bool do return action == 6
end

interface AndroidInputEvent
	super InputEvent
end

class AndroidMotionEvent
	super AndroidInputEvent
	super MotionEvent

	private init(ie: InnerAndroidMotionEvent) do inner_event = ie
	private var inner_event: InnerAndroidMotionEvent

	private var pointers_cache: nullable Array[AndroidPointerEvent] = null
	fun pointers: Array[AndroidPointerEvent]
	do
		if pointers_cache != null then
			return pointers_cache.as(not null)
		else
			var pointers = new Array[AndroidPointerEvent]
			var pointers_count = inner_event.pointers_count
			for i in [0 .. pointers_count [do
				var pointer_event = new AndroidPointerEvent(self, i)
				pointers.add(pointer_event)
			end
			pointers_cache = pointers
			return pointers
		end
	end

	redef fun just_went_down: Bool do return inner_event.just_went_down
	fun edge: Int do return inner_event.edge

	redef fun down_pointer: nullable AndroidPointerEvent
	do
		var i = inner_event.index_down_pointer
		if i > 0 then
			return pointers[i]
		else
			return null
		end
	end
end

class AndroidPointerEvent
	super PointerEvent
	super AndroidInputEvent

	protected var motion_event: AndroidMotionEvent
	protected var pointer_id: Int

	redef fun x: Float do return extern_x(motion_event.inner_event, pointer_id)
	private fun extern_x(motion_event: InnerAndroidMotionEvent, pointer_id: Int): Float is extern `{
		return ((int) AMotionEvent_getX(motion_event, pointer_id) * mnit_zoom);
	`}

	redef fun y: Float do return extern_y(motion_event.inner_event, pointer_id)
	private fun extern_y(motion_event: InnerAndroidMotionEvent, pointer_id: Int): Float is extern `{
		return ((int) AMotionEvent_getY(motion_event, pointer_id) * mnit_zoom);
	`}

	fun pressure: Float do return extern_pressure(motion_event.inner_event, pointer_id)
	private fun extern_pressure(motion_event: InnerAndroidMotionEvent, pointer_id: Int): Float is extern `{
		return AMotionEvent_getPressure(motion_event, pointer_id);
	`}

	redef fun pressed
	do
		var action = motion_event.inner_event.action
		return action.is_down or action.is_move
	end

	redef fun depressed do return not pressed
end

extern class AndroidKeyEvent in "C" `{AInputEvent *`}
	super KeyEvent
	super AndroidInputEvent

	fun action: Int is extern `{
		return AKeyEvent_getAction(recv);
	`}
	redef fun is_down: Bool do return action == 0
	redef fun is_up: Bool do return action == 1

	fun key_code: Int is extern `{
		return AKeyEvent_getKeyCode(recv);
	`}

	redef fun to_c `{
		int code = AKeyEvent_getKeyCode(recv);
		if (code >= AKEYCODE_0 && code <= AKEYCODE_9)
			return '0'+code-AKEYCODE_0;
		if (code >= AKEYCODE_A && code <= AKEYCODE_Z)
			return 'a'+code-AKEYCODE_A;
		return 0;
	`}

	fun is_back_key: Bool do return key_code == 4
	fun is_menu_key: Bool do return key_code == 82
	fun is_search_key: Bool do return key_code == 84
end

redef class App
	redef type D: Opengles1Display

	redef fun init_window
	do
		set_as_input_handler native_app_glue
		display = new Opengles1Display

		super
	end

	private fun set_as_input_handler(app_glue: NativeAppGlue) import extern_input_key, extern_input_motion `{
		app_glue->onInputEvent = mnit_handle_input;
	`}

	redef fun full_frame do if not paused then super

	# these are used as a callback from native to type incoming events
	private fun extern_input_key(event: AndroidKeyEvent): Bool
	do
		return input(event)
	end
	private fun extern_input_motion(event: InnerAndroidMotionEvent): Bool
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

	redef fun generate_input do poll_looper 0
end
