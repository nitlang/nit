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

# Intro a custom model, material and graphics program to draw a globe
module globe

intrude import gamnit::depth # To access `Mesh::indices_c`

# Number of vertices to create parallels, meridians are double of this
#
# The minimum should be 3 for an octahedron planet.
fun n_parallels: Int do return 25

redef class App

	# Program for the graphic card
	private var globe_program = new GlobeProgram

	# Texture of the reflexive surface of the earth (with the seas in white)
	private var texture_seas = new Texture("globe/seas.jpg")

	# Texture of the surface of the earth
	private var texture_earth = new Texture("globe/earth.jpg")

	# Texture of the lights at night on earth
	private var texture_night = new Texture("globe/lights.jpg")

	# Elevation map of earth
	private var texture_elevation = new Texture("globe/elevation.jpg")

	# Texture of the clouds above the earth
	private var texture_clouds = new Texture("globe/clouds.png")

	redef fun on_create
	do
		super

		# Compile globe_program
		var program = app.globe_program
		program.compile_and_link

		# Catch any errors
		var gamnit_error = program.error
		assert gamnit_error == null else print_error gamnit_error
	end
end

# Full model of a globe, with a surface, clouds layer and atmosphere
class GlobeModel
	super CompositeModel

	redef fun load
	do
		leaves.add new LeafModel(
			new UVSphere(1.0, 2*n_parallels, n_parallels),
			new GlobeMaterial.surface)
		leaves.add new LeafModel(
			new UVSphere(1.1, 2*n_parallels, n_parallels),
			new GlobeMaterial.clouds)
		leaves.add new LeafModel(
			new UVSphere(1.2, 2*n_parallels, n_parallels),
			new GlobeMaterial.atmo)
	end
end

# Parameterizable material to draw the 3 layers of the globe
class GlobeMaterial
	super Material

	# Id of the texture for diffuse colors, if any
	var texture_id: nullable Int

	# Draw as a surface, using the elevation map and the night lights
	var is_surface: Bool

	# Ambient color
	var color: Array[Float]

	# Create and configure a material for the earth surface
	init surface do init(0, true, [1.0, 1.0, 1.0, 1.0])

	# Create and configure a material for the cloud layer
	init clouds do init(4, false, [1.0, 1.0, 1.0, 0.5])

	# Create and configure a material for the visible atmosphere
	init atmo do init(null, false, [0.0, 0.8, 1.0, 0.05])

	redef fun draw(actor, model)
	do
		var gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print gl_error

		var mesh = model.mesh

		var program = app.globe_program
		program.use

		# Set constant program values
		program.use

		# Bind textures
		glActiveTexture gl_TEXTURE0
		glBindTexture(gl_TEXTURE_2D, app.texture_earth.gl_texture)

		glActiveTexture gl_TEXTURE1
		glBindTexture(gl_TEXTURE_2D, app.texture_seas.gl_texture)

		glActiveTexture gl_TEXTURE2
		glBindTexture(gl_TEXTURE_2D, app.texture_night.gl_texture)

		glActiveTexture gl_TEXTURE3
		glBindTexture(gl_TEXTURE_2D, app.texture_elevation.gl_texture)

		glActiveTexture gl_TEXTURE4
		glBindTexture(gl_TEXTURE_2D, app.texture_clouds.gl_texture)

		# Set samplers
		program.tex_specular.uniform 1
		program.tex_night.uniform 2
		program.tex_displace.uniform 3

		# Update camera view and light
		var p = app.world_camera.position
		program.camera.uniform(p.x, p.y, p.z)
		program.mvp.uniform app.world_camera.mvp_matrix
		program.light_center.uniform(app.light.position.x, app.light.position.y, app.light.position.z)

		# Set attributes
		program.coord.array_enabled = true
		program.coord.array(mesh.vertices, 3)

		program.tex_coord.array_enabled = true
		program.tex_coord.array(mesh.texture_coords, 2)

		program.normal.array_enabled = true
		program.normal.array(mesh.normals, 3)

		# Set uniforms
		program.scale.uniform 1.0
		program.rotation.uniform new Matrix.rotation(actor.rotation, 0.0, 1.0, 0.0)
		program.translation.uniform(actor.center.x, -actor.center.y, actor.center.z, 0.0)
		program.color.uniform(color[0], color[1], color[2], color[3])
		program.is_surface.uniform is_surface

		# Set the color texture?
		var tex = texture_id
		if tex == null then
			program.use_texture.uniform false
		else
			program.use_texture.uniform true
			program.tex.uniform tex
		end

		# Execute draw, support only meshes with `indices`
		glDrawElements(gl_TRIANGLES, mesh.indices.length, gl_UNSIGNED_SHORT, mesh.indices_c.native_array)

		# Catch any errors
		gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print gl_error
	end
