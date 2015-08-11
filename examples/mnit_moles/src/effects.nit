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

# Graphical effects
module effects

intrude import geometry::points_and_lines
import mnit::opengles1

import moles

# Position, or vector
class Pos
	super Point[Float]

	# Addition of `self` and `other`
	fun +(other: Pos): Pos do return new Pos(other.x + x, other.y + y)
end

redef class PointerEvent
	# Convert to `Pos`
	fun to_pos: Pos do return new Pos(x, y)
end

redef class Float
	# Pretty alias to `pow`
	private fun ^(other: Float): Float do return self.pow(other)
end

# Graphical effect
abstract class Effect
	# Time of creation since (appropriate) app lauch
	var created_at: Float = app.clock.total.to_f

	# Is this effect dead?
	var dead = false

	# Time to live of this effect, in seconds
	var ttl: Float = ttl_base + ttl_rand.rand is lazy

	# Time to live base value
	private var ttl_base: Float

	# Variation range to add to `ttl_base`
	private var ttl_rand: Float

	private fun update_and_draw(display: Display, t: Float) do end
end

# Full screen flash
class Flash
	super Effect

	# Red value
	var r: Float

	# Green value
	var g: Float

	# Blue value
	var b: Float

	# Start alpha value
	var a: Float

	# Reduction in alpha value per seconds
	var da: Float

	redef fun update_and_draw(display, t)
	do
		var dt = t - created_at
		var a = a - da * dt
		if a <= 0.0 then
			dead = true
			return
		end

		native_flash(r, g, b, a, display.width.to_f, display.height.to_f)
	end

	private fun native_flash(r, g, b, a, w, h: Float) `{
		GLfloat colors[] =
		{
		    r, g, b, a,
		    r, g, b, a,
		    r, g, b, a,
		    r, g, b, a,
		};
		GLfloat coords[] =
		{
		    0.0, 0.0, 0.0,
		    0.0, h, 0.0,
		    w, 0.0, 0.0,
		    w, h, 0.0,
		};

		glLoadIdentity();

		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_COLOR_ARRAY);

		glEnable(GL_BLEND);
		glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

		glDisable(GL_DEPTH_TEST);
		glDisable(GL_TEXTURE_2D);

		glVertexPointer(3, GL_FLOAT, 0, coords);
		glColorPointer(4, GL_FLOAT, 0, colors);
		glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);

		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_COLOR_ARRAY);
		glDisable(GL_BLEND);

		if ((mnit_opengles_error_code = glGetError()) != GL_NO_ERROR) {
			fprintf(stderr, "Error drawing: %i\n", mnit_opengles_error_code);
		}
	`}
end

# Visible particle
abstract class Particle
	super Effect

	# Effect image
	var img: Image
end

# Particle moving along a cubic Bézier curve
class CubicBezierParticle
	super Particle

	# Points on this curve, from the start to the end with the handles in the middle
	#
	# Require: `points.length == 4`
	var points: Array[Pos]

	redef fun update_and_draw(display, t)
	do
		assert points.length == 4

		var dt = t - created_at
		var p = dt / ttl

		var i = 1.0-p
		var bx = i*i*i * points[0].x + 3.0*i*i*p * points[1].x +
		         3.0*i*p*p * points[2].x + p*p*p*points[3].x
		var by = i*i*i * points[0].y + 3.0*i*i*p * points[1].y +
		         3.0*i*p*p * points[2].y + p*p*p*points[3].y

		img.scale = display_scale
		if display isa Opengles1Display then display.color(1.0, 1.0, 1.0, p)
		display.blit_centered(img, bx, by)
		if display isa Opengles1Display then display.reset_color

		if dt > ttl then dead = true
	end
end

