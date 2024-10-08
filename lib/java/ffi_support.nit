# This file is part of NIT ( https://nitlanguage.org ).
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

# Core supporting services for the FFI with Java
#
# This module *must* be imported by modules using the Java FFI.
# Some might prefer to import the whole `java` package as it provides
# other useful services.
module ffi_support is
	cflags "-I $(JAVA_HOME)/include/ -I $(JAVA_HOME)/include/linux/"
	ldflags "-L $(JNI_LIB_PATH) -ljvm"
	new_annotation extra_java_files
	extra_java_files "nit.app.NitObject"
end

import jvm

redef class Sys
	private var jvm_cache: nullable JavaVM = null
	private var jni_env_cache: nullable JniEnv = null

	# Default Java Virtual Machine to use
	#
	# Instantiated using `create_default_jvm` if not already set.
	fun jvm: JavaVM
	do
		if jvm_cache == null then create_default_jvm
		return jvm_cache.as(not null)
	end

	# Sets the current default Java Virtual Machine (use with `jni_env=`)
	fun jvm=(jvm: JavaVM) do jvm_cache = jvm

	# Current main `JniEnv`
	fun jni_env: JniEnv
	do
		if jni_env_cache == null then create_default_jvm
		return jni_env_cache.as(not null)
	end

	# Sets the current default JNI env (use with `jvm=`)
	fun jni_env=(jni_env: JniEnv) do jni_env_cache = jni_env

	# Called by `jvm` and `jni_env` to instantiate a Java Virtual Machine.
	# Used mostly for the FFI with Java.
	protected fun create_default_jvm
	do
		var builder = new JavaVMBuilder

		# By default, look for Java classes in a jar file the same directory as the executable
		builder.options.add "-Djava.class.path={sys.program_name}.jar"

		var jvm = builder.create_jvm
		assert jvm != null else print "JVM creation failed"

		self.jvm = jvm
		assert not jvm.address_is_null
		self.jni_env = jvm.env
		assert not jni_env.address_is_null
	end

	# Get a Java class by its name from the current `jni_env`
	fun load_jclass(name: CString): JClass import jni_env `{
		JNIEnv *nit_ffi_jni_env = Sys_jni_env(self);

		// retrieve the implementation Java class
		jclass java_class = (*nit_ffi_jni_env)->FindClass(nit_ffi_jni_env, name);
		if (java_class == NULL) {
			fprintf(stderr, "Nit FFI with Java error: failed to load class.\\n");
			(*nit_ffi_jni_env)->ExceptionDescribe(nit_ffi_jni_env);
			exit(1);
		}

		return java_class;
	`}
end

# A standard Java string `java.lang.String`
#
# Converted to a Nit string using `to_s`, or to a C string with `to_cstring`.
# Created using `String::to_java_string` or `CString::to_java_string`.
extern class JavaString in "Java" `{ java.lang.String `}
	super JavaObject

	# Get the string from Java and copy it to Nit memory
	fun to_cstring: CString import sys, Sys.jni_env `{
		Sys sys = JavaString_sys(self);
		JNIEnv *env = Sys_jni_env(sys);

		// Get the data from Java
		const char *java_cstr = (*env)->GetStringUTFChars(env, self, NULL);
		jsize len = (*env)->GetStringUTFLength(env, self);

		// Copy it in control of Nit
		char *nit_cstr = (char*)malloc(len+1);
		memcpy(nit_cstr, java_cstr, len);
		nit_cstr[len] = '\0';

		// Free JNI ref and return
		(*env)->ReleaseStringUTFChars(env, self, java_cstr);
		return nit_cstr;
	`}

	redef fun to_s
	do
		if is_java_null then return "<{inspect_head}:null>"
		return to_cstring.to_s
	end
end

redef class CString
	# Get a Java string from this C string
	#
	# This instance is only valid until the next execution of Java code.
	# You can use `new_local_ref` to keep it longer.
	fun to_java_string: JavaString import sys, Sys.jni_env `{
		Sys sys = JavaString_sys(self);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewStringUTF(env, self);
	`}
end

redef class Text
	# Get `self` as a `JavaString`
	fun to_java_string: JavaString do return to_cstring.to_java_string
end

