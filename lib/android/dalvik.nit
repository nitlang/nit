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

# Java related services specific to Android and its Dalvik VM
module dalvik

import activities

redef class App
	# The main Java Activity of this application
	fun native_activity: NativeActivity is abstract
end

extern class JavaClassLoader in "Java" `{java.lang.ClassLoader`}
	super JavaObject
end

redef class Sys
	# We cannot create a JVM on Android
	#
	# This method is not reachable on this platform anyway.
	# `Sys::jvm` is implemented by the main activity modules.
	redef fun create_default_jvm do abort

	redef fun jni_env do return jvm.attach_current_thread

	private var class_loader: nullable JavaObject = null
	private var class_loader_method: nullable JMethodID = null
	redef fun load_jclass(name)
	do
		var class_loader = self.class_loader
		if class_loader == null then
			find_class_loader app.native_activity
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
			__android_log_print(ANDROID_LOG_ERROR, "Nit", "Failed retrieving activity class");
			(*env)->ExceptionDescribe(env);
			exit(1);
		}

		jmethodID class_activity_getClassLoader = (*env)->GetMethodID(env, class_activity, "getClassLoader", "()Ljava/lang/ClassLoader;");
		if (class_activity_getClassLoader == NULL) {
			__android_log_print(ANDROID_LOG_ERROR, "Nit", "Failed retrieving 'getClassLoader' method");
			(*env)->ExceptionDescribe(env);
			exit(1);
		}

		// Call activity.getClassLoader
		jobject instance_class_loader = (*env)->CallObjectMethod(env, native_activity, class_activity_getClassLoader);
		if (instance_class_loader == NULL) {
			__android_log_print(ANDROID_LOG_ERROR, "Nit", "Failed retrieving class loader instance");
			(*env)->ExceptionDescribe(env);
			exit(1);
		}

		jclass class_class_loader = (*env)->GetObjectClass(env, instance_class_loader);
		if (class_class_loader == NULL) {
			__android_log_print(ANDROID_LOG_ERROR, "Nit", "Failed retrieving class of class loader");
			(*env)->ExceptionDescribe(env);
			exit(1);
		}

		// Get the method ClassLoader.findClass
		jmethodID class_class_loader_findClass = (*env)->GetMethodID(env, class_class_loader, "findClass", "(Ljava/lang/String;)Ljava/lang/Class;");
		if (class_class_loader_findClass == NULL) {
			__android_log_print(ANDROID_LOG_ERROR, "Nit", "Failed retrieving 'findClass' method");
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
			__android_log_print(ANDROID_LOG_ERROR, "Nit", "Failed loading targeted class");
			(*env)->ExceptionDescribe(env);
			exit(1);
		}

		(*env)->DeleteLocalRef(env, class_name);

		return java_class;
	`}
end
