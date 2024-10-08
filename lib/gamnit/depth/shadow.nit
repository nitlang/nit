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

# Shadow mapping using a depth texture
#
# The default light does not cast any shadows. It can be changed to a
# `ParallelLight` in client games to cast sun-like shadows:
#
# ~~~
# import more_lights
#
# var sun = new ParallelLight
# sun.pitch = 0.25*pi
# sun.yaw = 0.25*pi
# app.light = sun
# ~~~
module shadow

intrude import gamnit::depth_core

redef class App

	# Resolution of the shadow texture, defaults to 4096 pixels
	#
	# TODO make configurable / ask the hardware for gl_MAX_TEXTURE_SIZE
	var shadow_resolution = 4096

	# Are shadows supported by the current hardware configuration?
	#
	# The implementation may change in the future, but it currently relies on
	# the GL extension `GL_EOS_depth_texture`.
	var supports_shadows: Bool is lazy do
		return display.as(not null).gl_extensions.has("GL_OES_depth_texture")
	end

	# Is `shadow_context.depth_texture` ready to be used?
	fun shadow_depth_texture_available: Bool
	do return supports_shadows and shadow_context.depth_texture != -1

	private var shadow_depth_program = new ShadowDepthProgram

	private var perf_clock_shadow = new Clock is lazy

	redef fun create_gamnit
	do
		super

		var program = shadow_depth_program
		program.compile_and_link
		var error = program.error
		assert error == null else print_error error
	end

	private var shadow_context: ShadowContext = create_shadow_context is lazy

	private fun create_shadow_context: ShadowContext
	do
		var display = display
		assert display != null

		var context = new ShadowContext
		context.prepare_once(display, shadow_resolution)
		return context
	end

	# Update the depth texture from the light point of view
	#
	# This method updates `shadow_context.depth_texture`.
	protected fun frame_core_shadow_prep(display: GamnitDisplay)
	do
		if not supports_shadows then return

		var light = app.light
		if not light isa LightCastingShadows then return

		# Make sure there's no errors pending
		assert glGetError == gl_NO_ERROR

		# Bind the framebuffer and make sure it is OK
		glBindFramebuffer(gl_FRAMEBUFFER, shadow_context.light_view_framebuffer)
		assert glGetError == gl_NO_ERROR
		assert glCheckFramebufferStatus(gl_FRAMEBUFFER) == gl_FRAMEBUFFER_COMPLETE

		# Draw to fill the depth texture and only the depth
		glViewport(0, 0, shadow_resolution, shadow_resolution)
		glColorMask(false, false, false, false)
		glClear gl_COLOR_BUFFER_BIT | gl_DEPTH_BUFFER_BIT
		assert glGetError == gl_NO_ERROR

		# Update light position
		var camera = light.camera
		camera.position.x = app.world_camera.position.x
		camera.position.y = app.world_camera.position.y
		camera.position.z = app.world_camera.position.z

		# Draw all actors
		for actor in actors do
			for leaf in actor.model.leaves do
				leaf.material.draw_depth(actor, leaf, camera)
			end
		end

		# Take down, bring back default values
		bind_screen_framebuffer shadow_context.screen_framebuffer
		glColorMask(true, true, true, true)
	end

	# ---
	# Debug: show light view in the bottom left of the screen

	# Lazy load the debugging program
	private var shadow_debug_program: LightPointOfViewProgram is lazy do
		var program = new LightPointOfViewProgram
		program.compile_and_link
		var error = program.error
		assert error == null else print_error error
		return program
	end

	# Draw the light view in the bottom left of the screen, for debugging only
	#
	# The shadow depth texture is a square that can be deformed by this projection.
	protected fun frame_core_shadow_debug(display: GamnitDisplay)
	do
		if not supports_shadows then
			print_error "Error: Shadows are not supported by the current hardware configuration"
			return
		end

		perf_clock_shadow.lapse

		var program = shadow_debug_program

		glBindBuffer(gl_ARRAY_BUFFER, shadow_context.buffer_array)
		glViewport(0, 0, display.width/3, display.height/3)
		glClear gl_DEPTH_BUFFER_BIT
		program.use

		# Uniforms
		glActiveTexture gl_TEXTURE0
		glBindTexture(gl_TEXTURE_2D, shadow_context.depth_texture)
		program.texture.uniform 0

		# Attributes
		var sizeof_gl_float = 4
		var n_floats = 3
		glEnableVertexAttribArray program.coord.location
		glVertexAttribPointeri(program.coord.location, n_floats, gl_FLOAT, false, 0, 0)
		var offset = 4 * n_floats * sizeof_gl_float

		n_floats = 2
		glEnableVertexAttribArray program.tex_coord.location
		glVertexAttribPointeri(program.tex_coord.location, n_floats, gl_FLOAT, false, 0, offset)
		var gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print_error gl_error

		# Draw
		glDrawArrays(gl_TRIANGLE_STRIP, 0, 4)
		gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print_error gl_error

		# Take down
		glBindBuffer(gl_ARRAY_BUFFER, 0)
		gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print_error gl_error

		sys.perfs["gamnit shadow debug"].add app.perf_clock_shadow.lapse
	end
