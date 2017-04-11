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

# Simple API for 2D games, built around `Sprite` and `App::update`
#
# Client programs should implement `App::update` to execute game logic and
# add instances of `Sprite` to `App::sprites` and `App::ui_sprites`.
# At each frame, all sprites are drawn to the screen.
#
# This system relies on two cameras `App::world_camera` and `App::ui_camera`.
#
# * `App::world_camera` applies a perspective effect to draw the game world.
#   This camera is designed to be moved around to see the world as well as to
#   zoom in and out. It is used to position the sprites in `App::sprites`.
#
# * `App::ui_camera` is a simple orthogonal camera to display UI objects.
#   This camera should mostly be still, it can still move for chock effects
#   and the like. It can be used to standardize the size of the UI across
#   devices. It is used to position the sprites in `App::ui_sprites`.
#
# See the sample game at `contrib/asteronits/` and the basic project template
# at `lib/gamnit/examples/template_flat/`.
module flat

import glesv2
intrude import geometry::points_and_lines # For _x, _y and _z
import matrix::projection
import more_collections
import performance_analysis

import gamnit
import gamnit::cameras
import gamnit::dynamic_resolution
import gamnit::limit_fps
import gamnit::camera_control

# Draw a `texture` at `center`
#
# An instance of `Sprite` can only belong to a single `SpriteSet` at
# a time. The on screen position depends on the camera associated
# to the `SpriteSet`.
class Sprite

	# Texture drawn to screen
	var texture: Texture is writable(texture_direct=)

	# Texture drawn to screen
	fun texture=(value: Texture)
	do
		if isset _texture and value != texture then
			needs_update
			if value.root != texture.root then needs_remap
		end
		texture_direct = value
	end

	# Center position of this sprite in world coordinates
	var center: Point3d[Float] is writable(center_direct=), noautoinit

	# Center position of this sprite in world coordinates
	fun center=(value: Point3d[Float]) is autoinit do
		if isset _center and value != center then
			needs_update
			center.sprites_remove self
		end

		value.sprites_add self
		center_direct = value
	end

	# Rotation on the Z axis, positive values go counterclockwise
	var rotation = 0.0 is writable(rotation_direct=)

	# Rotation on the Z axis, positive values go counterclockwise
	fun rotation=(value: Float)
	do
		if isset _rotation and value != rotation then needs_update
		rotation_direct = value
	end

	# Mirror `texture` horizontally, inverting each pixel on the X axis
	var invert_x = false is writable(invert_x_direct=)

	# Mirror `texture` horizontally, inverting each pixel on the X axis
	fun invert_x=(value: Bool)
	do
		if isset _invert_x and value != invert_x then needs_update
		invert_x_direct = value
	end

	# Scale applied to this sprite
	#
	# The default size of `self` depends on the size in pixels of `texture`.
	var scale = 1.0 is writable(scale_direct=)

	# Scale applied to this sprite, see `scale`
	fun scale=(value: Float)
	do
		if isset _scale and value != scale then needs_update
		scale_direct = value
	end

	# Red tint applied to `texture` on draw
	fun red: Float do return tint[0]

	# Red tint applied to `texture` on draw
	fun red=(value: Float)
	do
		if isset _tint and value != red then needs_update
		tint[0] = value
	end

	# Green tint applied to `texture` on draw
	fun green: Float do return tint[1]

	# Green tint applied to `texture` on draw
	fun green=(value: Float)
	do
		if isset _tint and value != green then needs_update
		tint[1] = value
	end

	# Blue tint applied to `texture` on draw
	fun blue: Float do return tint[2]

	# Blue tint applied to `texture` on draw
	fun blue=(value: Float)
	do
		if isset _tint and value != blue then needs_update
		tint[2] = value
	end

	# Transparency applied to `texture` on draw
	fun alpha: Float do return tint[3]

	# Transparency applied to `texture` on draw
	fun alpha=(value: Float)
	do
		if isset _tint and value != alpha then needs_update
		tint[3] = value
	end

	# Tint applied to `texture` on draw
	#
	# Alternative to the accessors `red, green, blue & alpha`.
	# Changes inside the array do not automatically set `needs_update`.
	#
	# Require: `tint.length == 4`
	var tint: Array[Float] = [1.0, 1.0, 1.0, 1.0] is writable(tint_direct=)

	# Tint applied to `texture` on draw, see `tint`
	fun tint=(value: Array[Float])
	do
		if isset _tint and value != tint then needs_update
		tint_direct = value
	end

	# Is this sprite static and added in bulk?
	#
	# Set to `true` to give a hint to the framework that this sprite won't
	# change often and that it is added in bulk with other static sprites.
	# This value can be ignored in the prototyping phase of a game and
	# added only when better performance are needed.
	var static = false is writable(static_direct=)

	# Is this sprite static and added in bulk? see `static`
	fun static=(value: Bool)
	do
		if isset _static and value != static then needs_remap
		static_direct = value
	end

	# Request an update on the CPU
	#
	# This is called automatically on modification of any value of `Sprite`.
	# However, it can still be set manually if a modification can't be
	# detected or by subclasses.
	fun needs_update
	do
		var c = context
		if c != null then c.sprites_to_update.add self
	end

	# Request a resorting of this sprite in its sprite list
	#
	# Resorting is required when `static` or the root of `texture` changes.
	# This is called automatically when such changes are detected.
	# However, it can still be set manually if a modification can't be
	# detected or by subclasses.
	fun needs_remap
	do
		var l = sprite_set
		if l != null then l.sprites_to_remap.add self
	end

	# Current context to which `self` was sorted
	private var context: nullable SpriteContext = null

	# Current context to which `self` belongs
	private var sprite_set: nullable SpriteSet = null
