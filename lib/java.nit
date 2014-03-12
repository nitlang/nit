# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Supporting services for the FFI with Java
module java is
	c_compiler_option("-I $(JAVA_HOME)/include/")
	c_linker_option("-L $(JNI_LIB_PATH) -ljvm")
end

import jvm

redef class Sys
	private var jvm_cache: nullable JavaVM = null
	private var jni_env_cache: nullable JniEnv = null

	# Default Java Virtual Machine to use (will be instanciated using
	# `create_default_jvm` if not already set)
	fun jvm: JavaVM
	do
		if jvm_cache == null then create_default_jvm
		return jvm_cache.as(not null)
	end

	# Sets the current default Java Virtual Machine (use with `jni_env=`)
	fun jvm=(jvm: JavaVM) do jvm_cache = jvm

	# Current main `JniEnv`
	# FIXME support threaded Java
	fun jni_env: JniEnv
	do
		if jni_env_cache == null then create_default_jvm
		return jni_env_cache.as(not null)
	end

	# Sets the current default JNI env (use with `jvm=`)
	fun jni_env=(jni_env: JniEnv) do jni_env_cache = jni_env

	# Called by `jvm` and `jni_env` to instanciate a Java Virual Machine.
	# Used mostly for FFI with Java.
	protected fun create_default_jvm
	do
		var builder = new JavaVMBuilder

		# By default, look for Java classes in a jar file the same dir as the executable
		builder.options.add "-Djava.class.path={sys.program_name}.jar"

		var jvm = builder.create_jvm
		assert jvm != null else print "JVM creation failed"

		self.jvm = jvm
		self.jni_env = builder.jni_env.as(not null)
	end
end
