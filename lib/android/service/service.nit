# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Android service support for _app.nit_ centered around the class `Service`
module service is
	extra_java_files "nit.app.NitService"
	android_manifest_application """<service android:name="nit.app.NitService"></service>"""
end

import android::nit_activity

in "C" `{
	// Nit's App running instance, declared in `nit_activity`
	extern App global_app;

	JNIEXPORT jlong JNICALL Java_nit_app_NitService_nitNewService
		(JNIEnv *env, jobject java_service)
	{
		// Pin a ref to the Java service in the Java GC
		java_service = (*env)->NewGlobalRef(env, java_service);

		// Create the service in Nit and pin it in the Nit GC
		Service nit_service = App_register_service(global_app, java_service);

		// FIXME replace the previous call to register_service by
		// the following line when #1941 is fixed:
		//Service nit_service = new_Service(java_service);

		Service_incr_ref(nit_service);

		return (jlong)(void*)nit_service;
	}

	JNIEXPORT jint JNICALL Java_nit_app_NitService_nitOnStartCommand
		(JNIEnv *env, jobject java_service, jlong nit_service, jobject intent, jint flags, jint id)
	{
		return Service_on_start_command((Service)nit_service, intent, flags, id);
	}

	JNIEXPORT void JNICALL Java_nit_app_NitService_nitOnCreate
		(JNIEnv *env, jobject java_service, jlong nit_service)
	{
		Service_on_create((Service)nit_service);
	}

	JNIEXPORT void JNICALL Java_nit_app_NitService_nitOnDestroy
		(JNIEnv *env, jobject java_service, jlong nit_service)
	{
		Service_on_destroy((Service)nit_service);

		// Unpin the service instances in both Nit and Java
		java_service = Service_native((Service)nit_service);
		(*env)->DeleteGlobalRef(env, java_service);
		Service_decr_ref(nit_service);
	}
`}

redef class App

	# Current instance of `Service`, if any
	var service: nullable Service = null

	# Launch `Service` in the background, it will be set as `service` when ready
	fun start_service do native_context.start_service

	# Register a service from Java/C
	#
	# FIXME remove when #1941 is fixed
	private fun register_service(java_service: NativeService): Service
	do
		return new Service(java_service.new_global_ref)
	end

	# Prioritize an activity context if one is running, fallback on a service
	redef fun native_context
	do
		if activities.not_empty then return super

		var service = service
		assert service != null
		return service.native
	end

	# Dummy method to force the compilation of callbacks from C
	#
	# The callbacks are used in the launch of a Nit service from C code.
	private fun force_service_callbacks_in_c import Service, register_service,
		Service.on_start_command, Service.on_create, Service.on_destroy, Service.native `{ `}

	redef fun setup
	do
		super

		# Call the dummy method to force their compilation in global compilation
		force_service_callbacks_in_c
	end
end

# Android service with its life-cycle callbacks
class Service
	# Java service with the Android context of this service
	var native: NativeService

	# The service has been created
	fun on_create do app.service = self

	# The service received a start command (may happen more then once per service)
	#
	# Should return either `start_sticky`, `start_not_sticky` or `start_redeliver_intent`.
	fun on_start_command(intent: JavaObject, flags, id: Int): Int do return start_sticky

	# The service is being destroyed
	fun on_destroy do app.service = null
end

# Wrapper of Java class `android.app.Service`
extern class NativeService in "Java" `{ android.app.Service `}
	super NativeContext

	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = NativeService_sys(self);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, self);
	`}
end

redef class NativeContext
	private fun start_service in "Java" `{
		android.content.Intent intent =
			new android.content.Intent(self, nit.app.NitService.class);
		self.startService(intent);
	`}
end

# The service is explicitly started and stopped, it is restarted if stopped by the system
#
# Return value of `Service::on_start_command`.
fun start_sticky: Int in "Java" `{ return android.app.Service.START_STICKY; `}

# The service may be stopped by the system and will not be restarted
#
# Return value of `Service::on_start_command`.
fun start_not_sticky: Int in "Java" `{ return android.app.Service.START_NOT_STICKY; `}

# The service is explicitly started and stopped, it is restarted with the last intent if stopped by the system
#
# Return value of `Service::on_start_command`.
fun start_redeliver_intent: Int in "Java" `{ return android.app.Service.START_REDELIVER_INTENT; `}
