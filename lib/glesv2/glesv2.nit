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
	ldflags("-lGLESv2")@android
end

import android::aware
intrude import c

in "C Header" `{
	#include <GLES2/gl2.h>
`}

# OpenGL ES program to which we attach shaders
extern class GLProgram `{GLuint`}
	# Create a new program
	#
	# The newly created instance should be checked using `is_ok`.
	new `{ return glCreateProgram(); `}

	# Set the location for the attribute by `name`
	fun bind_attrib_location(index: Int, name: String) import String.to_cstring `{
		GLchar *c_name = String_to_cstring(name);
		glBindAttribLocation(self, index, c_name);
	`}

	# Get the location of the attribute by `name`
	#
	# Returns `-1` if there is no active attribute named `name`.
	fun attrib_location(name: String): Int import String.to_cstring `{
		GLchar *c_name = String_to_cstring(name);
		return glGetAttribLocation(self, c_name);
	`}

	# Get the location of the uniform by `name`
	#
	# Returns `-1` if there is no active uniform named `name`.
	fun uniform_location(name: String): Int import String.to_cstring `{
		GLchar *c_name = String_to_cstring(name);
		return glGetUniformLocation(self, c_name);
	`}

	# Query information on this program
	fun query(pname: Int): Int `{
		int val;
		glGetProgramiv(self, pname, &val);
		return val;
	`}

	# Is this program linked?
	fun is_linked: Bool do return query(0x8B82) != 0

	# Has this program been deleted?
	fun is_deleted: Bool do return query(0x8B80) != 0

	# Boolean result of `validate`, must be called after `validate`
	fun is_validated: Bool do return query(0x8B83) != 0

	# Retrieve the information log of this program
	#
	# Useful with `link` and `validate`
	fun info_log: String import NativeString.to_s `{
		int size;
		glGetProgramiv(self, GL_INFO_LOG_LENGTH, &size);
		GLchar *msg = malloc(size);
		glGetProgramInfoLog(self, size, NULL, msg);
		return NativeString_to_s(msg);
	`}

	# Number of active uniform in this program
	#
	# This should be the number of uniforms declared in all shader, except
	# unused uniforms which may have been optimized out.
	fun n_active_uniforms: Int do return query(0x8B86)

	# Length of the longest uniform name in this program, including `\n`
	fun active_uniform_max_length: Int do return query(0x8B87)

	# Number of active attributes in this program
	#
	# This should be the number of uniforms declared in all shader, except
	# unused uniforms which may have been optimized out.
	fun n_active_attributes: Int do return query(0x8B89)

	# Length of the longest uniform name in this program, including `\n`
	fun active_attribute_max_length: Int do return query(0x8B8A)

	# Number of shaders attached to this program
	fun n_attached_shaders: Int do return query(0x8B85)

	# Name of the active attribute at `index`
	fun active_attrib_name(index: Int): String
	do
		var max_size = active_attribute_max_length
		return active_attrib_name_native(index, max_size).to_s
	end
	private fun active_attrib_name_native(index, max_size: Int): NativeString `{
		// We get more values than we need, for compatibility. At least the
		// NVidia driver tries to fill them even if NULL.

		char *name = malloc(max_size);
		int size;
		GLenum type;
		glGetActiveAttrib(self, index, max_size, NULL, &size, &type, name);
		return name;
	`}

	# Size of the active attribute at `index`
	fun active_attrib_size(index: Int): Int `{
		int size;
		GLenum type;
		glGetActiveAttrib(self, index, 0, NULL, &size, &type, NULL);
		return size;
	`}

	# Type of the active attribute at `index`
	#
	# May only be float related data types (single float, vectors and matrix).
	fun active_attrib_type(index: Int): GLFloatDataType `{
		int size;
		GLenum type;
		glGetActiveAttrib(self, index, 0, NULL, &size, &type, NULL);
		return type;
	`}

	# Name of the active uniform at `index`
	fun active_uniform_name(index: Int): String
	do
		var max_size = active_attribute_max_length
		return active_uniform_name_native(index, max_size).to_s
	end
	private fun active_uniform_name_native(index, max_size: Int): NativeString `{
		char *name = malloc(max_size);
		int size;
		GLenum type;
		glGetActiveUniform(self, index, max_size, NULL, &size, &type, name);
		return name;
	`}

	# Size of the active uniform at `index`
	fun active_uniform_size(index: Int): Int `{
		int size;
		GLenum type;
		glGetActiveUniform(self, index, 0, NULL, &size, &type, NULL);
		return size;
	`}

	# Type of the active uniform at `index`
	#
	# May be any data type supported by OpenGL ES 2.0 shaders.
	fun active_uniform_type(index: Int): GLDataType `{
		int size;
		GLenum type = 0;
		glGetActiveUniform(self, index, 0, NULL, &size, &type, NULL);
		return type;
	`}
end

# Create a program object
fun glCreateProgram: GLProgram `{ return glCreateProgram(); `}

# Install the `program` as part of current rendering state
fun glUseProgram(program: GLProgram) `{ glUseProgram(program); `}

# Link the `program` object
fun glLinkProgram(program: GLProgram) `{ glLinkProgram(program); `}

# Validate the `program` object
fun glValidateProgram(program: GLProgram) `{ glValidateProgram(program); `}

# Delete the `program` object
fun glDeleteProgram(program: GLProgram) `{ glDeleteProgram(program); `}

# Determine if `name` corresponds to a program object
fun glIsProgram(name: GLProgram): Bool `{ return glIsProgram(name); `}

# Attach a `shader` to `program`
fun glAttachShader(program: GLProgram, shader: GLShader) `{ glAttachShader(program, shader); `}

