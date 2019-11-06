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

# Various material implementations
module more_materials

intrude import depth_core
intrude import flat
intrude import shadow
import more_lights

redef class Material
	# Get the default blueish material
	new do return new SmoothMaterial(
		[0.0, 0.0, 0.3, 1.0],
		[0.0, 0.0, 0.6, 1.0],
		[1.0, 1.0, 1.0, 1.0])
end

# Simple material with static colors
class SmoothMaterial
	super Material

	# Ambient color, always visible
	#
	# The RGB values should be premultiplied by the alpha value.
	var ambient_color: Array[Float] is writable

	# Diffuse color when covered by a light source
	#
	# The RGB values should be premultiplied by the alpha value.
	var diffuse_color: Array[Float] is writable

	# Specular color affecting reflections
	#
	# The RGB values should be premultiplied by the alpha value.
	var specular_color: Array[Float] is writable

	redef fun draw(actor, model, camera)
	do
		var program = app.blinn_phong_program
		program.use
		program.mvp.uniform camera.mvp_matrix

		var mesh = model.mesh

		# Actor specs
		glDisableVertexAttribArray program.translation.location
		glDisableVertexAttribArray program.scale.location

		program.translation.uniform(actor.center.x, actor.center.y, actor.center.z, 0.0)
		program.scale.uniform actor.scale
		program.alpha.uniform actor.alpha
		program.rotation = new Matrix.gamnit_euler_rotation(actor.pitch, actor.yaw, actor.roll)

		# From mesh
		program.coord.array_enabled = true
		program.coord.array(mesh.vertices, 3)

		program.normal.array_enabled = true
		program.normal.array(mesh.normals, 3)

		# No textures
		program.use_map_ambient.uniform false
		program.use_map_diffuse.uniform false
		program.use_map_specular.uniform false
		program.tex_coord.array_enabled = false

		# Camera
		program.camera.uniform(camera.position.x, camera.position.y, camera.position.z)

		# Colors from the material
		program.ambient_color.uniform(ambient_color[0], ambient_color[1],
		                              ambient_color[2], ambient_color[3])
		program.diffuse_color.uniform(diffuse_color[0], diffuse_color[1],
		                              diffuse_color[2], diffuse_color[3])
		program.specular_color.uniform(specular_color[0], specular_color[1],
		                               specular_color[2], specular_color[3])

		setup_lights(camera, program)

		# Execute draw
		if mesh.indices.is_empty then
			glDrawArrays(mesh.draw_mode, 0, mesh.vertices.length/3)
		else
			glDrawElements(mesh.draw_mode, mesh.indices.length, gl_UNSIGNED_SHORT, mesh.indices_c.native_array)
		end

		assert glGetError == gl_NO_ERROR
	end

	private fun setup_lights(camera: Camera, program: BlinnPhongProgram)
	do
		# TODO use a list of lights

		# Light, for Lambert and Blinn-Phong
		var light = app.light
		if light isa ParallelLight then
			program.light_kind.uniform 1

			# Vector parallel to the light source
			program.light_center.uniform(
				-light.pitch.sin * light.yaw.sin,
				light.pitch.cos,
				-light.yaw.cos)
		else if light isa PointLight then
			program.light_kind.uniform 2

			# Position of the light source
			program.light_center.uniform(app.light.position.x, app.light.position.y, app.light.position.z)
		else
			program.light_kind.uniform 0
		end

		# Draw projected shadows?
		if not light isa LightCastingShadows or not app.shadow_depth_texture_available then
			program.use_shadows.uniform false
			return
		else program.use_shadows.uniform true

		# Light point of view
		program.light_mvp.uniform light.camera.mvp_matrix

		# Depth texture
		glActiveTexture gl_TEXTURE4
		glBindTexture(gl_TEXTURE_2D, app.shadow_context.depth_texture)
		program.depth_texture.uniform 4
		program.depth_texture_size.uniform app.shadow_resolution.to_f
		program.depth_texture_taps.uniform 2 # TODO make configurable
	end
end

