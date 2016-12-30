# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Romain Chanoir <romain.chanoir@courrier.uqam.ca>
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#   http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Java Virtual Machine invocation API and others services from the JNI C API
#
# Users of this module and the Java FFI, on desktop computers, must define three environment variables:
# * `JAVA_HOME` points to the installation folder of the target Java VM.
#   This folder should contain the JNI header file `include/jni.h`.
#   e.g. `/usr/lib/jvm/default-java` on Debian Jessie.
# * `JNI_LIB_PATH` points to the folder with `libjvm.so`.
#   e.g. `/usr/lib/jvm/default-java/jre/lib/amd64/server/` on Debian Jessie.
# * `LD_LIBRARY_PATH` has the path to the folder with `libjvm.so`.
#   It's the same value as `JNI_LIB_PATH` but `LD_LIBRARY_PATH` is a colon separated list
#   which may contain other paths.
#
# See: http://docs.oracle.com/javase/1.5.0/docs/guide/jni/spec/jniTOC.html
module jvm is
	cflags "-I $(JAVA_HOME)/include/ -I $(JAVA_HOME)/include/linux/"
	ldflags "-L $(JNI_LIB_PATH) -ljvm"
end

in "C Header" `{
	#include <jni.h>
`}

# Utility to select options to create the VM using `create_jvm`
#
# Usage example:
#
# ~~~~nitish
# var builder = new JavaVMBuilder
# builder.options.add "-Djava.class.path=."
# var jvm = builder.create_jvm
# var env = builder.jni_env
# ~~~~
class JavaVMBuilder

	# Version code of the JVM requested by `create_jvm`
	#
	# Default at 0x00010002 for `JNI_VERSION_1_2`.
	var version = 0x00010002 is writable

	# Additional option strings
	var options = new Array[String]

	# Create a JVM instance, or return `null` on error
	fun create_jvm: nullable JavaVM
	do
		var args = new JavaVMInitArgs
		args.version = version
		args.set_default
		args.n_options = options.length

		var c_options = new JavaVMOptionArray(options.length)
		for o in options.length.times do
			var option = options[o]
			var c_option = c_options[o]
			c_option.string = option
		end

		args.options = c_options

		var jvm = new JavaVM(args)

		args.free
		c_options.free

		if jvm.address_is_null then return null
		return jvm
	end
end

private extern class JavaVMInitArgs `{ JavaVMInitArgs* `}
	new `{ return (JavaVMInitArgs*)malloc(sizeof(JavaVMInitArgs)); `}

	# Set the defaut config for a VM
	# Can be called after setting the version
	#
	# Unavailable on Android, where you cannot instanciate a new JVM.
	fun set_default `{
	#ifndef ANDROID
		JNI_GetDefaultJavaVMInitArgs(self);
	#endif
	`}

	fun version: Int `{ return self->version; `}
	fun version=(v: Int) `{ self->version = v; `}

	fun options: JavaVMOptionArray `{ return self->options; `}
	fun options=(v: JavaVMOptionArray) `{ self->options = v; `}

	fun n_options: Int `{ return self->nOptions; `}
	fun n_options=(v: Int) `{ self->nOptions = v; `}
end

private extern class JavaVMOption `{ JavaVMOption* `}
	fun string: String import CString.to_s `{
		return CString_to_s((char*)self->optionString);
	`}
	fun string=(v: String) import String.to_cstring `{
		self->optionString = String_to_cstring(v);
	`}

	fun extra_info: String import CString.to_s `{
		return CString_to_s((char*)self->extraInfo);
	`}
	fun extra_info=(v: String) import String.to_cstring `{
		self->extraInfo = String_to_cstring(v);
	`}
end

private extern class JavaVMOptionArray `{ JavaVMOption* `}
	new(size: Int) `{ return (JavaVMOption*)malloc(sizeof(JavaVMOption)*size); `}

	fun [](i: Int): JavaVMOption `{ return self+i; `}
end

