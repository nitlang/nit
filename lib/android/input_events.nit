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

# Pointer and hardware key events
module input_events

import mnit::input
import android::game

in "C header" `{
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
	/* Handle inputs from the Android platform and sort them before
	   sending them in the Nit App */
	static int32_t mnit_handle_input(struct android_app* app, AInputEvent* event) {
		App nit_app = app->userData;
		LOGI("handle input %i", (int)pthread_self());
		if (AInputEvent_getType(event) == AINPUT_EVENT_TYPE_KEY) {
			LOGI("key");
			return App_native_input_key(nit_app, event);
		}
		else if (AInputEvent_getType(event) == AINPUT_EVENT_TYPE_MOTION) {
			LOGI("motion");
			return App_native_input_motion(nit_app, event);
		}

		return 0;
	}
`}

private extern class NativeAndroidMotionEvent `{AInputEvent *`}

	fun pointers_count: Int `{
		return AMotionEvent_getPointerCount(self);
	`}

	fun edge: Int `{
		return AMotionEvent_getEdgeFlags(self);
	`}

	# Get the non-primary pointer id that just went down (returns -1 or > 0)
	fun index_down_pointer: Int `{
		int a = AMotionEvent_getAction(self);
		if ((a & AMOTION_EVENT_ACTION_MASK) == AMOTION_EVENT_ACTION_POINTER_DOWN)
			return (a & AMOTION_EVENT_ACTION_POINTER_INDEX_MASK) >> AMOTION_EVENT_ACTION_POINTER_INDEX_SHIFT;
		else return -1;
	`}

	fun action: AMotionEventAction `{ return AMotionEvent_getAction(self); `}

	fun native_down_time: Int `{ return AMotionEvent_getDownTime(self); `}
end

private extern class AMotionEventAction `{ int32_t `}
	fun action: Int `{ return self & AMOTION_EVENT_ACTION_MASK; `}

	# Pointer index concerned by this action
	#
	# Require: `is_pointer_down or is_pointer_up`
	fun pointer_index: Int `{
		return (self & AMOTION_EVENT_ACTION_POINTER_INDEX_MASK) >> AMOTION_EVENT_ACTION_POINTER_INDEX_SHIFT;
	`}

	fun is_down: Bool do return action == 0
	fun is_up: Bool do return action == 1
	fun is_move: Bool do return action == 2
	fun is_cancel: Bool do return action == 3
	fun is_outside: Bool do return action == 4
	fun is_pointer_down: Bool do return action == 5
	fun is_pointer_up: Bool do return action == 6
end

# An input event on Android
interface AndroidInputEvent
	super InputEvent
end

# A motion event concerning a single or more `pointers`
class AndroidMotionEvent
	super AndroidInputEvent
	super MotionEvent

	private var native: NativeAndroidMotionEvent

	# Pointers (or fingers) composing this motion event
	var pointers: Array[AndroidPointerEvent] is lazy do
		return [for i in native.pointers_count.times do new AndroidPointerEvent(self, i)]
	end

	# The pointer (or finger) causing this event
	var acting_pointer: AndroidPointerEvent is lazy do
		var action = native.action
		var index = 0

		if action.is_pointer_down or action.is_pointer_up then
			index = native.action.pointer_index
		end

		return new AndroidPointerEvent(self, index)
	end

	redef fun just_went_down do return native.action.is_down or native.action.is_pointer_down

	# Was the top edge of the screen intersected by this event?
	fun touch_to_edge: Bool do return native.edge == 1

	# Was the bottom edge of the screen intersected by this event?
	fun touch_bottom_edge: Bool do return native.edge == 2

	# Was the left edge of the screen intersected by this event?
	fun touch_left_edge: Bool do return native.edge == 4

	# Was the right edge of the screen intersected by this event?
	fun touch_right_edge: Bool do return native.edge == 8

	redef fun down_pointer: nullable AndroidPointerEvent
	do
		if just_went_down then
			# The primary pointer went down
			return pointers[0]
		end

		var i = native.index_down_pointer
		if i > 0 then
			# A secondary pointer went down
			return pointers[i]
		else
			return null
		end
	end

	# Time when the user originally pressed down to start a stream of position events
	#
	# The return value is in the `java.lang.System.nanoTime()` time base.
	fun down_time: Int do return native.native_down_time
