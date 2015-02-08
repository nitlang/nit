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

	# Get the location of the uniform by `name`
	#
	# Returns `-1` if there is no active uniform named `name`.
	fun uniform_location(name: String): Int import String.to_cstring `{
		GLchar *c_name = String_to_cstring(name);
		return glGetUniformLocation(recv, c_name);
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
		glGetActiveAttrib(recv, index, max_size, NULL, &size, &type, name);
		return name;
	`}

	# Size of the active attribute at `index`
	fun active_attrib_size(index: Int): Int `{
		int size;
		GLenum type;
		glGetActiveAttrib(recv, index, 0, NULL, &size, &type, NULL);
		return size;
	`}

	# Type of the active attribute at `index`
	#
	# May only be float related data types (single float, vectors and matrix).
	fun active_attrib_type(index: Int): GLFloatDataType `{
		int size;
		GLenum type;
		glGetActiveAttrib(recv, index, 0, NULL, &size, &type, NULL);
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
		glGetActiveUniform(recv, index, max_size, NULL, &size, &type, name);
		return name;
	`}

	# Size of the active uniform at `index`
	fun active_uniform_size(index: Int): Int `{
		int size;
		GLenum type;
		glGetActiveUniform(recv, index, 0, NULL, &size, &type, NULL);
		return size;
	`}

	# Type of the active uniform at `index`
	#
	# May be any data type supported by OpenGL ES 2.0 shaders.
	fun active_uniform_type(index: Int): GLDataType `{
		int size;
		GLenum type = 0;
		glGetActiveUniform(recv, index, 0, NULL, &size, &type, NULL);
		return type;
	`}
end