# Represents a jni JavaVM
extern class JavaVM `{JavaVM *`}
	# Create the JVM
	#
	# The corresponding `JniEnv` can be obtained by calling `env`.
	#
	# Unavailable on some platforms, including Android where you cannot instanciate a new JVM.
	private new(args: JavaVMInitArgs) import jni_error `{

	#ifdef ANDROID
		JavaVM_jni_error(NULL, "JVM creation not supported on Android", 0);
		return NULL;
	#endif

		JavaVM *jvm;
		JNIEnv *env;
		jint res;

		res = JNI_CreateJavaVM(&jvm, (void**)&env, args);

		if (res != JNI_OK) {
			JavaVM_jni_error(NULL, "Could not create Java VM", res);
			return NULL;
		}

		return jvm;
	`}

	private fun jni_error(msg: CString, v: Int)
	do
		print "JNI Error: {msg} ({v})"
		abort
	end

	# Unload the Java VM when the calling thread is the only remaining non-daemon attached user thread
	fun destroy `{
		(*self)->DestroyJavaVM(self);
	`}

	# `JniEnv` attached to the calling thread
	#
	# A null pointer is returned if the calling thread is not attached to the JVM.
	fun env: JniEnv import jni_error `{
		JNIEnv *env;
		int res = (*self)->GetEnv(self, (void **)&env, JNI_VERSION_1_6);
		if (res == JNI_EDETACHED) {
			JavaVM_jni_error(NULL, "Requesting JNIEnv from an unattached thread", res);
			return NULL;
		}
		else if (res != JNI_OK) {
			JavaVM_jni_error(NULL, "Could not get JNIEnv from Java VM", res);
			return NULL;
		}
		return env;
	`}

	# Attach the calling thread to the JVM and return its `JniEnv`
	fun attach_current_thread: JniEnv import jni_error `{
		JNIEnv *env;
	#ifdef ANDROID
		// the signature is different (better actually) on Android
		int res = (*self)->AttachCurrentThread(self, &env, NULL);
	#else
		int res = (*self)->AttachCurrentThread(self, (void**)&env, NULL);
	#endif
		if (res != JNI_OK) {
			JavaVM_jni_error(NULL, "Could not attach current thread to Java VM", res);
			return NULL;
		}
		return env;
	`}

	# Detach the calling thread from this JVM
	fun detach_current_thread import jni_error `{
		int res = (*self)->DetachCurrentThread(self);
		if (res != JNI_OK) {
			JavaVM_jni_error(NULL, "Could not detach current thread to Java VM", res);
		}
	`}
end

