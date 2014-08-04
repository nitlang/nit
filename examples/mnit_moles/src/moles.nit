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

class Hole
	var game: Game

	# Center of the hole
	var x: Int
	var y: Int

	# Half width of the hit box
	var dx = 200.0
	# Heigth of the hit box
	var dy = 800.0

	# state
	var up = false
	var hitted = false
	var trap = false

	init (g: Game, x, y: Int)
	do
		game = g
		self.x = x
		self.y = y
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

			# shot traps only at 50 points and up
			trap = false
			if game.points > 50 then

				# After 50 points we have more and more traps until point 1000
				var d = 1250-(game.points - 50)
				if d < 200 then d = 200

				if d.rand < 100 then trap = true
			end
		end
	end

	fun intercepts(event: PointerEvent): Bool
	do
		if not up or hitted then return false

		var dx = (dx*display_scale).to_i
		var dy = (dy*display_scale).to_i
		var ex = event.x.to_i - display_offset_x
		var ey = event.y.to_i - display_offset_y
		return ex > x - dx and ex < x + dx and
			ey > y - dy and ey < y
	end

	fun hit
	do
		if hitted then return

		if trap then
			up = false
			game.points -= 5
			if game.points < 0 then game.points = 0
		else
			hitted = true
			game.points += 1
		end
	end
end

class Game
	var holes = new Array[Hole].with_capacity(4)

	# rule / const
	var modifier_half_life = 1000.0
	fun rows: Int do return 4
	fun columns: Int do return 5

	# state
	var points = 0
	var speed_modifier = 1.0

	# configs
	var dist_between_rows = 512
	var dist_between_columns = 600
	fun global_speed_modifier: Float do return 2.0

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
	var empty_img: Image
	var up_img: Image
	var hit_img: Image
	var trap_img: Image
	var numbers: NumberImages

	var sign_warning: Image
	var sign_cute: Image
	var sign_hits: Image

	var game = new Game

	init (app: App)
	do
		empty_img = app.load_image("images/empty.png")
		up_img = app.load_image("images/up.png")
		hit_img = app.load_image("images/hit.png")
		trap_img = app.load_image("images/trap.png")
		numbers = app.load_numbers("images/#.png")

		sign_warning = app.load_image("images/sign-warning.png")
		sign_cute = app.load_image("images/sign-cute.png")
		sign_hits = app.load_image("images/sign-hits.png")
	end

	fun do_frame(display: Display)
	do
		display.clear(0.1, 0.65, 0.2)

		sign_warning.scale = display_scale
		sign_cute.scale = display_scale
		sign_hits.scale = display_scale
		for img in numbers.imgs do img.scale = display_scale

		display.blit(sign_warning, (-120.0*display_scale).to_i, (-235.0*display_scale).to_i)
		display.blit(sign_cute, (540.0*display_scale).to_i, (-180.0*display_scale).to_i)
		display.blit(sign_hits, (1340.0*display_scale).to_i, (55.0*display_scale).to_i)
		display.blit_number(numbers, game.points, (1460.0*display_scale).to_i, (270.0*display_scale).to_i)

		for hole in game.holes do
			# Hole
			var img = empty_img
			var dx = 512.0*display_scale
			var dy = 512.0*display_scale
			img.scale = display_scale
			display.blit(img, hole.x-dx.to_i+display_offset_x, hole.y-dy.to_i+display_offset_y)

			# Mole
			var empty = false
			if hole.hitted then
				img = hit_img
				dx = 256.0*display_scale
				dy = 417.0*display_scale
			else if hole.up then
				if hole.trap then
					img = trap_img
					dx = 512.0*display_scale
					dy = 830.0*display_scale
				else
					img = up_img
					dx = 512.0*display_scale
					dy = 830.0*display_scale
				end
			else empty = true

			if not empty then
				img.scale = display_scale
				display.blit(img, hole.x-dx.to_i+display_offset_x, hole.y-dy.to_i+display_offset_y)
			end
		end
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

redef class App

	var screen: nullable Screen = null

	redef fun window_created
	do
		super

		maximum_fps = 50
		init_screen_and_game
	end

	fun init_screen_and_game do screen = new Screen(self)

	redef fun frame_core(display)
	do
		var screen = self.screen
		if screen != null then
			screen.game.do_turn
			screen.do_frame(display)
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
