# This file is part of NIT (https://nitlanguage.org).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#	 http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Services for graphical programs with shaders, attributes and uniforms
module programs

import display
import matrix

private import more_collections

# `Uniform` or `Attribute` of a `GamnitProgram`
class ShaderVariable

	# The `GamnitProgram` to which `self` belongs
	var program: GLProgram

	# Name of `self` in the `program` source
	var name: String

	# Location of `self` in the compiled `program`
	var location: Int

	# Number of elements in this array (1 for scalars and more for vectors)
	var size: Int

	# Is `self` an active uniform or attribute in the `program`?
	#
	# If `false`, the variable may have been optimized out by the compiler.
	fun is_active: Bool do return true

	redef fun to_s do return "<{class_name} name:{name} location:{location} size:{size}"
end

# Inactive shader variable, either optimized out or simple absent from the program
#
# Returned by `GamnitProgram::uniforms` or `GamnitProgram::attributes` when
# the uniform has not been identified as active by the driver.
# Operations on instances of this class have no effects.
#
# Act as a compatibility when a program expect a uniform to exist even in
# a context where the driver's compiler may have optimized it out.
# You must be careful when receiving an `InactiveVariable` as it may also
# silence real program errors, such type in variable name.
abstract class InactiveVariable
	super ShaderVariable

	redef fun is_active do return false
end

# Shader attribute
#
# It will use either the `uniform` value or the data at `array_pointer` if
# and only if `array_enabled`.
class Attribute
	super ShaderVariable

	private var array_enabled_cache = false

	# Is the array attribute enabled?
	fun array_enabled: Bool do return array_enabled_cache

	# Set whether to use the data at `array_pointer` over `uniform`.
	fun array_enabled=(value: Bool)
	do
		if not is_active then return

		glUseProgram program

		self.array_enabled_cache = value
		if value then
			glEnableVertexAttribArray location
		else glDisableVertexAttribArray location
	end

	# Define the `array` of vertex data
	fun array(array: Array[Float], data_per_vertex: Int)
	do
		# TODO move this and native_float_array to a subclass specific to float

		if not is_active then return

		var native = native_float_array
		if native == null or array.length > native.length then
			if native != null then native.finalize
			native = new GLfloatArray.from(array)
			self.native_float_array = native
		else
			native.fill_from(array)
		end

		glVertexAttribPointer(location, data_per_vertex, gl_FLOAT, false, 0, native.native_array)
	end

	private var native_float_array: nullable GLfloatArray = null
end

# Shader attribute of GLSL type `float`
class AttributeFloat
	super Attribute

	# Set the uniform value to use when the vertex array is disabled
	fun uniform(x: Float) do if is_active then glVertexAttrib1f(location, x)
end

# Shader attribute of GLSL type `vec2`
class AttributeVec2
	super Attribute

	# Set the uniform value to use when the vertex array is disabled
	fun uniform(x, y: Float) do if is_active then glVertexAttrib2f(location, x, y)
end

# Shader attribute of GLSL type `vec3`
class AttributeVec3
	super Attribute

	# Set the uniform value to use when the vertex array is disabled
	fun uniform(x, y, z: Float) do if is_active then glVertexAttrib3f(location, x, y, z)
end

# Shader attribute of GLSL type `vec4`
class AttributeVec4
	super Attribute

	# Set the uniform value to use when the vertex array is disabled
	fun uniform(x, y, z, w: Float) do if is_active then glVertexAttrib4f(location, x, y, z, w)
end

# `Attribute` that does not exist or that has been optimized out
class InactiveAttribute
	super InactiveVariable
	super AttributeFloat
	super AttributeVec2
	super AttributeVec3
	super AttributeVec4
end

# Shader uniform
class Uniform
	super ShaderVariable

	private fun uniform_1i(index, x: Int) `{ glUniform1i(index, x); `}
end

# Shader uniform of GLSL type `bool`
class UniformBool
	super Uniform

	# Set this uniform value
	fun uniform(val: Bool) do uniform_1i(location, if val then 1 else 0)
end

