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

# OpenGL graphics rendering library for embedded systems, version 2.0
#
# This is a low-level wrapper, it can be useful for developers already familiar
# with the C API of OpenGL. Most developers will prefer to use higher level
# wrappers such as `mnit` and `gammit`.
#
# Defines the annotations `glsl_vertex_shader` and `glsl_fragment_shader`
# applicable on string literals to check shader code using `glslangValidator`.
# The tool must be in PATH. It can be downloaded from
# https://www.khronos.org/opengles/sdk/tools/Reference-Compiler/
#
# Most services of this module are a direct wrapper of the underlying
# C library. If a method or class is not documented in Nit, refer to
# the official documentation by the Khronos Group at:
# http://www.khronos.org/opengles/sdk/docs/man/
module glesv2 is
	pkgconfig
	new_annotation glsl_vertex_shader
	new_annotation glsl_fragment_shader
end


in "C Header" `{
	#include <GLES2/gl2.h>
`}

# OpenGL ES program to which we attach shaders
extern class GLProgram `{GLuint`}
	# Create a new program
	#
	# The newly created instance should be checked using `is_ok`.
	new `{ return glCreateProgram(); `}

	# Is this a valid program?
	fun is_ok: Bool `{ return glIsProgram(recv); `}

	# Attach a `shader` to this program
	fun attach_shader(shader: GLShader) `{ glAttachShader(recv, shader); `}

	# Set the location for the attribute by `name`
	fun bind_attrib_location(index: Int, name: String) import String.to_cstring `{
		GLchar *c_name = String_to_cstring(name);
		glBindAttribLocation(recv, index, c_name);
	`}

	# Get the location of the attribute by `name`
	#
	# Returns `-1` if there is no active attribute named `name`.
	fun attrib_location(name: String): Int import String.to_cstring `{
		GLchar *c_name = String_to_cstring(name);
		return glGetAttribLocation(recv, c_name);
	`}


	# Query information on this program
	fun query(pname: Int): Int `{
		int val;
		glGetProgramiv(recv, pname, &val);
		return val;
	`}

	# Try to link this program
	#
	# Check result using `in_linked` and `info_log`.
	fun link `{ glLinkProgram(recv); `}

	# Is this program linked?
	fun is_linked: Bool do return query(0x8B82) != 0

	# Use this program for the following operations
	fun use `{ glUseProgram(recv); `}

	# Delete this program
	fun delete `{ glDeleteProgram(recv); `}

	# Has this program been deleted?
	fun is_deleted: Bool do return query(0x8B80) != 0

	# Validate whether this program can be executed in the current OpenGL state
	#
	# Check results using `is_validated` and `info_log`.
	fun validate `{ glValidateProgram(recv); `}

	# Boolean result of `validate`, must be called after `validate`
	fun is_validated: Bool do return query(0x8B83) != 0

	# Retrieve the information log of this program
	#
	# Useful with `link` and `validate`
	fun info_log: String import NativeString.to_s `{
		int size;
		glGetProgramiv(recv, GL_INFO_LOG_LENGTH, &size);
		GLchar *msg = malloc(size);
		glGetProgramInfoLog(recv, size, NULL, msg);
		return NativeString_to_s(msg);
	`}
end

# Abstract OpenGL ES shader object, implemented by `GLFragmentShader` and `GLVertexShader`
extern class GLShader `{GLuint`}
	# Set the source of the shader
	fun source=(code: String) import String.to_cstring, String.length `{
		GLchar *c_code = String_to_cstring(code);
		glShaderSource(recv, 1, (const GLchar * const*)&c_code, NULL);
	`}

	# Source of the shader, if available
	#
	# Returns `null` if the source is not available, usually when the shader
	# was created from a binary file.
	fun source: nullable String
	do
		var size = query(0x8B88)
		if size == 0 then return null
		return source_native(size).to_s
	end

	private fun source_native(size: Int): NativeString `{
		GLchar *code = malloc(size);
		glGetShaderSource(recv, size, NULL, code);
		return code;
	`}

	# Query information on this shader
	protected fun query(pname: Int): Int `{
		int val;
		glGetShaderiv(recv, pname, &val);
		return val;
	`}

	# Try to compile `source` into a binary GPU program
	#
	# Check the result using `is_compiled` and `info_log`
	fun compile `{ glCompileShader(recv); `}

	# Has this shader been compiled?
	fun is_compiled: Bool do return query(0x8B81) != 0

	# Delete this shader
	fun delete `{ glDeleteShader(recv); `}

	# Has this shader been deleted?
	fun is_deleted: Bool do return query(0x8B80) != 0

	# Is this a valid shader?
	fun is_ok: Bool `{ return glIsShader(recv); `}

	# Retrieve the information log of this shader
	#
	# Useful with `link` and `validate`
	fun info_log: String import NativeString.to_s `{
		int size;
		glGetShaderiv(recv, GL_INFO_LOG_LENGTH, &size);
		GLchar *msg = malloc(size);
		glGetShaderInfoLog(recv, size, NULL, msg);
		return NativeString_to_s(msg);
	`}