# Abstract OpenGL ES shader object, implemented by `GLFragmentShader` and `GLVertexShader`
extern class GLShader `{GLuint`}
	# Set the source of the shader
	fun source=(code: NativeString) `{
		glShaderSource(recv, 1, (GLchar const **)&code, NULL);
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

# General type for OpenGL enumerations
extern class GLEnum `{ GLenum `}

	redef fun hash `{ return recv; `}

	redef fun ==(o) do return o != null and is_same_type(o) and o.hash == self.hash
end

# An OpenGL ES 2.0 error code
extern class GLError
	super GLEnum

	# Is there no error?
	fun is_ok: Bool do return is_no_error

	# Is this not an error?
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

protected fun assert_no_gl_error
do
	var error = gl.error
	if not error.is_ok then
		print "GL error: {error}"
		abort
	end
end

# Texture minifying function
#
# Used by: `GLES::tex_parameter_min_filter`
extern class GLTextureMinFilter
	super GLEnum

	new nearest `{ return GL_NEAREST; `}
	new linear `{ return GL_LINEAR; `}
end

# Texture magnification function
#
# Used by: `GLES::tex_parameter_mag_filter`
extern class GLTextureMagFilter
	super GLEnum

	new nearest `{ return GL_NEAREST; `}
	new linear `{ return GL_LINEAR; `}
	new nearest_mipmap_nearest `{ return GL_NEAREST_MIPMAP_NEAREST; `}
	new linear_mipmap_nearest `{ return GL_LINEAR_MIPMAP_NEAREST; `}
	new nearest_mipmap_linear `{ return GL_NEAREST_MIPMAP_LINEAR; `}
	new linear_mipmap_linear `{ return GL_LINEAR_MIPMAP_LINEAR; `}
end

# Wrap parameter of a texture
#
# Used by: `tex_parameter_wrap_*`
extern class GLTextureWrap
	super GLEnum

	new clamp_to_edge `{ return GL_CLAMP_TO_EDGE; `}
	new mirrored_repeat `{ return GL_MIRRORED_REPEAT; `}
	new repeat `{ return GL_REPEAT; `}
end

# Target texture
#
# Used by: `tex_parameter_*`
extern class GLTextureTarget
	super GLEnum

	new flat `{ return GL_TEXTURE_2D; `}
	new cube_map `{ return GL_TEXTURE_CUBE_MAP; `}
end

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
redef class Sys
	private var gles = new GLES is lazy
end

# Entry points to OpenGL ES 2.0 services
fun gl: GLES do return sys.gles

# OpenGL ES 2.0 services
class GLES

	# Clear the color buffer to `red`, `green`, `blue` and `alpha`
	fun clear_color(red, green, blue, alpha: Float) `{
		glClearColor(red, green, blue, alpha);
	`}

	# Set the viewport
	fun viewport(x, y, width, height: Int) `{ glViewport(x, y, width, height); `}

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

	# Clear the `buffer`
	fun clear(buffer: GLBuffer) `{ glClear(buffer); `}

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
		glReadPixels(x, y, width, height, GL_RGBA, GL_UNSIGNED_BYTE, data);
	`}

	# Set the texture minifying function
	#
	# Foreign: glTexParameter with GL_TEXTURE_MIN_FILTER
	fun tex_parameter_min_filter(target: GLTextureTarget, value: GLTextureMinFilter) `{
		glTexParameteri(target, GL_TEXTURE_MIN_FILTER, value);
	`}

	# Set the texture magnification function
	#
	# Foreign: glTexParameter with GL_TEXTURE_MAG_FILTER
	fun tex_parameter_mag_filter(target: GLTextureTarget, value: GLTextureMagFilter) `{
		glTexParameteri(target, GL_TEXTURE_MAG_FILTER, value);
	`}

	# Set the texture wrap parameter for coordinates _s_
	#
	# Foreign: glTexParameter with GL_TEXTURE_WRAP_S
	fun tex_parameter_wrap_s(target: GLTextureTarget, value: GLTextureWrap) `{
		glTexParameteri(target, GL_TEXTURE_WRAP_S, value);
	`}

	# Set the texture wrap parameter for coordinates _t_
	#
	# Foreign: glTexParameter with GL_TEXTURE_WRAP_T
	fun tex_parameter_wrap_t(target: GLTextureTarget, value: GLTextureWrap) `{
		glTexParameteri(target, GL_TEXTURE_WRAP_T, value);
	`}

	# Render primitives from array data
	#
	# Foreign: glDrawArrays
	fun draw_arrays(mode: GLDrawMode, from, count: Int) `{ glDrawArrays(mode, from, count); `}

	# OpenGL server-side capabilities
	var capabilities = new GLCapabilities is lazy
end

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

# Entry point to OpenGL server-side capabilities
class GLCapabilities

	# GL capability: blend the computed fragment color values
	#
	# Foreign: GL_BLEND
	fun blend: GLCap is lazy do return new GLCap(0x0BE2)

	# GL capability: cull polygons based of their winding in window coordinates
	#
	# Foreign: GL_CULL_FACE
	fun cull_face: GLCap is lazy do return new GLCap(0x0B44)

	# GL capability: do depth comparisons and update the depth buffer
	#
	# Foreign: GL_DEPTH_TEST
	fun depth_test: GLCap is lazy do return new GLCap(0x0B71)

	# GL capability: dither color components or indices before they are written to the color buffer
	#
	# Foreign: GL_DITHER
	fun dither: GLCap is lazy do return new GLCap(0x0BE2)

	# GL capability: add an offset to depth values of a polygon fragment before depth test
	#
	# Foreign: GL_POLYGON_OFFSET_FILL
	fun polygon_offset_fill: GLCap is lazy do return new GLCap(0x8037)

	# GL capability: compute a temporary coverage value where each bit is determined by the alpha value at the corresponding location
	#
	# Foreign: GL_SAMPLE_ALPHA_TO_COVERAGE
	fun sample_alpha_to_coverage: GLCap is lazy do return new GLCap(0x809E)

	# GL capability: AND the fragment coverage with the temporary coverage value
	#
	# Foreign: GL_SAMPLE_COVERAGE
	fun sample_coverage: GLCap is lazy do return new GLCap(0x80A0)

	# GL capability: discard fragments that are outside the scissor rectangle
	#
	# Foreign: GL_SCISSOR_TEST
	fun scissor_test: GLCap is lazy do return new GLCap(0x0C11)

	# GL capability: do stencil testing and update the stencil buffer
	#
	# Foreign: GL_STENCIL_TEST
	fun stencil_test: GLCap is lazy do return new GLCap(0x0B90)
end

# Float related data types of OpenGL ES 2.0 shaders
#
# Only data types supported by shader attributes, as seen with
# `GLProgram::active_attrib_type`.
extern class GLFloatDataType
	super GLEnum

	fun is_float: Bool `{ return recv == GL_FLOAT; `}
	fun is_float_vec2: Bool `{ return recv == GL_FLOAT_VEC2; `}
	fun is_float_vec3: Bool `{ return recv == GL_FLOAT_VEC3; `}
	fun is_float_vec4: Bool `{ return recv == GL_FLOAT_VEC4; `}
	fun is_float_mat2: Bool `{ return recv == GL_FLOAT_MAT2; `}
	fun is_float_mat3: Bool `{ return recv == GL_FLOAT_MAT3; `}
	fun is_float_mat4: Bool `{ return recv == GL_FLOAT_MAT4; `}

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

	fun is_int: Bool `{ return recv == GL_INT; `}
	fun is_int_vec2: Bool `{ return recv == GL_INT_VEC2; `}
	fun is_int_vec3: Bool `{ return recv == GL_INT_VEC3; `}
	fun is_int_vec4: Bool `{ return recv == GL_INT_VEC4; `}
	fun is_bool: Bool `{ return recv == GL_BOOL; `}
	fun is_bool_vec2: Bool `{ return recv == GL_BOOL_VEC2; `}
	fun is_bool_vec3: Bool `{ return recv == GL_BOOL_VEC3; `}
	fun is_bool_vec4: Bool `{ return recv == GL_BOOL_VEC4; `}
	fun is_sampler_2d: Bool `{ return recv == GL_SAMPLER_2D; `}
	fun is_sampler_cube: Bool `{ return recv == GL_SAMPLER_CUBE; `}
