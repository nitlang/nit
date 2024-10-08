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

# Particle effects
#
# Particles are managed by instances of `ParticleSystem` that
# are configured for a specific kind of particle.
# For instance, a particle system can be created for a max of 100 particles,
# with a smoke effect and a precise texture, as in:
#
# ~~~
# var smoke = new ParticleSystem(100, app.smoke_program, new Texture("smoke.png"))
# ~~~
#
# The system must be registered in `app.particle_systems` to be drawn on screen.
#
# Particles are added to a system with their configuration, as in:
#
# ~~~
# var position = new Point3d[Float](0.0, 0.0, 0.0)
# var scale = 2.0
# var time_to_live = 1.0 # in seconds
# smoke.add(position, scale, time_to_live)
# ~~~
module particles

import depth_core

redef class App

	# Graphics program to display static non-moving particles
	var static_program = new ParticleProgram

	# Graphics program to display blowing up particles
	var explosion_program = new ExplosionProgram

	# Graphics program to display particles slowly drifting upwards
	var smoke_program = new SmokeProgram

	# Enabled particle emitters
	#
	# To be populated by the client program.
	var particle_systems = new Array[ParticleSystem]
end

# Particle system using `program` and `texture` to draw each particles
#
# Each instance draws a maximum of `n_particles`.
# If full, new particles replace the oldest particles.
# Expired particle are still sent to the CPU but should be discarded by the vertex shader.
class ParticleSystem

	# Maximum number of particles
	var n_particles: Int

	private var total_particles = 0

	# Program to draw the particles
	var program: ParticleProgram

	# Texture to apply on particles, if any
	var texture: nullable Texture

	# Clock used to set `ots` and `program::t`
	#
	# TODO control this value from the game logic to allow pausing and slowing time.
	private var clock = new Clock

	# Coordinates of each particle effects
	private var centers = new Array[Float]

	# Creation time of each particles
	private var ots = new Array[Float]

	# Scale of each particles
	private var scales = new Array[Float]

	# Time-to-live of each particle
	private var ttls = new Array[Float]

	# Clear all particles
	fun clear
	do
		centers.clear
		ots.clear
		scales.clear
		ttls.clear
		total_particles = 0
	end

	# Add a particle at `center` with `scale`, living for `ttl` from `time_offset`
	#
	# `time_offset` is added to the creation time, it can be used to delay the
	# apparition of a particle using a positive value.
	#
	# See the doc of the precise class of `program`, or the general `ParticleProgram`
	# for information on the effect of these parameters.
	fun add(center: Point3d[Float], scale: Float, ttl: Float, time_offset: nullable Float)
	do
		var i = total_particles % n_particles
		total_particles += 1

		centers[i*3  ] = center.x
		centers[i*3+1] = center.y
		centers[i*3+2] = center.z

		ttls[i] = ttl
		scales[i] = scale

		time_offset = time_offset or else 0.0
		ots[i] = clock.total.to_f + time_offset
	end

	# Draw all particles of this emitter
	fun draw
	do
		if ots.is_empty then return

		var program = program
		program.use

		var texture = texture
		if texture != null then
			glActiveTexture gl_TEXTURE0
			glBindTexture(gl_TEXTURE_2D, texture.gl_texture)
			program.use_texture.uniform true
			program.texture.uniform 0
		else
			program.use_texture.uniform false
		end

		program.scale.array_enabled = true
		program.scale.array(scales, 1)

		program.center.array_enabled = true
		program.center.array(centers, 3)

		program.color.array_enabled = false
		program.color.uniform(1.0, 1.0, 1.0, 1.0)

		program.ot.array_enabled = true
		program.ot.array(ots, 1)

		program.ttl.array_enabled = true
		program.ttl.array(ttls, 1)

		program.t.uniform clock.total.to_f
		program.mvp.uniform app.world_camera.mvp_matrix

		glDrawArrays(gl_POINTS, 0, ots.length)
	end
end