end

# Handles to reused GL buffers and texture
private class ShadowContext

	# Real screen framebuffer
	var screen_framebuffer: Int = -1

	# Framebuffer for the light point of view
	var light_view_framebuffer: Int = -1

	# Depth attached to `light_view_framebuffer`
	var depth_texture: Int = -1

	# Buffer name for vertex data
	var buffer_array: Int = -1

	# Prepare all attributes once per resolution change
	fun prepare_once(display: GamnitDisplay, shadow_resolution: Int)
	do
		assert display.gl_extensions.has("GL_OES_depth_texture")

		# Set aside the real screen framebuffer name
		var screen_framebuffer = glGetIntegerv(gl_FRAMEBUFFER_BINDING, 0)
		self.screen_framebuffer = screen_framebuffer

		# Framebuffer
		var framebuffer = glGenFramebuffers(1).first
		glBindFramebuffer(gl_FRAMEBUFFER, framebuffer)
		assert glIsFramebuffer(framebuffer)
		self.light_view_framebuffer = framebuffer
		var gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print_error gl_error

		# Depth & texture/color
		var textures = glGenTextures(1)
		self.depth_texture = textures[0]
		gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print_error gl_error

		resize(display, shadow_resolution)

		# Array buffer
		buffer_array = glGenBuffers(1).first
		glBindBuffer(gl_ARRAY_BUFFER, buffer_array)
		assert glIsBuffer(buffer_array)
		gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print_error gl_error

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

		gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print_error gl_error
	end

	# Init size or resize `depth_texture`
	fun resize(display: GamnitDisplay, shadow_resolution: Int)
	do
		glBindFramebuffer(gl_FRAMEBUFFER, light_view_framebuffer)
		var gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print_error gl_error

		# Depth texture
		var depth_texture = self.depth_texture
		glActiveTexture gl_TEXTURE0
		glBindTexture(gl_TEXTURE_2D, depth_texture)
		glTexParameteri(gl_TEXTURE_2D, gl_TEXTURE_MIN_FILTER, gl_LINEAR)
		glTexParameteri(gl_TEXTURE_2D, gl_TEXTURE_MAG_FILTER, gl_NEAREST)
		glTexParameteri(gl_TEXTURE_2D, gl_TEXTURE_WRAP_S, gl_CLAMP_TO_EDGE)
		glTexParameteri(gl_TEXTURE_2D, gl_TEXTURE_WRAP_T, gl_CLAMP_TO_EDGE)
		gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print_error gl_error

		# TODO support hardware shadows with GL ES 3.0 or GL_EXT_shadow_samplers
		#glTexParameteri(gl_TEXTURE_2D, gl_TEXTURE_COMPARE_MODE, ...)

		glTexImage2D(gl_TEXTURE_2D, 0, gl_DEPTH_COMPONENT,
		             shadow_resolution, shadow_resolution,
		             0, gl_DEPTH_COMPONENT, gl_UNSIGNED_SHORT, new Pointer.nul)
		gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print_error gl_error

		glFramebufferTexture2D(gl_FRAMEBUFFER, gl_DEPTH_ATTACHMENT, gl_TEXTURE_2D, depth_texture, 0)
		gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print_error gl_error

		# Check if the framebuffer is complete and valid
		assert glCheckFramebufferStatus(gl_FRAMEBUFFER) == gl_FRAMEBUFFER_COMPLETE

		# Take down
		glBindTexture(gl_TEXTURE_2D, 0)
		glBindFramebuffer(gl_FRAMEBUFFER, 0)
		gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print_error gl_error
	end

	var destroyed = false

	fun destroy
	do
		if destroyed then return
		destroyed = true

		# Free the buffer
		glDeleteBuffers([buffer_array])
		var gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print_error gl_error
		buffer_array = -1

		# Free the array and framebuffer plus its attachments
		glDeleteBuffers([buffer_array])
		glDeleteFramebuffers([light_view_framebuffer])
		glDeleteTextures([depth_texture])
	end