end

# Kind of primitives to render with `GLES::draw_arrays`
extern class GLDrawMode
	super GLEnum

	new points `{ return GL_POINTS; `}
	new line_strip `{ return GL_LINE_STRIP; `}
	new line_loop `{ return GL_LINE_LOOP; `}
	new lines `{ return GL_LINES; `}
	new triangle_strip `{ return GL_TRIANGLE_STRIP; `}
	new triangle_fan `{ return GL_TRIANGLE_FAN; `}
	new triangles `{ return GL_TRIANGLES; `}
end

# Pixel arithmetic for blending operations
#
# Used by `GLES::blend_func`
extern class GLBlendFactor
	super GLEnum

	new zero `{ return GL_ZERO; `}
	new one `{ return GL_ONE; `}
	new src_color `{ return GL_SRC_COLOR; `}
	new one_minus_src_color `{ return GL_ONE_MINUS_SRC_COLOR; `}
	new dst_color `{ return GL_DST_COLOR; `}
	new one_minus_dst_color `{ return GL_ONE_MINUS_DST_COLOR; `}
	new src_alpha `{ return GL_SRC_ALPHA; `}
	new one_minus_src_alpha `{ return GL_ONE_MINUS_SRC_ALPHA; `}
	new dst_alpha `{ return GL_DST_ALPHA; `}
	new one_minus_dst_alpha `{ return GL_ONE_MINUS_DST_ALPHA; `}
	new constant_color `{ return GL_CONSTANT_COLOR; `}
	new one_minus_constant_color `{ return GL_ONE_MINUS_CONSTANT_COLOR; `}
	new constant_alpha `{ return GL_CONSTANT_ALPHA; `}
	new one_minus_constant_alpha `{ return GL_ONE_MINUS_CONSTANT_ALPHA; `}

	# Used for destination only
	new src_alpha_saturate `{ return GL_SRC_ALPHA_SATURATE; `}
end

# Condition under which a pixel will be drawn
#
# Used by `GLES::depth_func`
extern class GLDepthFunc
	super GLEnum

	 new never `{ return GL_NEVER; `}
	 new less `{ return GL_LESS; `}
	 new equal `{ return GL_EQUAL; `}
	 new lequal `{ return GL_LEQUAL; `}
	 new greater `{ return GL_GREATER; `}
	 new not_equal `{ return GL_NOTEQUAL; `}
	 new gequal `{ return GL_GEQUAL; `}
	 new always `{ return GL_ALWAYS; `}
end

# Format of pixel data
#
# Used by `GLES::read_pixels`
extern class GLPixelFormat
	super GLEnum

	new alpha `{ return GL_ALPHA; `}
	new rgb `{ return GL_RGB; `}
	new rgba `{ return GL_RGBA; `}
end

# Data type of pixel data
#
# Used by `GLES::read_pixels`
extern class GLPixelType
	super GLEnum

	new unsigned_byte `{ return GL_UNSIGNED_BYTE; `}
	new unsigned_short_5_6_5 `{ return GL_UNSIGNED_SHORT_5_6_5; `}
	new unsigned_short_4_4_4_4 `{ return GL_UNSIGNED_SHORT_4_4_4_4; `}
	new unsigned_short_5_5_5_1 `{ return GL_UNSIGNED_SHORT_5_5_5_1; `}
end

# Set of buffers as a bitwise OR mask, used by `GLES::clear`
#
# ~~~
# var buffers = (new GLBuffer).color.depth
# gl.clear buffers
# ~~~
extern class GLBuffer `{ GLbitfield `}
	# Get an empty set of buffers
	new `{ return 0; `}

	# Add the color buffer to the returned buffer set
	fun color: GLBuffer `{ return recv | GL_COLOR_BUFFER_BIT; `}

	# Add the depth buffer to the returned buffer set
	fun depth: GLBuffer `{ return recv | GL_DEPTH_BUFFER_BIT; `}

	# Add the stencil buffer to the returned buffer set
	fun stencil: GLBuffer `{ return recv | GL_STENCIL_BUFFER_BIT; `}
end