# Shader uniform of GLSL type `int`
class UniformInt
	super Uniform

	# Set this uniform value
	fun uniform(val: Int) do uniform_1i(location, val)
end

# Shader uniform of GLSL type `vec4`
class UniformFloat
	super Uniform

	# Set this uniform value
	fun uniform(x: Float) do glUniform1f(location, x)
end

# Shader uniform of GLSL type `vec4`
class UniformVec2
	super Uniform

	# Set this uniform value
	fun uniform(x, y: Float) do glUniform2f(location, x, y)
end

# Shader uniform of GLSL type `vec4`
class UniformVec3
	super Uniform

	# Set this uniform value
	fun uniform(x, y, z: Float) do glUniform3f(location, x, y, z)
end

# Shader uniform of GLSL type `vec4`
class UniformVec4
	super Uniform

	# Set this uniform value
	fun uniform(x, y, z, w: Float) do glUniform4f(location, x, y, z, w)
end

# Shader uniform of GLSL type `sampler2D`
class UniformSampler2D
	super Uniform

	# Set this uniform value
	fun uniform(val: Int) do uniform_1i(location, val)
end

# Shader uniform of GLSL type `mat4`
class UniformMat4
	super Uniform

	private var native_matrix_cache: nullable NativeGLfloatArray = null

	# Set this uniform value
	fun uniform(matrix: Matrix)
	do
		var native = native_matrix_cache
		if native == null then
			native = new NativeGLfloatArray.matrix
			self.native_matrix_cache = native
		end

		matrix.fill_native(native)
		uniform_matrix_4f(location, 1, false, native)
	end

	private fun uniform_matrix_4f(index, count: Int, transpose: Bool, data: NativeGLfloatArray) `{
		glUniformMatrix4fv(index, count, transpose, data);
	`}
end

# `Uniform` that does not exist or that has been optimized out
class InactiveUniform
	super InactiveVariable
	super UniformBool
	super UniformInt
	super UniformFloat
	super UniformSampler2D
	super UniformVec2
	super UniformVec3
	super UniformVec4
	super UniformMat4

	redef fun is_active do return false
end

# Gamnit shader
abstract class Shader

	# TODO add alternative init to load shaders from binary

	# Index of this shader in OpenGL
	private var gl_shader: GLShader is noinit

	# Latest error raised by operations of this shader
	var error: nullable Error = null

	# Source code of this shader
	var source: Text

	# Low-level type of this shader
	private fun gl_shader_type: GLShaderType is abstract

	# Compile this shader and report any errors in the attribute `error`
	fun compile
	do
		# Create
		var gl_shader = glCreateShader(gl_shader_type)
		if not glIsShader(gl_shader) then
			self.error = new Error("Shader creation failed: {glGetError}")
			return
		end
		self.gl_shader = gl_shader

		glShaderSource(gl_shader, source.to_cstring)

		# Compile
		glCompileShader gl_shader
		if not gl_shader.is_compiled then
			self.error = new Error("Shader compilation failed: {glGetShaderInfoLog(gl_shader)}")
			return
		end

		error = gammit_gl_error
	end

	# Has this shader been deleted?
	var deleted = false

	# Delete this shader and free its resources
	fun delete
	do
		if deleted then return

		glDeleteShader gl_shader
		deleted = true
	end
end

# Gamnit vertex shader
class VertexShader
	super Shader

	redef fun gl_shader_type do return gl_VERTEX_SHADER
end

# Gamnit fragment shader
class FragmentShader
	super Shader

	redef fun gl_shader_type do return gl_FRAGMENT_SHADER
end