redef extern class JavaObject

	# Returns a global reference to the Java object behind this reference
	#
	# You must use a global reference when keeping a Java object
	# across execution of Java code, per JNI specification.
	fun new_global_ref: SELF import sys, Sys.jni_env `{
		Sys sys = JavaObject_sys(self);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, self);
	`}

	# Delete this global reference
	fun delete_global_ref import sys, Sys.jni_env `{
		Sys sys = JavaObject_sys(self);
		JNIEnv *env = Sys_jni_env(sys);
		(*env)->DeleteGlobalRef(env, self);
	`}

	# Delete this local reference
	fun delete_local_ref import sys, Sys.jni_env `{
		Sys sys = JavaObject_sys(self);
		JNIEnv *env = Sys_jni_env(sys);
		(*env)->DeleteLocalRef(env, self);
	`}

	# Pops the current local reference frame and return a valid reference to self
	#
	# Similar to `JavaVM::pop_local_frame` but returns a value.
	fun pop_from_local_frame: SELF
	do
		var jni_env = sys.jni_env
		return pop_from_local_frame_with_env(jni_env)
	end

	# Java implementation of `pop_from_local_frame`
	protected fun pop_from_local_frame_with_env(jni_env: JniEnv): SELF `{
		return (*jni_env)->PopLocalFrame(jni_env, self);
	`}

	# Is `self` null in Java?
	#
	# Since Java type system doesn't have the same `nullable` concept as Nit's,
	# the two systems are not directly compatible. Any Nit instances of
	# `JavaObject` may hold a Java null.
	#
	# To benefit from the safer type system of Nit, it is recommended to check
	# the return of all extern methods implemented in Java to ensure the value
	# is not a Java null. In case it is, you should replace it by a normal Nit
	# `null`.
	fun is_java_null: Bool in "Java" `{ return self == null; `}

	# `JavaString` representation of `self` using Java's `toString`
	fun to_java_string: JavaString in "Java" `{ return self.toString(); `}

	# Use Java's `toString` for any `JavaObject`
	redef fun to_s
	do
		if is_java_null then return "<{inspect_head}:null>"
		return to_java_string.to_s
	end
end

# Java class: java.lang.Throwable
extern class JavaThrowable in "Java" `{ java.lang.Throwable `}
	super JavaObject

	# Java implementation: java.lang.String java.lang.Throwable.getMessage()
	fun message: JavaString in "Java" `{
		return self.getMessage();
	`}

	# Java implementation: java.lang.String java.lang.Throwable.getLocalizedMessage()
	fun localized_message: JavaString in "Java" `{
		return self.getLocalizedMessage();
	`}

	# Java implementation:  java.lang.Throwable.printStackTrace()
	fun print_stack_trace in "Java" `{
		self.printStackTrace();
	`}

	# Java implementation: java.lang.Throwable java.lang.Throwable.getCause()
	fun cause: JavaThrowable in "Java" `{
		return self.getCause();
	`}

	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = JavaThrowable_sys(self);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, self);
	`}

	redef fun pop_from_local_frame_with_env(jni_env) `{
		return (*jni_env)->PopLocalFrame(jni_env, self);
	`}
end

# Java class: java.lang.Exception
extern class JavaException in "Java" `{ java.lang.Exception `}
	super JavaThrowable

	redef fun new_global_ref import sys, Sys.jni_env `{
		Sys sys = JavaException_sys(self);
		JNIEnv *env = Sys_jni_env(sys);
		return (*env)->NewGlobalRef(env, self);
	`}

	redef fun pop_from_local_frame_with_env(jni_env) `{
		return (*jni_env)->PopLocalFrame(jni_env, self);
	`}
end

redef class JniEnv
	# Create new `Java.nio.ByteBuffer` referring to `address` with the given `capacity` in bytes
	#
	# JNI function: NewDirectByteBuffer
	fun new_direct_byte_buffer(address: Pointer, capacity: Int): Java_nio_ByteBuffer `{
		return (*self)->NewDirectByteBuffer(self, address, capacity);
	`}
end

# Container for data of a specific primitive type
#
# Java class: java.nio.Buffer
extern class Java_nio_Buffer in "Java" `{ java.nio.Buffer `}
	super JavaObject

	# Address pointed by this buffer
	#
	# JNI function: GetDirectBufferAddress
	fun direct_buffer_address(jni_env: JniEnv): Pointer `{
		return (*jni_env)->GetDirectBufferAddress(jni_env, self);
	`}

	# Capacity of this this buffer
	#
	# JNI function: GetDirectBufferCapacity
	fun direct_buffer_capacity(jni_env: JniEnv): Int `{
		return (*jni_env)->GetDirectBufferCapacity(jni_env, self);
	`}
end

# A byte buffer
#
# Java class: java.nio.ByteBuffer
extern class Java_nio_ByteBuffer in "Java" `{ java.nio.ByteBuffer `}
	super Java_nio_Buffer

	# Allocate a new `java.nio.ByteBuffer` with `allocateDirect`
	new direct(size: Int) in "Java" `{
		return java.nio.ByteBuffer.allocateDirect((int)size);
	`}
end
