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

# Select `Actor` from a screen coordinate
#
# The two main services are `App::visible_at` and ; App::visible_in_center`.
#
# This is implemented with simple pixel picking.
# This algorithm draws each actor in a unique color to the display buffer,
# using the color as an ID to detect which actor is visible at each pixel.
#
# It is implemented at the level of the material,
# so it can be applied to any _gamnit_ programs.
# However it is not optimal performance wise,
# so client programs should implement a more efficient algorithm.
#
# By default, the actors are drawn as opaque objects.
# This behavior can be refined, as does `TexturedMaterial` to use its
# `diffuse_texture` for partial opacity.
module selection

# TODO support `sprites` and `ui_sprites`

import more_materials
intrude import depth_core

redef class App

	# Which `Actor` is at the center of the screen?
	fun visible_in_center: nullable Actor
	do
		var display = display
		assert display != null
		return visible_at(display.width/2, display.height/2)
	end

	# Which `Actor` is on screen at `x, y`?
	fun visible_at(x, y: Numeric): nullable Actor
	do
		var display = display
		assert display != null

		if not selection_calculated then draw_selection_screen

		x = x.to_i
		y = y.to_i
		y = display.height - y

		# Read selection values
		var data = once new NativeCByteArray(4)
		glReadPixels(x, y, 1, 1, gl_RGBA, gl_UNSIGNED_BYTE, data)
		assert_no_gl_error

		var r = display.red_bits
		var g = display.green_bits
		var b = display.blue_bits

		# Rebuild ID from pixel color
		var rv = data[0].to_i >> (8-r)
		var gv = data[1].to_i >> (8-g) << (r)
		var bv = data[2].to_i >> (8-b) << (r+g)
		if data[0].to_i & (2**(8-r)-1) > (2**(8-r-1)) then rv += 1
		if data[1].to_i & (2**(8-g)-1) > (2**(8-g-1)) then gv += 1 << r
		if data[2].to_i & (2**(8-b)-1) > (2**(8-b-1)) then bv += 1 << (r+g)
		var id = rv + gv + bv

		# ID 0 is the background
		if id == 0 then return null

		# Wrongful selection? This should not happen.
		if not selection_map.keys.has(id) then
			print_error "Gamnit Warning: Invalid selection {id}"
			return null
		end

		return selection_map[id]
	end

	# Program drawing selection values to the buffer
	var selection_program = new SelectionProgram

	# Map IDs to actors
	private var selection_map = new Map[Int, Actor]

	# Is there a valid selection draw in the buffer?
	private var selection_calculated = false

	# Draw the selection values to the buffer
	private fun draw_selection_screen
	do
		selection_calculated = true

		app.selection_program.use
		app.selection_program.mvp.uniform app.world_camera.mvp_matrix

		# Set aside previous buffer clear color
		var user_r = glGetFloatv(gl_COLOR_CLEAR_VALUE, 0)
		var user_g = glGetFloatv(gl_COLOR_CLEAR_VALUE, 1)
		var user_b = glGetFloatv(gl_COLOR_CLEAR_VALUE, 2)
		var user_a = glGetFloatv(gl_COLOR_CLEAR_VALUE, 3)

		glClearColor(0.0, 0.0, 0.0, 1.0)
		glClear(gl_DEPTH_BUFFER_BIT | gl_COLOR_BUFFER_BIT)

		# TODO restrict the list of actors with a valid ID, maybe with an `active_actors` list?

		var id = 1
		for actor in actors do
			selection_map[id] = actor
			for leaf in actor.model.leaves do
				leaf.material.draw_selection(actor, leaf, id)
			end

			id += 1
			#id += 100 # Debug
		end

		# Debug, show the selection values for half a second
		#display.flip
		#0.5.sleep

		glClearColor(user_r, user_g, user_b, user_a)
	end

	redef fun frame_core(display)
	do
		super

		# Invalidate the selection values
		selection_calculated = false
	end
end

