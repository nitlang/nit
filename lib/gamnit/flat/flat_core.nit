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

# Core services for the `flat` API for 2D games
module flat_core

import glesv2
intrude import geometry::points_and_lines # For _x, _y and _z
intrude import matrix
import matrix::projection
import more_collections
import performance_analysis

import gamnit
intrude import gamnit::cameras
intrude import gamnit::cameras_cache
import gamnit::dynamic_resolution

# Visible 2D entity in the game world or UI
#
# Similar to `gamnit::Actor` which is in 3D.
#
# Each sprite associates a `texture` to the position `center`.
# The appearance is modified by `rotation`, `invert_x`,
# `scale`, `red`, `green`, `blue` and `alpha`.
# These values can be changed at any time and will trigger an update
# of the data on the GPU side, having a small performance cost.
#
# For a sprite to be visible, it must be added to either the world `sprites`
# or the `ui_sprites`.
# However, an instance of `Sprite` can only belong to a single `SpriteSet`
# at a time. The final on-screen position depends on the camera associated
# to the `SpriteSet`.
#
# ~~~
# # Load texture and create sprite
# var texture = new Texture("path/in/assets.png")
# var sprite = new Sprite(texture, new Point3d[Float](0.0, 0.0, 0.0))
#
# # Add sprite to the visible game world
# app.sprites.add sprite
#
# # Extra configuration of the sprite
# sprite.rotation = pi/2.0
# sprite.scale = 2.0
#
# # Show only the blue colors
# sprite.red = 0.0
# sprite.green = 0.0
# ~~~
#
# To add a sprite to the UI it can be anchored to screen borders
# with `ui_camera.top_left` and the likes.
#
# ~~~nitish
# # Place it a bit off the top left of the screen
# var pos = app.ui_camera.top_left.offset(128.0, -128.0, 0)
#
# # Load texture and create sprite
# var texture = new Texture("path/in/assets.png")
# var sprite = new Sprite(texture, pos)
#
# # Add it to the UI (above world sprites)
# app.ui_sprites.add sprite
# ~~~
class Sprite

	# Texture drawn to screen
	var texture: Texture is writable(texture_direct=)

	# Texture drawn to screen
	fun texture=(texture: Texture)
	do
		if isset _texture and texture != self.texture then
			needs_update
			if texture.root != self.texture.root then needs_remap
		end
		texture_direct = texture
	end

	# Center position of this sprite in world coordinates
	var center: Point3d[Float] is writable(center_direct=), noautoinit

	# Center position of this sprite in world coordinates
	fun center=(center: Point3d[Float]) is autoinit do
		if isset _center and center != self.center then
			needs_update
			self.center.sprites_remove self
		end

		center.sprites_add self
		center_direct = center
	end

	# Last animation set with `animate`
	var animation: nullable Animation = null

	# Animation on the shader, if this changes it `needs_remap`
	private var shader_animation: nullable Animation = null

	# Animation start time, relative to `sprite_set.time`
	#
	# At -1.0 if animation started before being assigned a `sprite_set`.
	private var animation_start = 0.0

	# Number of loops to show `animation`
	private var animation_loops = 0.0

	# Start the `animation` for `n_loops`, replacing the static `texture`
	#
	# By default, if `n_loops` is not set, the animation plays once.
	# If `n_loops == -1.0` then the animation loops infinitely.
	# Otherwise, the animation repeats, e.g. it repeats twice and a half
	# if `n_loops == 2.5`.
	#
	# The animation can be stopped using `animate_stop`.
	fun animate(animation: Animation, n_loops: nullable Float)
	do
		if not animation.valid then print_error "{class_name}::animate: invalid animation {animation}"

		var shader_animation = shader_animation
		if shader_animation == null or animation.frames.first.root != shader_animation.frames.first.root then
			# Resort with the new animation texture
			needs_remap
		else
			needs_update
		end

		var sprite_set = sprite_set
		animation_start = if sprite_set != null then sprite_set.time else -1.0
		animation_loops = n_loops or else 1.0
		self.shader_animation = animation
		self.animation = animation
	end

	# Stop any active `animation` to display the static `texture`
	fun animate_stop
	do
		if animation == null then return
		needs_update
		animation = null
	end

	# Rotation on the Z axis, positive values turn counterclockwise
	var rotation = 0.0 is writable(rotation_direct=)

	# Rotation on the Z axis, positive values turn counterclockwise
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
	# The basic size of `self` depends on the size in pixels of `texture`.
	var scale = 1.0 is writable(scale_direct=)

	# Scale applied to this sprite
	#
	# The basic size of `self` depends on the size in pixels of `texture`.
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

	# Draw order, higher values cause this sprite to be drawn latter
	#
	# Change this value to avoid artifacts when drawing non-opaque sprites.
	# In general, sprites with a non-opaque `texture` and sprites closer to
	# the camera should have a higher value to be drawn last.
	#
	# Sprites sharing a `draw_order` are drawn in the same pass.
	# The sprite to sprite draw order is undefined and may change when adding
	# and removing sprites, or changing their attributes.
	#
	# ### Warning
	#
	# Changing this value may have a negative performance impact if there are
	# many different `draw_order` values across many sprites.
	# Sprites sharing some attributes are drawn as group to reduce
	# the communication overhead between the CPU and GPU,
	# and changing `draw_order` may break up large groups into smaller groups.
	var draw_order = 0 is writable(draw_order_direct=)

	# Set draw order,  see `draw_order`
	fun draw_order=(value: Int)
	do
		if isset _draw_order and value != draw_order then needs_remap
		draw_order_direct = value
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
		if c == null then return
		if c.last_sprite_to_update == self then return
		c.sprites_to_update.add self
		c.last_sprite_to_update = self
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

	# Index in `context`
	private var context_index: Int = -1

	# Current context to which `self` belongs
	private var sprite_set: nullable SpriteSet = null