end

# Graphical program to draw a planet with Phong lighting
class GlobeProgram
	super GamnitProgramFromSource

	redef var vertex_shader_source = """
		// Vertex coordinates
		attribute vec4 coord;

		// Vertex color tint
		uniform vec4 color;

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

		// Model rotation
		uniform mat4 rotation;

		// Lights config
		uniform vec3 light_center;

		// Texture of surface elevation to displace vertices
		uniform sampler2D tex_displace;

		// Draw this as a planet surface?
		uniform bool is_surface;

		// Output for the fragment shader
		varying vec4 v_color;
		varying vec2 v_tex_coord;
		varying vec3 v_normal;
		varying vec4 v_light_center;

		void main()
		{
			v_color = color;
			v_tex_coord = tex_coord;
			v_normal = normalize(vec4(normal, 0.0) * rotation * mvp).xyz;
			v_light_center = vec4(light_center, 0.0) * mvp;

			// Apply displacement map
			float s = scale;
			if (is_surface)
				s += 0.05 * texture2D(tex_displace, tex_coord).r;

			gl_Position = (vec4(coord.xyz * s, 1.0) * rotation + translation) * mvp;

		}
		""" @ glsl_vertex_shader

	redef var fragment_shader_source = """
		precision mediump float;

		// Input from the vertex shader
		varying vec4 v_color;
		varying vec2 v_tex_coord;
		varying vec3 v_normal;
		varying vec4 v_light_center;

		// Coordinates of the camera
		uniform vec3 camera;

		// Does this object use a texture?
		uniform bool use_texture;

		// Texture to apply on this object
		uniform sampler2D tex;

		// Reflection map to apply to the Phong logic
		uniform sampler2D tex_specular;

		// Texture for the dark side of the earth
		uniform sampler2D tex_night;

		// Draw this as a planet surface?
		uniform bool is_surface;

		// Colors config
		vec4 ambient_color = vec4(0.2, 0.2, 0.2, 1.0);
		vec4 diffuse_color = vec4(1.0, 1.0, 1.0, 1.0);
		vec4 specular_color = vec4(1.0, 1.0, 1.0, 1.0);

		void main()
		{
			// Lambert diffusion
			vec3 to_light = normalize(v_light_center.xyz);
			float lambert = max(dot(to_light, v_normal), 0.0);

			// Phong specular
			float specular = 0.0;
			if (lambert > 0.0) {
				vec3 to_camera = normalize(camera);
				vec3 normal = normalize(v_normal);
				vec3 light_reflect = reflect(to_light, normal);
				float spec_angle = max(dot(light_reflect, to_camera), 0.0);
				specular = pow(spec_angle, 16.0);

				if (is_surface)
					specular *= texture2D(tex_specular, v_tex_coord).x;
				else specular *= 0.2;
			}

			if(use_texture) {
				gl_FragColor = v_color * texture2D(tex, v_tex_coord);
			} else {
				gl_FragColor = v_color;
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
	var color = uniforms["color"].as(UniformVec4) is lazy

	# Scaling per vertex
	var scale = uniforms["scale"].as(UniformFloat) is lazy

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
	var tex_specular = uniforms["tex_specular"].as(UniformSampler2D) is lazy

	# Texture of the earth at night
	var tex_night = uniforms["tex_night"].as(UniformSampler2D) is lazy

	# Texture with elevation data
	var tex_displace = uniforms["tex_displace"].as(UniformSampler2D) is lazy

	# Position of the camera
	var camera = uniforms["camera"].as(UniformVec3) is lazy

	# Execute this program to draw a planet surface?
	var is_surface = uniforms["is_surface"].as(UniformBool) is lazy

	# Translation applied to each vertex
	var translation = uniforms["translation"].as(UniformVec4) is lazy

	# Rotation matrix
	var rotation = uniforms["rotation"].as(UniformMat4) is lazy

	# Center position of the light
	var light_center = uniforms["light_center"].as(UniformVec3) is lazy
end