# Particle falling like a feather
class FeatheryParticle
	super Particle

	# Origin of effect
	var from: Pos

	# Randomized variation so this particle is unique
	var ddt: Float = pi.rand

	# Direction: `-1.0` for left, `1.0` for right
	var dir: Float = if 2.rand == 0 then -1.0 else 1.0

	# Randomized variation on X
	var ddx: Float = (4.0 - 8.0.rand)^2.0

	# Randomized variation on Y
	var ddy: Float = (12.0 - 24.0.rand)^2.0

	redef fun update_and_draw(display, t)
	do
		var dt = t - created_at

		var dx = ddx + 30.0*(dt+ddt).sin
		dx *= dir
		var dy = ddy + 20.0*dt + 16.0*(dt*2.0+ddt*2.0).cos
		var pos = from + new Pos(dx, dy)

		if display isa Opengles1Display then display.color(1.0, 1.0, 1.0, 5.0-5.0*dt/ttl)
		display.blit_centered(img, pos.x, pos.y)
		if display isa Opengles1Display then display.reset_color

		if dt > ttl then dead = true
	end
end

# Particles that start small then grow bigger and fade out
private class BlowUpParticle
	super Particle

	# Origin/center of effect
	var from: Pos

	redef fun update_and_draw(display, t)
	do
		var dt = t - created_at
		var p = dt/ttl

		if display isa Opengles1Display then display.color(1.0, 1.0, 1.0, 2.0-p*2.0)

		img.scale = p*4.0*display_scale
		display.blit_centered(img, from.x, from.y)

		if display isa Opengles1Display then display.reset_color

		if dt > ttl then dead = true
	end
end

redef class Screen
	private var particles = new Array[Particle]
	private var flashes = new Array[Flash]

	redef fun draw_hud(display)
	do
		var t = app.clock.total.to_f

		# Particles
		for particle in particles do particle.update_and_draw(display, t)
		for particle in particles.reverse_iterator do if particle.dead then
			particles.remove particle
		end

		# Flashes
		for flash in flashes do flash.update_and_draw(display, t)
		for flash in flashes.reverse_iterator do if flash.dead then
			flashes.remove flash
		end

		super
	end

	private var score_center = new Pos(48.0*display_scale, 32.0*display_scale) is lazy
	private var score_entry = new Pos(48.0*display_scale, 256.0*display_scale) is lazy

	private var score_history = new List[Int]
	private var score_history_max_length = 60

	redef fun draw_score(display, score)
	do
		# Use an history to smooth the score
		score_history.add game.points
		if score_history.length > score_history_max_length then score_history.shift
		var sum = 0
		for h in score_history do sum += h
		var avg = sum.to_f/score_history.length.to_f
		var d = game.points.to_f - avg

		# Color the score according to positive or negative changes
		var r = 1.0
		var g = 1.0
		var b = 1.0
		if d > 0.0 then
			r = 1.0-d.to_f/2.0
			b = r
			g = 1.0-d.to_f/10.0
		else if d < 0.0 then
			g = 1.0+d.to_f/5.0
			b = g
		end

		if display isa Opengles1Display then display.color(r, g, b, 1.0)

		# Draw the score itself
		super(display, avg.to_i)

		if display isa Opengles1Display then display.reset_color
	end
end

redef class HoleContent
	# Add a `CubicBezierParticle` from `event` to the score box with `img`
	private fun bezier_to_score(img: Image, event: PointerEvent)
	do
		app.screen.particles.add new CubicBezierParticle(2.0, 0.0, img,
			[event.to_pos, event.to_pos + new Pos(0.0, -128.0),
			 app.screen.score_entry, app.screen.score_center])
	end
end

redef class Mole

	# Number of hair particles
	private var n_hair_on_hit = 20

	redef fun hit(game, hole, event)
	do
		super

		app.assets.hair.scale = display_scale
		for i in n_hair_on_hit.times do
			app.screen.particles.add new FeatheryParticle(2.0, 2.0, app.assets.hair, event.to_pos)
		end

		bezier_to_score(app.assets.point, event)
		app.screen.particles.add new BlowUpParticle(0.5, 0.0, app.assets.point, event.to_pos)
	end
end

redef class Trap
	# Image for `CubicBezierParticle` effect towards the score board
	protected fun penalty_img: Image do return app.assets.penalty_ten

	# `Flash` effects on hit
	protected fun flashes: Array[Flash] do
		return [new Flash(0.5, 0.0, 1.0, 0.0, 0.0, 0.5, 2.0)]
	end

	redef fun hit(game, hole, event)
	do
		super

		bezier_to_score(penalty_img, event)
		app.screen.particles.add new BlowUpParticle(0.5, 0.0, penalty_img, event.to_pos)

		app.screen.flashes.add_all flashes
	end
end