# Represents a jni JNIEnv, which is a thread in a JavaVM
extern class JniEnv `{JNIEnv *`}

	# Get a class object from its fully-qualified name or null if the class cannot be found
	fun find_class(class_name : String): JClass import String.to_cstring `{
		return (*self)->FindClass(self,String_to_cstring(class_name));
	`}

	# Return the method id for an instance of a class or interface
	# The method is determined by its name and signature
	# To obtain the method ID of a constructor, supply "<init>" as the method name and "void(V)" as the return type
	fun get_method_id(clazz : JClass, name : String, signature : String): JMethodID import String.to_cstring `{
		return (*self)->GetMethodID(self, clazz, String_to_cstring(name), String_to_cstring(signature));
	`}

	# Construct a new Java object from the `clazz`, using the constructor ̀ method_id`
	fun new_object(clazz: JClass, method_id: JMethodID): JavaObject `{
		return (*self)->NewObject(self, clazz, method_id);
	`}

	# Return the JClass of `obj`
	fun get_object_class(obj: JavaObject): JClass `{
		return (*self)->GetObjectClass(self, obj);
	`}

	# Registers native methods with the class specified by the `clazz` argument
	fun register_natives(clazz: JClass, method: JNINativeMethod, n_method : Int): Int `{
		return (*self)->RegisterNatives(self, clazz, method, n_method);
	`}

	# Call a method on `obj` designed by `method_id` with an array `args` of arguments
	fun call_void_method(obj: JavaObject, method_id: JMethodID, args: nullable Array[nullable Object]) import convert_args_to_jni `{
		jvalue * args_tab = JniEnv_convert_args_to_jni(self, args);
		(*self)->CallVoidMethodA(self, obj, method_id, args_tab);
		free(args_tab);
	`}

	# Call a method on `obj` designed by `method_id` with an array `args` of argument returning a JavaObject
	fun call_object_method(obj: JavaObject, method_id: JMethodID, args: nullable Array[nullable Object]): JavaObject import convert_args_to_jni `{
		jvalue * args_tab = JniEnv_convert_args_to_jni(self, args);
		jobject res = (*self)->CallObjectMethod(self, obj, method_id, args_tab);
		free(args_tab);
		return res;
	`}

	# Call a method on `obj` designed by `method_id` with an array `args` of arguments returning a Bool
	fun call_boolean_method(obj: JavaObject, method_id: JMethodID, args: nullable Array[nullable Object]): Bool import convert_args_to_jni `{
		jvalue * args_tab = JniEnv_convert_args_to_jni(self, args);
		jboolean res = (*self)->CallBooleanMethod(self, obj, method_id, args_tab);
		free(args_tab);
		return res;
	`}

	# Call a method on `obj` designed by `method_id` with an array `args` of arguments returning a Char
	fun call_char_method(obj: JavaObject, method_id: JMethodID, args: nullable Array[nullable Object]): Char import convert_args_to_jni `{
		jvalue * args_tab = JniEnv_convert_args_to_jni(self, args);
		jchar res = (*self)->CallCharMethod(self, obj, method_id, args_tab);
		free(args_tab);
		return res;
	`}

	# Call a method on `obj` designed by `method_id` with an array `args` of arguments returning an Int
	fun call_int_method(obj: JavaObject, method_id: JMethodID, args: nullable Array[nullable Object]): Int import convert_args_to_jni `{
		jvalue * args_tab = JniEnv_convert_args_to_jni(self, args);
		jint res = (*self)->CallIntMethod(self, obj, method_id, args_tab);
		free(args_tab);
		return res;
	`}

	# Call a method on `obj` designed by `method_id` with an array `args` of arguments returning a Float
	fun call_float_method(obj: JavaObject, method_id: JMethodID, args: nullable Array[nullable Object]): Float import convert_args_to_jni `{
		jvalue * args_tab = JniEnv_convert_args_to_jni(self, args);
		jfloat res = (*self)->CallFloatMethod(self, obj, method_id, args_tab);
		free(args_tab);
		return res;
	`}

	# Call a method on `obj` designed by `method_id` with an array `args` of arguments returning a CString
	fun call_string_method(obj: JavaObject, method_id: JMethodID, args: nullable Array[nullable Object]): CString import convert_args_to_jni `{
		jvalue * args_tab = JniEnv_convert_args_to_jni(self, args);
		jobject jobj = (*self)->CallObjectMethod(self, obj, method_id, args_tab);
		free(args_tab);
		return (char*)(*self)->GetStringUTFChars(self, (jstring)jobj, NULL);
	`}

	private fun convert_args_to_jni(args: nullable Array[nullable Object]): Pointer import Array[nullable Object].as not nullable, Array[nullable Object].[], Array[nullable Object].length, nullable Object.as(Int), nullable Object.as(Char), nullable Object.as(Bool), nullable Object.as(Float), nullable Object.as(JavaObject), nullable Object.as(String), String.to_cstring, String.length `{
		if(nullable_Array_of_nullable_Object_is_null(args)){
			return NULL;
		}
		Array_of_nullable_Object nit_array = nullable_Array_of_nullable_Object_as_Array_of_nullable_Object(args);
		int nit_array_length = Array_of_nullable_Object_length(nit_array);
		int i;
		jvalue *c_array = malloc(sizeof(jvalue)*(nit_array_length));
		for (i = 0; i < nit_array_length; i ++) {
			nullable_Object nullable_obj = Array_of_nullable_Object__index(nit_array, i);
			if(nullable_Object_is_a_Int(nullable_obj)) {
				int val = nullable_Object_as_Int(nullable_obj);
				c_array[i].i = val;
			} else if (nullable_Object_is_a_Char(nullable_obj)){
				char val = nullable_Object_as_Char(nullable_obj);
				c_array[i].c = val;
			} else if (nullable_Object_is_a_Bool(nullable_obj)){
				int val = nullable_Object_as_Bool(nullable_obj);
				c_array[i].z = val;
			} else if(nullable_Object_is_a_Float(nullable_obj)){
				float val = nullable_Object_as_Float(nullable_obj);
				c_array[i].f = val;
			} else if(nullable_Object_is_a_JavaObject(nullable_obj)){
				jobject val = nullable_Object_as_JavaObject(nullable_obj);
				c_array[i].l = val;
			} else if(nullable_Object_is_a_String(nullable_obj)){
				String val = nullable_Object_as_String(nullable_obj);
				char* c = String_to_cstring(val);
				jstring js = (*self)->NewStringUTF(self, c);
				c_array[i].l = js;
			} else {
				fprintf(stderr, "NOT YET SUPPORTED: nit objects are not supported\n");
				exit(1);
			}
		}
		return c_array;
	`}

	# Returns the field ID for an instance field of a class. The field is specified by its name and signature
	fun get_field_id(clazz: JClass, name: String, sign: String): JFieldID import String.to_cstring `{
		return (*self)->GetFieldID(self, clazz, String_to_cstring(name), String_to_cstring(sign));
	`}

	# returns the value of an instance (nonstatic) field of an object. The field to access is specified by a field ID obtained by calling get_field_id()
	fun get_object_field(obj: JavaObject, fieldID: JFieldID): JavaObject `{
		return (*self)->GetObjectField(self, obj, fieldID);
	`}

	fun get_boolean_field(obj: JavaObject, fieldID: JFieldID): Bool `{
		return (*self)->GetBooleanField(self, obj, fieldID);
	`}

	fun get_char_field(obj: JavaObject, fieldID: JFieldID): Char `{
		return (*self)->GetCharField(self, obj, fieldID);
	`}

	fun get_int_field(obj: JavaObject, fieldID: JFieldID): Int `{
		return (*self)->GetIntField(self, obj, fieldID);
	`}

	fun get_float_field(obj: JavaObject, fieldID: JFieldID): Float `{
		return (*self)->GetFloatField(self, obj, fieldID);
	`}

	fun set_object_field(obj: JavaObject, fieldID: JFieldID, value: JavaObject) `{
		(*self)->SetObjectField(self, obj, fieldID, value);
	`}

	fun set_boolean_field(obj: JavaObject, fieldID: JFieldID, value: Bool) `{
		(*self)->SetBooleanField(self, obj, fieldID, value);
	`}

	fun set_char_field(obj: JavaObject, fieldID: JFieldID, value: Char) `{
		(*self)->SetCharField(self, obj, fieldID, value);
	`}

	fun set_int_field(obj: JavaObject, fieldID: JFieldID, value: Int) `{
		(*self)->SetIntField(self, obj, fieldID, value);
	`}

	fun set_float_field(obj: JavaObject, fieldID: JFieldID, value: Float) `{
		(*self)->SetFloatField(self, obj, fieldID, value);
	`}

	# Check for pending exception without creating a local reference to the exception object
	fun exception_check: Bool `{
		return (*self)->ExceptionCheck(self);
	`}

	# Construct an exception object from the specified class with the message specified by `message` and causes that exception to be thrown
	fun throw_new(clazz: JClass, message: String): Int import String.to_cstring `{
		return (*self)->ThrowNew(self, clazz, String_to_cstring(message));
	`}

	# return the exception if there is one in the process of being thrown, or NULL if no exception is currently being thrown
	fun exception_occurred: JavaObject `{
		return (*self)->ExceptionOccurred(self);
	`}

	# prints an exception and backtrace to error channel
	fun exception_describe `{
		return (*self)->ExceptionDescribe(self);
	`}

	# clears any exception currently being thrown, has no effect if there is no exception
	fun exception_clear `{
		return (*self)->ExceptionClear(self);
	`}

	# Raise a fatal error
	fun fatal_error(msg: String) import String.to_cstring `{
		(*self)->FatalError(self, String_to_cstring(msg));
	`}

	# Transform a NIT String into a JavaObject
	fun string_to_jobject(string: String): JavaObject `{
		return (*self)->NewStringUTF(self, String_to_cstring(string));
	`}

	# Pushes a local reference frame on the JNI stack
	fun push_local_frame(capacity: Int): Bool `{
		return (*self)->PushLocalFrame(self, capacity);
	`}

	# Pops the current local reference frame on the JNI stack
	#
	# Similiar to `JavaObject::pop_from_local_frame` which returns a value.
	fun pop_local_frame `{
		(*self)->PopLocalFrame(self, NULL);
	`}
