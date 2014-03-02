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

import android_opengles1
import android

in "C header" `{
	#include <jni.h>
	#include <errno.h>
	#include <android/log.h>
	#include <android_native_app_glue.h>
`}

in "C" `{
	#include <EGL/egl.h>
	#include <GLES/gl.h>
	#define GL_GLEXT_PROTOTYPES 1
	#include <GLES/glext.h>
	#include <errno.h>

	#define LOGW(...) ((void)__android_log_print(ANDROID_LOG_WARN, "mnit", __VA_ARGS__))
	#ifdef DEBUG
		#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, "mnit", __VA_ARGS__))
	#else
		#define LOGI(...) (void)0
	#endif

	extern EGLDisplay mnit_display;
	extern EGLSurface mnit_surface;
	extern EGLContext mnit_context;
	extern EGLConfig mnit_config;
	extern int32_t mnit_width;
	extern int32_t mnit_height;
	extern float mnit_zoom;

	int mnit_orientation_changed;
	float mnit_zoom;
	int mnit_animating = 0;

	/* This is confusing; the type come from android_native_app_glue.h
	   and so identifies the java part of the app */
	struct android_app *mnit_java_app;

	/* This is the pure Nit App */
	App nit_app;

	/* The main of the Nit application, compiled somewhere else */
	extern int main(int, char**);

	/* Wraps App_full_frame() and check for orientation. */
	void mnit_frame();

	void mnit_term_display()
	{
		// At this point we have nothing to do
	}

	/* Handle inputs from the Android platform and sort them before
	   sending them in the Nit App */
	static int32_t mnit_handle_input(struct android_app* app, AInputEvent* event) {
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

	static void mnit_handle_cmd(struct android_app* app, int32_t cmd) {

		mnit_java_app = app;
			AConfiguration_setOrientation(mnit_java_app->config, ACONFIGURATION_ORIENTATION_LAND);
				LOGI("cmd %i", (int)pthread_self());
		
		switch (cmd) {
			case APP_CMD_SAVE_STATE:
				LOGI ("save state");
				mnit_java_app->savedStateSize = 1;
				mnit_java_app->savedState = malloc(1);
				App_save(nit_app);
				break;
				
			case APP_CMD_INIT_WINDOW:
				LOGI ("init window");
				if (mnit_java_app->window != NULL) {
					LOGI("init window in");
					App_init_window(nit_app);
					mnit_frame();
					mnit_animating = 1;
				}
				break;
				
			case APP_CMD_TERM_WINDOW:
				LOGI ("term window");
				mnit_term_display();
				App_term_window(nit_app);
				break;
				
			case APP_CMD_GAINED_FOCUS:
				LOGI ("gain foc");
				mnit_animating = 1;
				App_gained_focus(nit_app);
				LOGI ("gain foc 1");
				break;
				
			case APP_CMD_LOST_FOCUS:
				LOGI ("lost foc");
				mnit_animating = 0;
				App_lost_focus(nit_app);
				mnit_frame();
				break;
				
			case APP_CMD_PAUSE:
				LOGI ("app pause");
				App_pause(nit_app);
				break;
				
				/*
			case APP_CMD_STOP:
				LOGI ("app stop");
				App_stop(nit_app);
				break;
				
			case APP_CMD_DESTROY:
				LOGI ("app destrop");
				App_destroy(nit_app);
				break;
				
			case APP_CMD_START:
				LOGI ("app start");
				App_start(nit_app);
				break;
				*/

			case APP_CMD_RESUME:
				LOGI ("app resume");
				App_resume(nit_app);
				break;
				
			case APP_CMD_LOW_MEMORY:
				LOGI ("app low mem");
				break;
				
			case APP_CMD_CONFIG_CHANGED:
				LOGI ("app cmd conf ch");
				break;
				
			case APP_CMD_INPUT_CHANGED:
				LOGI ("app cmd in ch");
				break;
				
			case APP_CMD_WINDOW_RESIZED:
				mnit_orientation_changed = 1;
				LOGI ("app win res");
				break;
				
			case APP_CMD_WINDOW_REDRAW_NEEDED:
				LOGI ("app win redraw needed");
				break;
				
			case APP_CMD_CONTENT_RECT_CHANGED:
				LOGI ("app content rect ch");
				break;
		}
	}

	void android_main(struct android_app* app)
	{
		mnit_java_app = app;

		app_dummy();
		
		main(0, NULL);
	}

	void mnit_frame()
	{
		if (mnit_display == EGL_NO_DISPLAY) {
			LOGI("no frame");
			return;
		}

		if (mnit_orientation_changed)
		{
			mnit_orientation_changed = 0;

			if (mnit_surface != EGL_NO_SURFACE) {
				eglDestroySurface(mnit_display,  mnit_surface);
			}
			EGLSurface surface = eglCreateWindowSurface(mnit_display, mnit_config, mnit_java_app->window, NULL);

			if (eglMakeCurrent(mnit_display, surface, surface, mnit_context) == EGL_FALSE) {
				LOGW("Unable to eglMakeCurrent");
			}

			eglQuerySurface(mnit_display, surface, EGL_WIDTH, &mnit_width);
			eglQuerySurface(mnit_display, surface, EGL_HEIGHT, &mnit_height);

			mnit_surface = surface;

			glViewport(0, 0, mnit_width, mnit_height);
			glMatrixMode(GL_PROJECTION);
			glLoadIdentity();
			glOrthof(0.0f, mnit_width, mnit_height, 0.0f, 0.0f, 1.0f);
			glMatrixMode(GL_MODELVIEW);
		}

		LOGI("frame");

		glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT); // | GL_DEPTH_BUFFER_BIT);

		App_full_frame(nit_app);

		LOGI("frame b");
	}
`}


