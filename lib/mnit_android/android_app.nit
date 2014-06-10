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
import android_sensor

in "C header" `{
	#include <jni.h>
	#include <errno.h>
	#include <android/log.h>
	#include <android_native_app_glue.h>
	#include <android/sensor.h>

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

	void mnit_frame(App nit_app)
	{
		if (mnit_display == EGL_NO_DISPLAY) {
			LOGI("no frame");
			return;
		}

		/*if (mnit_orientation_changed)
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
		*/

		LOGI("frame");

		glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT); // | GL_DEPTH_BUFFER_BIT);

		App_full_frame(nit_app);

		LOGI("frame b");
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
		return ((int) AMotionEvent_getY(motion_event, pointer_id) * mnit_zoom) + 32;
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

	fun key_char: Char is extern `{
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
	redef type IE: AndroidInputEvent
	redef type D: Opengles1Display

	var accelerometer = new AndroidSensor
	var magnetic_field = new AndroidSensor
	var gyroscope = new AndroidSensor
	var light = new AndroidSensor
	var proximity = new AndroidSensor
	var sensormanager: ASensorManager
	var eventqueue: ASensorEventQueue
	var sensors_support_enabled writable = false

	redef fun init_window
	do
		set_as_input_handler native_app_glue
		display = new Opengles1Display

		super
	end

	private fun set_as_input_handler(app_glue: NativeAppGlue) `{
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

	private fun extern_input_sensor_accelerometer(event: ASensorAccelerometer) do input(event)
	private fun extern_input_sensor_magnetic_field(event: ASensorMagneticField) do input(event)
	private fun extern_input_sensor_gyroscope(event: ASensorGyroscope) do input(event)
	private fun extern_input_sensor_light(event: ASensorLight) do input(event)
	private fun extern_input_sensor_proximity(event: ASensorProximity) do input(event)

	# Sensors support
	# The user decides which sensors he wants to use by setting them enabled
	private fun enable_sensors
	do
		if sensors_support_enabled then enable_sensors_management else return
		if accelerometer.enabled then enable_accelerometer
		if magnetic_field.enabled then enable_magnetic_field
		if gyroscope.enabled then enable_gyroscope
		if light.enabled then enable_light
		if proximity.enabled then enable_proximity
	end

	private fun enable_sensors_management
	do
		sensormanager = new ASensorManager.get_instance
		#eventqueue = sensormanager.create_event_queue(new NdkAndroidApp)
		eventqueue = initialize_event_queue(sensormanager, native_app_glue.looper)
	end

	# HACK: need a nit method to get mnit_java_app, then we can use the appropriate sensormanager.create_event_queue method to initialize the event queue
	private fun initialize_event_queue(sensormanager: ASensorManager, looper: ALooper): ASensorEventQueue `{
		return ASensorManager_createEventQueue(sensormanager, looper, LOOPER_ID_USER, NULL, NULL);
	`}

	private fun enable_accelerometer
	do
		accelerometer.asensor = sensormanager.get_default_sensor(new ASensorType.accelerometer)
		if accelerometer.asensor.address_is_null then 
				print "Accelerometer sensor unavailable" 
		else
				if eventqueue.enable_sensor(accelerometer.asensor) < 0 then print "Accelerometer enabling failed"
			eventqueue.set_event_rate(accelerometer.asensor, accelerometer.event_rate)
		end
	end

	private fun enable_magnetic_field
	do
		magnetic_field.asensor = sensormanager.get_default_sensor(new ASensorType.magnetic_field)
		if magnetic_field.asensor.address_is_null then
				print "Magnetic Field unavailable"
		else
			if eventqueue.enable_sensor(magnetic_field.asensor) < 0 then print "Magnetic Field enabling failed"
			eventqueue.set_event_rate(magnetic_field.asensor, magnetic_field.event_rate)
		end
	end

	private fun enable_gyroscope
	do
		gyroscope.asensor = sensormanager.get_default_sensor(new ASensorType.gyroscope)
		if gyroscope.asensor.address_is_null then
				print "Gyroscope sensor unavailable"
		else
			if eventqueue.enable_sensor(gyroscope.asensor) < 0 then print "Gyroscope enabling failed"
			eventqueue.set_event_rate(gyroscope.asensor, gyroscope.event_rate)
		end
	end

	private fun enable_light
	do
		light.asensor = sensormanager.get_default_sensor(new ASensorType.light)
		if light.asensor.address_is_null then
				print "Light sensor unavailable"
		else
			if eventqueue.enable_sensor(light.asensor) < 0 then print "Light enabling failed"
			eventqueue.set_event_rate(light.asensor, light.event_rate)
		end
	end

	private fun enable_proximity
	do
		proximity.asensor = sensormanager.get_default_sensor(new ASensorType.proximity)
		if proximity.asensor.address_is_null then 
				print "Proximity sensor unavailable"
		else
			if eventqueue.enable_sensor(proximity.asensor) < 0 then print "Proximity enabling failed"
			eventqueue.set_event_rate(light.asensor, light.event_rate)
		end
	end

	redef fun run is extern import full_frame, generate_input, enable_sensors, native_app_glue `{
		struct android_app* app_glue = App_native_app_glue(recv);
		LOGI("nitni loop");

		//Enbales sensors if needed
		App_enable_sensors(recv);

		while (1) {
			App_generate_input(recv);

			if (app_glue->destroyRequested != 0) return;

			mnit_frame(recv);
		}
		/* App_exit(); // this is unreachable anyway*/
	`}

	redef fun generate_input import save_state, pause, resume, gained_focus, lost_focus, init_window, term_window, extern_input_key, extern_input_motion, extern_input_sensor_accelerometer, extern_input_sensor_magnetic_field, extern_input_sensor_gyroscope, extern_input_sensor_light, extern_input_sensor_proximity, eventqueue, native_app_glue `{
		int ident;
		int events;
		static int block = 0;
		struct android_poll_source* source;
		struct android_app *app_glue = App_native_app_glue(recv);

		while ((ident=ALooper_pollAll(0, NULL, &events,
				(void**)&source)) >= 0) { /* first 0 is for non-blocking */

			// Process this event.
			if (source != NULL)
				source->process(app_glue, source);

			//If a sensor has data, process it
			if(ident == LOOPER_ID_USER) {
				//maybe add a boolean to the app to know if we want to use Sensor API or ASensorEvent directly ...
				ASensorEvent* events = malloc(sizeof(ASensorEvent)*10);
				int nbevents;
				ASensorEventQueue* queue = App_eventqueue(recv);
				while((nbevents = ASensorEventQueue_getEvents(queue, events, 10)) > 0) {
					int i;
					for(i = 0; i < nbevents; i++){
						ASensorEvent event = events[i];
						switch (event.type) {
							case ASENSOR_TYPE_ACCELEROMETER:
								App_extern_input_sensor_accelerometer(recv, &event);
								break;
							case ASENSOR_TYPE_MAGNETIC_FIELD:
								App_extern_input_sensor_magnetic_field(recv, &event);
								break;
							case ASENSOR_TYPE_GYROSCOPE:
								App_extern_input_sensor_gyroscope(recv, &event);
								break;
							case ASENSOR_TYPE_LIGHT:
								App_extern_input_sensor_light(recv, &event);
								break;
							case ASENSOR_TYPE_PROXIMITY:
								App_extern_input_sensor_proximity(recv, &event);
								break;
						}
					}
				}
			}

			// Check if we are exiting.
			if (app_glue->destroyRequested != 0) return;
		}
	`}
end

extern class JavaClassLoader in "Java" `{java.lang.ClassLoader`}
	super JavaObject
end

redef class Sys
	# Get the running JVM
	redef fun create_default_jvm
	do
		var jvm = app.native_app_glue.ndk_native_activity.vm
		var jni_env = jvm.attach_current_thread
		if jni_env.address_is_null then jni_env = jvm.env

		self.jvm = jvm
		self.jni_env = jni_env
	end

	#protected fun ndk_jvm: JavaVM do`{ return mnit_java_app->activity->vm; `}

	private var class_loader: nullable JavaObject = null
	private var class_loader_method: nullable JMethodID = null
	redef fun load_jclass(name)
	do
		var class_loader = self.class_loader
		if class_loader == null then
			find_class_loader(app.native_app_glue.ndk_native_activity.java_native_activity)
			class_loader = self.class_loader
			assert class_loader != null
		end

		var class_loader_method = self.class_loader_method
		assert class_loader_method != null

		return load_jclass_intern(class_loader, class_loader_method, name)
	end

	private fun find_class_loader(native_activity: NativeActivity) import jni_env, class_loader=, JavaObject.as nullable, class_loader_method=, JMethodID.as nullable `{
		JNIEnv *env = Sys_jni_env(recv);

		// Retrieve main activity
		jclass class_activity = (*env)->GetObjectClass(env, native_activity);
		if (class_activity == NULL) {
			__android_log_print(ANDROID_LOG_ERROR, "Nit", "retreiving activity class");
			(*env)->ExceptionDescribe(env);
			exit(1);
		}

		jmethodID class_activity_getClassLoader = (*env)->GetMethodID(env, class_activity, "getClassLoader", "()Ljava/lang/ClassLoader;");
		if (class_activity_getClassLoader == NULL) {
			__android_log_print(ANDROID_LOG_ERROR, "Nit", "retreiving 'getClassLoader' method");
			(*env)->ExceptionDescribe(env);
			exit(1);
		}

		// Call activity.getClassLoader
		jobject instance_class_loader = (*env)->CallObjectMethod(env, native_activity, class_activity_getClassLoader);
		if (instance_class_loader == NULL) {
			__android_log_print(ANDROID_LOG_ERROR, "Nit", "retreiving class loader instance");
			(*env)->ExceptionDescribe(env);
			exit(1);
		}

		jclass class_class_loader = (*env)->GetObjectClass(env, instance_class_loader);
		if (class_class_loader == NULL) {
			__android_log_print(ANDROID_LOG_ERROR, "Nit", "retreiving class of class loader");
			(*env)->ExceptionDescribe(env);
			exit(1);
		}

		// Get the method ClassLoader.findClass
		jmethodID class_class_loader_findClass = (*env)->GetMethodID(env, class_class_loader, "findClass", "(Ljava/lang/String;)Ljava/lang/Class;");
		if (class_class_loader_findClass == NULL) {
			__android_log_print(ANDROID_LOG_ERROR, "Nit", "retreiving 'findClass' method");
			(*env)->ExceptionDescribe(env);
			exit(1);
		}

		// Return the values to Nit
		Sys_class_loader__assign(recv, JavaObject_as_nullable((*env)->NewGlobalRef(env, instance_class_loader)));
		Sys_class_loader_method__assign(recv, JMethodID_as_nullable(class_class_loader_findClass));

		// Clean up
		(*env)->DeleteLocalRef(env, class_activity);
		(*env)->DeleteLocalRef(env, instance_class_loader);
		(*env)->DeleteLocalRef(env, class_class_loader);
	`}

	private fun load_jclass_intern(instance_class_loader: JavaObject, class_loader_findClass: JMethodID, name: NativeString): JClass import jni_env `{
		JNIEnv *env = Sys_jni_env(recv);
		jobject class_name = (*env)->NewStringUTF(env, name);

		jclass java_class = (*env)->CallObjectMethod(env, instance_class_loader, class_loader_findClass, class_name);
		if (java_class == NULL) {
			__android_log_print(ANDROID_LOG_ERROR, "Nit", "loading targetted class");
			(*env)->ExceptionDescribe(env);
			exit(1);
		}

		(*env)->DeleteLocalRef(env, class_name);

		return java_class;
	`}
end