# Material with potential `diffuse_texture` and `specular_texture`
class TexturedMaterial
	super SmoothMaterial

	# Texture applied to the ambient_color
	var ambient_texture: nullable Texture = null is writable

	# Texture applied to the diffuse color
	var diffuse_texture: nullable Texture = null is writable

	# Texture applied to the specular color
	var specular_texture: nullable Texture = null is writable

	# Bump map TODO
	private var normals_texture: nullable Texture = null is writable

	redef fun draw(actor, model, camera)
	do
		var mesh = model.mesh

		var program = app.blinn_phong_program
		program.use

		# One of the textures used, if any
		var sample_used_texture = null

		var texture = ambient_texture
		if texture != null then
			glActiveTexture gl_TEXTURE0
			glBindTexture(gl_TEXTURE_2D, texture.gl_texture)
			program.use_map_ambient.uniform true
			program.map_ambient.uniform 0
			sample_used_texture = texture
		else
			program.use_map_ambient.uniform false
		end

		texture = diffuse_texture
		if texture != null then
			glActiveTexture gl_TEXTURE1
			glBindTexture(gl_TEXTURE_2D, texture.gl_texture)
			program.use_map_diffuse.uniform true
			program.map_diffuse.uniform 1
			sample_used_texture = texture
		else
			program.use_map_diffuse.uniform false
		end

		texture = specular_texture
		if texture != null then
			glActiveTexture gl_TEXTURE2
			glBindTexture(gl_TEXTURE_2D, texture.gl_texture)
			program.use_map_specular.uniform true
			program.map_specular.uniform 2
			sample_used_texture = texture
		else
			program.use_map_specular.uniform false
		end

		texture = normals_texture
		if texture != null then
			glActiveTexture gl_TEXTURE3
			glBindTexture(gl_TEXTURE_2D, texture.gl_texture)
			program.use_map_bump.uniform true
			program.map_bump.uniform 3
			sample_used_texture = texture
		else
			program.use_map_bump.uniform false
		end

		glDisableVertexAttribArray program.translation.location
		glDisableVertexAttribArray program.scale.location

		program.mvp.uniform camera.mvp_matrix
		program.translation.uniform(actor.center.x, actor.center.y, actor.center.z, 0.0)
		program.scale.uniform actor.scale
		program.alpha.uniform actor.alpha

		# If using a texture, set `texture_coords`
		program.tex_coord.array_enabled = sample_used_texture != null
		if sample_used_texture != null then
			if sample_used_texture isa RootTexture then
				# Coordinates are directly valid
				program.tex_coord.array(mesh.texture_coords, 2)
			else
				# Correlate texture coordinates from the substexture and the mesh.
				# This is slow, but should be cached on the GPU.
				var xa = sample_used_texture.offset_left
				var xd = sample_used_texture.offset_right - xa
				var ya = sample_used_texture.offset_top
				var yd = sample_used_texture.offset_bottom - ya

				var tex_coords = new Array[Float].with_capacity(mesh.texture_coords.length)
				for i in [0..mesh.texture_coords.length/2[ do
					tex_coords[i*2]   = xa + xd * mesh.texture_coords[i*2]
					tex_coords[i*2+1] = 1.0 - (ya + yd * mesh.texture_coords[i*2+1])
				end

				program.tex_coord.array(tex_coords, 2)
			end
		end

		program.coord.array_enabled = true
		program.coord.array(mesh.vertices, 3)

		program.rotation = new Matrix.gamnit_euler_rotation(actor.pitch, actor.yaw, actor.roll)

		program.ambient_color.uniform(ambient_color[0], ambient_color[1],
		                              ambient_color[2], ambient_color[3])
		program.diffuse_color.uniform(diffuse_color[0], diffuse_color[1],
		                              diffuse_color[2], diffuse_color[3])
		program.specular_color.uniform(specular_color[0], specular_color[1],
		                               specular_color[2], specular_color[3])

		program.normal.array_enabled = true
		program.normal.array(mesh.normals, 3)

		# Light
		setup_lights(camera, program)

		# Camera
		program.camera.uniform(camera.position.x, camera.position.y, camera.position.z)

		if mesh.indices.is_empty then
			glDrawArrays(mesh.draw_mode, 0, mesh.vertices.length/3)
		else
			glDrawElements(mesh.draw_mode, mesh.indices.length, gl_UNSIGNED_SHORT, mesh.indices_c.native_array)
		end
	end
end

# Simple material using the normals of the surface as color
#
# Each axis composing the normals are translated to color values.
# This material is useful for debugging normals or display models in a colorful way.
class NormalsMaterial
	super Material

	redef fun draw(actor, model, camera)
	do
		var program = app.normals_program
		program.use
		program.mvp.uniform camera.mvp_matrix

		var mesh = model.mesh

		# TODO apply normal map

		program.translation.uniform(actor.center.x, actor.center.y, actor.center.z, 0.0)
		program.scale.uniform actor.scale

		program.tex_coord.array_enabled = true
		program.tex_coord.array(mesh.texture_coords, 2)

		program.coord.array_enabled = true
		program.coord.array(mesh.vertices, 3)

		program.rotation = new Matrix.gamnit_euler_rotation(actor.pitch, actor.yaw, actor.roll)

		program.normal.array_enabled = true
		program.normal.array(mesh.normals, 3)

		if mesh.indices.is_empty then
			glDrawArrays(mesh.draw_mode, 0, mesh.vertices.length/3)
		else
			glDrawElements(mesh.draw_mode, mesh.indices.length, gl_UNSIGNED_SHORT, mesh.indices_c.native_array)
		end
	end
end

# Graphic program to display 3D models with Blinn-Phong specular lighting
class BlinnPhongProgram
	super GamnitProgramFromSource

	redef var vertex_shader_source = """
		// Vertex coordinates
		attribute vec4 coord;

		// Vertex translation
		attribute vec4 translation;

		// Vertex scaling
		attribute float scale;

		attribute float alpha;

		// Vertex coordinates on textures
		attribute vec2 tex_coord;

		// Vertex normal
		attribute vec3 normal;

		// Camera model view projection matrix
		uniform mat4 mvp;

		// Actor rotation
		attribute vec4 rotation_row0;
		attribute vec4 rotation_row1;
		attribute vec4 rotation_row2;
		attribute vec4 rotation_row3;

		mat4 rotation()
		{
			return mat4(rotation_row0, rotation_row1, rotation_row2, rotation_row3);
		}

		// Lights config
		uniform lowp int light_kind;
		uniform vec3 light_center;
		uniform mat4 light_mvp;

		// Coordinates of the camera
		uniform vec3 camera;

		// Output for the fragment shader
		varying vec2 v_tex_coord;
		varying vec3 v_normal;
		varying vec4 v_to_light;
		varying vec4 v_to_camera;
		varying vec4 v_depth_pos;
		varying float v_alpha;

		void main()
		{
			mat4 rotation = rotation();
			vec4 pos = (vec4(coord.xyz * scale, 1.0) * rotation + translation);
			gl_Position = pos * mvp;
			v_depth_pos = (pos * light_mvp) * 0.5 + 0.5;

			// Pass varyings to the fragment shader
			v_tex_coord = vec2(tex_coord.x, 1.0 - tex_coord.y);
			v_normal = normalize(vec4(normal, 0.0) * rotation).xyz;
			v_to_camera = normalize(vec4(camera, 1.0) - pos);

			if (light_kind == 0) {
				// No light
			} else if (light_kind == 1) {
				// Parallel
				v_to_light = normalize(vec4(light_center, 1.0));
			} else {
				// Point light (and others?)
				v_to_light = normalize(vec4(light_center, 1.0) - pos);
			}

			v_alpha = alpha;
		}
		""" @ glsl_vertex_shader

	redef var fragment_shader_source = """
		precision mediump float;

		// Input from the vertex shader
		varying vec2 v_tex_coord;
		varying vec3 v_normal;
		varying vec4 v_to_light;
		varying vec4 v_to_camera;
		varying vec4 v_depth_pos;
		varying float v_alpha;

		// Colors
		uniform vec4 ambient_color;
		uniform vec4 diffuse_color;
		uniform vec4 specular_color;

		// Ambient map
		uniform bool use_map_ambient;
		uniform sampler2D map_ambient;

		// Diffuse map
		uniform bool use_map_diffuse;
		uniform sampler2D map_diffuse;

		// Specular map
		uniform bool use_map_specular;
		uniform sampler2D map_specular;

		// Bump map
		uniform bool use_map_bump;
		uniform sampler2D map_bump;

		// Normal map
		uniform bool use_map_normal;
		uniform sampler2D map_normal;

		// Shadow
		uniform lowp int light_kind;
		uniform bool use_shadows;
		uniform sampler2D depth_texture;
		uniform float depth_size;
		uniform int depth_taps;

		// Shadow effect on the diffuse colors of the fragment at offset `x, y`
		float shadow_lookup(vec2 depth_coord, float x, float y) {
			float tap_width = 1.0;
			float pixel_size = tap_width/depth_size;

			vec2 offset = vec2(x * pixel_size * v_depth_pos.w,
			                   y * pixel_size * v_depth_pos.w);
			depth_coord += offset;

			float depth = v_depth_pos.z/v_depth_pos.w;
			//vec2 depth_coord = v_depth_pos.xy/v_depth_pos.w;
			if (depth_coord.x < 0.0 || depth_coord.x > 1.0 || depth_coord.y < 0.0 || depth_coord.y > 1.0) {
				// Out of the shadow map texture
				//gl_FragColor = vec4(1.0, 0.0, 0.0, 1.0); // debug, red out of the light view
				return 1.0;
			}

			float shadow_depth = texture2D(depth_texture, depth_coord).r;
			float bias = 0.0001;
			if (shadow_depth == 1.0) {
				// Too far to be in depth texture
				return 1.0;
			} else if (shadow_depth <= depth - bias) {
				// In a shadow
				//gl_FragColor = vec4(0.0, 0.0, 1.0, 1.0); // debug, blue shadows
				return 0.2; // TODO replace with a configurable ambient light
			}

			//gl_FragColor = vec4(0.0, 1.0-(shadow_depth-depth), 0.0, 1.0); // debug, green lit surfaces
			return 1.0;
		}

		// Shadow effect on the diffuse colors of the fragment
		float shadow() {
			if (!use_shadows) return 1.0;

			vec2 depth_coord = v_depth_pos.xy/v_depth_pos.w;

			float taps = float(depth_taps);
			float tap_step = 2.00/taps;
			float sum = 0.0;
			for (float x = -1.0; x <= 0.99; x += tap_step)
				for (float y = -1.0; y <= 0.99; y += tap_step)
					sum += shadow_lookup(depth_coord, x, y);
			return sum / taps / taps;
		}

		void main()
		{
			// Normal
			vec3 normal = v_normal;
			if (use_map_bump) {
				// TODO
				vec3 bump = 2.0 * texture2D(map_bump, v_tex_coord).rgb - 1.0;
			}

			// Ambient light
			vec4 ambient = ambient_color * v_alpha;
			if (use_map_ambient) ambient *= texture2D(map_ambient, v_tex_coord);

			if (light_kind == 0) {
				// No light, show diffuse and ambient

				vec4 diffuse = diffuse_color * v_alpha;
				if (use_map_diffuse) diffuse *= texture2D(map_diffuse, v_tex_coord);

				gl_FragColor = ambient + diffuse;
			} else {
				// Parallel light or point light (1 or 2)

				// Diffuse Lambert light
				vec3 to_light = v_to_light.xyz;
				float lambert = clamp(dot(normal, to_light), 0.0, 1.0);

				vec4 diffuse = lambert * diffuse_color;
				if (use_map_diffuse) diffuse *= texture2D(map_diffuse, v_tex_coord);

				// Specular Phong light
				float s = 0.0;
				if (lambert > 0.0) {
					// In light
					vec3 l = reflect(-to_light, normal);
					s = clamp(dot(l, v_to_camera.xyz), 0.0, 1.0);
					s = pow(s, 8.0); // TODO make this `shininess` a material attribute

					// Shadows
					diffuse *= shadow();
				}

				vec4 specular = s * specular_color * v_alpha;
				if (use_map_specular) specular *= texture2D(map_specular, v_tex_coord).x;

				gl_FragColor = ambient + diffuse + specular;
			}

			if (gl_FragColor.a < 0.01) discard;

			//gl_FragColor = vec4(normalize(normal).rgb, 1.0); // Debug normals
		}
		""" @ glsl_fragment_shader

	# Vertices coordinates
	var coord = attributes["coord"].as(AttributeVec4) is lazy

	# Should this program use the texture `map_ambient`?
	var use_map_ambient = uniforms["use_map_ambient"].as(UniformBool) is lazy

	# Ambient texture unit
	var map_ambient = uniforms["map_ambient"].as(UniformSampler2D) is lazy

	# Should this program use the texture `map_diffuse`?
	var use_map_diffuse = uniforms["use_map_diffuse"].as(UniformBool) is lazy

	# Diffuse texture unit
	var map_diffuse = uniforms["map_diffuse"].as(UniformSampler2D) is lazy

	# Should this program use the texture `map_specular`?
	var use_map_specular = uniforms["use_map_specular"].as(UniformBool) is lazy

	# Specularity texture unit
	var map_specular = uniforms["map_specular"].as(UniformSampler2D) is lazy

	# Should this program use the texture `map_bump`?
	var use_map_bump = uniforms["use_map_bump"].as(UniformBool) is lazy

	# Bump texture unit
	var map_bump = uniforms["map_bump"].as(UniformSampler2D) is lazy

	# Normal per vertex
	var normal = attributes["normal"].as(AttributeVec3) is lazy

	# Coordinates on the textures, per vertex
	var tex_coord = attributes["tex_coord"].as(AttributeVec2) is lazy

	# Ambient color
	var ambient_color = uniforms["ambient_color"].as(UniformVec4) is lazy

	# Diffuse color
	var diffuse_color = uniforms["diffuse_color"].as(UniformVec4) is lazy

	# Specular color
	var specular_color = uniforms["specular_color"].as(UniformVec4) is lazy

	# Kind of lights: 0 -> no light, 1 -> parallel, 2 -> point
	var light_kind = uniforms["light_kind"].as(UniformInt) is lazy

	# Center position of the light *or* vector to parallel light source
	var light_center = uniforms["light_center"].as(UniformVec3) is lazy

	# Light model view projection matrix
	var light_mvp = uniforms["light_mvp"].as(UniformMat4) is lazy

	# Should shadow be drawn? Would use `depth_texture` and `light_mvp`.
	var use_shadows = uniforms["use_shadows"].as(UniformBool) is lazy

	# Diffuse texture unit
	var depth_texture = uniforms["depth_texture"].as(UniformSampler2D) is lazy

	# Size, in pixels, of `depth_texture`
	var depth_texture_size = uniforms["depth_size"].as(UniformFloat) is lazy

	# Times to tap the `depth_texture`, square root (set to 3 for a total of 9 taps)
	var depth_texture_taps = uniforms["depth_taps"].as(UniformInt) is lazy

	# Camera position
	var camera = uniforms["camera"].as(UniformVec3) is lazy

	# Translation applied to each vertex
	var translation = attributes["translation"].as(AttributeVec4) is lazy # TODO attribute

	# Set `mat` at the uniform rotation matrix
	fun rotation=(mat: Matrix)
	do
		var i = 0
		for r in [rotation_row0, rotation_row1, rotation_row2, rotation_row3] do
			if r.is_active then
				glDisableVertexAttribArray r.location
				r.uniform(mat[0, i], mat[1, i], mat[2, i], mat[3, i])
			end
			i += 1
		end
		var gl_error = glGetError
		assert gl_error == gl_NO_ERROR else print_error gl_error
	end

	# Rotation matrix, row0
	var rotation_row0 = attributes["rotation_row0"].as(AttributeVec4) is lazy

	# Rotation matrix, row 1
	var rotation_row1 = attributes["rotation_row1"].as(AttributeVec4) is lazy

	# Rotation matrix, row 2
	var rotation_row2 = attributes["rotation_row2"].as(AttributeVec4) is lazy

	# Rotation matrix, row 3
	var rotation_row3 = attributes["rotation_row3"].as(AttributeVec4) is lazy

	# Scaling per vertex
	var scale = attributes["scale"].as(AttributeFloat) is lazy

	# Scaling per vertex
	var alpha = attributes["alpha"].as(AttributeFloat) is lazy

	# Camera model view projection matrix
	var mvp = uniforms["mvp"].as(UniformMat4) is lazy
end

# Program to color objects from their normal vectors
#
# May be used in place of `BlinnPhongProgram` for debugging or effect.
class NormalProgram
	super BlinnPhongProgram

	redef var fragment_shader_source = """
		precision mediump float;

		// Input from the vertex shader
		varying vec3 v_normal;

		void main()
		{
			gl_FragColor = vec4(v_normal*0.5 + 0.5, 1.0);
		}
		""" @ glsl_fragment_shader
end

redef class App
	private var blinn_phong_program = new BlinnPhongProgram is lazy

	private var normals_program = new NormalProgram is lazy
end