end

# Animation for sprites, set with `Sprite.animate`
#
# Two main services create animations:
# * The constructors accepts an array of textures and the number of frames per
#   seconds: `new Animation(array_of_subtextures, 10.0)`
# * The method `Texture::to_animation` uses the whole texture
#   dividing it in frames either on X or Y:
#   `new Texture("path/in/assets.png").to_animation(30.0, 0, 12)`
class Animation

	# Frames composing this animation
	#
	# All frames must share the same `Texture::root`, be on a vertical or
	# horizontal line, be spaced equally and share the same dimensions.
	var frames: SequenceRead[Texture]

	# Frames per seconds, a higher value makes this animation faster
	#
	# The animation speed is also affected by `SpriteSet::time_mod`.
	var fps: Float

	# Are the `frames` valid for an animation? (see the requirements in `frames`)
	var valid: Bool is lazy do
		var r: nullable RootTexture = null
		for f in frames do
			if r == null then
				r = f.root
			else
				if r != f.root then return false
			end
		end

		# TODO check for line, constant distance, and same aspect ratio.

		return true
	end
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

	# World sprites drawn as seen by `world_camera`
	var sprites = new SpriteSet

	# UI sprites drawn as seen by `ui_camera`, over world `sprites`
	var ui_sprites = new SpriteSet

	# Main method to refine in clients to update game logic and `sprites`
	fun update(dt: Float) do end

	# Display `texture` as a splash screen
	#
	# Load `texture` if needed and resets `ui_camera` to 1080 units on the Y axis.
	fun show_splash_screen(texture: Texture)
	do
		texture.load

		var splash = new Sprite(texture, ui_camera.center.offset(0.0, 0.0, 0.0))
		ui_sprites.add splash

		var display = display
		assert display != null
		glClear gl_COLOR_BUFFER_BIT

		ui_camera.reset_height 1080.0
		glViewport(0, 0, display.width, display.height)
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

	redef fun create_gamnit
	do
		super
		create_flat
	end

	# Prepare the flat framework services
	fun create_flat
	do
		var display = display
		assert display != null

		assert glGetError == gl_NO_ERROR

		# Prepare program
		var program = simple_2d_program
		program.compile_and_link

		var gamnit_error = program.error
		assert gamnit_error == null else print_error gamnit_error

		# Enable blending
		gl.capabilities.blend.enable
		glBlendFunc(gl_ONE, gl_ONE_MINUS_SRC_ALPHA)

		# Enable depth test
		gl.capabilities.depth_test.enable
		glDepthFunc gl_LEQUAL
		glDepthMask true

		# Prepare viewport and background color
		glViewport(0, 0, display.width, display.height)
		glClearColor(0.0, 0.0, 0.0, 1.0)

		assert glGetError == gl_NO_ERROR

		# Prepare to draw
		for tex in all_root_textures do
			tex.load
			gamnit_error = tex.error
			if gamnit_error != null then print_error gamnit_error

			glTexParameteri(gl_TEXTURE_2D, gl_TEXTURE_MIN_FILTER, gl_LINEAR)
			glTexParameteri(gl_TEXTURE_2D, gl_TEXTURE_MAG_FILTER, gl_LINEAR)
		end

		sprites.reset
		ui_sprites.reset
	end

	redef fun on_stop
	do
		super

		# Close gamnit
		var display = display
		if display != null then display.close
	end

	redef fun on_resize(display)
	do
		super

		world_camera.mvp_matrix_cache = null
		ui_camera.mvp_matrix_cache = null

		# Update all sprites in the UI
		for sprite in ui_sprites do sprite.needs_update
	end

	redef fun on_resume
	do
		clock.lapse
		super
	end

	redef fun frame_core(display)
	do
		# Check errors
		assert glGetError == gl_NO_ERROR

		# Update game logic and set sprites
		perf_clock_main.lapse
		var dt = clock.lapse.to_f
		update dt
		frame_dt = dt
		sys.perfs["gamnit flat update client"].add perf_clock_main.lapse

		# Draw and flip screen
		frame_core_draw display
		display.flip

		# Check errors
		assert glGetError == gl_NO_ERROR
	end

	private var frame_dt = 0.0

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

		sprite_set.time += frame_dt*sprite_set.time_mod
		simple_2d_program.time.uniform sprite_set.time

		# draw
		sprite_set.draw

		assert glGetError == gl_NO_ERROR
	end

	# Draw world sprites from `sprites`
	protected fun frame_core_world_sprites(display: GamnitDisplay)
	do
		frame_core_sprites(display, sprites, world_camera)
	end

	# Draw UI sprites from `ui_sprites`
	protected fun frame_core_ui_sprites(display: GamnitDisplay)
	do
		# Reset only the depth buffer
		glClear gl_DEPTH_BUFFER_BIT

		frame_core_sprites(display, ui_sprites, ui_camera)
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

	# Convert to a sprite animation at `fps` speed with `x` or `y` frames
	#
	# The arguments `x` and `y` set the number of frames in the texture.
	# Use `x` for an horizontal arrangement or `y` for vertical.
	# One and only one of the arguments must be different than 0,
	# as an animation can only be on a line and cannot wrap.
	fun to_animation(fps: Float, x, y: Int): Animation
	do
		assert (x == 0) != (y == 0)

		var n_frames = x.max(y)
		var frames = new Array[Texture]

		var dx = (x/n_frames).to_f/n_frames.to_f
		var dy = (y/n_frames).to_f/n_frames.to_f
		var w = if x == 0 then 1.0 else dx
		var h = if y == 0 then 1.0 else dy
		var left = 0.0
		var top = 0.0
		for i in n_frames.times do
			frames.add new RelativeSubtexture(root, left, top, left+w, top+h)
			left += dx
			top += dy
		end

		return new Animation(frames, fps)
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

		// Current world time, in seconds
		uniform float time;

		// Rotation matrix
		attribute vec4 rotation_row0;
		attribute vec4 rotation_row1;
		attribute vec4 rotation_row2;
		attribute vec4 rotation_row3;

		// Animation speed, frames per seconds
		attribute float a_fps;

		// Number of frames in the animation
		attribute float a_n_frames;

		// World coordinate of the animation (for aspect ratio)
		attribute vec2 a_coord;

		// Animation texture coordinates of the first frame
		attribute vec2 a_tex_coord;

		// Animation texture coordinates difference between frames
		attribute vec2 a_tex_diff;

		// Animation start time, in reference to `time`
		attribute float a_start;

		// Number of loops to play of the animation
		attribute float a_loops;

		mat4 rotation()
		{
			return mat4(rotation_row0, rotation_row1, rotation_row2, rotation_row3);
		}

		// Output to the fragment shader
		varying vec4 v_color;
		varying vec2 v_coord;

		// Is there an active animation?
		varying float v_animated;

		void main()
		{
			vec3 c; // coords

			float end = a_start + a_loops/a_fps*a_n_frames;
			if (a_fps != 0.0 && (a_loops == -1.0 || time < end)) {
				// in animation
				float frame = mod(floor((time-a_start)*a_fps), a_n_frames);
				v_coord = a_tex_coord + a_tex_diff*frame;
				c = vec3(a_coord, coord.z);
				v_animated = 1.0;
			} else {
				// static
				v_coord = tex_coord;
				c = coord.xyz;
				v_animated = 0.0;
			}

			gl_Position = (vec4(c * scale, 1.0) * rotation() + translation)* mvp;
			v_color = vec4(color.rgb*color.a, color.a);
		}
		""" @ glsl_vertex_shader

	redef var fragment_shader_source = """
		precision mediump float;

		// Does this object use a texture?
		uniform bool use_texture;

		// Texture to apply on this object
		uniform sampler2D texture0;

		// Texture to apply on this object
		uniform sampler2D animation;

		// Input from the vertex shader
		varying vec4 v_color;
		varying vec2 v_coord;
		varying float v_animated;

		void main()
		{
			if (v_animated > 0.5) {
				gl_FragColor = v_color * texture2D(animation, v_coord);
				if (gl_FragColor.a <= 0.01) discard;
			} else if (use_texture) {
				gl_FragColor = v_color * texture2D(texture0, v_coord);
				if (gl_FragColor.a <= 0.01) discard;
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

	# World time, in seconds
	var time = uniforms["time"].as(UniformFloat) is lazy

	# ---
	# Animations

	# Texture of all the frames of the animation
	var animation_texture = uniforms["animation"].as(UniformSampler2D) is lazy

	# Frame per second of the animation
	var animation_fps = attributes["a_fps"].as(AttributeFloat) is lazy

	# Number of frames in the animation
	var animation_n_frames = attributes["a_n_frames"].as(AttributeFloat) is lazy

	# Coordinates of each frame (mush be shared by all frames)
	var animation_coord = attributes["a_coord"].as(AttributeVec2) is lazy

	# Texture coordinates of the first frame
	var animation_tex_coord = attributes["a_tex_coord"].as(AttributeVec2) is lazy

	# Coordinate difference between each frame
	var animation_tex_diff = attributes["a_tex_diff"].as(AttributeVec2) is lazy

	# Animation start time, in seconds and in reference to `dt`
	var animation_start = attributes["a_start"].as(AttributeFloat) is lazy

	# Number of loops of the animation, -1 for infinite
	var animation_loops = attributes["a_loops"].as(AttributeFloat) is lazy
end

redef class Point3d[N]
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

redef class OffsetPoint3d
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
class SpriteSet
	super HashSet[Sprite]

	# Animation speed multiplier (0.0 to pause, 1.0 for normal speed, etc.)
	var time_mod = 1.0 is writable

	# Seconds elapsed since the launch of the program, in world time responding to `time_mod`
	var time = 0.0

	# Map texture then static vs dynamic to a `SpriteContext`
	private var contexts_map = new HashMap4[RootTexture, nullable RootTexture, Bool, Int, Array[SpriteContext]]

	# Contexts in `contexts_map`, sorted by draw order
	private var contexts_items = new Array[SpriteContext]

	# Sprites needing resorting in `contexts_map`
	private var sprites_to_remap = new Array[Sprite]

	# Add a sprite to the appropriate context
	private fun map_sprite(sprite: Sprite)
	do
		assert sprite.context == null else print_error "Sprite {sprite} belongs to another SpriteSet"

		# Sort by texture and animation texture
		var texture = sprite.texture.root
		var animation = sprite.animation
		var animation_texture = if animation != null then
			animation.frames.first.root else null
		var draw_order = sprite.draw_order
		var contexts = contexts_map[texture, animation_texture, sprite.static, draw_order]

		var context = null
		if contexts != null then
			for c in contexts.reverse_iterator do
				var size = c.sprites.length + 1
				if size * 4 <= 0xffff then
					context = c
					break
				end
			end
		end

		if context == null then
			var usage = if sprite.static then gl_STATIC_DRAW else gl_DYNAMIC_DRAW
			context = new SpriteContext(texture, animation_texture, usage, draw_order)

			if contexts == null then
				contexts = new Array[SpriteContext]
				contexts_map[texture, animation_texture, sprite.static, draw_order] = contexts
			end

			contexts.add context

			contexts_items.add context
			sprite_draw_order_sorter.sort(contexts_items)
		end

		context.sprites.add sprite
		context.sprites_to_update.add sprite
		context.last_sprite_to_update = sprite

		sprite.context = context
		sprite.sprite_set = self

		if animation != null and sprite.animation_start == -1.0 then
			# Start animation
			sprite.animation_start = time
		end
	end

	# Remove a sprite from its context
	private fun unmap_sprite(sprite: Sprite)
	do
		var context = sprite.context
		assert context != null
		context.sprites.remove sprite

		sprite.context = null
		sprite.sprite_set = null
	end

	# Draw all sprites by all contexts
	private fun draw
	do
		# Remap sprites that may need to change context
		for sprite in sprites_to_remap do

			# Skip if it was removed from this set after being modified
			if sprite.sprite_set != self then continue

			unmap_sprite sprite
			map_sprite sprite
		end
		sprites_to_remap.clear

		# Sort by draw order
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
		for sprite in self do
			sprite.context = null
			sprite.sprite_set = null
		end
		super
		for c in contexts_items do c.destroy
		contexts_map.clear
		contexts_items.clear
		sprites_to_remap.clear
	end

	private fun reset
	do
		for sprite in self do
			sprite.context = null
		end

		for c in contexts_items do c.destroy
		contexts_map.clear
		contexts_items.clear
		sprites_to_remap.clear

		for sprite in self do
			map_sprite sprite
		end
	end
end

# Context for calls to `glDrawElements`
#
# Each context has only one `texture` and `usage`, but many sprites.
private class SpriteContext

	# ---
	# Context config and state

	# Only root texture drawn by this context
	var texture: nullable RootTexture

	# Only animation texture drawn by this context
	var animation_texture: nullable RootTexture

	# OpenGL ES usage of `buffer_array` and `buffer_element`
	var usage: GLBufferUsage

	# Draw order shared by all `sprites`
	var draw_order: Int

	# Sprites drawn by this context
	var sprites = new GroupedSprites

	# Sprites to update since last `draw`
	var sprites_to_update = new Set[Sprite]

	# Cache of the last `Sprite` added to `sprites_to_update` since the last call to `draw`
	var last_sprite_to_update: nullable Sprite = null

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
		return 4 + 4 + 4 +   # vec4 translation, vec4 color, vec4 coord,
		       1 + 2 + 4*4 + # float scale, vec2 tex_coord, vec4 rotation_row*,
		       1 + 1 +       # float a_fps, float a_n_frames,
		       2 + 2 + 2 +   # vec2 a_coord, vec2 a_tex_coord, vec2 a_tex_diff,
		       1 + 1         # float a_start, float a_loops
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

		assert glGetError == gl_NO_ERROR
	end

	# Destroy `buffer_array` and `buffer_element`
	fun destroy
	do
		glDeleteBuffers([buffer_array, buffer_element])
		assert glGetError == gl_NO_ERROR

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
		assert glGetError == gl_NO_ERROR

		# GL_TRIANGLES 6 vertices * sprite
		var n_indices = capacity * indices_per_sprite
		var ius = 2 # sizeof(GL_UNSIGNED_SHORT)
		var element_bytes = n_indices * ius
		glBindBuffer(gl_ELEMENT_ARRAY_BUFFER, buffer_element)
		assert glIsBuffer(buffer_element)
		glBufferData(gl_ELEMENT_ARRAY_BUFFER, element_bytes, new Pointer.nul, usage)
		assert glGetError == gl_NO_ERROR

		buffer_capacity = capacity

		sys.perfs["gamnit flat gpu resize"].add app.perf_clock_sprites.lapse
	end

	# Update GPU data of `sprite`
	fun update_sprite(sprite: Sprite)
	do
		var context = sprite.context
		if context != self then return

		var sprite_index = sprite.context_index
		assert sprite_index != -1

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
			data.fill_from_matrix(rot, o+15)

			var animation = sprite.animation
			if animation == null then
				for i in [31..40] do data[o+i] = 0.0
			else
				# a_fps
				data[o+31] = animation.fps

				# a_n_frames
				data[o+32] = animation.frames.length.to_f

				# a_coord
				data[o+33] = animation.frames.first.vertices[v*3+0]
				data[o+34] = animation.frames.first.vertices[v*3+1]

				# a_tex_coord
				var tc = if sprite.invert_x then
						animation.frames.first.texture_coords_invert_x
					else animation.frames.first.texture_coords
				data[o+35] = tc[v*2]
				data[o+36] = tc[v*2+1]

				# a_tex_diff
				var dx = 0.0
				var dy = 0.0
				if animation.frames.length > 1 then
					dx = animation.frames[1].texture_coords[0] - animation.frames[0].texture_coords[0]
					dy = animation.frames[1].texture_coords[1] - animation.frames[0].texture_coords[1]
				end
				data[o+37] = dx
				data[o+38] = dy

				# a_start
				data[o+39] = sprite.animation_start

				# a_loops
				data[o+40] = sprite.animation_loops
			end

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

		assert glGetError == gl_NO_ERROR
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
		var update_everything = false
		if sprites.capacity > buffer_capacity then
			# Try to defragment first
			var moved = sprites.defragment

			if sprites.capacity > buffer_capacity then
				# Defragmentation wasn't enough, grow
				resize

				# We must update everything
				update_everything = true
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
		if sprites_to_update.not_empty or update_everything then
			app.perf_clock_sprites.lapse

			if update_everything then
				for sprite in sprites.items do if sprite != null then
					update_sprite(sprite)
				end
			else
				for sprite in sprites_to_update do update_sprite(sprite)
			end

			sprites_to_update.clear
			last_sprite_to_update = null

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
		assert glGetError == gl_NO_ERROR

		var animation = animation_texture
		if animation != null then
			glActiveTexture gl_TEXTURE1
			glBindTexture(gl_TEXTURE_2D, animation.gl_texture)
			app.simple_2d_program.animation_texture.uniform 1
		end
		assert glGetError == gl_NO_ERROR

		# Configure attributes, in order:
		# vec4 translation, vec4 color, float scale, vec4 coord, vec2 tex_coord, vec4 rotation_row*,
		# a_fps, a_n_frames, a_coord, a_tex_coord, a_tex_diff, a_start, a_loops

		var offset = 0
		var p = app.simple_2d_program
		var sizeof_gl_float = 4 # sizeof(GL_FLOAT)

		var size = 4 # Number of floats
		glEnableVertexAttribArray p.translation.location
		glVertexAttribPointeri(p.translation.location, size, gl_FLOAT, false, bytes_per_vertex, offset)
		offset += size * sizeof_gl_float
		assert glGetError == gl_NO_ERROR

		size = 4
		glEnableVertexAttribArray p.color.location
		glVertexAttribPointeri(p.color.location, size, gl_FLOAT, false, bytes_per_vertex, offset)
		offset += size * sizeof_gl_float
		assert glGetError == gl_NO_ERROR

		size = 1
		glEnableVertexAttribArray p.scale.location
		glVertexAttribPointeri(p.scale.location, size, gl_FLOAT, false, bytes_per_vertex, offset)
		offset += size * sizeof_gl_float
		assert glGetError == gl_NO_ERROR

		size = 4
		glEnableVertexAttribArray p.coord.location
		glVertexAttribPointeri(p.coord.location, size, gl_FLOAT, false, bytes_per_vertex, offset)
		offset += size * sizeof_gl_float
		assert glGetError == gl_NO_ERROR

		size = 2
		glEnableVertexAttribArray p.tex_coord.location
		glVertexAttribPointeri(p.tex_coord.location, size, gl_FLOAT, false, bytes_per_vertex, offset)
		offset += size * sizeof_gl_float
		assert glGetError == gl_NO_ERROR

		size = 4
		for r in [p.rotation_row0, p.rotation_row1, p.rotation_row2, p.rotation_row3] do
			if r.is_active then
				glEnableVertexAttribArray r.location
				glVertexAttribPointeri(r.location, size, gl_FLOAT, false, bytes_per_vertex, offset)
			end
			offset += size * sizeof_gl_float
			assert glGetError == gl_NO_ERROR
		end

		size = 1
		glEnableVertexAttribArray p.animation_fps.location
		glVertexAttribPointeri(p.animation_fps.location, size, gl_FLOAT, false, bytes_per_vertex, offset)
		offset += size * sizeof_gl_float
		assert glGetError == gl_NO_ERROR

		size = 1
		glEnableVertexAttribArray p.animation_n_frames.location
		glVertexAttribPointeri(p.animation_n_frames.location, size, gl_FLOAT, false, bytes_per_vertex, offset)
		offset += size * sizeof_gl_float
		assert glGetError == gl_NO_ERROR

		size = 2
		glEnableVertexAttribArray p.animation_coord.location
		glVertexAttribPointeri(p.animation_coord.location, size, gl_FLOAT, false, bytes_per_vertex, offset)
		offset += size * sizeof_gl_float
		assert glGetError == gl_NO_ERROR

		size = 2
		glEnableVertexAttribArray p.animation_tex_coord.location
		glVertexAttribPointeri(p.animation_tex_coord.location, size, gl_FLOAT, false, bytes_per_vertex, offset)
		offset += size * sizeof_gl_float
		assert glGetError == gl_NO_ERROR

		size = 2
		glEnableVertexAttribArray p.animation_tex_diff.location
		glVertexAttribPointeri(p.animation_tex_diff.location, size, gl_FLOAT, false, bytes_per_vertex, offset)
		offset += size * sizeof_gl_float
		assert glGetError == gl_NO_ERROR

		size = 1
		glEnableVertexAttribArray p.animation_start.location
		glVertexAttribPointeri(p.animation_start.location, size, gl_FLOAT, false, bytes_per_vertex, offset)
		offset += size * sizeof_gl_float
		assert glGetError == gl_NO_ERROR

		size = 1
		glEnableVertexAttribArray p.animation_loops.location
		glVertexAttribPointeri(p.animation_loops.location, size, gl_FLOAT, false, bytes_per_vertex, offset)
		offset += size * sizeof_gl_float
		assert glGetError == gl_NO_ERROR

		# Actual draw
		for s in sprites.starts, e in sprites.ends do
			var l = e-s
			glDrawElementsi(gl_TRIANGLES, l*indices_per_sprite, gl_UNSIGNED_SHORT, 2*s*indices_per_sprite)
			assert glGetError == gl_NO_ERROR
		end

		# Take down
		for attr in [p.translation, p.color, p.scale, p.coord, p.tex_coord,
		             p.rotation_row0, p.rotation_row1, p.rotation_row2, p.rotation_row3: Attribute] do
			if not attr.is_active then continue
			glDisableVertexAttribArray(attr.location)
			assert glGetError == gl_NO_ERROR
		end

		glBindBuffer(gl_ARRAY_BUFFER, 0)
		glBindBuffer(gl_ELEMENT_ARRAY_BUFFER, 0)
		assert glGetError == gl_NO_ERROR
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
# intrude import gamnit::flat
#
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
# assert array.capacity == 6
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

	# List of available slots
	var available = new MinHeap[Int].default

	# Start index of filled chunks
	var starts = new List[Int]

	# Index of the spots after filled chunks
	var ends = new List[Int]

	# Add `item` to the first available slot and return its index
	fun add(item: E): Int
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
			return i
		end

		items.add item
		if ends.is_empty then
			starts.add 0
			ends.add 1
		else ends.last += 1
		return ends.last - 1
	end

	# Remove the first instance of `item`
	fun remove(item: E)
	do
		var index = items.index_of(item)
		remove_at(item, index)
	end

	# Remove `item` at `index`
	fun remove_at(item: E, index: Int)
	do
		var i = index
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
	# intrude import gamnit::flat
	#
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
			assert e != null
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

# Optimized `GroupedArray` to use `Sprite::context_index` and avoid using `index_of`
private class GroupedSprites
	super GroupedArray[Sprite]

	redef fun add(item)
	do
		var index = super
		item.context_index = index
		return index
	end

	redef fun remove(item) do remove_at(item, item.context_index)
end

redef class GLfloatArray
	private fun fill_from_matrix(matrix: Matrix, dst_offset: nullable Int)
	do
		dst_offset = dst_offset or else add_index
		var mat_len = matrix.width*matrix.height
		assert length >= mat_len + dst_offset
		native_array.fill_from_matrix_native(matrix.items, dst_offset, mat_len)
		add_index += mat_len
	end
end

redef class NativeGLfloatArray
	private fun fill_from_matrix_native(matrix: matrix::NativeDoubleArray, dst_offset, len: Int) `{
		int i;
		for (i = 0; i < len; i ++)
			self[i+dst_offset] = (GLfloat)matrix[i];
	`}
end

redef class Sys
	private var sprite_draw_order_sorter = new DrawOrderComparator is lazy
end

# Sort `SpriteContext` by their `draw_order`
private class DrawOrderComparator
	super Comparator

	# This class can't set COMPARED because
	# `the public property cannot contain the private type...`
	#redef type COMPARED: SpriteContext

	# Require: `a isa SpriteContext and b isa SpriteContext`
	redef fun compare(a, b)
	do return a.as(SpriteContext).draw_order <=> b.as(SpriteContext).draw_order
end
