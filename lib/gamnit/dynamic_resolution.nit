# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Virtual screen with a resolution independent from the real screen
#
# The attribute `dynamic_resolution_ratio` sets the size of the virtual screen
# in relation to the real screen. See its documentation for more information.
#
# Reference implementation:
# https://software.intel.com/en-us/articles/dynamic-resolution-rendering-on-opengl-es-2
module dynamic_resolution

import performance_analysis

import gamnit

redef class App
	# Resolution of the dynamic screen as ratio of the real screen resolution.
	#
	# - At 1.0, the default, the virtual screen is not used and the visuals are
	#   drawn directly to the real screen and pixels.
	# - When below 1.0, there is less pixels in the dynamic screen than in the
	#   real screen. This reduces the strain on the GPU, especially of high
	#   resolution displays.
	# - Values above 1.0 are not supported at this point, but they would allow
	#   super-sampling.
	#
	# This value must be set either by the user using a video quality slider or
	# by an heuristic according to the device capabilities.
	# A lower value should use less battery power on mobile devices.
	#
	# This value is applied to both X and Y, so it has an exponential effect on
	# the number of pixels.
	var dynamic_resolution_ratio = 1.0 is writable

	# Minimum dynamic screen resolution
	var min_dynamic_resolution_ratio = 0.0125 is writable

	# Maximum dynamic screen resolution, must be set before first draw
	var max_dynamic_resolution_ratio = 1.0 is writable

	private var dynres_program = new DynamicResolutionProgram

	private var perf_clock_dynamic_resolution = new Clock is lazy

	# Real screen framebuffer
	private var screen_framebuffer_cache: Int = -1

	# Real screen framebuffer name
	fun screen_framebuffer: Int
	do
		var cache = screen_framebuffer_cache
		if cache != -1 then return cache

		cache = glGetIntegerv(gl_FRAMEBUFFER_BINDING, 0)
		self.screen_framebuffer_cache = cache
		return cache
	end

	redef fun create_gamnit
	do
		super

		var program = dynres_program
		program.compile_and_link
		var error = program.error
		assert error == null else print_error error

		dynamic_context_cache = null
	end

	redef fun on_resize(display)
	do
		if dynamic_context_cache != null then dynamic_context.resize(display, max_dynamic_resolution_ratio)
		super
	end

	# Prepare to draw to the dynamic screen if `dynamic_resolution_ratio != 1.0`
	protected fun frame_core_dynamic_resolution_before(display: GamnitDisplay)
	do
		# TODO autodetect when to lower/increase resolution

		if dynamic_resolution_ratio == 1.0 then
			# Draw directly to the screen framebuffer
			bind_screen_framebuffer screen_framebuffer
			glViewport(0, 0, display.width, display.height)
			glClear gl_COLOR_BUFFER_BIT | gl_DEPTH_BUFFER_BIT

			assert glGetError == gl_NO_ERROR
			return
		end

		# Draw to our dynamic framebuffer
		glBindFramebuffer(gl_FRAMEBUFFER, dynamic_context.dynamic_framebuffer)

		var ratio = dynamic_resolution_ratio
		ratio = ratio.clamp(min_dynamic_resolution_ratio, max_dynamic_resolution_ratio)
		glViewport(0, 0, (display.width.to_f*ratio).to_i,
						 (display.height.to_f*ratio).to_i)

		glClear gl_COLOR_BUFFER_BIT | gl_DEPTH_BUFFER_BIT

		assert glGetError == gl_NO_ERROR
	end

	# Draw the dynamic screen to the real screen if `dynamic_resolution_ratio != 1.0`
	protected fun frame_core_dynamic_resolution_after(display: GamnitDisplay)
	do
		if dynamic_resolution_ratio == 1.0 then return
		perf_clock_dynamic_resolution.lapse

		var ratio = dynamic_resolution_ratio
		ratio = ratio.clamp(min_dynamic_resolution_ratio, max_dynamic_resolution_ratio)

		bind_screen_framebuffer screen_framebuffer
		glBindBuffer(gl_ARRAY_BUFFER, dynamic_context.buffer_array)
		glViewport(0, 0, display.width, display.height)
		glClear gl_COLOR_BUFFER_BIT | gl_DEPTH_BUFFER_BIT
		dynres_program.use

		# Uniforms
		glActiveTexture gl_TEXTURE0
		glBindTexture(gl_TEXTURE_2D, dynamic_context.texture)
		dynres_program.texture.uniform 0
		dynres_program.ratio.uniform ratio

		# Attributes
		var sizeof_gl_float = 4
		var n_floats = 3
		glEnableVertexAttribArray dynres_program.coord.location
		glVertexAttribPointeri(dynres_program.coord.location, n_floats, gl_FLOAT, false, 0, 0)
		var offset = 4 * n_floats * sizeof_gl_float

		n_floats = 2
		glEnableVertexAttribArray dynres_program.tex_coord.location
		glVertexAttribPointeri(dynres_program.tex_coord.location, n_floats, gl_FLOAT, false, 0, offset)
		assert glGetError == gl_NO_ERROR

		# Draw
		glDrawArrays(gl_TRIANGLE_STRIP, 0, 4)
		assert glGetError == gl_NO_ERROR

		# Take down
		glBindBuffer(gl_ARRAY_BUFFER, 0)
		assert glGetError == gl_NO_ERROR

		sys.perfs["gamnit flat dyn res"].add app.perf_clock_dynamic_resolution.lapse
	end

	# Framebuffer and texture for dynamic resolution intermediate drawing
	private fun dynamic_context: DynamicContext
	do
		var cache = dynamic_context_cache
		if cache != null then return cache

		cache = create_dynamic_context
		dynamic_context_cache = cache
		return cache
	end

	private var dynamic_context_cache: nullable DynamicContext = null

	private fun create_dynamic_context: DynamicContext
	do
		# TODO option or flag to regen on real resolution change.

		var display = display
		assert display != null

		var context = new DynamicContext
		context.prepare_once(display, max_dynamic_resolution_ratio)
		return context
	end