end

redef class App
	# Default graphic program to draw `sprites`
	private var simple_2d_program = new Simple2dProgram is lazy

	# Camera for world `sprites` and `depth::actors` with perspective
	#
	# By default, the camera is configured to a height of 1080 units
	# of world coordinates at `z == 0.0`.
	var world_camera: EulerCamera is lazy do
		var camera = new EulerCamera(app.display.as(not null))

		# Aim for full HD pixel resolution at level 0
		camera.reset_height 1080.0
		camera.near = 10.0

		return camera
	end

	# Camera for `ui_sprites` using an orthogonal view
	var ui_camera = new UICamera(app.display.as(not null)) is lazy

	# World sprites to draw as seen by `world_camera`
	var sprites: Set[Sprite] = new SpriteSet

	# UI sprites to draw as seen by `ui_camera`, drawn over world `sprites`
	var ui_sprites: Set[Sprite] = new SpriteSet

	# Main method to refine in clients to update game logic and `sprites`
	fun update(dt: Float) do end

	# Display `texture` as a splash screen
	#
	# Load `texture` if needed and resets `ui_camera` to 1080 units on the Y axis.
	fun show_splash_screen(texture: Texture)
	do
		texture.load

		ui_camera.reset_height 1080.0

		var splash = new Sprite(texture, ui_camera.center)
		ui_sprites.add splash

		var display = display
		assert display != null
		glClear gl_COLOR_BUFFER_BIT
		frame_core_ui_sprites display
		display.flip

		ui_sprites.remove splash
	end

	# ---
	# Support and implementation

	# Main clock used to count each frame `dt`, lapsed for `update` only
	private var clock = new Clock is lazy

	# Performance clock to for `frame_core_draw` operations
	private var perf_clock_main = new Clock

	# Second performance clock for smaller operations
	private var perf_clock_sprites = new Clock is lazy

	redef fun on_create
	do
		super

		var display = display
		assert display != null

		var gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print_error gl_error

		# Prepare program
		var program = simple_2d_program
		program.compile_and_link

		var gamnit_error = program.error
		assert gamnit_error == null else print_error gamnit_error

		# Enable blending
		gl.capabilities.blend.enable
		glBlendFunc(gl_SRC_ALPHA, gl_ONE_MINUS_SRC_ALPHA)

		# Enable depth test
		gl.capabilities.depth_test.enable
		glDepthFunc gl_LEQUAL
		glDepthMask true

		# Prepare viewport and background color
		glViewport(0, 0, display.width, display.height)
		glClearColor(0.0, 0.0, 0.0, 1.0)

		gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print_error gl_error

		# Prepare to draw
		for tex in all_root_textures do
			tex.load
			gamnit_error = tex.error
			if gamnit_error != null then print_error gamnit_error

			glTexParameteri(gl_TEXTURE_2D, gl_TEXTURE_MIN_FILTER, gl_LINEAR)
			glTexParameteri(gl_TEXTURE_2D, gl_TEXTURE_MAG_FILTER, gl_LINEAR)
		end
	end

	redef fun on_stop
	do
		# Clean up
		simple_2d_program.delete

		# Close gamnit
		var display = display
		if display != null then display.close
	end

	redef fun frame_core(display)
	do
		# Prepare to draw, clear buffers
		glClear(gl_COLOR_BUFFER_BIT | gl_DEPTH_BUFFER_BIT)

		# Check errors
		var gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print_error gl_error

		# Update game logic and set sprites
		perf_clock_main.lapse
		var dt = clock.lapse.to_f
		update dt
		sys.perfs["gamnit flat update client"].add perf_clock_main.lapse

		# Draw and flip screen
		frame_core_draw display
		display.flip

		# Check errors
		gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print_error gl_error
	end

	# Draw the whole screen, all `glDraw...` calls should be executed here
	protected fun frame_core_draw(display: GamnitDisplay)
	do
		frame_core_dynamic_resolution_before display

		perf_clock_main.lapse
		frame_core_world_sprites display
		perfs["gamnit flat world_sprites"].add perf_clock_main.lapse

		frame_core_ui_sprites display
		perfs["gamnit flat ui_sprites"].add perf_clock_main.lapse

		frame_core_dynamic_resolution_after display
	end

	private fun frame_core_sprites(display: GamnitDisplay, sprite_set: SpriteSet, camera: Camera)
	do
		var simple_2d_program = app.simple_2d_program
		simple_2d_program.use
		simple_2d_program.mvp.uniform camera.mvp_matrix

		# draw
		sprite_set.draw
	end

	# Draw world sprites from `sprites`
	protected fun frame_core_world_sprites(display: GamnitDisplay)
	do
		frame_core_sprites(display, sprites.as(SpriteSet), world_camera)
	end

	# Draw UI sprites from `ui_sprites`
	protected fun frame_core_ui_sprites(display: GamnitDisplay)
	do
		# Reset only the depth buffer
		glClear gl_DEPTH_BUFFER_BIT

		frame_core_sprites(display, ui_sprites.as(SpriteSet), ui_camera)
	end