redef class Material

	# Draw `actor` to selection values
	protected fun draw_selection(actor: Actor, model: LeafModel, id: Int)
	do
		var program = app.selection_program
		var mesh = model.mesh

		draw_selection_texture(actor, model)

		program.translation.uniform(actor.center.x, actor.center.y, actor.center.z, 0.0)
		program.scale.uniform actor.scale

		program.coord.array_enabled = true
		program.coord.array(mesh.vertices, 3)
		program.rotation.uniform new Matrix.rotation(actor.rotation, 0.0, 1.0, 0.0)

		var display = app.display
		assert display != null
		var r = display.red_bits
		var g = display.green_bits
		var b = display.blue_bits

		# Build ID as a color
		var p1 = id & ((2**r)-1)
		var p2 = id >> r & ((2**g)-1)
		var p3 = id >> (r+g) & ((2**b)-1)
		program.color_id.uniform(
			p1.to_f/((2**r)-1).to_f,
			p2.to_f/((2**g)-1).to_f,
			p3.to_f/((2**b)-1).to_f, 1.0)

		if mesh.indices.is_empty then
			glDrawArrays(mesh.draw_mode, 0, mesh.vertices.length/3)
		else
			glDrawElements(mesh.draw_mode, mesh.indices.length, gl_UNSIGNED_SHORT, mesh.indices_c.native_array)
		end
	end

	private fun draw_selection_texture(actor: Actor, model: LeafModel)
	do
		var program = app.selection_program
		program.use_map_diffuse.uniform false
	end
end

redef class TexturedMaterial
	redef fun draw_selection_texture(actor, model)
	do
		var program = app.selection_program
		var mesh = model.mesh

		# One of the textures used, if any
		var sample_used_texture = null
		var texture = diffuse_texture
		if texture != null then
			glActiveTexture gl_TEXTURE1
			glBindTexture(gl_TEXTURE_2D, texture.gl_texture)
			program.use_map_diffuse.uniform true
			program.map_diffuse.uniform 1
			sample_used_texture = texture
		else
			program.use_map_diffuse.uniform false
		end

		# If using a texture, set `texture_coords`
		program.tex_coord.array_enabled = sample_used_texture != null
		if sample_used_texture != null then
			if sample_used_texture isa RootTexture then
				# Coordinates are directly valid
				program.tex_coord.array(mesh.texture_coords, 2)
			else
				# Correlate texture coordinates from the subtexture sand the mesh.
				# This is slow, but should be cached on the GPU.
				var xa = sample_used_texture.offset_left
				var xd = sample_used_texture.offset_right - xa
				var ya = sample_used_texture.offset_top
				var yd = sample_used_texture.offset_bottom - ya

				var tex_coords = new Array[Float].with_capacity(mesh.texture_coords.length)
				for i in [0..mesh.texture_coords.length/2[ do
					tex_coords[i*2]   = xa + xd * mesh.texture_coords[i*2]
					tex_coords[i*2+1] = ya + yd * mesh.texture_coords[i*2+1]
				end

				program.tex_coord.array(tex_coords, 2)
			end
		end
	end
end

# Program to draw selection values
class SelectionProgram
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

		// Model view projection matrix
		uniform mat4 mvp;

		// Model rotation
		uniform mat4 rotation;

		// Output for the fragment shader
		varying vec2 v_tex_coord;

		void main()
		{
			v_tex_coord = vec2(tex_coord.x, 1.0 - tex_coord.y);

			gl_Position = (vec4(coord.xyz * scale, 1.0) * rotation + translation) * mvp;
		}
		""" @ glsl_vertex_shader

	#
	redef var fragment_shader_source = """
		precision highp float;

		varying vec2 v_tex_coord;

		// Map used as reference for opacity
		uniform sampler2D map_diffuse;

		// Should `map_diffuse` be used?
		uniform bool use_map_diffuse;

		// Color ID
		uniform vec4 color;

		void main()
		{
			gl_FragColor = vec4(color.rgb, 1.0);

			if (use_map_diffuse && texture2D(map_diffuse, v_tex_coord).a < 0.1) {
				gl_FragColor.a = 0.0;
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

	# Translation applied to each vertex
	var translation = uniforms["translation"].as(UniformVec4) is lazy

	# Rotation matrix
	var rotation = uniforms["rotation"].as(UniformMat4) is lazy

	# Scaling per vertex
	var scale = uniforms["scale"].as(UniformFloat) is lazy

	# Model view projection matrix
	var mvp = uniforms["mvp"].as(UniformMat4) is lazy

	# ID as a color
	var color_id = uniforms["color"].as(UniformVec4) is lazy
end