end

# An OpenGL ES 2.0 fragment shader
extern class GLFragmentShader
	super GLShader

	# Create a new fragment shader
	#
	# The newly created instance should be checked using `is_ok`.
	new `{ return glCreateShader(GL_FRAGMENT_SHADER); `}
end

# An OpenGL ES 2.0 vertex shader
extern class GLVertexShader
	super GLShader

	# Create a new fragment shader
	#
	# The newly created instance should be checked using `is_ok`.
	new `{ return glCreateShader(GL_VERTEX_SHADER); `}
end

# An array of `Float` associated to a program variable
class VertexArray
	var index: Int

	# Number of data per vertex
	var count: Int

	protected var glfloat_array: GLfloatArray

	init(index, count: Int, array: Array[Float])
	do
		self.index = index
		self.count = count
		self.glfloat_array = new GLfloatArray(array)
	end

	fun attrib_pointer do attrib_pointer_intern(index, count, glfloat_array)
	private fun attrib_pointer_intern(index, count: Int, array: GLfloatArray) `{
		glVertexAttribPointer(index, count, GL_FLOAT, GL_FALSE, 0, array);
	`}

	fun enable do enable_intern(index)
	private fun enable_intern(index: Int) `{ glEnableVertexAttribArray(index); `}

	fun draw_arrays_triangles do draw_arrays_triangles_intern(index, count)
	private fun draw_arrays_triangles_intern(index, count: Int) `{
		glDrawArrays(GL_TRIANGLES, index, count);
	`}
end

# Low level array of `Float`
extern class GLfloatArray `{GLfloat *`}
	new (array: Array[Float]) import Array[Float].length, Array[Float].[] `{
		int i;
		int len = Array_of_Float_length(array);
		GLfloat *vertex_array = malloc(sizeof(GLfloat)*len);
		for (i = 0; i < len; i ++) vertex_array[i] = Array_of_Float__index(array, i);
		return vertex_array;
	`}
end

# An OpenGL ES 2.0 error code
extern class GLError `{ GLenum `}
	fun is_ok: Bool do return is_no_error
	fun is_no_error: Bool `{ return recv == GL_NO_ERROR; `}
	fun is_invalid_enum: Bool `{ return recv == GL_INVALID_ENUM; `}
	fun is_invalid_value: Bool `{ return recv == GL_INVALID_VALUE; `}
	fun is_invalid_operation: Bool `{ return recv == GL_INVALID_OPERATION; `}
	fun is_invalid_framebuffer_operation: Bool `{ return recv == GL_INVALID_FRAMEBUFFER_OPERATION; `}
	fun is_out_of_memory: Bool `{ return recv == GL_OUT_OF_MEMORY; `}

	redef fun to_s
	do
		if is_no_error then return "No error"
		if is_invalid_enum then return "Invalid enum"
		if is_invalid_value then return "Invalid value"
		if is_invalid_operation then return "Invalid operation"
		if is_invalid_framebuffer_operation then return "invalid framebuffer operation"
		if is_out_of_memory then return "Out of memory"
		return "Truely unknown error"
	end
end

# Clear the color buffer with `r`, `g`, `b`, `a`
protected fun gl_clear_color(r, g, b, a: Float) `{ glClearColor(r, g, b, a); `}

# Set the viewport
protected fun gl_viewport(x, y, width, height: Int) `{ glViewport(x, y, width, height); `}

# Direct call to `glClear`, call with a combinaison of `gl_clear_color_buffer`,
# `gl_stencil_buffer_bit` and `gl_color_buffer_bit`.
private fun gl_clear(flag: Int) `{ glClear(flag); `}

protected fun gl_depth_buffer_bit: Int do return 0x0100
protected fun gl_stencil_buffer_bit: Int do return 0x0400
protected fun gl_color_buffer_bit: Int do return 0x4000

protected fun gl_clear_color_buffer do gl_clear(gl_color_buffer_bit)
protected fun gl_clear_depth_buffer do gl_clear(gl_depth_buffer_bit)
protected fun gl_clear_stencil_buffer do gl_clear(gl_stencil_buffer_bit)

protected fun gl_error: GLError `{ return glGetError(); `}
protected fun assert_no_gl_error
do
	var error = gl_error
	if not error.is_ok then
		print "GL error: {error}"
		abort
	end
end

# Query the boolean value at `key`
private fun gl_get_bool(key: Int): Bool `{
	GLboolean val;
	glGetBooleanv(key, &val);
	return val == GL_TRUE;
`}

# Query the floating point value at `key`
private fun gl_get_float(key: Int): Float `{
	GLfloat val;
	glGetFloatv(key, &val);
	return val;
`}

# Query the integer value at `key`
private fun gl_get_int(key: Int): Int `{
	GLint val;
	glGetIntegerv(key, &val);
	return val;
`}

# Does this driver support shader compilation?
#
# Should always return `true` in OpenGL ES 2.0 and 3.0.
fun gl_shader_compiler: Bool do return gl_get_bool(0x8DFA)
