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

# Manipulates the Java Virtual Machine
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
	super JniEnvRef

	# Version code of the JVM requested by `create_jvm`
	#
	# Default at 0x00010002
	var version = 0x00010002 is writable

	# Additional option strings
	var options = new Array[String]

	# Create the JVM and return it on success
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

		var jvm = new JavaVM(args, self)

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
		JNI_GetDefaultJavaVMInitArgs(recv);
	#endif
	`}

	fun version: Int `{ return recv->version; `}
	fun version=(v: Int) `{ recv->version = v; `}

	fun options: JavaVMOptionArray `{ return recv->options; `}
	fun options=(v: JavaVMOptionArray) `{ recv->options = v; `}

	fun n_options: Int `{ return recv->nOptions; `}
	fun n_options=(v: Int) `{ recv->nOptions = v; `}
end

private extern class JavaVMOption `{ JavaVMOption* `}
	fun string: String import NativeString.to_s `{
		return NativeString_to_s((char*)recv->optionString);
	`}
	fun string=(v: String) import String.to_cstring `{
		recv->optionString = String_to_cstring(v);
	`}

	fun extra_info: String import NativeString.to_s `{
		return NativeString_to_s((char*)recv->extraInfo);
	`}
	fun extra_info=(v: String) import String.to_cstring `{
		recv->extraInfo = String_to_cstring(v);
	`}
end

private extern class JavaVMOptionArray `{ JavaVMOption* `}
	new(size: Int) `{ return (JavaVMOption*)malloc(sizeof(JavaVMOption)*size); `}

	fun [](i: Int): JavaVMOption `{ return recv+i; `}
end

# Represents a jni JavaVM
extern class JavaVM `{JavaVM *`}
	# Create the JVM, returns its handle and store the a pointer to JniEnv in `env_ref`
	#
	# Unavailable on Android, where you cannot instanciate a new JVM.
	private new(args: JavaVMInitArgs, env_ref: JniEnvRef)
	import jni_error, JniEnvRef.jni_env=, JniEnv.as nullable `{

	#ifdef ANDROID
		JavaVM_jni_error(NULL, "JVM creation not supported on Android", 0);
		return NULL;
	#endif

		JavaVM *jvm;
		JNIEnv *env;
		jint res;

		res = JNI_CreateJavaVM(&jvm, (void**)&env, args);

		if (res != 0) {
			JavaVM_jni_error(NULL, "Could not create Java VM", res);
			return NULL;
		}
		else {
			JniEnvRef_jni_env__assign(env_ref, JniEnv_as_nullable_JniEnv(env));
			return jvm;
		}
	`}

	private fun jni_error(msg: NativeString, v: Int)
	do
		print "JNI Error: {msg} ({v})"
		abort
	end

	fun destroy `{
		(*recv)->DestroyJavaVM(recv);
	`}

	fun env: JniEnv import jni_error `{
		JNIEnv *env;
		int res = (*recv)->GetEnv(recv, (void **)&env, JNI_VERSION_1_6);
		if (res != JNI_OK) {
			JavaVM_jni_error(NULL, "Could not get JNIEnv from Java VM", res);
			return NULL;
		}
		return env;
	`}

	fun attach_current_thread: JniEnv `{
		JNIEnv *env;
	#ifdef ANDROID
		// the signature is different (better actually) on Android
		int res = (*recv)->AttachCurrentThread(recv, &env, NULL);
	#else
		int res = (*recv)->AttachCurrentThread(recv, (void**)&env, NULL);
	#endif
		if (res != JNI_OK) {
			JavaVM_jni_error(NULL, "Could not attach current thread to Java VM", res);
			return NULL;
		}
		return env;
	`}
end

# Represents a jni JNIEnv, which is a thread in a JavaVM
extern class JniEnv `{JNIEnv *`}

	# Get a class object from its fully-qualified name or null if the class cannot be found
	fun find_class(class_name : String): JClass import String.to_cstring `{
		return (*recv)->FindClass(recv,String_to_cstring(class_name));
	`}

	# Return the method id for an instance of a class or interface
	# The method is determined by its name and signature
	# To obtain the method ID of a constructor, supply "<init>" as the method name and "void(V)" as the return type
	fun get_method_id(clazz : JClass, name : String, signature : String): JMethodID import String.to_cstring `{
		return (*recv)->GetMethodID(recv, clazz, String_to_cstring(name), String_to_cstring(signature));
	`}

	# Construct a new Java object from the `clazz`, using the constructor ̀ method_id`
	fun new_object(clazz: JClass, method_id: JMethodID): JavaObject `{
		return (*recv)->NewObject(recv, clazz, method_id);
	`}

	# Return the JClass of `obj`
	fun get_object_class(obj: JavaObject): JClass `{
		return (*recv)->GetObjectClass(recv, obj);
	`}

	# Registers native methods with the class specified by the `clazz` argument
	fun register_natives(clazz: JClass, method: JNINativeMethod, n_method : Int): Int `{
		return (*recv)->RegisterNatives(recv, clazz, method, n_method);
	`}

	# Call a method on `obj` designed by `method_id` with an array `args` of arguments
	fun call_void_method(obj: JavaObject, method_id: JMethodID, args: nullable Array[nullable Object]) import convert_args_to_jni `{
		jvalue * args_tab = JniEnv_convert_args_to_jni(recv, args);
		(*recv)->CallVoidMethodA(recv, obj, method_id, args_tab);
		free(args_tab);
	`}

	# Call a method on `obj` designed by `method_id` with an array `args` of argument returning a JavaObject
	fun call_object_method(obj: JavaObject, method_id: JMethodID, args: nullable Array[nullable Object]): JavaObject import convert_args_to_jni `{
		jvalue * args_tab = JniEnv_convert_args_to_jni(recv, args);
		jobject res = (*recv)->CallObjectMethod(recv, obj, method_id, args_tab);
		free(args_tab);
		return res;
	`}

	# Call a method on `obj` designed by `method_id` with an array `args` of arguments returning a Bool
	fun call_boolean_method(obj: JavaObject, method_id: JMethodID, args: nullable Array[nullable Object]): Bool import convert_args_to_jni `{
		jvalue * args_tab = JniEnv_convert_args_to_jni(recv, args);
		jboolean res = (*recv)->CallBooleanMethod(recv, obj, method_id, args_tab);
		free(args_tab);
		return res;
	`}

	# Call a method on `obj` designed by `method_id` with an array `args` of arguments returning a Char
	fun call_char_method(obj: JavaObject, method_id: JMethodID, args: nullable Array[nullable Object]): Char import convert_args_to_jni `{
		jvalue * args_tab = JniEnv_convert_args_to_jni(recv, args);
		jchar res = (*recv)->CallCharMethod(recv, obj, method_id, args_tab);
		free(args_tab);
		return res;
	`}

	# Call a method on `obj` designed by `method_id` with an array `args` of arguments returning an Int
	fun call_int_method(obj: JavaObject, method_id: JMethodID, args: nullable Array[nullable Object]): Int import convert_args_to_jni `{
		jvalue * args_tab = JniEnv_convert_args_to_jni(recv, args);
		jint res = (*recv)->CallIntMethod(recv, obj, method_id, args_tab);
		free(args_tab);
		return res;
	`}

	# Call a method on `obj` designed by `method_id` with an array `args` of arguments returning a Float
	fun call_float_method(obj: JavaObject, method_id: JMethodID, args: nullable Array[nullable Object]): Float import convert_args_to_jni `{
		jvalue * args_tab = JniEnv_convert_args_to_jni(recv, args);
		jfloat res = (*recv)->CallFloatMethod(recv, obj, method_id, args_tab);
		free(args_tab);
		return res;
	`}

	# Call a method on `obj` designed by `method_id` with an array `args` of arguments returning a NativeString
	fun call_string_method(obj: JavaObject, method_id: JMethodID, args: nullable Array[nullable Object]): NativeString import convert_args_to_jni `{
		jvalue * args_tab = JniEnv_convert_args_to_jni(recv, args);
		jobject jobj = (*recv)->CallObjectMethod(recv, obj, method_id, args_tab);
		free(args_tab);
		return (char*)(*recv)->GetStringUTFChars(recv, (jstring)jobj, NULL);
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
				jstring js = (*recv)->NewStringUTF(recv, c);
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
		return (*recv)->GetFieldID(recv, clazz, String_to_cstring(name), String_to_cstring(sign));
	`}

	# returns the value of an instance (nonstatic) field of an object. The field to access is specified by a field ID obtained by calling get_field_id()
	fun get_object_field(obj: JavaObject, fieldID: JFieldID): JavaObject `{
		return (*recv)->GetObjectField(recv, obj, fieldID);
	`}

	fun get_boolean_field(obj: JavaObject, fieldID: JFieldID): Bool `{
		return (*recv)->GetBooleanField(recv, obj, fieldID);
	`}

	fun get_char_field(obj: JavaObject, fieldID: JFieldID): Char `{
		return (*recv)->GetCharField(recv, obj, fieldID);
	`}

	fun get_int_field(obj: JavaObject, fieldID: JFieldID): Int `{
		return (*recv)->GetIntField(recv, obj, fieldID);
	`}

	fun get_float_field(obj: JavaObject, fieldID: JFieldID): Float `{
		return (*recv)->GetFloatField(recv, obj, fieldID);
	`}

	fun set_object_field(obj: JavaObject, fieldID: JFieldID, value: JavaObject) `{
		(*recv)->SetObjectField(recv, obj, fieldID, value);
	`}

	fun set_boolean_field(obj: JavaObject, fieldID: JFieldID, value: Bool) `{
		(*recv)->SetBooleanField(recv, obj, fieldID, value);
	`}

	fun set_char_field(obj: JavaObject, fieldID: JFieldID, value: Char) `{
		(*recv)->SetCharField(recv, obj, fieldID, value);
	`}

	fun set_int_field(obj: JavaObject, fieldID: JFieldID, value: Int) `{
		(*recv)->SetIntField(recv, obj, fieldID, value);
	`}

	fun set_float_field(obj: JavaObject, fieldID: JFieldID, value: Float) `{
		(*recv)->SetFloatField(recv, obj, fieldID, value);
	`}

	# Check for pending exception without creating a local reference to the exception object
	fun exception_check: Bool `{
		return (*recv)->ExceptionCheck(recv);
	`}

	# Construct an exception object from the specified class with the message specified by `message` and causes that exception to be thrown
	fun throw_new(clazz: JClass, message: String): Int import String.to_cstring `{
		return (*recv)->ThrowNew(recv, clazz, String_to_cstring(message));
	`}

	# return the exception if there is one in the process of being thrown, or NULL if no exception is currently being thrown
	fun exception_occurred: JavaObject `{
		return (*recv)->ExceptionOccurred(recv);
	`}

	# prints an exception and backtrace to error channel
	fun exception_describe `{
		return (*recv)->ExceptionDescribe(recv);
	`}

	# clears any exception currently being thrown, has no effect if there is no exception
	fun exception_clear `{
		return (*recv)->ExceptionClear(recv);
	`}

	# Raise a fatal error
	fun fatal_error(msg: String) import String.to_cstring `{
		(*recv)->FatalError(recv, String_to_cstring(msg));
	`}

	# Transform a NIT String into a JavaObject
	fun string_to_jobject(string: String): JavaObject `{
		return (*recv)->NewStringUTF(recv, String_to_cstring(string));
	`}

	# Pushes a local reference frame on the JNI stack
	fun push_local_frame(capacity: Int): Bool `{
		return (*recv)->PushLocalFrame(recv, capacity);
	`}

	# Pops the current local reference frame on the JNI stack
	#
	# Similiar to `JavaObject::pop_from_local_frame` which returns a value.
	fun pop_local_frame `{
		(*recv)->PopLocalFrame(recv, NULL);
	`}
