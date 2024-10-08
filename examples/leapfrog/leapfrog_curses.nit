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

# game of leapfrog: be a sheep and avoid the duck to grab apples
#
# This module is an example of a simple game using a curses backend
module leapfrog_curses

import curses
import leapfrog

# A simple game view in a curses windows
class CursesView
	super View

	# The associated curses window
	var window: Window

	redef fun draw_sprite(s: Sprite) do s.draw_on_curses(window)
end

redef class Sprite
	# Drawing of a sprite in the curse windows
	fun draw_on_curses(window: Window) is abstract
end

redef class Apple
	redef fun draw_on_curses(window)
	do
		var x = self.x/100
		var y = self.y/100
		window.mvaddstr(y, x,  "o")
	end
end

redef class Sheep
	redef fun draw_on_curses(window)
	do
		var x = self.x/100
		var y = self.y/100
		if self.is_jumping then
			if self.vy > 0 then
				# falling
				if self.vx > 0 then
					window.mvaddstr(y, x,   "'---@>")
					window.mvaddstr(y+1, x, " \\-\\'")
				else
					window.mvaddstr(y, x,   "<@---'")
					window.mvaddstr(y+1, x, " '/-/")
				end
			else
				# jumping
				if self.vx > 0 then
					window.mvaddstr(y, x,   ",---@>")
					window.mvaddstr(y+1, x, " /-/'")
				else
					window.mvaddstr(y, x,   "<@---,")
					window.mvaddstr(y+1, x, " '\\-\\")
				end
			end
		else if self.vx > 0 then
			if self.leg_state == 0 then
				window.mvaddstr(y, x,   ",---@>")
				window.mvaddstr(y+1, x, " /-|'")
			else
				window.mvaddstr(y, x,   ",---@>")
				window.mvaddstr(y+1, x, " |-\\'")
			end
		else
			if self.leg_state == 0 then
				window.mvaddstr(y, x,   "<@---,")
				window.mvaddstr(y+1, x, " '/-|")
			else
				window.mvaddstr(y, x,   "<@---,")
				window.mvaddstr(y+1, x, " '|-\\")
			end
		end
	end
end

redef class Duck
	redef fun draw_on_curses(window)
	do
		var x = self.x/100
		var y = self.y/100

		if self.vx > 0 then
			window.mvaddstr(y, x,   "  @<")
			window.mvaddstr(y+1, x, "<__)")
		else
			window.mvaddstr(y, x,   ">@")
			window.mvaddstr(y+1, x, "(__>")
		end
	end
end

redef class PlayScene
	fun draw_on_curses(view: CursesView)
	do
		var window = view.window

		# Redraw the screen
		window.wclear
		sprites.draw(view)
		window.mvaddstr(0, 0,   "'q' to quit - score: {score}")
		window.mvaddstr(20, 0,   "#"*80)
		window.refresh

		# Wait the next frame
		sys.nanosleep(0, 48000000)

		# Keyboard input
		while sys.stdin.poll_in do
			if sys.stdin.eof then return
			var c = sys.stdin.read_char
			if c == u'q' then
				self.exists = false
				return
			end
			sheep.jump
		end
	end
end

var game = new PlayScene

var win = new Window
var main_view = new CursesView(win)

while game.exists do
	game.update
	game.draw_on_curses(main_view)
end

win.delwin
win.endwin
win.refresh