end

# Handles to reused GL buffers and texture
private class DynamicContext

	# Dynamic screen framebuffer
	var dynamic_framebuffer: Int = -1

	# Depth renderbuffer attached to `dynamic_framebuffer`
	var depth_renderbuffer: Int = -1

	# Texture attached to `dynamic_framebuffer` as color attachment
	var texture: Int = -1

	# Buffer name for vertex data
	var buffer_array: Int = -1

	# Prepare all attributes once per resolution change
	fun prepare_once(display: GamnitDisplay, max_dynamic_resolution_ratio: Float)
	do
		# TODO enable antialiasing.

		# Framebuffer
		var framebuffer = glGenFramebuffers(1).first
		glBindFramebuffer(gl_FRAMEBUFFER, framebuffer)
		assert glIsFramebuffer(framebuffer)
		self.dynamic_framebuffer = framebuffer
		assert glGetError == gl_NO_ERROR

		# Depth & texture/color
		var depthbuffer = glGenRenderbuffers(1).first
		self.depth_renderbuffer = depthbuffer
		var texture = glGenTextures(1).first
		self.texture = texture
		assert glGetError == gl_NO_ERROR

		resize(display, max_dynamic_resolution_ratio)
		assert glCheckFramebufferStatus(gl_FRAMEBUFFER) == gl_FRAMEBUFFER_COMPLETE

		# Array buffer
		buffer_array = glGenBuffers(1).first
		glBindBuffer(gl_ARRAY_BUFFER, buffer_array)
		assert glIsBuffer(buffer_array)
		assert glGetError == gl_NO_ERROR

		## coord
		var data = new Array[Float]
		data.add_all([-1.0, -1.0, 0.0,
	                   1.0, -1.0, 0.0,
	                  -1.0,  1.0, 0.0,
	                   1.0,  1.0, 0.0])
		## tex_coord
		data.add_all([0.0, 0.0,
		              1.0, 0.0,
		              0.0, 1.0,
		              1.0, 1.0])
		var c_data = new GLfloatArray.from(data)
		glBufferData(gl_ARRAY_BUFFER, data.length*4, c_data.native_array, gl_STATIC_DRAW)

		glBindBuffer(gl_ARRAY_BUFFER, 0)

		assert glGetError == gl_NO_ERROR
	end

	# Init size or resize `depth_renderbuffer` and `texture`
	fun resize(display: GamnitDisplay, max_dynamic_resolution_ratio: Float)
	do
		var width = (display.width.to_f * max_dynamic_resolution_ratio).to_i
		var height = (display.height.to_f * max_dynamic_resolution_ratio).to_i

		glBindFramebuffer(gl_FRAMEBUFFER, dynamic_framebuffer)

		var depthbuffer = self.depth_renderbuffer
		var texture = self.texture

		# Depth
		glBindRenderbuffer(gl_RENDERBUFFER, depthbuffer)
		assert glIsRenderbuffer(depthbuffer)
		glRenderbufferStorage(gl_RENDERBUFFER, gl_DEPTH_COMPONENT16, width, height)
		glFramebufferRenderbuffer(gl_FRAMEBUFFER, gl_DEPTH_ATTACHMENT, gl_RENDERBUFFER, depthbuffer)
		assert glGetError == gl_NO_ERROR

		# Texture
		glBindTexture(gl_TEXTURE_2D, texture)
		glTexParameteri(gl_TEXTURE_2D, gl_TEXTURE_MIN_FILTER, gl_LINEAR)
		glTexParameteri(gl_TEXTURE_2D, gl_TEXTURE_MAG_FILTER, gl_LINEAR)
		glTexParameteri(gl_TEXTURE_2D, gl_TEXTURE_WRAP_S, gl_CLAMP_TO_EDGE)
		glTexParameteri(gl_TEXTURE_2D, gl_TEXTURE_WRAP_T, gl_CLAMP_TO_EDGE)
		glTexImage2D(gl_TEXTURE_2D, 0, gl_RGB, width, height,
		             0, gl_RGB, gl_UNSIGNED_BYTE, new Pointer.nul)
		glFramebufferTexture2D(gl_FRAMEBUFFER, gl_COLOR_ATTACHMENT0, gl_TEXTURE_2D, texture, 0)

		assert glGetError == gl_NO_ERROR

		# Take down
		glBindRenderbuffer(gl_RENDERBUFFER, 0)
		glBindFramebuffer(gl_FRAMEBUFFER, 0)

		assert glGetError == gl_NO_ERROR
	end

	var destroyed = false
	fun destroy
	do
		if destroyed then return
		destroyed = true

		# Free the buffer
		glDeleteBuffers([buffer_array])
		assert glGetError == gl_NO_ERROR
		buffer_array = -1

		# Free the dynamic framebuffer and its attachments
		glDeleteBuffers([buffer_array])
		glDeleteFramebuffers([dynamic_framebuffer])
		glDeleteRenderbuffers([depth_renderbuffer])
		glDeleteTextures([texture])
	end
