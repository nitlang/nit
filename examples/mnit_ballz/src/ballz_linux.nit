# this file is part of NIT ( http://www.nitlanguage.org ).
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

# Linux part of mnit_ballz
module ballz_linux

import mnit::linux
import display


redef class App

	private var up_arrow_down = false
	private var down_arrow_down = false
	private var left_arrow_down = false
	private var right_arrow_down = false
	private var game: nullable Game is noautoinit

	redef fun run
	do
		maximum_fps = 50
		super
	end

	redef fun on_create
	do
		super
		game = new Game(display.width.to_f, display.height.to_f)
	end

	redef fun frame_core(display)
	do
		if up_arrow_down then input(new SDLKeyEvent("up", true))
		if down_arrow_down then	input(new SDLKeyEvent("down", true))
		if left_arrow_down then	input(new SDLKeyEvent("left", true))
		if right_arrow_down then input(new SDLKeyEvent("right", true))

		var game = game
		if game != null then
			game.do_turn
			game.draw(display, assets)
		end
	end

	redef fun input(ie)
	do
		if ie isa QuitEvent then
			quit = true
			return true
		end
		var game = game
		if game != null then
			return game.input(ie)
		end
		return false
	end
end

redef class Ball

	redef fun intercepts(event)
	do
		var value = 5.0
		if event isa SDLKeyEvent then
			if event.is_arrow_left then
				acceleration(value, 0.0)
				app.left_arrow_down = event.is_down
			end
			if event.is_arrow_right then
				acceleration(-value, 0.0)
				app.right_arrow_down = event.is_down
			end
			if event.is_arrow_up then
				acceleration(0.0, -value)
				app.up_arrow_down = event.is_down
			end
			if event.is_arrow_down then
				acceleration(0.0, value)
				app.down_arrow_down = event.is_down
			end
		end
		return false
	end
end

redef class Game

	redef fun input(ie)
	do
		ball.intercepts(ie)
		return false
	end
end