end

redef class Material
	# Optimized draw of `model`, a part of `actor`, from the view of `camera`
	#
	# This drawing should only produce usable depth data. The default behavior,
	# uses `shadow_depth_program`.
	protected fun draw_depth(actor: Actor, model: LeafModel, camera: Camera)
	do
		var program = app.shadow_depth_program
		program.use
		program.mvp.uniform camera.mvp_matrix

		var mesh = model.mesh

		program.translation.uniform(actor.center.x, actor.center.y, actor.center.z, 0.0)
		program.scale.uniform actor.scale
		program.use_map_diffuse.uniform false

		program.tex_coord.array_enabled = true
		program.tex_coord.array(mesh.texture_coords, 2)

		program.coord.array_enabled = true
		program.coord.array(mesh.vertices, 3)

		program.rotation.uniform new Matrix.gamnit_euler_rotation(actor.pitch, actor.yaw, actor.roll)

		if mesh.indices.is_empty then
			glDrawArrays(mesh.draw_mode, 0, mesh.vertices.length/3)
		else
			glDrawElements(mesh.draw_mode, mesh.indices.length, gl_UNSIGNED_SHORT, mesh.indices_c.native_array)
		end
	end

end

# Efficiently draw actors from the light view
class ShadowDepthProgram
	super GamnitProgramFromSource

	redef var vertex_shader_source = """
		// Vertex coordinates
		attribute vec4 coord;

		// Vertex translation
		uniform vec4 translation;

		// Vertex scaling
		uniform float scale;

		// Vertex coordinates on textures
		attribute vec2 tex_coord;

		// Vertex normal
		attribute vec3 normal;

		// Model view projection matrix
		uniform mat4 mvp;

		// Rotation matrix
		uniform mat4 rotation;

		// Output for the fragment shader
		varying vec2 v_tex_coord;

		void main()
		{
			vec4 pos = (vec4(coord.xyz * scale, 1.0) * rotation + translation);
			gl_Position = pos * mvp;

			// Pass varyings to the fragment shader
			v_tex_coord = vec2(tex_coord.x, 1.0 - tex_coord.y);
		}
		""" @ glsl_vertex_shader

	redef var fragment_shader_source = """
		precision mediump float;

		// Diffuse map
		uniform bool use_map_diffuse;
		uniform sampler2D map_diffuse;

		varying vec2 v_tex_coord;

		void main()
		{
			if (use_map_diffuse && texture2D(map_diffuse, v_tex_coord).a <= 0.01) {
				discard;
			}
		}
		""" @ glsl_fragment_shader

	# Vertices coordinates
	var coord = attributes["coord"].as(AttributeVec4) is lazy

	# Should this program use the texture `map_diffuse`?
	var use_map_diffuse = uniforms["use_map_diffuse"].as(UniformBool) is lazy

	# Diffuse texture unit
	var map_diffuse = uniforms["map_diffuse"].as(UniformSampler2D) is lazy

	# Coordinates on the textures, per vertex
	var tex_coord = attributes["tex_coord"].as(AttributeVec2) is lazy

	# Diffuse color
	var diffuse_color = uniforms["diffuse_color"].as(UniformVec4) is lazy

	# Translation applied to each vertex
	var translation = uniforms["translation"].as(UniformVec4) is lazy

	# Rotation matrix
	var rotation = uniforms["rotation"].as(UniformMat4) is lazy

	# Scaling per vertex
	var scale = uniforms["scale"].as(UniformFloat) is lazy

	# Model view projection matrix
	var mvp = uniforms["mvp"].as(UniformMat4) is lazy
end

# Draw the camera point of view on screen
private class LightPointOfViewProgram
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

		void main()
		{
			gl_FragColor = texture2D(texture0, v_coord);
		}
		""" @ glsl_fragment_shader

	# Vertices coordinates
	var coord = attributes["coord"].as(AttributeVec3) is lazy

	# Coordinates on the textures, per vertex
	var tex_coord = attributes["tex_coord"].as(AttributeVec2) is lazy

	# Visible texture
	var texture = uniforms["texture0"].as(UniformSampler2D) is lazy
end