# Detach `shader` from `program`
fun glDetachShader(program: GLProgram, shader: GLShader) `{ glDetachShader(program, shader); `}

# Abstract OpenGL ES shader object, implemented by `GLFragmentShader` and `GLVertexShader`
extern class GLShader `{GLuint`}

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
		glGetShaderSource(self, size, NULL, code);
		return code;
	`}

	# Query information on this shader
	protected fun query(pname: Int): Int `{
		int val;
		glGetShaderiv(self, pname, &val);
		return val;
	`}

	# Has this shader been compiled?
	fun is_compiled: Bool do return query(0x8B81) != 0

	# Has this shader been deleted?
	fun is_deleted: Bool do return query(0x8B80) != 0

	# Retrieve the information log of this shader
	#
	# Useful with `link` and `validate`
	fun info_log: String import NativeString.to_s `{
		int size;
		glGetShaderiv(self, GL_INFO_LOG_LENGTH, &size);
		GLchar *msg = malloc(size);
		glGetShaderInfoLog(self, size, NULL, msg);
		return NativeString_to_s(msg);
	`}
end

# Shader type
extern class GLShaderType
	super GLEnum
end

fun gl_VERTEX_SHADER: GLShaderType `{ return GL_VERTEX_SHADER; `}
fun gl_FRAGMENT_SHADER: GLShaderType `{ return GL_FRAGMENT_SHADER; `}

# Create a shader object of the `shader_type`
fun glCreateShader(shader_type: GLShaderType): GLShader `{
	return glCreateShader(shader_type);
`}

# Replace the source code in the `shader` object with `code`
fun glShaderSource(shader: GLShader, code: NativeString) `{
	glShaderSource(shader, 1, (GLchar const **)&code, NULL);
`}

# Compile the `shader` object
fun glCompileShader(shader: GLShader) `{ glCompileShader(shader); `}

# Delete the `shader` object
fun glDeleteShader(shader: GLShader) `{ glDeleteShader(shader); `}

# Determine if `name` corresponds to a shader object
fun glIsShader(name: GLShader): Bool `{ return glIsShader(name); `}

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

	protected var glfloat_array: NativeGLfloatArray

	init(index, count: Int, array: Array[Float])
	do
		self.index = index
		self.count = count
		self.glfloat_array = new NativeGLfloatArray(array.length)
		for k in [0..array.length[ do
			glfloat_array[k] = array[k]
		end
	end

	fun attrib_pointer do attrib_pointer_intern(index, count, glfloat_array)
	private fun attrib_pointer_intern(index, count: Int, array: NativeGLfloatArray) `{
		glVertexAttribPointer(index, count, GL_FLOAT, GL_FALSE, 0, array);
	`}

	# Enable this vertex attribute array
	fun enable do glEnableVertexAttribArray(index)

	# Disable this vertex attribute array
	fun disable do glDisableVertexAttribArray(index)
end

# Enable the generic vertex attribute array at `index`
fun glEnableVertexAttribArray(index: Int) `{ glEnableVertexAttribArray(index); `}

# Disable the generic vertex attribute array at `index`
fun glDisableVertexAttribArray(index: Int) `{ glDisableVertexAttribArray(index); `}

# Render primitives from array data
fun glDrawArrays(mode: GLDrawMode, from, count: Int) `{ glDrawArrays(mode, from, count); `}

# Define an array of generic vertex attribute data
fun glVertexAttribPointer(index, size: Int, typ: GLDataType, normalized: Bool, stride: Int, array: NativeGLfloatArray) `{
	glVertexAttribPointer(index, size, typ, normalized, stride, array);
`}

# Specify the value of a generic vertex attribute
fun glVertexAttrib1f(index: Int, x: Float) `{ glVertexAttrib1f(index, x); `}

# Specify the value of a generic vertex attribute
fun glVertexAttrib2f(index: Int, x, y: Float) `{ glVertexAttrib2f(index, x, y); `}

# Specify the value of a generic vertex attribute
fun glVertexAttrib3f(index: Int, x, y, z: Float) `{ glVertexAttrib3f(index, x, y, z); `}

# Specify the value of a generic vertex attribute
fun glVertexAttrib4f(index: Int, x, y, z, w: Float) `{ glVertexAttrib4f(index, x, y, z, w); `}

# Specify the value of a uniform variable for the current program object
fun glUniform1i(index, x: Int) `{ glUniform1i(index, x); `}

# Specify the value of a uniform variable for the current program object
fun glUniform2i(index, x, y: Int) `{ glUniform2i(index, x, y); `}

# Specify the value of a uniform variable for the current program object
fun glUniform3i(index, x, y, z: Int) `{ glUniform3i(index, x, y, z); `}

# Specify the value of a uniform variable for the current program object
fun glUniform4i(index, x, y, z, w: Int) `{ glUniform4i(index, x, y, z, w); `}

# TODO glUniform*f

# Low level array of `Float`
class GLfloatArray
	super CArray[Float]
	redef type NATIVE: NativeGLfloatArray

	init do native_array = new NativeGLfloatArray(length)

	# Create with the content of `array`
	new from(array: Array[Float])
	do
		var arr = new GLfloatArray(array.length)
		arr.fill_from array
		return arr
	end

	# Fill with the content of `array`
	fun fill_from(array: Array[Float])
	do
		assert length >= array.length
		for k in [0..array.length[ do
			self[k] = array[k]
		end
	end
end

# An array of `GLfloat` in C (`GLfloat*`)
extern class NativeGLfloatArray `{ GLfloat* `}
	super NativeCArray
	redef type E: Float

	new(size: Int) `{ return calloc(size, sizeof(GLfloat)); `}

	redef fun [](index) `{ return self[index]; `}
	redef fun []=(index, val) `{ self[index] = val; `}

	redef fun +(offset) `{ return self + offset; `}
end

# General type for OpenGL enumerations
extern class GLEnum `{ GLenum `}

	redef fun hash `{ return self; `}

	redef fun ==(o) do return o != null and is_same_type(o) and o.hash == self.hash
end

# An OpenGL ES 2.0 error code
extern class GLError
	super GLEnum

	# Is there no error?
	fun is_ok: Bool do return is_no_error

	# Is this not an error?
	fun is_no_error: Bool `{ return self == GL_NO_ERROR; `}

	fun is_invalid_enum: Bool `{ return self == GL_INVALID_ENUM; `}
	fun is_invalid_value: Bool `{ return self == GL_INVALID_VALUE; `}
	fun is_invalid_operation: Bool `{ return self == GL_INVALID_OPERATION; `}
	fun is_invalid_framebuffer_operation: Bool `{ return self == GL_INVALID_FRAMEBUFFER_OPERATION; `}
	fun is_out_of_memory: Bool `{ return self == GL_OUT_OF_MEMORY; `}

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

fun assert_no_gl_error
do
	var error = gl.error
	if not error.is_ok then
		print "GL error: {error}"
		abort
	end
end

# Texture unit, the number of texture units is implementation dependent
extern class GLTextureUnit
	super GLEnum
end

fun gl_TEXTURE0: GLTextureUnit `{ return GL_TEXTURE0; `}
fun gl_TEXTURE1: GLTextureUnit `{ return GL_TEXTURE1; `}
fun gl_TEXTURE2: GLTextureUnit `{ return GL_TEXTURE2; `}
fun gl_TEXTURE3: GLTextureUnit `{ return GL_TEXTURE3; `}
fun gl_TEXTURE4: GLTextureUnit `{ return GL_TEXTURE4; `}
fun gl_TEXTURE5: GLTextureUnit `{ return GL_TEXTURE5; `}
fun gl_TEXTURE6: GLTextureUnit `{ return GL_TEXTURE6; `}
fun gl_TEXTURE7: GLTextureUnit `{ return GL_TEXTURE7; `}
fun gl_TEXTURE8: GLTextureUnit `{ return GL_TEXTURE8; `}
fun gl_TEXTURE9: GLTextureUnit `{ return GL_TEXTURE9; `}
fun gl_TEXTURE10: GLTextureUnit `{ return GL_TEXTURE10; `}
fun gl_TEXTURE11: GLTextureUnit `{ return GL_TEXTURE11; `}
fun gl_TEXTURE12: GLTextureUnit `{ return GL_TEXTURE12; `}
fun gl_TEXTURE13: GLTextureUnit `{ return GL_TEXTURE13; `}
fun gl_TEXTURE14: GLTextureUnit `{ return GL_TEXTURE14; `}
fun gl_TEXTURE15: GLTextureUnit `{ return GL_TEXTURE15; `}
fun gl_TEXTURE16: GLTextureUnit `{ return GL_TEXTURE16; `}
fun gl_TEXTURE17: GLTextureUnit `{ return GL_TEXTURE17; `}
fun gl_TEXTURE18: GLTextureUnit `{ return GL_TEXTURE18; `}
fun gl_TEXTURE19: GLTextureUnit `{ return GL_TEXTURE19; `}
fun gl_TEXTURE20: GLTextureUnit `{ return GL_TEXTURE20; `}
fun gl_TEXTURE21: GLTextureUnit `{ return GL_TEXTURE21; `}
fun gl_TEXTURE22: GLTextureUnit `{ return GL_TEXTURE22; `}
fun gl_TEXTURE23: GLTextureUnit `{ return GL_TEXTURE23; `}
fun gl_TEXTURE24: GLTextureUnit `{ return GL_TEXTURE24; `}
fun gl_TEXTURE25: GLTextureUnit `{ return GL_TEXTURE25; `}
fun gl_TEXTURE26: GLTextureUnit `{ return GL_TEXTURE26; `}
fun gl_TEXTURE27: GLTextureUnit `{ return GL_TEXTURE27; `}
fun gl_TEXTURE28: GLTextureUnit `{ return GL_TEXTURE28; `}
fun gl_TEXTURE29: GLTextureUnit `{ return GL_TEXTURE29; `}
fun gl_TEXTURE30: GLTextureUnit `{ return GL_TEXTURE30; `}
fun gl_TEXTURE31: GLTextureUnit `{ return GL_TEXTURE31; `}

# Texture unit at `offset` after `gl_TEXTURE0`
fun gl_TEXTURE(offset: Int): GLTextureUnit `{ return GL_TEXTURE0 + offset; `}

# Generate `n` texture names
fun glGenTextures(n: Int): Array[Int]
do
	var array = new CIntArray(n)
	native_glGenTextures(n, array.native_array)
	var a = array.to_a
	array.destroy
	return a
end

private fun native_glGenTextures(n: Int, textures: NativeCIntArray) `{
	glGenTextures(n, (GLuint*)textures);
`}

# Select server-side active texture unit
fun glActiveTexture(texture: GLTextureUnit) `{ glActiveTexture(texture); `}

# Bind the named `texture` to a `target`
fun glBindTexture(target: GLTextureTarget, texture: Int) `{
	glBindTexture(target, texture);
`}

# Delete named textures
fun glDeleteTextures(textures: SequenceRead[Int])
do
	var n = textures.length
	var array = new CIntArray.from(textures)
	native_glDeleteTextures(n, array.native_array)
	array.destroy
end

private fun native_glDeleteTextures(n: Int, textures: NativeCIntArray) `{
	glDeleteTextures(n, (const GLuint *)textures);
`}

# Does `name` corresponds to a texture?
fun glIsTexture(name: Int): Bool `{ return glIsTexture(name); `}

# Set pixel storage modes
fun glPixelStorei(parameter: GLPack, val: Int) `{ glPixelStorei(parameter, val); `}

# Symbolic name of the parameter to be set with `glPixelStorei`
extern class GLPack
	super GLEnum
end

# Parameter to specify the alignment requirements for the start of each pixel row in memory
fun gl_PACK_ALIGNEMENT: GLPack `{ return GL_PACK_ALIGNMENT; `}

# Parameter to specify the alignment requirements for the start of each pixel row in memory
fun gl_UNPACK_ALIGNEMENT: GLPack `{ return GL_UNPACK_ALIGNMENT; `}

# TODO GL_PACK_ROW_LENGTH, GL_PACK_IMAGE_HEIGHT, GL_PACK_SKIP_PIXELS, GL_PACK_SKIP_ROWS, GL_PACK_SKIP_IMAGES
# GL_UNPACK_ROW_LENGTH, GL_UNPACK_IMAGE_HEIGHT, GL_UNPACK_SKIP_PIXELS, GL_UNPACK_SKIP_ROWS, GL_UNPACK_SKIP_IMAGES

# Specify a two-dimensional texture image
fun glTexImage2D(target: GLTextureTarget, level: Int, internalformat: GLPixelFormat,
                 width, height, border: Int,
                 format: GLPixelFormat, typ: GLPixelType, data: Pointer) `{
	glTexImage2D(target, level, internalformat, width, height, border, format, typ, data);
`}

# Specify a two-dimensional texture subimage
fun glTexSubImage2D(target: GLTextureTarget,
                    level, xoffset, yoffset, width, height, border: Int,
                    format: GLPixelFormat, typ: GLPixelType, data: Pointer) `{
	glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, typ, data);
`}

# Copy pixels into a 2D texture image
fun glCopyTexImage2D(target: GLTextureTarget, level: Int, internalformat: GLPixelFormat,
                     x, y, width, height, border: Int) `{
	glCopyTexImage2D(target, level, internalformat, x, y, width, height, border);
`}

# Copy a two-dimensional texture subimage
fun glCopyTexSubImage2D(target: GLTextureTarget, level, xoffset, yoffset, x, y, width, height: Int) `{
	glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
`}

# Texture minifying and magnifying function
extern class GLTexParameteri
	super GLEnum
end

fun gl_NEAREST: GLTexParameteri `{ return GL_NEAREST; `}
fun gl_LINEAR: GLTexParameteri `{ return GL_LINEAR; `}
fun gl_NEAREST_MIPMAP_NEAREST: GLTexParameteri `{ return GL_NEAREST_MIPMAP_NEAREST; `}
fun gl_LINEAR_MIPMAP_NEAREST: GLTexParameteri `{ return GL_LINEAR_MIPMAP_NEAREST; `}
fun gl_NEAREST_MIPMAP_NINEAR: GLTexParameteri `{ return GL_NEAREST_MIPMAP_LINEAR; `}
fun gl_LINEAR_MIPMAP_LINEAR: GLTexParameteri `{ return GL_LINEAR_MIPMAP_LINEAR; `}
fun gl_CLAMP_TO_EDGE: GLTexParameteri `{ return GL_CLAMP_TO_EDGE; `}
fun gl_MIRRORED_REPEAT: GLTexParameteri `{ return GL_MIRRORED_REPEAT; `}
fun gl_REPEAT: GLTexParameteri `{ return GL_REPEAT; `}

# Target texture
extern class GLTextureTarget
	super GLEnum
end

# Two-dimensional texture
fun gl_TEXTURE_2D: GLTextureTarget `{ return GL_TEXTURE_2D; `}

# Cube map texture
fun gl_TEXTURE_CUBE_MAP: GLTextureTarget `{ return GL_TEXTURE_CUBE_MAP; `}

# TODO GL_TEXTURE_CUBE_MAP_POSITIVE_X, GL_TEXTURE_CUBE_MAP_NEGATIVE_X, GL_TEXTURE_CUBE_MAP_POSITIVE_Y,
# GL_TEXTURE_CUBE_MAP_NEGATIVE_Y, GL_TEXTURE_CUBE_MAP_POSITIVE_Z, GL_TEXTURE_CUBE_MAP_NEGATIVE_Z

# A server-side capability
class GLCap

	# TODO private init

	# Internal OpenGL integer for this capability
	private var val: Int

	# Enable this server-side capability
	fun enable do enable_native(val)
	private fun enable_native(cap: Int) `{ glEnable(cap); `}

	# Disable this server-side capability
	fun disable do disable_native(val)
	private fun disable_native(cap: Int) `{ glDisable(cap); `}

	redef fun hash do return val
	redef fun ==(o) do return o != null and is_same_type(o) and o.hash == self.hash
end

# Generate `n` renderbuffer object names
fun glGenRenderbuffers(n: Int): Array[Int]
do
	var array = new CIntArray(n)
	native_glGenRenderbuffers(n, array.native_array)
	var a = array.to_a
	array.destroy
	return a
end

private fun native_glGenRenderbuffers(n: Int, renderbuffers: NativeCIntArray) `{
	glGenRenderbuffers(n, (GLuint *)renderbuffers);
`}

# Determine if `name` corresponds to a renderbuffer object
fun glIsRenderbuffer(name: Int): Bool `{
	return glIsRenderbuffer(name);
`}

# Delete named renderbuffer objects
fun glDeleteRenderbuffers(renderbuffers: SequenceRead[Int])
do
	var n = renderbuffers.length
	var array = new CIntArray.from(renderbuffers)
	native_glDeleteRenderbuffers(n, array.native_array)
	array.destroy
end

private fun native_glDeleteRenderbuffers(n: Int, renderbuffers: NativeCIntArray) `{
	return glDeleteRenderbuffers(n, (const GLuint *)renderbuffers);
`}

# Attach a renderbuffer object to a framebuffer object
fun glFramebufferRenderbuffer(target: GLFramebufferTarget, attachment: GLAttachment,
                              renderbuffertarget: GLRenderbufferTarget, renderbuffer: Int) `{
	glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
`}

# Establish data storage, `format` and dimensions of the `target` renderbuffer object's image
fun glRenderbufferStorage(target: GLRenderbufferTarget, format: GLRenderbufferFormat, width, height: Int) `{
	glRenderbufferStorage(GL_RENDERBUFFER, format, width, height);
`}

# Format for a renderbuffer
extern class GLRenderbufferFormat
	super GLEnum
end

# 4 red, 4 green, 4 blue, 4 alpha bits format
fun gl_RGBA4: GLRenderbufferFormat `{ return GL_RGBA4; `}

# 5 red, 6 green, 5 blue bits format
fun gl_RGB565: GLRenderbufferFormat `{ return GL_RGB565; `}

# 5 red, 5 green, 5 blue, 1 alpha bits format
fun gl_RGB_A1: GLRenderbufferFormat `{ return GL_RGB5_A1; `}

# 16 depth bits format
fun gl_DEPTH_COMPNENT16: GLRenderbufferFormat `{ return GL_DEPTH_COMPONENT16; `}

# 8 stencil bits format
fun gl_STENCIL_INDEX8: GLRenderbufferFormat `{ return GL_STENCIL_INDEX8; `}

# Renderbuffer attachment point to a framebuffer
extern class GLAttachment
	super GLEnum
end

# First color attachment point
fun gl_COLOR_ATTACHMENT0: GLAttachment `{ return GL_COLOR_ATTACHMENT0; `}

# Depth attachment point
fun gl_DEPTH_ATTACHMENT: GLAttachment `{ return GL_DEPTH_ATTACHMENT; `}

# Stencil attachment
fun gl_STENCIL_ATTACHMENT: GLAttachment `{ return GL_STENCIL_ATTACHMENT; `}

redef class Sys
	private var gles = new GLES is lazy
end

# Entry points to OpenGL ES 2.0 services
fun gl: GLES do return sys.gles

# OpenGL ES 2.0 services
class GLES

	# Specify mapping of depth values from normalized device coordinates to window coordinates
	#
	# Default at `gl_depth_range(0.0, 1.0)`
	fun depth_range(near, far: Float) `{ glDepthRangef(near, far); `}

	# Define front- and back-facing polygons
	#
	# Front-facing polygons are clockwise if `value`, counter-clockwise otherwise.
	fun front_face=(value: Bool) `{ glFrontFace(value? GL_CW: GL_CCW); `}

	# Specify whether front- or back-facing polygons can be culled, default is `back` only
	#
	# One or both of `front` or `back` must be `true`. If you want to deactivate culling
	# use `(new GLCap.cull_face).disable`.
	#
	# Require: `front or back`
	fun cull_face(front, back: Bool)
	do
		assert not (front or back)
		cull_face_native(front, back)
	end

	private fun cull_face_native(front, back: Bool) `{
		glCullFace(front? back? GL_FRONT_AND_BACK: GL_BACK: GL_FRONT);
	`}

	# Last error from OpenGL ES 2.0
	fun error: GLError `{ return glGetError(); `}

	# Query the boolean value at `key`
	private fun get_bool(key: Int): Bool `{
		GLboolean val;
		glGetBooleanv(key, &val);
		return val == GL_TRUE;
	`}

	# Query the floating point value at `key`
	private fun get_float(key: Int): Float `{
		GLfloat val;
		glGetFloatv(key, &val);
		return val;
	`}

	# Query the integer value at `key`
	private fun get_int(key: Int): Int `{
		GLint val;
		glGetIntegerv(key, &val);
		return val;
	`}

	# Does this driver support shader compilation?
	#
	# Should always return `true` in OpenGL ES 2.0 and 3.0.
	fun shader_compiler: Bool do return get_bool(0x8DFA)

	# Enable or disable writing into the depth buffer
	fun depth_mask(value: Bool) `{ glDepthMask(value); `}

	# Set the scale and units used to calculate depth values
	fun polygon_offset(factor, units: Float) `{ glPolygonOffset(factor, units); `}

	# Specify the width of rasterized lines
	fun line_width(width: Float) `{ glLineWidth(width); `}

	# Set the pixel arithmetic for the blending operations
	#
	# Defaultvalues before assignation:
	# * `src_factor`: `GLBlendFactor::one`
	# * `dst_factor`: `GLBlendFactor::zero`
	fun blend_func(src_factor, dst_factor: GLBlendFactor) `{
		glBlendFunc(src_factor, dst_factor);
	`}

	# Specify the value used for depth buffer comparisons
	#
	# Default value is `GLDepthFunc::less`
	#
	# Foreign: glDepthFunc
	fun depth_func(func: GLDepthFunc) `{ glDepthFunc(func); `}

	# Copy a block of pixels from the framebuffer of `fomat` and `typ` at `data`
	#
	# Foreign: glReadPixel
	fun read_pixels(x, y, width, height: Int, format: GLPixelFormat, typ: GLPixelType, data: Pointer) `{
		glReadPixels(x, y, width, height, format, typ, data);
	`}

	# Render primitives from array data
	#
	# Foreign: glDrawArrays
	fun draw_arrays(mode: GLDrawMode, from, count: Int) `{ glDrawArrays(mode, from, count); `}

	# OpenGL server-side capabilities
	var capabilities = new GLCapabilities is lazy
end

# Specify the clear values for the color buffer, default values are at 0.0
fun glClearColor(red, green, blue, alpha: Float) `{
	glClearColor(red, green, blue, alpha);
`}

# Specify the clear `value` for the depth buffer, default at 1.0
fun glClearDepthf(value: Float) `{ glClearDepthf(value); `}

# Specify the clear `value` for the stencil buffer, default at 0
fun glClearStencil(value: Int) `{ glClearStencil(value); `}

# Clear the `buffer`
fun glClear(buffer: GLBuffer) `{ glClear(buffer); `}

# Enable and disable writing of frame buffer color components
fun glColorMask(red, green, blue, alpha: Bool) `{ glColorMask(red, green, blue, alpha); `}

# Set the viewport
fun glViewport(x, y, width, height: Int) `{ glViewport(x, y, width, height); `}

# Block until all GL execution is complete
fun glFinish `{ glFinish(); `}

# Force execution of GL commands in finite time
fun glFlush `{ glFlush(); `}

# Set texture parameters
fun glTexParameteri(target: GLTextureTarget, pname: GLTexParameteriName, param: GLTexParameteri) `{
	glTexParameteri(target, pname, param);
`}

# Name of parameters of textures
extern class GLTexParameteriName
	super GLEnum
end

fun gl_TEXTURE_MIN_FILTER: GLTexParameteriName `{ return GL_TEXTURE_MIN_FILTER; `}
fun gl_TEXTURE_MAG_FILTER: GLTexParameteriName `{ return GL_TEXTURE_MAG_FILTER; `}
fun gl_TEXTURE_WRAP_S: GLTexParameteriName `{ return GL_TEXTURE_WRAP_S; `}
fun gl_TEXTURE_WRAP_T: GLTexParameteriName `{ return GL_TEXTURE_WRAP_T; `}

# Bind `framebuffer` to a framebuffer target
#
# In OpenGL ES 2.0, `target` must be `gl_FRAMEBUFFER`.
fun glBindFramebuffer(target: GLFramebufferTarget, framebuffer: Int) `{
	glBindFramebuffer(target, framebuffer);
`}

# Target of `glBindFramebuffer`
extern class GLFramebufferTarget
	super GLEnum
end

# Target both reading and writing on the framebuffer with `glBindFramebuffer`
fun gl_FRAMEBUFFER: GLFramebufferTarget `{ return GL_FRAMEBUFFER; `}

# Bind `renderbuffer` to a renderbuffer target
#
# In OpenGL ES 2.0, `target` must be `gl_RENDERBUFFER`.
fun glBindRenderbuffer(target: GLRenderbufferTarget, renderbuffer: Int) `{
	glBindRenderbuffer(target, renderbuffer);
`}

# Target of `glBindRenderbuffer`
extern class GLRenderbufferTarget
	super GLEnum
end

# Target a renderbuffer with `glBindRenderbuffer`
fun gl_RENDERBUFFER: GLRenderbufferTarget `{ return GL_RENDERBUFFER; `}

# Specify implementation specific hints
fun glHint(target: GLHintTarget, mode: GLHintMode) `{
	glHint(target, mode);
`}

# Generate and fill set of mipmaps for the texture object `target`
fun glGenerateMipmap(target: GLTextureTarget) `{ glGenerateMipmap(target); `}

# Bind the named `buffer` object
fun glBindBuffer(target: GLArrayBuffer, buffer: Int) `{ glBindBuffer(target, buffer); `}

# Target to which bind the buffer with `glBindBuffer`
extern class GLArrayBuffer
	super GLEnum
end

# Array buffer target
fun gl_ARRAY_BUFFER: GLArrayBuffer `{ return GL_ARRAY_BUFFER; `}

# Element array buffer
fun gl_ELEMENT_ARRAY_BUFFER: GLArrayBuffer `{ return GL_ELEMENT_ARRAY_BUFFER; `}

# Completeness status of a framebuffer object
fun glCheckFramebufferStatus(target: GLFramebufferTarget): GLFramebufferStatus `{
	return glCheckFramebufferStatus(target);
`}

# Return value of `glCheckFramebufferStatus`
extern class GLFramebufferStatus
	super GLEnum

	redef fun to_s
	do
		if self == gl_FRAMEBUFFER_COMPLETE then return "complete"
		if self == gl_FRAMEBUFFER_INCOMPLETE_ATTACHMENT then return "incomplete attachment"
		if self == gl_FRAMEBUFFER_INCOMPLETE_DIMENSIONS then return "incomplete dimension"
		if self == gl_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT then return "incomplete missing attachment"
		if self == gl_FRAMEBUFFER_UNSUPPORTED then return "unsupported"
		return "unknown"
	end
end

# The framebuffer is complete
fun gl_FRAMEBUFFER_COMPLETE: GLFramebufferStatus `{
	return GL_FRAMEBUFFER_COMPLETE;
`}

# Not all framebuffer attachment points are framebuffer attachment complete
fun gl_FRAMEBUFFER_INCOMPLETE_ATTACHMENT: GLFramebufferStatus `{
	return GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT;
`}

# Not all attached images have the same width and height
fun gl_FRAMEBUFFER_INCOMPLETE_DIMENSIONS: GLFramebufferStatus `{
	return GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS;
`}

# No images are attached to the framebuffer
fun gl_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT: GLFramebufferStatus `{
	return GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT;
`}

# The combination of internal formats of the attached images violates an implementation-dependent set of restrictions
fun gl_FRAMEBUFFER_UNSUPPORTED: GLFramebufferStatus `{
	return GL_FRAMEBUFFER_UNSUPPORTED;
`}

# Hint target for `glHint`
extern class GLHintTarget
	super GLEnum
end

# Indicates the quality of filtering when generating mipmap images
fun gl_GENERATE_MIPMAP_HINT: GLHintTarget `{ return GL_GENERATE_MIPMAP_HINT; `}

# Hint mode for `glHint`
extern class GLHintMode
	super GLEnum
end

# The most efficient option should be chosen
fun gl_FASTEST: GLHintMode `{ return GL_FASTEST; `}

# The most correct, or highest quality, option should be chosen
fun gl_NICEST: GLHintMode `{ return GL_NICEST; `}

# No preference
fun gl_DONT_CARE: GLHintMode `{ return GL_DONT_CARE; `}

# Generate `n` framebuffer object names
fun glGenFramebuffers(n: Int): Array[Int]
do
	var array = new CIntArray(n)
	native_glGenFramebuffers(n, array.native_array)
	var a = array.to_a
	array.destroy
	return a
end

private fun native_glGenFramebuffers(n: Int, textures: NativeCIntArray) `{
	glGenFramebuffers(n, (GLuint *)textures);
`}

# Determine if `name` corresponds to a framebuffer object
fun glIsFramebuffer(name: Int): Bool `{
	return glIsFramebuffer(name);
`}

# Delete named framebuffer objects
fun glDeleteFramebuffers(framebuffers: SequenceRead[Int])
do
	var n = framebuffers.length
	var array = new CIntArray.from(framebuffers)
	native_glDeleteFramebuffers(n, array.native_array)
	array.destroy
end

private fun native_glDeleteFramebuffers(n: Int, framebuffers: NativeCIntArray) `{
	return glDeleteFramebuffers(n, (const GLuint *)framebuffers);
`}

# Attach a level of a texture object as a logical buffer to the currently bound framebuffer object
fun glFramebufferTexture2D(target: GLFramebufferTarget, attachment: GLAttachment,
                           texture_target: GLTextureTarget,  texture, level: Int) `{
	glFramebufferTexture2D(target, attachment, texture_target, texture, level);
`}

# Entry point to OpenGL server-side capabilities
class GLCapabilities

	# GL capability: blend the computed fragment color values
	#
	# Foreign: GL_BLEND
	var blend: GLCap is lazy do return new GLCap(0x0BE2)

	# GL capability: cull polygons based of their winding in window coordinates
	#
	# Foreign: GL_CULL_FACE
	var cull_face: GLCap is lazy do return new GLCap(0x0B44)

	# GL capability: do depth comparisons and update the depth buffer
	#
	# Foreign: GL_DEPTH_TEST
	var depth_test: GLCap is lazy do return new GLCap(0x0B71)

	# GL capability: dither color components or indices before they are written to the color buffer
	#
	# Foreign: GL_DITHER
	var dither: GLCap is lazy do return new GLCap(0x0BE2)

	# GL capability: add an offset to depth values of a polygon fragment before depth test
	#
	# Foreign: GL_POLYGON_OFFSET_FILL
	var polygon_offset_fill: GLCap is lazy do return new GLCap(0x8037)

	# GL capability: compute a temporary coverage value where each bit is determined by the alpha value at the corresponding location
	#
	# Foreign: GL_SAMPLE_ALPHA_TO_COVERAGE
	var sample_alpha_to_coverage: GLCap is lazy do return new GLCap(0x809E)

	# GL capability: AND the fragment coverage with the temporary coverage value
	#
	# Foreign: GL_SAMPLE_COVERAGE
	var sample_coverage: GLCap is lazy do return new GLCap(0x80A0)

	# GL capability: discard fragments that are outside the scissor rectangle
	#
	# Foreign: GL_SCISSOR_TEST
	var scissor_test: GLCap is lazy do return new GLCap(0x0C11)

	# GL capability: do stencil testing and update the stencil buffer
	#
	# Foreign: GL_STENCIL_TEST
	var stencil_test: GLCap is lazy do return new GLCap(0x0B90)
end

# Float related data types of OpenGL ES 2.0 shaders
#
# Only data types supported by shader attributes, as seen with
# `GLProgram::active_attrib_type`.
extern class GLFloatDataType
	super GLEnum

	fun is_float: Bool `{ return self == GL_FLOAT; `}
	fun is_float_vec2: Bool `{ return self == GL_FLOAT_VEC2; `}
	fun is_float_vec3: Bool `{ return self == GL_FLOAT_VEC3; `}
	fun is_float_vec4: Bool `{ return self == GL_FLOAT_VEC4; `}
	fun is_float_mat2: Bool `{ return self == GL_FLOAT_MAT2; `}
	fun is_float_mat3: Bool `{ return self == GL_FLOAT_MAT3; `}
	fun is_float_mat4: Bool `{ return self == GL_FLOAT_MAT4; `}

	# Instances of `GLFloatDataType` can be equal to instances of `GLDataType`
	redef fun ==(o)
	do
		return o != null and o isa GLFloatDataType and o.hash == self.hash
	end
end

# All data types of OpenGL ES 2.0 shaders
#
# These types can be used by shader uniforms, as seen with
# `GLProgram::active_uniform_type`.
extern class GLDataType
	super GLFloatDataType

	fun is_int: Bool `{ return self == GL_INT; `}
	fun is_int_vec2: Bool `{ return self == GL_INT_VEC2; `}
	fun is_int_vec3: Bool `{ return self == GL_INT_VEC3; `}
	fun is_int_vec4: Bool `{ return self == GL_INT_VEC4; `}
	fun is_bool: Bool `{ return self == GL_BOOL; `}
	fun is_bool_vec2: Bool `{ return self == GL_BOOL_VEC2; `}
	fun is_bool_vec3: Bool `{ return self == GL_BOOL_VEC3; `}
	fun is_bool_vec4: Bool `{ return self == GL_BOOL_VEC4; `}
	fun is_sampler_2d: Bool `{ return self == GL_SAMPLER_2D; `}
	fun is_sampler_cube: Bool `{ return self == GL_SAMPLER_CUBE; `}
end

# Kind of primitives to render
extern class GLDrawMode
	super GLEnum
end

fun gl_POINTS: GLDrawMode `{ return GL_POINTS; `}
fun gl_LINES: GLDrawMode `{ return GL_LINES; `}
fun gl_LINE_LOOP: GLDrawMode `{ return GL_LINE_LOOP; `}
fun gl_LINE_STRIP: GLDrawMode `{ return GL_LINE_STRIP; `}
fun gl_TRIANGLES: GLDrawMode `{ return GL_TRIANGLES; `}
fun gl_TRIANGLE_STRIP: GLDrawMode `{ return GL_TRIANGLE_STRIP; `}
fun gl_TRIANGLE_FAN: GLDrawMode `{ return GL_TRIANGLE_FAN; `}

# Pixel arithmetic for blending operations
extern class GLBlendFactor
	super GLEnum
end

fun gl_ZERO: GLBlendFactor `{ return GL_ZERO; `}
fun gl_ONE: GLBlendFactor `{ return GL_ONE; `}
fun gl_SRC_COLOR: GLBlendFactor `{ return GL_SRC_COLOR; `}
fun gl_ONE_MINUS_SRC_COLOR: GLBlendFactor `{ return GL_ONE_MINUS_SRC_COLOR; `}
fun gl_SRC_ALPHA: GLBlendFactor `{ return GL_SRC_ALPHA; `}
fun gl_ONE_MINUS_SRC_ALPHA: GLBlendFactor `{ return GL_ONE_MINUS_SRC_ALPHA; `}
fun gl_DST_ALPHA: GLBlendFactor `{ return GL_DST_ALPHA; `}
fun gl_ONE_MINUS_DST_ALPHA: GLBlendFactor `{ return GL_ONE_MINUS_DST_ALPHA; `}
fun gl_DST_COLOR: GLBlendFactor `{ return GL_DST_COLOR; `}
fun gl_ONE_MINUS_DST_COLOR: GLBlendFactor `{ return GL_ONE_MINUS_DST_COLOR; `}
fun gl_SRC_ALPHA_SATURATE: GLBlendFactor `{ return GL_SRC_ALPHA_SATURATE; `}

# Condition under which a pixel will be drawn
extern class GLDepthFunc
	super GLEnum
end

fun gl_NEVER: GLDepthFunc `{ return GL_NEVER; `}
fun gl_LESS: GLDepthFunc `{ return GL_LESS; `}
fun gl_EQUAL: GLDepthFunc `{ return GL_EQUAL; `}
fun gl_LEQUAL: GLDepthFunc `{ return GL_LEQUAL; `}
fun gl_GREATER: GLDepthFunc `{ return GL_GREATER; `}
fun gl_NOTEQUAL: GLDepthFunc `{ return GL_NOTEQUAL; `}
fun gl_GEQUAL: GLDepthFunc `{ return GL_GEQUAL; `}
fun gl_ALWAYS: GLDepthFunc `{ return GL_ALWAYS; `}

# Format of pixel data
extern class GLPixelFormat
	super GLEnum
end

fun gl_ALPHA: GLPixelFormat `{ return GL_ALPHA; `}
fun gl_RGB: GLPixelFormat `{ return GL_RGB; `}
fun gl_RGBA: GLPixelFormat `{ return GL_RGBA; `}

# Data type of pixel data
extern class GLPixelType
	super GLEnum
end

fun gl_UNSIGNED_BYTE: GLPixelType `{ return GL_UNSIGNED_BYTE; `}
fun gl_UNSIGNED_SHORT_5_6_5: GLPixelType `{ return GL_UNSIGNED_SHORT_5_6_5; `}
fun gl_UNSIGNED_SHORT_4_4_4_4: GLPixelType `{ return GL_UNSIGNED_SHORT_4_4_4_4; `}
fun gl_UNSIGNED_SHORT_5_5_5_1: GLPixelType `{ return GL_UNSIGNED_SHORT_5_5_5_1; `}

# Set of buffers as a bitwise OR mask
extern class GLBuffer `{ GLbitfield `}
	# Bitwise OR with `other`
	fun |(other: GLBuffer): GLBuffer `{ return self | other; `}
end

fun gl_DEPTH_BUFFER_BIT: GLBuffer `{ return GL_DEPTH_BUFFER_BIT; `}
fun gl_STENCIL_BUFFER_BIT: GLBuffer `{ return GL_STENCIL_BUFFER_BIT; `}
fun gl_COLOR_BUFFER_BIT: GLBuffer `{ return GL_COLOR_BUFFER_BIT; `}