end

private class DynamicResolutionProgram
	super GamnitProgramFromSource

	redef var vertex_shader_source = """
		// Vertex coordinates
		attribute vec3 coord;

		// Vertex coordinates on textures
		attribute vec2 tex_coord;

		// Output to the fragment shader
		varying vec2 v_coord;

		void main()
		{
			gl_Position = vec4(coord, 1.0);
			v_coord = tex_coord;
		}
		""" @ glsl_vertex_shader

	redef var fragment_shader_source = """
		precision mediump float;

		// Virtual screen texture / color attachment
		uniform sampler2D texture0;

		// Input from the vertex shader
		varying vec2 v_coord;

		// Ratio of the virtual screen to draw
		uniform float ratio;

		void main()
		{
			gl_FragColor = texture2D(texture0, v_coord*ratio);
		}
		""" @ glsl_fragment_shader

	# Vertices coordinates
	var coord = attributes["coord"].as(AttributeVec3) is lazy

	# Coordinates on the textures, per vertex
	var tex_coord = attributes["tex_coord"].as(AttributeVec2) is lazy

	# Virtual screen texture / color attachment
	var texture = uniforms["texture0"].as(UniformSampler2D) is lazy

	# Ratio of the virtual screen to draw
	var ratio = uniforms["ratio"].as(UniformFloat) is lazy
end
