# This file is part of NIT (http://www.nitlanguage.org).
#
# Copyright 2012-2014 Alexis Laferrière <alexis.laf@xymus.net>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#	 http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Classic moles game
#
# This is a minimal practical example of the mnit framework.
module moles is
	app_version(1, 0, git_revision)
	app_name("Crazy Groundhogs")
end

import mnit

import drawing

# A hole with a possible mole, or a trap in it
class Hole
	var game: Game

	# Horizontal center of the hole
	var x: Int

	# Vertical center of the hole
	var y: Int

	# Half width of the hit box
	var dx = 200.0

	# Height of the hit box
	var dy = 800.0

	# Content (and state) of this hole
	var content: nullable HoleContent = null

	fun do_turn
	do
		var content = content
		if content != null then
			if content == game.down then
				if (20.0*game.speed_modifier).to_i.rand == 0 then
					# dead / hide
					self.content = null
				end
			else if (80.0*game.speed_modifier).to_i.rand == 0 then
				# hide
				self.content = null
			end
		else if (100.0*game.speed_modifier).to_i.rand == 0 then
			# shot traps only at 50 points and up
			var trap = false
			if game.points > 50 then

				# After 50 points we have more and more traps until point 1000
				var d = 1250-(game.points - 50)
				if d < 200 then d = 200

				if d.rand < 100 then trap = true
			end

			if trap then
				self.content = game.trap
			else self.content = game.up
		end
	end

	# Does this hole intercepts `event`?
	fun intercepts(event: PointerEvent): Bool
	do
		if content == null then return false

		var dx = (dx*display_scale).to_i
		var dy = (dy*display_scale).to_i
		var ex = event.x.to_i - display_offset_x
		var ey = event.y.to_i - display_offset_y
		return ex > x - dx and ex < x + dx and
			ey > y - dy and ey < y
	end

	# Draw this hole and content to `display`
	fun draw(display: Display)
	do
		# The hole itself
		var img = app.assets.empty
		var dx = 300.0*display_scale
		var dy = 256.0*display_scale
		img.scale = display_scale
		display.blit(img, x-dx.to_i+display_offset_x, y-dy.to_i+display_offset_y)

		# The mole in the hole, or other content
		var content = self.content
		if content != null then
			content.draw(display, x, y)
		end
	end
end

# Content of a `Hole`
class HoleContent
	# Image
	var img: Image

	# Offset of the horizontal center of the hole
	var dx: Float

	# Offset of the vertical center of the hole
	var dy: Float

	# Hit this hole content
	fun hit(game: Game, hole: Hole, event: PointerEvent) do end

	# Draw this content to `display`
	fun draw(display: Display, x, y: Int)
	do
		img.scale = display_scale
		display.blit(img,
			x-dx.to_i+display_offset_x,
			y-dy.to_i+display_offset_y)
	end
end

# A mole in a hole
class Mole
	super HoleContent

	# Points value when hit
	var value: Int

	redef fun hit(game, hole, event)
	do
		game.points += value
		hole.content = game.down
	end
end

# A trap held out of a hole
class Trap
	super HoleContent

	# Points penalty when hit
	var penalty: Int

	redef fun hit(game, hole, event)
	do
		game.points -= penalty
		if game.points < 0 then game.points = 0
		hole.content = null
	end
end

class Game
	# All holes, filled or not
	var holes = new Array[Hole]

	# rule / const
	var modifier_half_life = 1000.0

	# Row count
	fun rows: Int do return 4

	# Columns count
	fun columns: Int do return 5

	# Score
	var points = 0

	# Acceleration
	var speed_modifier = 1.0

	# Vertical offset between rows
	var dist_between_rows = 512

	# Horizontal offset between columns
	var dist_between_columns = 600

	# Global accumulation control, applied to `speed_modifier`
	fun global_speed_modifier: Float do return 2.0

	# A mole, in a hole
	var up = new Mole(app.assets.up, 212.0*display_scale, 820.0*display_scale, 1) is lazy

	# A mole that was hit
	var down = new HoleContent(app.assets.hit, 250.0*display_scale, 512.0*display_scale) is lazy

	# A trap out of the hole
	var trap = new Trap(app.assets.trap, 212.0*display_scale, 830.0*display_scale, 10) is lazy

	init
	do
		var dx = (dist_between_columns.to_f*display_scale).to_i
		var dy = (dist_between_rows.to_f*display_scale).to_i
		for x in [0 .. columns[ do
			for y in [0 .. rows[ do
				holes.add(new Hole(self, x*dx, y*dy))
			end
		end
	end

	fun do_turn do
		for hole in holes do hole.do_turn

		speed_modifier = modifier_half_life / (modifier_half_life+points.to_f) * global_speed_modifier
	end
end

# Where all the UI stuff is done
class Screen
	# The running game
	var game = new Game

	fun do_frame(display: Display)
	do
		display.clear(0.1, 0.65, 0.2)

		app.assets.sign_warning.scale = display_scale
		app.assets.sign_cute.scale = display_scale
		app.assets.sign_hits.scale = display_scale
		for img in app.numbers.imgs do img.scale = display_scale

		display.blit(app.assets.sign_warning, (0.0*display_scale).to_i, (0.0*display_scale).to_i)
		display.blit(app.assets.sign_cute, (740.0*display_scale).to_i, (0.0*display_scale).to_i)
		display.blit(app.assets.sign_hits, (1640.0*display_scale).to_i, (55.0*display_scale).to_i)
		display.blit_number(app.numbers, game.points, (1720.0*display_scale).to_i, (170.0*display_scale).to_i)

		for hole in game.holes do
			hole.draw display
		end
	end

	fun input(event: InputEvent): Bool
	do
		if event isa PointerEvent then
			for hole in game.holes do
				if hole.intercepts(event) then
					var hole_content = hole.content
					if hole_content != null then hole_content.hit(game, hole, event)
					return true
				end
			end
		end

		return false
	end
end

redef class App

	# Main play screen
	var screen = new Screen

	# Image set generate by inkscape_tools
	var assets = new DrawingImages

	# Numbers to display the score
	var numbers = new NumberImages(assets.n)

	redef fun on_start
	do
		super
		assets.load_all self
	end

	redef fun on_create
	do
		super

		maximum_fps = 50
	end

	redef fun frame_core(display)
	do
		screen.game.do_turn
		screen.do_frame(display)
	end

	redef fun input(ie)
	do
		if ie isa QuitEvent or
			(ie isa KeyEvent and ie.to_c == 'q') then
			quit = true
			return true
		end

		return screen.input(ie)
	end
end

# Main zoom
fun display_scale: Float do return 1.0

# Depends on the hole center in the uo image
fun display_offset_x: Int do return (512.0*display_scale).to_i

# Depends on the width of the holes
fun display_offset_y: Int do return (800.0*display_scale).to_i