end

redef class Texture

	# Vertices coordinates of the base geometry
	#
	# Defines the default width and height of related sprites.
	private var vertices: Array[Float] is lazy do
		var w = width
		var h = height
		return [-0.5*w,  0.5*h, 0.0,
		         0.5*w,  0.5*h, 0.0,
		        -0.5*w, -0.5*h, 0.0,
		         0.5*w, -0.5*h, 0.0]
	end

	# Coordinates of this texture on the `root` texture, in `[0..1.0]`
	private var texture_coords: Array[Float] is lazy do
		var l = offset_left
		var r = offset_right
		var b = offset_bottom
		var t = offset_top
		return [l, t,
		        r, t,
		        l, b,
		        r, b]
	end

	# Coordinates of this texture on the `root` texture, inverting the X axis
	private var texture_coords_invert_x: Array[Float] is lazy do
		var l = offset_left
		var r = offset_right
		var b = offset_bottom
		var t = offset_top
		return [r, t,
		        l, t,
		        r, b,
		        l, b]
	end
end

# Graphic program to display simple models with a texture, translation, rotation and scale
private class Simple2dProgram
	super GamnitProgramFromSource

	redef var vertex_shader_source = """
		// Vertex coordinates
		attribute vec4 coord;

		// Vertex color tint
		attribute vec4 color;

		// Vertex translation
		attribute vec4 translation;

		// Vertex scaling
		attribute float scale;

		// Vertex coordinates on textures
		attribute vec2 tex_coord;

		// Model view projection matrix
		uniform mat4 mvp;

		// Rotation matrix
		attribute vec4 rotation_row0;
		attribute vec4 rotation_row1;
		attribute vec4 rotation_row2;
		attribute vec4 rotation_row3;

		mat4 rotation()
		{
			return mat4(rotation_row0, rotation_row1, rotation_row2, rotation_row3);
		}

		// Output to the fragment shader
		varying vec4 v_color;
		varying vec2 v_coord;

		void main()
		{
			gl_Position = (vec4(coord.xyz * scale, 1.0) * rotation() + translation)* mvp;
			v_color = color;
			v_coord = tex_coord;
		}
		""" @ glsl_vertex_shader

	redef var fragment_shader_source = """
		precision mediump float;

		// Does this object use a texture?
		uniform bool use_texture;

		// Texture to apply on this object
		uniform sampler2D texture0;

		// Input from the vertex shader
		varying vec4 v_color;
		varying vec2 v_coord;

		void main()
		{
			if(use_texture) {
				gl_FragColor = v_color * texture2D(texture0, v_coord);
				if (gl_FragColor.a <= 0.1) discard;
			} else {
				gl_FragColor = v_color;
			}
		}
		""" @ glsl_fragment_shader

	# Vertices coordinates
	var coord = attributes["coord"].as(AttributeVec4) is lazy

	# Should this program use the texture `texture`?
	var use_texture = uniforms["use_texture"].as(UniformBool) is lazy

	# Visible texture unit
	var texture = uniforms["texture0"].as(UniformSampler2D) is lazy

	# Coordinates on the textures, per vertex
	var tex_coord = attributes["tex_coord"].as(AttributeVec2) is lazy

	# Color tint per vertex
	var color = attributes["color"].as(AttributeVec4) is lazy

	# Translation applied to each vertex
	var translation = attributes["translation"].as(AttributeVec4) is lazy

	# Rotation matrix, row 0
	var rotation_row0 = attributes["rotation_row0"].as(AttributeVec4) is lazy

	# Rotation matrix, row 1
	var rotation_row1 = attributes["rotation_row1"].as(AttributeVec4) is lazy

	# Rotation matrix, row 2
	var rotation_row2 = attributes["rotation_row2"].as(AttributeVec4) is lazy

	# Rotation matrix, row 3
	var rotation_row3 = attributes["rotation_row3"].as(AttributeVec4) is lazy

	# Scaling per vertex
	var scale = attributes["scale"].as(AttributeFloat) is lazy

	# Model view projection matrix
	var mvp = uniforms["mvp"].as(UniformMat4) is lazy
