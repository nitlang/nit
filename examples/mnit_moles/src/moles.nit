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
module moles

import mnit
import realtime

class Hole
	var game: Game

	# Center of the hole
	var x: Int
	var y: Int

	# Half width of the hit box
	var dx: Int
	# Heigth of the hit box
	var dy: Int

	# state
	var up = false
	var hitted = false

	init (g: Game, x, y: Int)
	do
		game = g
		self.x = x
		self.y = y
		self.dx = (200.0*display_scale).to_i
		self.dy = (800.0*display_scale).to_i
	end

	fun do_turn
	do
		if up then
			if hitted then
				if (20.0*game.speed_modifier).to_i.rand == 0 then
					# dead / hide
					hitted = false
					up = false
				end
			else if (80.0*game.speed_modifier).to_i.rand == 0 then
				# hide
				up = false
			end
		else if (100.0*game.speed_modifier).to_i.rand == 0 then
			# show up
			up = true
		end
	end

	fun intercepts(event: PointerEvent): Bool
	do
		if not up or hitted then return false

		var ex = event.x.to_i - display_offset_x
		var ey = event.y.to_i - display_offset_y
		return ex > x - dx and ex < x + dx and
			ey > y - dy and ey < y
	end

	fun hit
	do
		if hitted then return

		if up then
			hitted = true
			game.points += 1
		else abort # should not happen
	end
end

class Game
	var holes = new Array[Hole].with_capacity(4)

	# rule / const
	var modifier_half_life = 40.0
	var rows = 5
	var columns = 3

	# state
	var points = 0
	var speed_modifier = 1.0

	# configs
	var dist_between_holes = 512
	fun global_speed_modifier: Float do return 2.0

	init
	do
		var d = (dist_between_holes.to_f*display_scale).to_i
		for x in [0 .. rows[ do
			for y in [0 .. columns[ do
				holes.add(new Hole(self, x*d, y*d))
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
	var empty_img: Image
	var up_img: Image
	var hit_img: Image
	var numbers: NumberImages

	var game = new Game

	init (app: App)
	do
		empty_img = app.load_image("images/empty.png")
		up_img = app.load_image("images/up.png")
		hit_img = app.load_image("images/hit.png")
		numbers = app.load_numbers("images/#.png")

		empty_img.scale = display_scale
		up_img.scale = display_scale
		hit_img.scale = display_scale
	end

	fun do_frame(display: Display)
	do
		display.clear(0.0, 0.7, 0.0)

		for hole in game.holes do
			var img

			if hole.hitted then
				img = hit_img
			else if hole.up then
				img = up_img
			else
				img = empty_img
			end

			display.blit(img, hole.x, hole.y-64)
		end

		display.blit_number(numbers, game.points, 20, 20)
	end

	fun input(event: InputEvent): Bool
	do
		if event isa PointerEvent then
			for hole in game.holes do
				if hole.intercepts(event) then
					if hole.up then hole.hit
					return true
				end
			end
		end

		return false
	end
end

class MyApp
	super App

	var screen: nullable Screen = null

	var target_dt = 20000000

	init do super

	redef fun init_window
	do
		super

		screen = new Screen(self)
	end

	redef fun frame_core(display)
	do
		var screen = self.screen
		if screen != null then
			var clock = new Clock

			screen.game.do_turn
			screen.do_frame(display)

			var dt = clock.lapse
			if dt.sec == 0 and dt.nanosec < target_dt then
				var sleep_t = target_dt - dt.nanosec
				sys.nanosleep(0, sleep_t)
			end
		end
	end

	redef fun input(ie)
	do
		var screen = screen
		if ie isa QuitEvent or
			(ie isa KeyEvent and ie.to_c == 'q') then
			quit = true
			return true
		else if screen != null then
			return screen.input(ie)
		else
			print "unknown input: {ie}"
			return false
		end
	end
end

fun display_scale: Float do return 1.0

# Depends on the hole center in the uo image
fun display_offset_x: Int do return (512.0*display_scale).to_i

# Depends on the width of the holes
fun display_offset_y: Int do return (800.0*display_scale).to_i

var app = new MyApp
app.main_loop
