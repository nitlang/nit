# This file is part of NIT (http://www.nitlanguage.org).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# Some documentation of this module has been adapted from the documentation
# of the Android NDK projet.

# Wrapper of the Android native_app_glue framework to implement app.nit
#
# The framework provides 3 different structures for a single C application
# under Android. We use all 3 structures in this API to implement app.nit
# on Android. Each structure is wrapped in a Nit extern class:
#
# * `NativeAppGlue` is the lowest level class, it is implemented by the C
#   structure `android_app`. It offers features on the main Android thread
#   (not on the same thread as Nit). For this reason, prefer to use
#   `NdkNativeActivity`.
#
# * `NdkNativeActivity` is implemented by the C structure `ANativeActivity`. It
#   is on the same thread as Nit and manages the synchronization with the
#   main Android thread.
#
# * `NativeNativeActivity` is implemented in Java by `android.app.NativeActivity`,
#   which is a subclass of `Activity` and `Context` (in Java). It represent
#   main activity of the running application. Use it to get anything related
#   to the `Context` and as anchor to execute Java UI code.
module native_app_glue is ldflags "-landroid"

import platform
import log
import activities

in "C header" `{
	#include <android_native_app_glue.h>
`}

in "C body" `{
	struct android_app* native_app_glue_data;

	// Entry point called by the native_app_glue_framework framework
	// We relay the call to the Nit application.
	void android_main(struct android_app* app) {
		native_app_glue_data = app;
		app_dummy();
		main(0, NULL);
	}

	// Main callback on the native_app_glue framework
	//
	// We relay everything to our App.
	static void app_cmd_handler(struct android_app* app, int32_t cmd) {
		App nit_app = app->userData;
		switch (cmd) {
			case APP_CMD_SAVE_STATE:
				App_save_state(nit_app);
				break;
			case APP_CMD_INIT_WINDOW:
				App_init_window(nit_app);
				break;
			case APP_CMD_TERM_WINDOW:
				App_term_window(nit_app);
				break;
			case APP_CMD_GAINED_FOCUS:
				App_gained_focus(nit_app);
				break;
			case APP_CMD_LOST_FOCUS:
				App_lost_focus(nit_app);
				break;
			case APP_CMD_PAUSE:
				App_pause(nit_app);
				break;
			case APP_CMD_STOP:
				App_stop(nit_app);
				break;
			case APP_CMD_DESTROY:
				App_destroy(nit_app);
				break;
			case APP_CMD_START:
				App_start(nit_app);
				break;
			case APP_CMD_RESUME:
				App_resume(nit_app);
				break;
			case APP_CMD_LOW_MEMORY:
				App_low_memory(nit_app);
				break;
			case APP_CMD_CONFIG_CHANGED:
				App_config_changed(nit_app);
				break;
			case APP_CMD_INPUT_CHANGED:
				App_input_changed(nit_app);
				break;
			case APP_CMD_WINDOW_RESIZED:
				App_window_resized(nit_app);
				break;
			case APP_CMD_WINDOW_REDRAW_NEEDED:
				App_window_redraw_needed(nit_app);
				break;
			case APP_CMD_CONTENT_RECT_CHANGED:
				App_content_rect_changed(nit_app);
				break;
		}
	}
`}

# Android SDK's `android.app.NativeActivity`.
#
# Can be used to get anything related to the `Context` of the activity in Java
# and as anchor to execute Java UI code.
extern class NativeNativeActivity in "Java" `{ android.app.NativeActivity `}
	super NativeActivity
end