end

redef class Point3d[N]
	# Get a new `Point3d[Float]` with an offset of each axis of `x, y, z`
	fun offset(x, y, z: Numeric): Point3d[Float]
	do
		return new Point3d[Float](self.x.to_f+x.to_f, self.y.to_f+y.to_f, self.z.to_f+z.to_f)
	end

	# ---
	# Associate each point to its sprites

	private var sprites: nullable Array[Sprite] = null

	private fun sprites_add(sprite: Sprite)
	do
		var sprites = sprites
		if sprites == null then
			sprites = new Array[Sprite]
			self.sprites = sprites
		end
		sprites.add sprite
	end

	private fun sprites_remove(sprite: Sprite)
	do
		var sprites = sprites
		assert sprites != null
		sprites.remove sprite
	end

	# ---
	# Notify `sprites` on attribute modification

	private fun needs_update
	do
		var sprites = sprites
		if sprites != null then for s in sprites do s.needs_update
	end

	redef fun x=(v)
	do
		if isset _x and v != x then needs_update
		super
	end

	redef fun y=(v)
	do
		if isset _y and v != y then needs_update
		super
	end

	redef fun z=(v)
	do
		if isset _z and v != z then needs_update
		super
	end
end

# Set of sprites sorting them into different `SpriteContext`
private class SpriteSet
	super HashSet[Sprite]

	# Map texture then static vs dynamic to a `SpriteContext`
	var contexts_map = new HashMap2[GamnitRootTexture, Bool, SpriteContext]

	# Contexts in `contexts_map`
	var contexts_items = new Array[SpriteContext]

	# Sprites needing resorting in `contexts_map`
	var sprites_to_remap = new Array[Sprite]

	# Add a sprite to the appropriate context
	fun map_sprite(sprite: Sprite)
	do
		assert sprite.context == null else print_error "Sprite {sprite} belongs to another SpriteSet"

		var texture = sprite.texture.root
		var context = contexts_map[texture, sprite.static]

		if context == null then
			var usage = if sprite.static then gl_STATIC_DRAW else gl_DYNAMIC_DRAW
			context = new SpriteContext(texture, usage)

			contexts_map[texture, sprite.static] = context
			contexts_items.add context
		end

		context.sprites.add sprite
		context.sprites_to_update.add sprite

		sprite.context = context
		sprite.sprite_set = self
	end

	# Remove a sprite from its context
	fun unmap_sprite(sprite: Sprite)
	do
		var context = sprite.context
		assert context != null
		context.sprites.remove sprite

		sprite.context = null
		sprite.sprite_set = null
	end

	# Draw all sprites by all contexts
	fun draw
	do
		for sprite in sprites_to_remap do
			unmap_sprite sprite
			map_sprite sprite
		end
		sprites_to_remap.clear

		for context in contexts_items do context.draw
	end

	redef fun add(e)
	do
		if contexts_items.has(e.context) then return
		map_sprite e
		super
	end

	redef fun remove(e)
	do
		super
		if e isa Sprite then unmap_sprite e
	end

	redef fun remove_all(e)
	do
		if not has(e) then return
		remove e
	end

	redef fun clear
	do
		super
		for c in contexts_items do c.destroy
		contexts_map.clear
		contexts_items.clear
	end
