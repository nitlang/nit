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

# Portable app using gamnit textures and programs with custom calls to OpenGL ES 2.0
module globe is
	app_name "gamnit Globe"
	app_namespace "org.nitlanguage.globe"
	app_version(1, 0, git_revision)

	android_manifest_activity """android:screenOrientation="portrait""""
	android_api_target 15
end

import realtime
import matrix::projection

import gamnit
import gamnit::cameras
import gamnit::limit_fps

private import more_collections

# Graphical program to draw a planet with Phong lighting
class GlobeProgram
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

		// Vertex normal
		attribute vec3 normal;

		// Model view projection matrix
		uniform mat4 mvp;

		// Texture of surface elevation to displace vertices
		uniform sampler2D tex_displace;

		// Draw this as a planet surface?
		uniform bool is_surface;

		// Output for the fragment shader
		varying vec4 v_color;
		varying vec2 v_tex_coord;
		varying vec3 v_normal;

		void main()
		{
			// Pass varyings to the fragment shader
			v_color = color;
			v_tex_coord = tex_coord;
			v_normal = normal;

			// Apply bump map
			float s = scale;
			if (is_surface)
				s += 0.05 * texture2D(tex_displace, tex_coord).r;

			gl_Position = (vec4(coord.xyz * s, 1.0) + translation) * mvp;
		}
		""" @ glsl_vertex_shader

	redef var fragment_shader_source = """
		precision mediump float;

		// Input from the vertex shader
		varying vec4 v_color;
		varying vec2 v_tex_coord;
		varying vec3 v_normal;

		// Coordinates of the camera
		uniform vec3 camera;

		// Does this object use a texture?
		uniform bool use_texture;

		// Texture to apply on this object
		uniform sampler2D tex;

		// Reflection map to apply the the phong logic
		uniform sampler2D tex_shiny;

		// Texture for the dark side of the earth
		uniform sampler2D tex_night;

		// Draw this as a planet surface?
		uniform bool is_surface;

		// Lights config
		// TODO configure from outside the shader
		vec3 light_dir = normalize(vec3(-1.0, 0.0, -1.0));
		vec4 ambient_color = vec4(0.2, 0.2, 0.2, 1.0);
		vec4 diffuse_color = vec4(1.0, 1.0, 1.0, 1.0);
		vec4 specular_color = vec4(1.0, 1.0, 1.0, 1.0);

		void main()
		{
			if(use_texture) {
				gl_FragColor = v_color * texture2D(tex, v_tex_coord);
			} else {
				gl_FragColor = v_color;
			}

			// Lambert diffusion
			float lambert = max(dot(light_dir, v_normal), 0.0);

			// Phong specular
			float specular = 0.0;
			if (lambert > 0.0) {
				vec3 to_camera = normalize(camera);
				vec3 light_reflect = reflect(light_dir, v_normal);
				float specularAngle = max(dot(light_reflect, to_camera), 0.0);
				specular = pow(specularAngle, 16.0);

				if (is_surface)
					specular *= texture2D(tex_shiny, v_tex_coord).x;
				else specular *= 0.2;
			}

			gl_FragColor *= ambient_color + lambert * diffuse_color;
			gl_FragColor += specular * specular_color;

			if (is_surface && lambert < 0.2) {
				// Show city lights at night
				float p_night = (0.2 - lambert) * 5.0;
				gl_FragColor += p_night*texture2D(tex_night, v_tex_coord);
			}
		}
		""" @ glsl_fragment_shader

		# Vertices coordinates
		var coord = attributes["coord"].as(AttributeVec4) is lazy

		# Color tint per vertex
		var color = attributes["color"].as(AttributeVec4) is lazy

		# Scaling per vertex
		var scale = attributes["scale"].as(AttributeFloat) is lazy

		# Coordinates on the textures, per vertex
		var tex_coord = attributes["tex_coord"].as(AttributeVec2) is lazy

		# Normal per vertex
		var normal = attributes["normal"].as(AttributeVec3) is lazy

		# Model view projection matrix
		var mvp = uniforms["mvp"].as(UniformMat4) is lazy

		# Should this program use the texture `tex`?
		var use_texture = uniforms["use_texture"].as(UniformBool) is lazy

		# Main visible texture unit
		var tex = uniforms["tex"].as(UniformSampler2D) is lazy

		# Texture unit for reflection effect
		var tex_shiny = uniforms["tex_shiny"].as(UniformSampler2D) is lazy

		# Texture of the earth at night
		var tex_night = uniforms["tex_night"].as(UniformSampler2D) is lazy

		# Texture with elevation data
		var tex_displace = uniforms["tex_displace"].as(UniformSampler2D) is lazy

		# Position of the camera
		var camera = uniforms["camera"].as(UniformVec3) is lazy

		# Execute this program to draw a planet surface?
		var is_surface = uniforms["is_surface"].as(UniformBool) is lazy
end

# Mesh with all information for drawing
class Mesh

	# Vertices coordinates
	var vertices: Array[Float]

	# Indices to draw triangles
	var indices: Array[Int]

	private var indices_c = new CUInt16Array.from(indices) is lazy

	# Normals on each vertex
	var normals: Array[Float]

	# Coordinates on the texture per vertex
	var texture_coords: Array[Float]

	# Create an UV sphere of `radius` with `n_meridians` and `n_parallels`
	init uv_sphere(radius: Float, n_meridians, n_parallels: Int)
	do
		var w = n_meridians
		var h = n_parallels

		var vertices = new Array[Float].with_capacity(w*h*3)
		var texture_coords = new Array[Float].with_capacity(w*h*2)
		var normals = new Array[Float].with_capacity(w*h*3)

		# Build vertices
		for m in [0..w[ do
			for p in [0..h[ do
				var u = m.to_f * 2.0 * pi / (w-1).to_f
				var v = p.to_f * pi / (h-1).to_f

				vertices.add radius * u.cos * v.sin
				vertices.add radius * v.cos
				vertices.add radius * u.sin * v.sin

				texture_coords.add (1.0 - m.to_f/(w-1).to_f)
				texture_coords.add(p.to_f/(h-1).to_f)

				normals.add u.cos * v.sin
				normals.add v.cos
				normals.add u.sin * v.sin
			end
		end

		# Build faces
		var indices = new Array[Int].with_capacity((w-1)*(h-1)*6)
		for m in [0..w-1[ do
			for p in [0..h-1[ do
				var a = m*h + p

				indices.add a
				indices.add(a+h)
				indices.add(a+1)

				indices.add(a+h)
				indices.add(a+h+1)
				indices.add(a+1)
			end
		end

		init(vertices, indices, normals, texture_coords)
	end
end

# Number of vertices to create parallels, meridians are double of this
#
# The minimum should be 3 for an octahedron planet.
fun n_parallels: Int do return 25

redef class GamnitAssetTexture
	# All images are either within the hd or ld folder
	redef fun path do return app.definition / super
end

redef class App

	# Earth
	var planet = new Mesh.uv_sphere(2.0, 2*n_parallels, n_parallels)

	# Cloud layer
	var clouds = new Mesh.uv_sphere(2.08, 2*n_parallels, n_parallels)

	# Visible atmosphere
	var atmo = new Mesh.uv_sphere(2.16, 2*n_parallels, n_parallels)

	# Program for the graphic card
	var program = new GlobeProgram

	private var definition: String is lazy do
		var max_texture_size = glGetIntegerv(gl_MAX_TEXTURE_SIZE)

		# HD textures max sizes reange from 2048 px to 5400 px
		if max_texture_size < 5400 then
			return "ld"
		else return "hd"
	end

	# Texture of the reflexive surface of the earth (with the seas in white)
	var texture_seas = new Texture("seas.jpg")

	# Texture of the surface of the earth
	var texture_earth = new Texture("earth.jpg")

	# Texture of the lights at night on earth
	var texture_night = new Texture("lights.jpg")

	# Elevation map of earth
	var texture_elevation = new Texture("elevation.jpg")

	# Texture of the clouds above the earth
	var texture_clouds = new Texture("clouds.png")

	# Camera for the only view
	var camera: EulerCamera is lazy do
		var camera = new EulerCamera(app.display.as(not null))
		camera.move(0.0, 0.1, -5.0)
		return camera
	end

	redef fun on_create
	do
		super

		var display = display
		assert display != null

		var gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print gl_error

		# Prepare program
		var program = program
		program.compile_and_link

		var gamnit_error = program.error
		assert gamnit_error == null else print_error gamnit_error

		# Blend
		gl.capabilities.blend.enable
		glBlendFunc(gl_SRC_ALPHA, gl_ONE_MINUS_SRC_ALPHA)

		gl.capabilities.depth_test.enable
		glDepthFunc gl_LEQUAL
		glDepthMask true

		gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print gl_error

		# Prepare to draw
		for tex in [texture_seas, texture_earth, texture_night, texture_elevation, texture_clouds] do
			tex.load
			glTexParameteri(gl_TEXTURE_2D, gl_TEXTURE_MIN_FILTER, gl_LINEAR)
			glTexParameteri(gl_TEXTURE_2D, gl_TEXTURE_MAG_FILTER, gl_LINEAR)

			gamnit_error = tex.error
			assert gamnit_error == null else print_error gamnit_error
		end

		gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print gl_error

		program.use

		glViewport(0, 0, display.width, display.height)
		glClearColor(0.0, 0.02, 0.0, 1.0)

		gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print gl_error

		# Assign all textures to a unit
		glActiveTexture gl_TEXTURE0
		glBindTexture(gl_TEXTURE_2D, texture_earth.gl_texture)

		glActiveTexture gl_TEXTURE1
		glBindTexture(gl_TEXTURE_2D, texture_seas.gl_texture)

		glActiveTexture gl_TEXTURE2
		glBindTexture(gl_TEXTURE_2D, texture_night.gl_texture)

		glActiveTexture gl_TEXTURE3
		glBindTexture(gl_TEXTURE_2D, texture_elevation.gl_texture)

		glActiveTexture gl_TEXTURE4
		glBindTexture(gl_TEXTURE_2D, texture_clouds.gl_texture)

		gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print gl_error

		# Constant program values
		program.coord.array_enabled = true
		program.tex_coord.array_enabled = true
		program.normal.array_enabled = true

		program.scale.uniform 1.0

		program.use_texture.uniform true

		program.tex_shiny.uniform 1
		program.tex_night.uniform 2
		program.tex_displace.uniform 3

		gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print gl_error
	end

	private var clock = new Clock

	redef fun frame_core
	do
		var display = display
		if display != null then
			var t = clock.total.to_f/3.0 + 0.75*pi

			var gl_error = glGetError
			assert gl_error == gl_NO_ERROR else print gl_error

			glClear(gl_COLOR_BUFFER_BIT | gl_DEPTH_BUFFER_BIT)
			program.use

			# Rotate world
			# FIXME do this cleanly by moving the camera
			var mvp = new Matrix.rotation(t, 0.0, 1.0, 0.0) * camera.mvp_matrix
			program.mvp.uniform mvp
			program.camera.uniform(-t.sin, -0.8, -t.cos)

			# Planet
			program.coord.array(planet.vertices, 3)
			program.tex_coord.array(planet.texture_coords, 2)
			program.normal.array(planet.normals, 3)
			program.tex.uniform 0
			program.use_texture.uniform true
			program.color.uniform(1.0, 1.0, 1.0, 1.0)
			program.is_surface.uniform true
			glDrawElements(gl_TRIANGLES, planet.indices.length, gl_UNSIGNED_SHORT, planet.indices_c.native_array)

			# Clouds
			program.coord.array(clouds.vertices, 3)
			program.tex_coord.array(clouds.texture_coords, 2)
			program.normal.array(clouds.normals, 3)
			program.tex.uniform 4
			program.color.uniform(1.0, 1.0, 1.0, 0.5) # Half transparency
			program.is_surface.uniform false
			glDrawElements(gl_TRIANGLES, clouds.indices.length, gl_UNSIGNED_SHORT, clouds.indices_c.native_array)

			# Atmo
			program.coord.array(atmo.vertices, 3)
			program.tex_coord.array(atmo.texture_coords, 2)
			program.normal.array(atmo.normals, 3)
			program.color.uniform(0.0, 0.8, 1.0, 0.02) # Blueish
			program.is_surface.uniform false
			program.use_texture.uniform false
			glDrawElements(gl_TRIANGLES, atmo.indices.length, gl_UNSIGNED_SHORT, atmo.indices_c.native_array)
			assert program.use_texture.is_active

			display.flip

			gl_error = glGetError
			assert gl_error == gl_NO_ERROR else print gl_error
		end
	end

	redef fun on_stop
	do
		# Clean up
		program.delete

		# Close gamnit
		var display = display
		if display != null then display.close
	end
end