redef class App
	redef fun setup
	do
		var native_app_glue = native_app_glue
		native_app_glue.user_data = self

		set_as_cmd_handler(native_app_glue)
	end

	# The underlying implementation using the Android native_app_glue framework
	fun native_app_glue: NativeAppGlue `{ return native_app_glue_data; `}

	# The main Java Activity of this application
	fun native_activity: NativeActivity do return native_app_glue.ndk_native_activity.java_native_activity

	# Set `native_app_glue` command handler to our C implementation which
	# will callback self.
	private fun set_as_cmd_handler(native_app_glue: NativeAppGlue) import save_state,
		init_window, term_window, gained_focus, lost_focus, pause, stop, destroy,
		start, resume, low_memory, config_changed, input_changed, window_resized,
		window_redraw_needed, content_rect_changed `{
		native_app_glue->onAppCmd = &app_cmd_handler;
	`}

	# Notification from the Android framework to generate a new saved state
	# 
	# You can use the `shared_preferences` module or `NativeAppGlue::saved_state`.
	fun save_state do end

	# Notification from the native_app glue framework, a new ANativeWindow is ready
	#
	# When called, `NativeAppGlue::window` returns a poiter to the new window surface.
	fun init_window do end

	# Notification from the native_app glue framework, the existing window needs to be terminated
	#
	# Upon receiving this command, `native_app_glue.window` still contains the existing window.
	fun term_window do end

	# Notification from the Android framework, `native_activity` has gained focus
	fun gained_focus do end

	# Notification from the Android framework, `native_activity` has lost focus
	fun lost_focus do end

	# Notification from the Android framework, your app has been paused
	fun pause do end

	# Notification from the Android framework, your app has been stopped
	fun stop do end

	# Notification from the Android framework, `native_activity` is being destroyed
	# 
	# Clean up and exit.
	fun destroy do end

	# Notification from the Android framework, `native_activity` has been started
	fun start do end

	# Notification from the Android framework, `native_activity` has been resumed
	fun resume do end

	# Notification from the Android framework, the system is running low on memory
	#
	# Try to reduce your memory use.
	fun low_memory do end

	# Notification from the Android framework, the current device configuration has changed
	fun config_changed do end

	# Notification from the Android framework, `native_app_glue.input_queue` has changed
	fun input_changed do end

	# Notification from the Android framework, the window has been resized.
	# 
	# Please redraw with its new size.
	fun window_resized do end

	# Notification from the Android framework, the current ANativeWindow must be redrawn
	fun window_redraw_needed do end

	# Notification from the Android framework, the content area of the window has changed
	# 
	# Raised when the soft input window being shown or hidden, and similar events.
	fun content_rect_changed do end

	# Call the `ALooper` to retrieve events and callback the application
	fun poll_looper(timeout_ms: Int) import handle_looper_event `{
		int ident;
		int event;
		void* source;
		while ((ident=ALooper_pollAll(timeout_ms, NULL, &event, &source)) >= 0) {
			App_handle_looper_event(recv, ident, event, source);
		}
	`}

	# Handle an event retrieved by the `ALooper` and `poll_looper` without a callback
	protected fun handle_looper_event(ident, event: Int, data: Pointer) import native_app_glue,
		save_state, init_window, term_window, gained_focus, lost_focus, pause, stop,
		destroy, start, resume, low_memory, config_changed, input_changed,
		window_resized, window_redraw_needed, content_rect_changed `{

		struct android_app *app_glue = App_native_app_glue(recv);
		struct android_poll_source* source = (struct android_poll_source*)data;
		
		// Process this event.
		if (source != NULL) source->process(app_glue, source);
	`}
end

# An Android activity implemented in C. This is the C part of `NativeActivity`
# which is the Java part.
#
# The callbacks at this level are synchronous on the UI thread. Thus app.nit
# do not use them, and instead rely on `NativeAppGlue`.
extern class NdkNativeActivity `{ ANativeActivity * `}

	# Callbacks on the main thread
	# FIXME This would not yet be usable, to implement when Nit has threads
	#fun set_callbacks_handler(handler: App) or callbacks= ...

	# Java VM associated to `self`
	fun vm: JavaVM `{ return recv->vm; `}

	# JNI environmnet associated to `self`
	fun env: JniEnv `{ return recv->env; `}

	# The `NativeActivity`, as in the Java object, associated to `self`
	fun java_native_activity: NativeActivity `{ return recv->clazz; `}

	# Path to this application's internal data directory.
	fun internal_data_path: NativeString `{ return (char*)recv->internalDataPath; `}
    
	# Path to this application's external (removable/mountable) data directory.
	fun external_data_path: NativeString `{ return (char*)recv->externalDataPath; `}
    
	# The platform's SDK version code.
	fun sdk_version: Int `{ return recv->sdkVersion; `}
    
	# This is the native instance of the application.  It is not used by
	# the framework, but can be set by the application to its own instance
	# state.
	fun instance: Pointer `{ return recv->instance; `}

	# Pointer to the Asset Manager instance for the application.  The application
	# uses this to access binary assets bundled inside its own .apk file.
	#
	# TODO activate in a future `asset_manager` module if it cannot be done in Java
	#fun asset_manager: AssetManager `{ return recv->assetManager; `}

	# Available starting with Honeycomb: path to the directory containing
	# the application's OBB files (if any).  If the app doesn't have any
	# OBB files, this directory may not exist.
	# api?
	#
	# TODO activate in a future module at API 11
	#fun obb_path: NativeString `{ return (char*)recv->obbPath; `}