end

# Context for calls to `glDrawElements`
#
# Each context has only one `texture` and `usage`, but many sprites.
private class SpriteContext

	# ---
	# Context config and state

	# Only root texture drawn by this context
	var texture: nullable GamnitRootTexture

	# OpenGL ES usage of `buffer_array` and `buffer_element`
	var usage: GLBufferUsage

	# Sprites drawn by this context
	var sprites = new GroupedArray[Sprite]

	# Sprites to update since last `draw`
	var sprites_to_update = new Set[Sprite]

	# Sprites that have been update and for which `needs_update` can be set to false
	var updated_sprites = new Array[Sprite]

	# Buffer size to preallocate at `resize`, multiplied by `sprites.length`
	#
	# Require: `resize_ratio >= 1.0`
	var resize_ratio = 1.2

	# ---
	# OpenGL ES data

	# OpenGL ES buffer name for vertex data
	var buffer_array: Int = -1

	# OpenGL ES buffer name for indices
	var buffer_element: Int = -1

	# Current capacity, in sprites, of `buffer_array` and `buffer_element`
	var buffer_capacity = 0

	# C buffers used to pass the data of a single sprite
	var local_data_buffer = new GLfloatArray(float_per_vertex*4) is lazy
	var local_indices_buffer = new CUInt16Array(indices_per_sprite) is lazy

	# ---
	# Constants

	# Number of GL_FLOAT per vertex of `Simple2dProgram`
	var float_per_vertex: Int is lazy do
		# vec4 translation, vec4 color, vec4 coord,
		# float scale, vec2 tex_coord, vec4 rotation_row*
		return 4 + 4 + 4 +
		       1 + 2 + 4*4
	end

	# Number of bytes per vertex of `Simple2dProgram`
	var bytes_per_vertex: Int is lazy do
		var fs = 4 # sizeof(GL_FLOAT)
		return fs * float_per_vertex
	end

	# Number of bytes per sprite
	var bytes_per_sprite: Int is lazy do return bytes_per_vertex * 4

	# Number of vertex indices per sprite draw call (2 triangles)
	var indices_per_sprite = 6

	# ---
	# Main services

	# Allocate `buffer_array` and `buffer_element`
	fun prepare
	do
		var bufs = glGenBuffers(2)
		buffer_array = bufs[0]
		buffer_element = bufs[1]

		var gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print_error gl_error
	end

	# Destroy `buffer_array` and `buffer_element`
	fun destroy
	do
		glDeleteBuffers([buffer_array, buffer_element])
		var gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print_error gl_error

		buffer_array = -1
		buffer_element = -1
	end

	# Resize `buffer_array` and `buffer_element` to fit all `sprites` (and more)
	fun resize
	do
		app.perf_clock_sprites.lapse

		# Allocate a bit more space
		var capacity = (sprites.capacity.to_f * resize_ratio).to_i

		var array_bytes = capacity * bytes_per_sprite
		glBindBuffer(gl_ARRAY_BUFFER, buffer_array)
		assert glIsBuffer(buffer_array)
		glBufferData(gl_ARRAY_BUFFER, array_bytes, new Pointer.nul, usage)
		var gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print_error gl_error

		# GL_TRIANGLES 6 vertices * sprite
		var n_indices = capacity * indices_per_sprite
		var ius = 2 # sizeof(GL_UNSIGNED_SHORT)
		var element_bytes = n_indices * ius
		glBindBuffer(gl_ELEMENT_ARRAY_BUFFER, buffer_element)
		assert glIsBuffer(buffer_element)
		glBufferData(gl_ELEMENT_ARRAY_BUFFER, element_bytes, new Pointer.nul, usage)
		gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print_error gl_error

		buffer_capacity = capacity

		sys.perfs["gamnit flat gpu resize"].add app.perf_clock_sprites.lapse
	end

	# Update GPU data of `sprite`
	fun update_sprite(sprite: Sprite)
	do
		var sprite_index = sprites.index_of(sprite)
		if sprite_index == -1 then return

		# Vertices data

		var data = local_data_buffer
		var o = 0
		for v in [0..4[ do
			# vec4 translation
			data[o+ 0] = sprite.center.x
			data[o+ 1] = sprite.center.y
			data[o+ 2] = sprite.center.z
			data[o+ 3] = 0.0

			# vec4 color
			data[o+ 4] = sprite.tint[0]
			data[o+ 5] = sprite.tint[1]
			data[o+ 6] = sprite.tint[2]
			data[o+ 7] = sprite.tint[3]

			# float scale
			data[o+ 8] = sprite.scale

			# vec4 coord
			data[o+ 9] = sprite.texture.vertices[v*3+0]
			data[o+10] = sprite.texture.vertices[v*3+1]
			data[o+11] = sprite.texture.vertices[v*3+2]
			data[o+12] = 0.0

			# vec2 tex_coord
			var texture = texture
			if texture != null then
				var tc = if sprite.invert_x then
						sprite.texture.texture_coords_invert_x
					else sprite.texture.texture_coords
				data[o+13] = tc[v*2+0]
				data[o+14] = tc[v*2+1]
			end

			# mat4 rotation
			var rot
			if sprite.rotation == 0.0 then
				# Cache the matrix at no rotation
				rot = once new Matrix.identity(4)
			else
				rot = new Matrix.rotation(sprite.rotation, 0.0, 0.0, 1.0)
			end
			data.fill_from(rot.items, o+15)

			o += float_per_vertex
		end

		glBindBuffer(gl_ARRAY_BUFFER, buffer_array)
		glBufferSubData(gl_ARRAY_BUFFER, sprite_index*bytes_per_sprite, bytes_per_sprite, data.native_array)

		var gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print_error gl_error

		# Element / indices
		#
		# 0--1
		# | /|
		# |/ |
		# 2--3

		var indices = local_indices_buffer
		var io = sprite_index*4
		indices[0] = io+0
		indices[1] = io+2
		indices[2] = io+1
		indices[3] = io+1
		indices[4] = io+2
		indices[5] = io+3

		glBindBuffer(gl_ELEMENT_ARRAY_BUFFER, buffer_element)
		glBufferSubData(gl_ELEMENT_ARRAY_BUFFER, sprite_index*6*2, 6*2, indices.native_array)

		gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print_error gl_error
	end

	# Draw all `sprites`
	#
	# Call `resize` and `update_sprite` as needed before actual draw operation.
	#
	# Require: `app.simple_2d_program` and `mvp` must be bound on the GPU
	fun draw
	do
		if buffer_array == -1 then prepare

		assert buffer_array > 0 and buffer_element > 0 else
			print_error "Internal error: {self} was destroyed"
		end

		# Setup
		glBindBuffer(gl_ARRAY_BUFFER, buffer_array)
		glBindBuffer(gl_ELEMENT_ARRAY_BUFFER, buffer_element)

		# Resize GPU buffers?
		if sprites.capacity > buffer_capacity then
			# Try to defragment first
			var moved = sprites.defragment

			if sprites.capacity > buffer_capacity then
				# Defragmentation wasn't enough, grow
				resize

				# We must update everything
				for s in sprites.items do if s != null then sprites_to_update.add s
			else
				# Just update the moved sprites
				for s in moved do sprites_to_update.add s
			end
		else if sprites.available.not_empty then
			# Defragment a bit anyway
			# TODO defrag only when there's time left on a frame
			var moved = sprites.defragment(1)
			for s in moved do sprites_to_update.add s
		end

		# Update GPU sprites data
		if sprites_to_update.not_empty then
			app.perf_clock_sprites.lapse

			for sprite in sprites_to_update do update_sprite(sprite)
			sprites_to_update.clear

			sys.perfs["gamnit flat gpu update"].add app.perf_clock_sprites.lapse
		end

		# Update uniforms specific to this context
		var texture = texture
		app.simple_2d_program.use_texture.uniform texture != null
		if texture != null then
			glActiveTexture gl_TEXTURE0
			glBindTexture(gl_TEXTURE_2D, texture.gl_texture)
			app.simple_2d_program.texture.uniform 0
		end
		var gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print_error gl_error

		# Configure attributes, in order:
		# vec4 translation, vec4 color, float scale, vec4 coord, vec2 tex_coord, vec4 rotation_row*
		var offset = 0
		var p = app.simple_2d_program
		var sizeof_gl_float = 4 # sizeof(GL_FLOAT)

		var size = 4 # Number of floats
		glEnableVertexAttribArray p.translation.location
		glVertexAttribPointeri(p.translation.location, size, gl_FLOAT, false, bytes_per_vertex, offset)
		offset += size * sizeof_gl_float
		gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print_error gl_error

		size = 4
		glEnableVertexAttribArray p.color.location
		glVertexAttribPointeri(p.color.location, size, gl_FLOAT, false, bytes_per_vertex, offset)
		offset += size * sizeof_gl_float
		gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print_error gl_error

		size = 1
		glEnableVertexAttribArray p.scale.location
		glVertexAttribPointeri(p.scale.location, size, gl_FLOAT, false, bytes_per_vertex, offset)
		offset += size * sizeof_gl_float
		gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print_error gl_error

		size = 4
		glEnableVertexAttribArray p.coord.location
		glVertexAttribPointeri(p.coord.location, size, gl_FLOAT, false, bytes_per_vertex, offset)
		offset += size * sizeof_gl_float
		gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print_error gl_error

		size = 2
		glEnableVertexAttribArray p.tex_coord.location
		glVertexAttribPointeri(p.tex_coord.location, size, gl_FLOAT, false, bytes_per_vertex, offset)
		offset += size * sizeof_gl_float
		gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print_error gl_error

		size = 4
		for r in [p.rotation_row0, p.rotation_row1, p.rotation_row2, p.rotation_row3] do
			if r.is_active then
				glEnableVertexAttribArray r.location
				glVertexAttribPointeri(r.location, size, gl_FLOAT, false, bytes_per_vertex, offset)
			end
			offset += size * sizeof_gl_float
			gl_error = glGetError
			assert gl_error == gl_NO_ERROR else print_error gl_error
		end

		# Actual draw
		for s in sprites.starts, e in sprites.ends do
			var l = e-s
			glDrawElementsi(gl_TRIANGLES, l*indices_per_sprite, gl_UNSIGNED_SHORT, 2*s*indices_per_sprite)
			gl_error = glGetError
			assert gl_error == gl_NO_ERROR else print_error gl_error
		end

		# Take down
		for attr in [p.translation, p.color, p.scale, p.coord, p.tex_coord,
		             p.rotation_row0, p.rotation_row1, p.rotation_row2, p.rotation_row3: Attribute] do
			if not attr.is_active then continue
			glDisableVertexAttribArray(attr.location)
			gl_error = glGetError
			assert gl_error == gl_NO_ERROR else print_error gl_error
		end

		glBindBuffer(gl_ARRAY_BUFFER, 0)
		glBindBuffer(gl_ELEMENT_ARRAY_BUFFER, 0)
		gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print_error gl_error
	end
end

# Representation of sprite data on the GPU
#
# The main purpose of this class is to optimize the use of contiguous
# space in GPU memory. Each contiguous memory block can be drawn in a
# single call. The starts index of each block is kept by `starts,
# and the end + 1 by `ends`.
#
# The data can be compressed by a call to `defragment`.
#
# ~~~
# var array = new GroupedArray[String]
# assert array.to_s == ""
#
# array.add "a"
# array.add "b"
# array.add "c"
# array.add "d"
# array.add "e"
# array.add "f"
# assert array.to_s == "[a,b,c,d,e,f]"
# assert array.capacity == 6
#
# array.remove "a"
# assert array.to_s == "[b,c,d,e,f]"
#
# array.remove "b"
# assert array.to_s == "[c,d,e,f]"
#
# array.remove "f"
# assert array.to_s == "[c,d,e]"
#
# array.remove "d"
# assert array.to_s == "[c][e]"
#
# array.add "A"
# assert array.to_s == "[A][c][e]"
#
# array.add "B"
# assert array.to_s == "[A,B,c][e]"
#
# array.remove "e"
# assert array.to_s == "[A,B,c]"
#
# array.add "D"
# assert array.to_s == "[A,B,c,D]"
#
# array.add "E"
# assert array.to_s == "[A,B,c,D,E]"
# assert array.capacity == 5
# assert array.length == 5
#
# array.remove "A"
# array.remove "B"
# array.remove "c"
# array.remove "D"
# array.remove "E"
# assert array.to_s == ""
#
# array.add "a"
# assert array.to_s == "[a]"
# ~~~
private class GroupedArray[E]

	# Memory with actual objects, and null in empty slots
	var items = new Array[nullable E]

	# Number of items in the array
	var length = 0

	# Number of item slots in the array
	fun capacity: Int do return items.length

	# Index of `item`
	fun index_of(item: E): Int do return items.index_of(item)

	# List of available slots
	var available = new MinHeap[Int].default

	# Start index of filled chunks
	var starts = new List[Int]

	# Index of the spots after filled chunks
	var ends = new List[Int]

	# Add `item` to the first available slot
	fun add(item: E)
	do
		length += 1

		if available.not_empty then
			# starts & ends can't be empty

			var i = available.take
			items[i] = item

			if i == starts.first - 1 then
				# slot 0 free, 1 taken
				starts.first -= 1
			else if i == 0 then
				# slot 0 and more free
				starts.unshift 0
				ends.unshift 1
			else if starts.length >= 2 and ends.first + 1 == starts[1] then
				# merge 2 chunks
				ends.remove_at 0
				starts.remove_at 1
			else
				# at end of first chunk
				ends.first += 1
			end
			return
		end

		items.add item
		if ends.is_empty then
			starts.add 0
			ends.add 1
		else ends.last += 1
	end

	# Remove the first instance of `item`
	fun remove(item: E)
	do
		var i = items.index_of(item)
		assert i != -1
		length -= 1
		items[i] = null

		var ii = 0
		for s in starts, e in ends do
			if s <= i and i < e then
				if s == e-1 then
					# single item chunk
					starts.remove_at ii
					ends.remove_at ii

					if starts.is_empty then
						items.clear
						available.clear
						return
					end
				else if e-1 == i then
					# last item of chunk
					ends[ii] -= 1

				else if s == i then
					# first item of chunk
					starts[ii] += 1
				else
					# break up chunk
					ends.insert(ends[ii], ii+1)
					ends[ii] = i
					starts.insert(i+1, ii+1)
				end

				available.add i
				return
			end
			ii += 1
		end

		abort
	end

	# Defragment and compress everything into a single chunks beginning at 0
	#
	# Returns the elements that moved as a list.
	#
	# ~~~
	# var array = new GroupedArray[String]
	# array.add "a"
	# array.add "b"
	# array.add "c"
	# array.add "d"
	# array.remove "c"
	# array.remove "a"
	# assert array.to_s == "[b][d]"
	#
	# var moved = array.defragment
	# assert moved.to_s == "[d]"
	# assert array.to_s == "[d,b]"
	# assert array.length == 2
	# assert array.capacity == 2
	#
	# array.add "e"
	# array.add "f"
	# assert array.to_s == "[d,b,e,f]"
	# ~~~
	fun defragment(max: nullable Int): Array[E]
	do
		app.perf_clock_sprites.lapse
		max = max or else length

		var moved = new Array[E]
		while max > 0 and (starts.length > 1 or starts.first != 0) do
			var i = ends.last - 1
			var e = items[i]
			remove e
			add e
			moved.add e
			max -= 1
		end

		if starts.length == 1 and starts.first == 0 then
			for i in [length..capacity[ do items.pop
			available.clear
		end

		sys.perfs["gamnit flat gpu defrag"].add app.perf_clock_sprites.lapse
		return moved
	end

	redef fun to_s
	do
		var ss = new Array[String]
		for s in starts, e in ends do
			ss.add "["
			for i in [s..e[ do
				var item: nullable Object = items[i]
				if item == null then item = "null"
				ss.add item.to_s
				if i != e-1 then ss.add ","
			end
			ss.add "]"
		end
		return ss.join
	end
end
