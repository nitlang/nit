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

# Improves dino appearance
module fancy_dino

import graphism

redef class Dino
	var turning_angle = 0.0
	var turning = false
	var was_going_left = false

	var turning_step = 0.1

	redef fun do_turn( turn )
	do
		super

		if not turning then
			if going_left != was_going_left then
				turning = true

				if going_left then
					turning_angle = 0.0
				else # going right
					turning_angle = pi
				end
			end
		end

		was_going_left = going_left
	end

	redef fun draw( display, imgs, turn )
	do
		var spos = pos.to_screen( display )
		var img : Image
		if is_alive then
			img = imgs.dino_img
		else
			img = imgs.dino_dead_img
		end
		var img_radius = (img.width/2).to_f

		if turning then
			if going_left then
				turning_angle += turning_step
			else
				turning_angle -= turning_step
			end

			var adx = turning_angle.cos * img_radius
			var ady = turning_angle.sin * img_radius # * 0.3

			var dx = spos.x - adx
			var dy = spos.y - ady - (img.height/2).to_f
			var ax = spos.x + adx
			var ay = spos.y + ady - (img.height/2).to_f
			var bx = ax
			var by = ay + img.height.to_f
			var cx = dx
			var cy = dy + img.height.to_f

			display.blit_stretched( img, ax, ay, bx, by, cx, cy, dx, dy )

			if (going_left and turning_angle >= pi) or 
				(going_right and turning_angle <= 0.0)then
				turning = false
			end
		else
			var dx = spos.x + img_radius
			var dy = spos.y - (img.height/2).to_f
			var ax = spos.x - img_radius
			var ay = dy
			var bx = ax
			var by = dy + img.height.to_f
			var cx = dx
			var cy = by

			if going_left then
				display.blit_stretched( img, ax, ay, bx, by, cx, cy, dx, dy )
			else
				display.blit_stretched( img, dx, dy, cx, cy, bx, by, ax, ay )
			end
		end
	end
end