end

# A pointer event
class AndroidPointerEvent
	super PointerEvent
	super AndroidInputEvent

	private var motion_event: AndroidMotionEvent

	private var pointer_index: Int

	redef fun x do return native_x(motion_event.native, pointer_index)

	private fun native_x(motion_event: NativeAndroidMotionEvent, pointer_index: Int): Float `{
		return AMotionEvent_getX(motion_event, pointer_index);
	`}

	redef fun y do return native_y(motion_event.native, pointer_index)

	private fun native_y(motion_event: NativeAndroidMotionEvent, pointer_index: Int): Float `{
		return AMotionEvent_getY(motion_event, pointer_index);
	`}

	# Pressure applied by this pointer
	fun pressure: Float do return native_pressure(motion_event.native, pointer_index)

	private fun native_pressure(motion_event: NativeAndroidMotionEvent, pointer_index: Int): Float `{
		return AMotionEvent_getPressure(motion_event, pointer_index);
	`}

	redef fun pressed
	do
		var action = motion_event.native.action
		return action.is_down or action.is_move or action.is_pointer_down
	end

	redef fun is_move do return motion_event.acting_pointer == self and
		motion_event.native.action.is_move

	# Does this pointer just began touching the screen?
	fun just_went_down: Bool do return motion_event.acting_pointer == self and
		motion_event.just_went_down

	# Unique id of this pointer since the beginning of the gesture
	redef fun pointer_id do return native_pointer_id(motion_event.native, pointer_index)

	private fun native_pointer_id(motion_event: NativeAndroidMotionEvent, pointer_index: Int): Int `{
		return AMotionEvent_getPointerId(motion_event, pointer_index);
	`}
end

# An hardware key event
extern class AndroidKeyEvent `{AInputEvent *`}
	super KeyEvent
	super AndroidInputEvent

	private fun action: Int `{ return AKeyEvent_getAction(self); `}

	redef fun is_down do return action == 0
	redef fun is_up do return action == 1

	# Hardware code of the key raising this event
	fun key_code: Int `{ return AKeyEvent_getKeyCode(self); `}

	redef fun to_c
	do
		var i = native_to_c
		if i == 0 then return null
		return i.code_point
	end

	private fun native_to_c: Int `{
		int code = AKeyEvent_getKeyCode(self);
		if (code >= AKEYCODE_0 && code <= AKEYCODE_9)
			return '0'+code-AKEYCODE_0;
		if (code >= AKEYCODE_A && code <= AKEYCODE_Z)
			return 'a'+code-AKEYCODE_A;
		return 0;
	`}

	redef fun name do return key_code.to_s

	# Was this event raised by the back key?
	fun is_back_key: Bool do return key_code == 4

	# Was this event raised by the menu key?
	fun is_menu_key: Bool do return key_code == 82

	# Was this event raised by the search key?
	fun is_search_key: Bool do return key_code == 84

	# Was this event raised by the volume up key?
	fun is_volume_up: Bool do return key_code == 24

	# Was this event raised by the volume down key?
	fun is_volume_down: Bool do return key_code == 25
end

redef class App

	redef fun init_window
	do
		set_as_input_handler native_app_glue
		super
	end

	private fun set_as_input_handler(app_glue: NativeAppGlue)
	import native_input_key, native_input_motion `{
		app_glue->onInputEvent = mnit_handle_input;
	`}

	# these are used as a callback from native to type incoming events
	private fun native_input_key(event: AndroidKeyEvent): Bool is abstract

	private fun native_input_motion(event: NativeAndroidMotionEvent): Bool is abstract
end
