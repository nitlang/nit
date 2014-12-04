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

# OpenGL graphics rendering library for embedded systems, version 2.0.
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

# Opengl ES program to which we attach shaders
extern class GLProgram `{GLuint`}
	new `{ return glCreateProgram(); `}

	fun is_ok: Bool `{ return glIsProgram(recv); `}

	fun attach_shader(shader: GLShader) `{ glAttachShader(recv, shader); `}

	fun bind_attrib_location(index: Int, name: String) import String.to_cstring `{
		GLchar *c_name = String_to_cstring(name);
		glBindAttribLocation(recv, index, c_name);
	`}

	fun attrib_location(name: String): Int import String.to_cstring `{
		GLchar *c_name = String_to_cstring(name);
		return glGetAttribLocation(recv, c_name);
	`}

	fun query(pname: Int): Int `{
		int val;
		glGetProgramiv(recv, pname, &val);
		return val;
	`}

	fun link `{ glLinkProgram(recv); `}
	fun is_linked: Bool do return query(0x8B82) != 0

	fun use `{ glUseProgram(recv); `}

	fun delete `{ glDeleteProgram(recv); `}
	fun is_deleted: Bool do return query(0x8B80) != 0

	fun validate `{ glValidateProgram(recv); `}
	fun is_validated: Bool do return query(0x8B83) != 0

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
	fun source=(code: String) import String.to_cstring, String.length `{
		GLchar *c_code = String_to_cstring(code);
		glShaderSource(recv, 1, (const GLchar * const*)&c_code, NULL);
	`}
	fun source: nullable String import NativeString.to_s `{
		int size;
		glGetShaderiv(recv, GL_SHADER_SOURCE_LENGTH, &size);
		if (size == 0) return NULL;
		GLchar *code = malloc(size);
		glGetShaderSource(recv, size, NULL, code);
		return NativeString_to_s(code);
	`}

	protected fun query(pname: Int): Int `{
		int val;
		glGetShaderiv(recv, pname, &val);
		return val;
	`}

	fun compile `{ glCompileShader(recv); `}
	fun is_compiled: Bool do return query(0x8B81) != 0

	fun delete `{ glDeleteShader(recv); `}
	fun is_deleted: Bool do return query(0x8B80) != 0

	fun is_ok: Bool `{ return glIsShader(recv); `}

	fun info_log: String import NativeString.to_s `{
		int size;
		glGetShaderiv(recv, GL_INFO_LOG_LENGTH, &size);
		GLchar *msg = malloc(size);
		glGetShaderInfoLog(recv, size, NULL, msg);
		return NativeString_to_s(msg);
	`}

end

extern class GLFragmentShader
	super GLShader

	new `{ return glCreateShader(GL_FRAGMENT_SHADER); `}
end

extern class GLVertexShader
	super GLShader

	new `{ return glCreateShader(GL_VERTEX_SHADER); `}
end

# An array of `Float` associated to a program variable
class VertexArray
	var index: Int
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

protected fun gl_clear_color(r, g, b, a: Float) `{ glClearColor(r, g, b, a); `}
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

private fun gl_get_bool(key: Int): Bool `{
	GLboolean val;
	glGetBooleanv(key, &val);
	return val == GL_TRUE;
`}
private fun gl_get_float(key: Int): Float `{
	GLfloat val;
	glGetFloatv(key, &val);
	return val;
`}
private fun gl_get_int(key: Int): Int `{
	GLint val;
	glGetIntegerv(key, &val);
	return val;
`}

fun gl_shader_compiler: Bool do return gl_get_bool(0x8DFA)