end

# Represents a jni jclass
extern class JClass `{jclass`}
end

# Represents a jni jmethodID
extern class JMethodID `{jmethodID`}
end

# Represens a jni jobject
extern class JavaObject in "Java" `{ java.lang.Object `}
end

# Represents a jni JNINNativeMethod
extern class JNINativeMethod `{ JNINativeMethod* `}
	fun name: String import CString.to_s `{
		return CString_to_s((void*)self->name);
	`}

	fun name=(name: String) import String.to_cstring `{
		self->name = String_to_cstring(name);
	`}

	fun signature: String import CString.to_s `{
		return CString_to_s((void*)self->signature);
	`}

	fun signature=(signature: String) import String.to_cstring `{
		self->signature = String_to_cstring(signature);
	`}
end

# Represents a jni jfieldID
extern class JFieldID `{jfieldID`}
end

# Reprents a jni jvalue
extern class JValue `{jvalue`}

	fun set_boolean(b: Bool) `{
		self.z = b;
	`}

	fun get_boolean:Bool `{
		return self.z;
	`}

	fun set_char(c: Char)`{
		self.c = c;
	`}

	fun get_char: Char `{
		return self.c;
	`}

	fun set_int(i: Int) `{
		self.i = i;
	`}

	fun get_int: Int `{
		return self.i;
	`}

	fun set_float(f: Float) `{
		self.f = f;
	`}

	fun get_float: Float `{
		return self.f;
	`}

	fun set_jobject(obj: JavaObject) `{
		self.l = obj;
	`}

	fun get_jobject: JavaObject `{
		return self.l;
	`}
end

redef class Int
	redef fun to_jvalue(env): JValue `{
		jvalue value;
		value.i = self;
		return value;
	`}
end

redef class Float
	redef fun to_jvalue(env): JValue `{
		jvalue value;
		value.f = self;
		return value;
	`}
end

redef class Bool
	redef fun to_jvalue(env): JValue `{
		jvalue value;
		value.z = self;
		return value;
	`}
end

redef class CString
	redef fun to_jvalue(env)`{
		jvalue value;
		value.l = (*env)->NewStringUTF(env, self);
		return value;
	`}
end

redef class String
	redef fun to_jvalue(env) do
		return self.to_cstring.to_jvalue(env)
	end
end

redef class Object
	fun to_jvalue(env: JniEnv): JValue is abstract
end
