#this file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Romain Chanoir <romain.chanoir@viacesi.fr>
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

module game_logic

import mnit::android
import android::sensors

class Ball
	var x: Float
	var y: Float
	var dim: Int
	var walls_activated: Bool
	var offset_x = 0.0
	var offset_y = 0.0
	var going_left: Bool
	var going_down: Bool

	var game: Game

	init(game: Game, x,y: Float, walls: Bool)
	do
		self.x = x
		self.y = y
		self.dim = 20
		self.game = game
		self.walls_activated = walls
	end

	# not very useful at this time
	fun do_turn
	do
	end

	fun intercepts(event: InputEvent): Bool
	do
		if event isa ASensorAccelerometer then
			do_move(event)
		else if event isa ASensorMagneticField then
			#deal with Magnetic field sensor
			print "ASensorMagneticField : x = " + event.x.to_s + " y = " + event.y.to_s + " z = " + event.z.to_s
		else if event isa ASensorGyroscope then
			#deal with Gyroscope sensor
			print "ASensorGyroscope : x = " + event.x.to_s + " y = " + event.y.to_s + " z = " + event.z.to_s
		else if event isa ASensorLight then
			#deal with light sensor
			print "ASensorLight : light = " + event.light.to_s
		else if event isa ASensorProximity then
			#deal with proximity sensor
			print "ASensorProximity : distance = " + event.distance.to_s
		else if event isa MotionEvent then
			activate_walls(event)
		end
		return true
	end

	fun do_move (event: ASensorAccelerometer)
	do
		# acceleration value
		var vx = event.x
		var vy = event.y

		var gw = game.width
		var gh = game.height

		# acceleration
		var max_value = 9.80
		var acceleration_x = vx/max_value
		var acceleration_y = vy/max_value
		offset_x -= (acceleration_x/10.0)*(vx.abs) + offset_x/125.0
		offset_y += (acceleration_y/10.0)*(vy.abs) - offset_y/125.0
		var nx = self.x + offset_x
		var ny = self.y + offset_y
		going_left = offset_x > 0.0
		going_down = offset_y > 0.0

		# x value
		if nx >= 0.0 and nx <= gw then
			self.x = nx
		else if nx < 0.0 then
			if not walls_activated then self.x = gw else do_bounce(1)
		else if nx > gw then
			if not walls_activated then self.x = 0.0 else do_bounce(1)
		end

		# y value
		if ny >= 0.0 and ny <= gh then
			self.y = ny
		else if ny < 0.0 then
			if not walls_activated then self.y = gh else do_bounce(2)
		else if ny > gh then
			if not walls_activated then self.y = 0.0 else do_bounce(2)
		end
	end

	# bounce in function of the position of the wall relative to the ball: 1=left or right, 2=top or down
	fun do_bounce(wall_position: Int)
	do
		if wall_position == 1 then
			offset_x = -offset_x*0.85
		else if wall_position == 2 then
			offset_y = -offset_y*0.85
		end
		if offset_x.abs > 1.0 and offset_y.abs > 1.0 then
		self.x += offset_x
		self.y += offset_y
		end
	end

	fun activate_walls(event: MotionEvent)
	do
		if event.just_went_down then
			walls_activated = not walls_activated
		end
	end
end

class Screen
	var ball_img: Image
	var game: Game

	init(app: App, display: Display)
	do
		game = new Game(display)
		ball_img = app.load_asset("images/ball.png").as(Image)
		var scale = game.img_dim.to_f / game.img_ori_dim.to_f
		ball_img.scale = scale
		ball_img.scale = 3.0
	end

	fun do_frame(display: Display)
	do
		display.clear(0.0, 0.0, 0.0)
		display.blit_rotated(ball_img, game.ball.x, game.ball.y, 0.0)
	end

	fun input(ie: InputEvent): Bool
	do
		if ie isa ASensorProximity then
			if ie.distance == 0.0 then ball_img.scale = 6.0 else ball_img.scale = 3.0
		else
			game.ball.intercepts(ie)
		end
		return true
	end
end

class Game
	var ball: Ball
	var width: Float
	var height: Float

	var img_ori_dim: Int = 256
	fun img_dim: Int do return 210

	init(display: Display)
	do
		width = display.width.to_f
		height = display.height.to_f
		ball = new Ball(self, width/2.0, height/2.0, false)
	end

	fun do_turn
	do
	ball.do_turn
	end
end