# Gamnit graphical program
#
# Subclasses should implement both `vertex_shader` and `fragment_shader`.
abstract class GamnitProgram

	# Vertex shader to attach to this program
	fun vertex_shader: VertexShader is abstract

	# Fragment shader to attach to this program
	fun fragment_shader: FragmentShader is abstract

	# Index to the OpenGL ES program, set by `compile_and_link`
	private var gl_program: nullable GLProgram = null

	# Last error raised by `compile_and_link`
	var error: nullable Error = null is protected writable

	# Compile the shaders, and this program, then link and report any errors
	fun compile_and_link
	do
		# Get an index
		var gl_program = glCreateProgram
		if not glIsProgram(gl_program) then
			self.error = new Error("Program creation failed: {glGetError.to_s}")
			return
		end
		self.gl_program = gl_program

		# Vertex shader
		var vertex_shader = vertex_shader
		vertex_shader.compile
		if vertex_shader.error != null then
			self.error = vertex_shader.error
			return
		end

		# Fragment shader
		var fragment_shader = fragment_shader
		fragment_shader.compile
		if fragment_shader.error != null then
			self.error = fragment_shader.error
			return
		end

		# Attach shaders
		glAttachShader(gl_program, vertex_shader.gl_shader)
		glAttachShader(gl_program, fragment_shader.gl_shader)

		# Catch any errors up to here
		var error = gammit_gl_error
		if error != null then
			self.error = error
			return
		end

		# Link
		glLinkProgram gl_program
		if not gl_program.is_linked then
			self.error = new Error("Linking failed: {glGetProgramInfoLog(gl_program)}")
			return
		end

		# Fill the attribute and uniform lists
		var n_attribs = glGetProgramiv(gl_program, gl_ACTIVE_ATTRIBUTES)
		for a in [0..n_attribs[ do
			var name = gl_program.active_attrib_name(a)
			var size = gl_program.active_attrib_size(a)
			var typ = gl_program.active_attrib_type(a)
			var location = gl_program.attrib_location(name)

			# FIXME location may be invalid at this point because
			# attrib_location does not work with truncated names,
			# as returned by `active_attrib_name`.

			var attribute
			if typ == gl_FLOAT then
				attribute = new AttributeFloat(gl_program, name, location, size)
			else if typ == gl_FLOAT_VEC2 then
				attribute = new AttributeVec2(gl_program, name, location, size)
			else if typ == gl_FLOAT_VEC3 then
				attribute = new AttributeVec3(gl_program, name, location, size)
			else if typ == gl_FLOAT_VEC4 then
				attribute = new AttributeVec4(gl_program, name, location, size)
			else
				attribute = new Attribute(gl_program, name, location, size)
			end
			# TODO missing types
			attributes[name] = attribute
		end

		var n_uniforms = glGetProgramiv(gl_program, gl_ACTIVE_UNIFORMS)
		for a in [0..n_uniforms[ do

			var name = gl_program.active_uniform_name(a)
			var size = gl_program.active_uniform_size(a)
			var typ = gl_program.active_uniform_type(a)
			var location = gl_program.uniform_location(name)

			var uniform
			if typ == gl_BOOL then
				uniform = new UniformBool(gl_program, name, location, size)
			else if typ == gl_INT then
				uniform = new UniformInt(gl_program, name, location, size)
			else if typ == gl_SAMPLER_2D then
				uniform = new UniformSampler2D(gl_program, name, location, size)
			else if typ == gl_FLOAT then
				uniform = new UniformFloat(gl_program, name, location, size)
			else if typ == gl_FLOAT_VEC2 then
				uniform = new UniformVec2(gl_program, name, location, size)
			else if typ == gl_FLOAT_VEC3 then
				uniform = new UniformVec3(gl_program, name, location, size)
			else if typ == gl_FLOAT_VEC4 then
				uniform = new UniformVec4(gl_program, name, location, size)
			else if typ == gl_FLOAT_MAT4 then
				uniform = new UniformMat4(gl_program, name, location, size)
			else
				uniform = new Uniform(gl_program, name, location, size)
			end
			# TODO missing types
			uniforms[name] = uniform
		end
	end

	# Diagnose possible problems with the shaders of the program
	#
	# Lists to the console inactive uniforms and attributes.
	# These may not be problematic but they can help to debug the program.
	fun diagnose
	do
		if gl_program == null then compile_and_link

		print "# Diagnose {class_name}"
		for k,v in uniforms do
			if not v.is_active then print "* Uniform {v.name} is inactive"
		end
		for k,v in attributes do
			if not v.is_active then print "* Attribute {v.name} is inactive"
		end
	end

	# Attributes of this program organized by name
	#
	# Active attributes are gathered at `compile_and_link`.
	# Upon request, inactive attributes are returned as a new `InactiveAttribute`.
	var attributes = new AttributeMap(self)

	# Uniforms of this program organized by name
	#
	# Active uniforms are gathered at `compile_and_link`.
	# Upon request, inactive attributes are returned as a new `InactiveUniform`.
	var uniforms = new UniformMap(self)

	# Notify the GPU to use this program
	fun use
	do
		var gl_program = gl_program
		assert gl_program != null # TODO error not compiled, or compile it
		glUseProgram gl_program
	end

	# Has this program been deleted?
	var deleted = false

	# Delete this program if it has not already been deleted
	fun delete
	do
		if deleted then return

		var gl_program = gl_program
		if gl_program != null then glDeleteProgram gl_program

		deleted = true
	end
end

# Gamnit graphical program from the shaders source code
class GamnitProgramFromSource
	super GamnitProgram

	# Source code of the vertex shader
	fun vertex_shader_source: Text is abstract

	redef var vertex_shader = new VertexShader(vertex_shader_source) is lazy

	# Source code of the fragment shader
	fun fragment_shader_source: Text is abstract

	redef var fragment_shader = new FragmentShader(fragment_shader_source) is lazy
end

# Map to organize `ShaderVariable` instances by their name
abstract class ShaderVariableMap[A: ShaderVariable]
	super HashMap[String, A]

	private var program: GamnitProgram

	redef fun [](key)
	do
		# Alter the user specified name to fit the truncated name
		var max_len = max_name_length - 1
		if key isa Text and key.length > max_len then key = key.substring(0, max_len)
		return super(key)
	end

	private fun max_name_length: Int is abstract
end

# Map to organize `Attribute` instances by their name
class AttributeMap
	super ShaderVariableMap[Attribute]

	redef fun provide_default_value(key) do
		return new InactiveAttribute(program.gl_program.as(not null), "", -1, 0)
	end

	redef fun max_name_length do return glGetProgramiv(program.gl_program.as(not null), gl_ACTIVE_ATTRIBUTE_MAX_LENGTH)

	redef fun [](key)
	do
		# Update the location of this attribute from the user specified name
		var item = super
		if key isa Text then item.location = program.gl_program.attrib_location(key.to_s)
		return item
	end
end

# Map to organize `Uniform` instances by their name
class UniformMap
	super ShaderVariableMap[Uniform]

	redef fun provide_default_value(key) do
		return new InactiveUniform(program.gl_program.as(not null), "", -1, 0)
	end

	redef fun max_name_length do return glGetProgramiv(program.gl_program.as(not null), gl_ACTIVE_UNIFORM_MAX_LENGTH)

	redef fun [](key)
	do
		var item = super
		if key isa Text then item.location = program.gl_program.uniform_location(key.to_s)
		return item
	end
end

redef extern class NativeGLfloatArray

	# Allocate a new matrix
	new matrix `{ return malloc(4*4*sizeof(GLfloat)); `}

	# Overwrite this matrix with the identity matrix
	fun set_identity
	do
		for i in [0..4[ do
			for j in [0..4[ do
				matrix_set(i, j, if i == j then 1.0 else 0.0)
			end
		end
	end

	# Get the element at `x, y`
	fun matrix_get(x, y: Int): Float `{ return self[y*4+x]; `}

	# Set the element at `x, y`
	fun matrix_set(x, y: Int, val: Float) `{ self[y*4+x] = val; `}
end

redef class Matrix
	# Copy content of this matrix to a `NativeGLfloatArray`
	fun fill_native(native: NativeGLfloatArray)
	do
		for i in [0..width[ do
			for j in [0..height[ do
				native.matrix_set(i, j, self[i, j])
			end
		end
	end
end

private fun gammit_gl_error: nullable Error
do
	var gl_error = glGetError
	if gl_error == gl_NO_ERROR then return null
	return new Error("GL error: {gl_error}")
end