end

# used to initialize a JavaVM
class JniEnvRef
	var jni_env: nullable JniEnv = null
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
	fun name: String import NativeString.to_s `{
		return NativeString_to_s((void*)recv->name);
	`}

	fun name=(name: String) import String.to_cstring `{
		recv->name = String_to_cstring(name);
	`}

	fun signature: String import NativeString.to_s `{
		return NativeString_to_s((void*)recv->signature);
	`}

	fun signature=(signature: String) import String.to_cstring `{
		recv->signature = String_to_cstring(signature);
	`}
end

# Represents a jni jfieldID
extern class JFieldID `{jfieldID`}
end

# Reprents a jni jvalue
extern class JValue `{jvalue`}

	fun set_boolean(b: Bool) `{
		recv.z = b;
	`}

	fun get_boolean:Bool `{
		return recv.z;
	`}

	fun set_char(c: Char)`{
		recv.c = c;
	`}

	fun get_char: Char `{
		return recv.c;
	`}

	fun set_int(i: Int) `{
		recv.i = i;
	`}

	fun get_int: Int `{
		return recv.i;
	`}

	fun set_float(f: Float) `{
		recv.f = f;
	`}

	fun get_float: Float `{
		return recv.f;
	`}

	fun set_jobject(obj: JavaObject) `{
		recv.l = obj;
	`}

	fun get_jobject: JavaObject `{
		return recv.l;
	`}
end

redef class Int
	redef fun to_jvalue(env): JValue `{
		jvalue value;
		value.i = recv;
		return value;
	`}
end

redef class Float
	redef fun to_jvalue(env): JValue `{
		jvalue value;
		value.f = recv;
		return value;
	`}
end

redef class Bool
	redef fun to_jvalue(env): JValue `{
		jvalue value;
		value.z = recv;
		return value;
	`}
end

redef class NativeString
	redef fun to_jvalue(env)`{
		jvalue value;
		value.l = (*env)->NewStringUTF(env, recv);
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
