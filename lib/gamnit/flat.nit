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

# Simple API for 2D games, based around `Sprite` and `App::update`
#
# Client programs should implement `App::update` to execute game logic and
# add instances of `Sprite` to `App::sprites` and `App::ui_sprites`.
# At each frame, all sprites are drawn to the screen.
#
# This system relies on two cameras `App::world_camera` and `App::ui_camera`.
#
# * `App::world_camera` applies a perspective effect to draw the game world.
#   This camera is designed to be moved around to see the world as well as to zoom in and out.
#   It is used to position the sprites in `App::sprites`.
#
# * `App::ui_camera` is a simple orthogonal camera to display UI objects.
#   This camera should mostly be still, it can still move for chock effects and the like.
#   It can be used to standardize the size of the UI across devices.
#   It is used to position the sprites in `App::ui_sprites`.
#
# See the sample game at `contrib/asteronits/`.
module flat

import glesv2

import geometry::points_and_lines
import matrix::projection
import more_collections
import realtime

import gamnit
import gamnit::cameras
import gamnit::limit_fps

# Image to draw on screen
class Sprite

	# Texture drawn to screen
	var texture: Texture is writable

	# Position of this sprite in world coordinates
	var center: Point3d[Float] is writable

	# Rotation on the Z axis
	var rotation = 0.0 is writable

	# Scale applied to this sprite
	var scale = 1.0 is writable

	# Transparency applied to the texture on draw
	var alpha = 1.0 is writable

	private fun draw
	do
		var simple_2d_program = app.simple_2d_program

		glActiveTexture gl_TEXTURE0
		glBindTexture(gl_TEXTURE_2D, texture.root.gl_texture)

		simple_2d_program.translation.uniform(center.x, -center.y, center.z, 0.0)
		simple_2d_program.color.uniform(1.0, 1.0, 1.0, alpha)
		simple_2d_program.scale.uniform scale

		simple_2d_program.use_texture.uniform true
		simple_2d_program.texture.uniform 0
		simple_2d_program.tex_coord.array(texture.texture_coords, 2)
		simple_2d_program.coord.array(texture.vertices, 3)

		simple_2d_program.rotation.uniform new Matrix.rotation(rotation, 0.0, 0.0, 1.0)

		glDrawArrays(gl_TRIANGLE_STRIP, 0, 4)
	end
end

redef class App
	# Default graphic program to draw `sprites`
	var simple_2d_program = new Simple2dProgram is lazy # TODO private

	# Camera for world objects with perspective
	#
	# By default, the camera is configured to respect the resolution
	# of the screen in world coordinates at `z == 0.0`.
	var world_camera: EulerCamera is lazy do
		var camera = new EulerCamera(app.display.as(not null))

		# Aim for pixel resolution at level 0
		camera.reset_height
		camera.near = 100.0

		return camera
	end

	# Camera for UI elements using an orthogonal view
	var ui_camera: UICamera = new UICamera(app.display.as(not null)) is lazy

	# Live sprites to draw in reference to `world_camera`
	var sprites: Sequence[Sprite] = new List[Sprite]

	# UI sprites to draw in reference to `ui_camera`, over world `sprites`
	var ui_sprites: Sequence[Sprite] = new List[Sprite]

	private var clock = new Clock

	redef fun on_create
	do
		super

		var display = display
		assert display != null

		var gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print gl_error

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
		assert gl_error == gl_NO_ERROR else print gl_error

		# Prepare to draw
		for tex in all_root_textures do
			tex.load

			glTexParameteri(gl_TEXTURE_2D, gl_TEXTURE_MIN_FILTER, gl_LINEAR)
			glTexParameteri(gl_TEXTURE_2D, gl_TEXTURE_MAG_FILTER, gl_LINEAR)

			gamnit_error = tex.error
			assert gamnit_error == null else print_error gamnit_error
		end

		# Constant program values
		program.use
		program.coord.array_enabled = true
		program.tex_coord.array_enabled = true

		gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print gl_error
	end

	redef fun frame_core(display)
	do
		# Prepare to draw, clear buffers
		glClear(gl_COLOR_BUFFER_BIT | gl_DEPTH_BUFFER_BIT)

		# Check errors
		var gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print gl_error

		# Update game logic and set sprites
		var dt = clock.lapse.to_f
		update dt

		# Draw and flip screen
		# TODO optimize this draw to store constant values on the GPU

		## World sprites
		simple_2d_program.use
		simple_2d_program.mvp.uniform world_camera.mvp_matrix
		for sprite in sprites do sprite.draw

		## Reset only the depth buffer
		glClear gl_DEPTH_BUFFER_BIT

		## UI sprites
		simple_2d_program.mvp.uniform ui_camera.mvp_matrix
		for sprite in ui_sprites do sprite.draw
		display.flip

		# Check errors
		gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print gl_error
	end

	# Main method to refine in clients to update game logic and `sprites`
	fun update(dt: Float) do end

	redef fun on_stop
	do
		# Clean up
		simple_2d_program.delete

		# Close gamnit
		var display = display
		if display != null then display.close
	end
end

redef class Texture

	# Vertices coordinates of the base geometry
	private var vertices: Array[Float] is lazy do
		var mod = 1.0
		var w = width * mod
		var h = height * mod
		var a = [-0.5*w, -0.5*h, 0.0]
		var b = [ 0.5*w, -0.5*h, 0.0]
		var c = [-0.5*w,  0.5*h, 0.0]
		var d = [ 0.5*w,  0.5*h, 0.0]

		var vertices = new Array[Float]
		for v in [c, d, a, b] do vertices.add_all v
		return vertices
	end

	# Coordinates of this texture on the `root` texture, with `[0..1.0]`
	private var texture_coords: Array[Float] is lazy do
		var a = [offset_left,  offset_bottom]
		var b = [offset_right, offset_bottom]
		var c = [offset_left,  offset_top]
		var d = [offset_right, offset_top]

		var texture_coords = new Array[Float]
		for v in [c, d, a, b] do texture_coords.add_all v
		return texture_coords
	end
end

# Graphic program to display simple models with a texture, translation, rotation and scale
class Simple2dProgram
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
		uniform mat4 rotation;

		// Output for the fragment shader
		varying vec4 v_color;
		varying vec2 v_coord;

		void main()
		{
			v_color = color;
			gl_Position = (vec4(coord.xyz * scale, 1.0) * rotation + translation) * mvp;
			v_coord = tex_coord;
		}
		""" @ glsl_vertex_shader

	redef var fragment_shader_source = """
		precision mediump float;

		// Does this object use a texture?
		uniform bool use_texture;

		// Texture to apply on this object
		uniform sampler2D texture;

		// Input from the vertex shader
		varying vec4 v_color;
		varying vec2 v_coord;

		void main()
		{
			if(use_texture) {
				gl_FragColor = v_color * texture2D(texture, v_coord);
				if (gl_FragColor.a == 0.0) discard;
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
	var texture = uniforms["texture"].as(UniformSampler2D) is lazy

	# Coordinates on the textures, per vertex
	var tex_coord = attributes["tex_coord"].as(AttributeVec2) is lazy

	# Color tint per vertex
	var color = attributes["color"].as(AttributeVec4) is lazy

	# Translation applied to each vertex
	var translation = attributes["translation"].as(AttributeVec4) is lazy

	# Rotation matrix
	var rotation = uniforms["rotation"].as(UniformMat4) is lazy

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
end
