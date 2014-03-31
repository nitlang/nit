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

# Graphism for the Dino game
# Uses the Display interface from MNit.
module graphism

import mnit # for Display

import game_logic

redef class GamePos
	fun to_screen( d : Display ) : ScreenPos
	do
		var x = x+d.width/2
		var y = d.height/2-y
		return new ScreenPos( x.to_f, y.to_f )
	end
end

class ScreenPos
	var x : Float
	var y : Float

	fun to_game( d : Display ) : GamePos
	do
		var x = x.to_i-d.width/2
		var y = d.height/2-y.to_i
		return new GamePos( x, y )
	end
end

redef class Entity
	fun draw( display : Display, imgs : ImageSet, turn : Turn ) is abstract
end

redef class Dino
	redef fun draw( display, imgs, turn )
	do
		var spos = pos.to_screen( display )
		var img : Image
		if is_alive then
			img = imgs.dino_img
		else
			img = imgs.dino_dead_img
		end
		display.blit_centered( img, spos.x.to_i, spos.y.to_i )
	end
end

redef class Caveman
	redef fun draw( display, imgs, turn )
	do
		var man_pos = pos.to_screen( display )
		var img : Image

		if not is_alive then
			img = imgs.blood_img
		else if is_afraid( turn ) then
			img = imgs.caveman_afraid_img
		else if can_throw( turn ) then
			img = imgs.caveman_ready_img
		else
			img = imgs.caveman_img
		end

		display.blit_centered( img, man_pos.x.to_i, man_pos.y.to_i )
	end
end

redef class Javelin
	redef fun draw( display, imgs, turn )
	do
		var spos = pos.to_screen( display )
		spos.y -= z.to_f/10.0
		display.blit_rotated( imgs.javelin_img, spos.x, spos.y, angle )
	end
end

redef class Bush
	redef fun draw( display, imgs, turn )
	do
		var spos = pos.to_screen( display )
		var img = imgs.bush_img
		display.blit_centered( img, spos.x.to_i, spos.y.to_i )
	end
end

class ImageSet
	var javelin_img : Image

	var dino_img : Image
	var dino_dead_img : Image

	var caveman_img : Image
	var caveman_afraid_img : Image
	var caveman_ready_img : Image
	var blood_img : Image
	var bush_img : Image

	var life_img : Image
	var life_empty_img : Image

	var you_won_img : Image
	var you_lost_img : Image
	var start_over_img : Image
	fun start_over_path : String is abstract

	var numbers: NumberImages

	init ( app : App )
	do
		javelin_img = app.load_image( "images/javelin.png" )

		dino_img = app.load_image( "images/dino.png" )
		dino_dead_img = app.load_image( "images/dino_dead.png" )

		caveman_img = app.load_image( "images/caveman.png" )
		caveman_afraid_img = app.load_image( "images/caveman_afraid.png" )
		caveman_ready_img = app.load_image( "images/caveman_ready.png" )
		blood_img = app.load_image( "images/blood.png" )
		bush_img = app.load_image( "images/bush.png" )

		life_img = app.load_image( "images/life.png" )
		life_empty_img = app.load_image( "images/life_empty.png" )

		you_won_img = app.load_image( "images/you_won.png" )
		you_lost_img = app.load_image( "images/you_lost.png" )
		start_over_img = app.load_image( start_over_path )

		numbers = app.load_numbers("images/#.png")
	end
end

redef class Game
	fun draw( display : Display, imgs : ImageSet, turn : Turn )
	do
		display.clear( 0.0, 0.5, 0.1 )

		# entities (dino, cavemen and javelins)
		for e in entities do
			e.draw( display, imgs, turn )
		end

		# life
		var life_out_of_ten = 10 * dino.life / dino.total_life
		if dino.life*10 % dino.total_life != 0 then
			life_out_of_ten += 1
		end

		for life in [0..life_out_of_ten[ do
			display.blit_centered( imgs.life_img, display.width*(life+1)/11, display.top_offset )
		end

		for empty in [life_out_of_ten..10[ do
			display.blit_centered( imgs.life_empty_img, display.width*(empty+1)/11, display.top_offset )
		end

		# display score
		display.blit_number(imgs.numbers, score.item,  display.width/11, display.top_offset+32)

		# game over messages
		if over then
			var concl_img : Image
			if won then
				concl_img = imgs.you_won_img
			else
				concl_img = imgs.you_lost_img
			end
			display.blit_centered( concl_img, display.width/2, 60+display.top_offset )

			if ready_to_start_over then
				display.blit_centered( imgs.start_over_img, display.width/2, 100+display.top_offset )
			end
		end
	end
end

redef interface Display
	fun top_offset: Int do return 48
end