end

# This is the interface for the standard glue code of a threaded
# application.  In this model, the application's code is running
# in its own thread separate from the main thread of the process.
# It is not required that this thread be associated with the Java
# VM, although it will need to be in order to make JNI calls any
# Java objects.
extern class NativeAppGlue `{ struct android_app* `}
	# We use the `userData` field of the C structure to store an handle to
	# the associated App
	private fun user_data: App `{ return recv->userData; `}
	private fun user_data=(val: App) `{
		App_incr_ref(val);
		recv->userData = val;
	`}

	# Fill this in with the function to process input events.  At this point
	# the event has already been pre-dispatched, and it will be finished upon
	# return.  Return 1 if you have handled the event, 0 for any default
	# dispatching.
	#int32_t (*onInputEvent)(struct android_app* app, AInputEvent* event);
	#fun set_input_event_handler(handler: App) `{  `}

	# The ANativeActivity object instance that this app is running in.
	fun ndk_native_activity: NdkNativeActivity `{ return recv->activity; `}

	# The current configuration the app is running in.
	fun config: AConfiguration `{ return recv->config; `}

	# This is the last instance's saved state, as provided at creation time.
	# It is NULL if there was no state.  You can use this as you need; the
	# memory will remain around until you call android_app_exec_cmd() for
	# APP_CMD_RESUME, at which point it will be freed and savedState set to NULL.
	# These variables should only be changed when processing a APP_CMD_SAVE_STATE,
	# at which point they will be initialized to NULL and you can malloc your
	# state and place the information here.  In that case the memory will be
	# freed for you later.
	fun saved_state: Pointer `{ return recv->savedState; `}
	fun saved_state_size: Int `{ return recv->savedStateSize; `}

	# The ALooper associated with the app's thread.
	fun looper: ALooper `{ return recv->looper; `}

	# When non-NULL, this is the input queue from which the app will
	# receive user input events.
	fun input_queue: AInputQueue `{ return recv->inputQueue; `}

	# When non-NULL, this is the window surface that the app can draw in.
	fun window: ANativeWindow `{ return recv->window; `}

	# Current content rectangle of the window; this is the area where the
	# window's content should be placed to be seen by the user.
	#
	# TODO activate when we know what to return (returns a struct not a pointer)
	#fun content_recv: ARect `{ return recv->contentRect; `}

	# Current state of the app's activity.  May be either APP_CMD_START,
	# APP_CMD_RESUME, APP_CMD_PAUSE, or APP_CMD_STOP; see below.
	fun activity_state: Int `{ return recv->activityState; `}

	# This is non-zero when the application's NativeActivity is being
	# destroyed and waiting for the app thread to complete.
	fun detroy_request: Bool `{ return recv->destroyRequested; `}
end

# Android NDK's struture holding configurations of the native app
extern class AConfiguration `{ AConfiguration* `}
end

# Android NDK's structure to handle events synchronously
extern class ALooper `{ ALooper* `}
	# Returns the looper associated with the calling thread, or NULL if there is not one
	new for_thread `{ return ALooper_forThread(); `}
end

# Android NDK's struture to handle input events synchronously
extern class AInputQueue `{ AInputQueue* `}
end

# Android NDK's structure to control the native window for drawing
extern class ANativeWindow `{ ANativeWindow* `}
end
