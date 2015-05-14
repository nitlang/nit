# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2012-2013 Alexis Laferrière <alexis.laf@xymus.net>
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

# App for the Dino game, manages App lifecyle and inputs
module dino is
	app_version(0, 2, git_revision)
	app_name("mnit Dino")
end

import mnit

import graphism
import fancy_dino
import splash

redef class App
	var cavemen_at_first_level = 6
	var cavemen_incr = 4

	var game : nullable Game = null
	var score = new Container[Int](0)
	var imgs : nullable ImageSet = null
	var splash : nullable SplashScreen = null

	redef fun on_create
	do
		super

		maximum_fps = 80

		var display = display
		assert display != null

		# load only splash images
		splash = new SplashScreen( self )
		splash.draw( display, false )

		# load other images
		imgs = new ImageSet( self )

		splash.draw( display, true )
	end

	redef fun frame_core( display )
	do
		var game = game
		if game != null then
			var turn = game.do_turn
			game.draw( display, imgs.as(not null), turn )
		else
			splash.draw( display, true )
		end
	end

	redef fun input( input_event )
	do
		if input_event isa QuitEvent then # close window button
			quit = true # orders system to quit
			return true # this event has been handled

		else if input_event isa PointerEvent then
			if game == null then
				# start from splash
				game = new Game( cavemen_at_first_level, score )
			else if game.over and game.ready_to_start_over then
				# play next game
				var next_nbr_caveman = game.nbr_wanted_cavemen
				if game.won then
					next_nbr_caveman += cavemen_incr
				else
					score = new Container[Int](0)
					next_nbr_caveman = cavemen_at_first_level
				end
				game = new Game( next_nbr_caveman, score )
			else
				# normal play
				game.dino.going_to = (new ScreenPos( input_event.x, input_event.y )).to_game( display.as(not null) )
			end
			return true

		else if input_event isa KeyEvent then
			return false
		end

		return false # unknown event, can be handled by something else
	end
end