extern InnerAndroidMotionEvent in "C" `{AInputEvent *`}
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
		return ((int) AMotionEvent_getY(motion_event, pointer_id) * mnit_zoom) + 32;
	`}
	
	fun pressure: Float do return extern_pressure(motion_event.inner_event, pointer_id)
	private fun extern_pressure(motion_event: InnerAndroidMotionEvent, pointer_id: Int): Float is extern `{
		return AMotionEvent_getPressure(motion_event, pointer_id);
	`}

	redef fun pressed do return true
	redef fun depressed do return false
end

extern AndroidKeyEvent in "C" `{AInputEvent *`}
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
	
	fun key_char: Char is extern `{
		int code = AKeyEvent_getKeyCode(recv);
		if (code >= AKEYCODE_0 && code <= AKEYCODE_9)
			return '0'+code-AKEYCODE_0;
		if (code >= AKEYCODE_A && code <= AKEYCODE_Z)
			return 'a'+code-AKEYCODE_A;
		return 0;
	`}

	fun is_back_key: Bool do return key_code == 2
	fun is_menu_key: Bool do return key_code == 82
	fun is_search_key: Bool do return key_code == 84
end

redef class Object
	# Uses Android logs for every print
	redef fun print(text: Object) is extern import Object.to_s, String.to_cstring `{
		__android_log_print(ANDROID_LOG_INFO, "mnit print", "%s", String_to_cstring(Object_to_s(object)));
	`}
end

redef class App
	redef type IE: AndroidInputEvent
	redef type D: Opengles1Display

	redef fun log_warning(msg) is extern import String.to_cstring `{
		LOGW("%s", String_to_cstring(msg));
	`}
	redef fun log_info(msg) is extern import String.to_cstring `{
		LOGI("%s", String_to_cstring(msg));
	`}

	redef fun init_window
	do
		super

		display = new Opengles1Display
	end
	
	# these two are used as a callback from native to type incoming events
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
	
	redef fun main_loop is extern import full_frame, save, pause, resume, gained_focus, lost_focus, init_window, term_window, extern_input_key, extern_input_motion `{
		LOGI("nitni loop");
		
		nit_app = recv;

		mnit_java_app->userData = &nit_app;
		mnit_java_app->onAppCmd = mnit_handle_cmd;
		mnit_java_app->onInputEvent = mnit_handle_input;
		
		while (1) {
			int ident;
			int events;
			static int block = 0;
			struct android_poll_source* source;

			while ((ident=ALooper_pollAll(0, NULL, &events,
					(void**)&source)) >= 0) { /* first 0 is for non-blocking */ 

				// Process this event.
				if (source != NULL)
					source->process(mnit_java_app, source);

				// Check if we are exiting.
				if (mnit_java_app->destroyRequested != 0) {
					mnit_term_display();
					return;
				}
			}
			
			if (mnit_animating == 1) {
				mnit_frame();
				LOGI("frame at loop end 1");
			}
		}
		
	   /* App_exit(); // this is unreachable anyway*/
	`}
end