# Particle drawing program using `gl_POINTS`
#
# This program should be subclassed to create custom particle effects.
# Either `vertex_shader_source` and `vertex_shader_core` can be refined.
class ParticleProgram
	super GamnitProgramFromSource

	redef var vertex_shader_source = """
		// Coordinates of particle effects
		attribute vec4 center;

		// Particles color tint
		attribute vec4 color;
		varying vec4 v_color;

		// Per particle scaling
		attribute float scale;

		// Model view projection matrix
		uniform mat4 mvp;

		// Time-to-live of each particle
		attribute float ttl;

		// Creation time of each particle
		attribute float ot;

		// Current time
		uniform float t;

		void main()
		{
			// Pass varyings to the fragment shader
			v_color = color;

			float dt = t - ot;
			float pt = dt/ttl;

			// Discard expired or not yet created particles
			if (dt > ttl || dt < 0.0) {
				gl_PointSize = 0.0;
				return;
			}

			{{{vertex_shader_core}}}
		}
		"""

	# Core GLSL code for `vertex_shader_source`
	#
	# Refine this function to easily tweak the position, size and color of particles.
	#
	# Reminder: Each execution of the vertex shader applies to a single particle.
	#
	# ## Input variables:
	# * `center`: reference coordinates of the particle effect.
	#   This if often the center of the particle itself,
	#   but it can also be reference coordinates for a moving particle.
	# * `mvp`: model-view-projection matrix.
	# * `color`: color tint of the particle.
	#
	# * `t`: global seconds counter since the creation of this particle emitter.
	# * `ot`: creation time of the particle, in seconds, in reference to `t`.
	# * `dt`: seconds since creation of the particle.
	# * `ttl`: time-to-live of the particle, in seconds.
	# * `pt`: advancement of this particle in its lifetime, in `[0.0 .. 1.0]`.
	#
	# ## Output variables:
	# * `gl_Position`: position of the particle in camera coordinates.
	# * `gl_PointSize`: size of the particle in camera coordinates.
	#   Set to `0.0` to discard the particle.
	# * `v_color`: tint applied to the particle.
	#   Assigned by default to the value of `color`.
	#
	# ## Reference implementation
	#
	# The default implementation apply the model-view-projection matrix on the position
	# and scales according to the distance from the camera.
	# Most particle effects should apply the same base logic as the default implementation.
	# Here it is for reference:
	#
	# ~~~glsl
	# gl_Position = center * mvp;
	# gl_PointSize = scale / gl_Position.z;
	# ~~~
	fun vertex_shader_core: String do return """
			gl_Position = center * mvp;
			gl_PointSize = scale / gl_Position.z;
	"""

	redef var fragment_shader_source = """
		precision mediump float;

		// Input from the vertex shader
		varying vec4 v_color;

		// Does this particle use a texture?
		uniform bool use_texture;

		// Texture to apply on this particle
		uniform sampler2D texture0;

		void main()
		{
			if (use_texture) {
				gl_FragColor = texture2D(texture0, gl_PointCoord) * v_color;
			} else {
				gl_FragColor = v_color;
			}
		}
		""" @ glsl_fragment_shader

	# Coordinates of particle effects
	var center = attributes["center"].as(AttributeVec4) is lazy

	# Should this program use the texture `texture`?
	var use_texture = uniforms["use_texture"].as(UniformBool) is lazy

	# Visible texture unit
	var texture = uniforms["texture0"].as(UniformSampler2D) is lazy

	# Color tint per vertex
	var color = attributes["color"].as(AttributeVec4) is lazy

	# Scaling per vertex
	var scale = attributes["scale"].as(AttributeFloat) is lazy

	# Model view projection matrix
	var mvp = uniforms["mvp"].as(UniformMat4) is lazy

	# Creation time of each particle
	var ot = attributes["ot"].as(AttributeFloat) is lazy

	# Current time
	var t = uniforms["t"].as(UniformFloat) is lazy

	# Time-to-live of each particle
	var ttl = attributes["ttl"].as(AttributeFloat) is lazy
end

# Graphics program to display blowing up particles
class ExplosionProgram
	super ParticleProgram

	redef fun vertex_shader_core do return """
		gl_Position = center * mvp;
		gl_PointSize = scale / gl_Position.z * pt;

		if (pt > 0.8) v_color *= (1.0-pt)/0.2;
	"""
end

# Graphics program to display particles slowly drifting upwards
class SmokeProgram
	super ParticleProgram

	redef fun vertex_shader_core do return """
		vec4 c = center;
		c.y += dt * 1.0;
		c.x += dt * 0.1;

		gl_Position = c * mvp;
		gl_PointSize = scale / gl_Position.z * (pt+0.1);

		if (pt < 0.1)
			v_color *= pt / 0.1;
		else
			v_color *= 1.0 - pt*0.9;
	"""
end
