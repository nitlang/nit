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

# Space shooter.
# This program is a fun game but also a good example of the scene2d module
module shoot is
	app_name("Space Shooter")
	app_version(0, 1, git_revision)
end

import mnit
import shoot_logic

redef class Sprite
	# mnit specific method to draw a sprite
	# app is used to optain the assets and the display
	# Each sprite should implements this method
	fun draw_on_display(app: App) do end

	# Helper function to draw an image centered on the current sprite position
	fun draw_image(app: App, img: Image)
	do
		app.display.blit_centered(img, (self.x.to_f/app.scale).to_i, (self.y.to_f/app.scale).to_i)
	end

	# Helper function to draw an image translated and rotated on the current sprite position
	fun draw_rotated_image(app: App, img: Image, dx, dy: Int, angle: Float)
	do
		app.display.blit_rotated(img, self.x.to_f/app.scale, self.y.to_f/app.scale, angle)
	end
end

redef class Player
	redef fun draw_on_display(app)
	do
		if protected_ttl > 30  and protected_ttl%10 > 5 then return # blink on protected
		draw_image(app, app.img_player)
	end
end

redef class Shoot
	redef fun draw_on_display(app)
	do
		var img = if enemy then app.img_enemy_shoot else app.img_player_shoot
		draw_image(app, img)
	end
end

redef class Missile
	redef fun draw_on_display(app)
	do
		var angle = velocity_angle
		var img = if enemy then app.img_enemy_missile else app.img_player_missile
		draw_rotated_image(app, img, 0, 0, angle)
	end
end

redef class Enemy0
	redef fun draw_on_display(app)
	do
		draw_image(app, app.img_enemy0)
	end
end

redef class Enemy1
	redef fun draw_on_display(app)
	do
		draw_image(app, app.img_enemy1)
	end
end

redef class Enemy2
	redef fun draw_on_display(app)
	do
		draw_image(app, app.img_enemy2)
	end
end

redef class Enemy3
	redef fun draw_on_display(app)
	do
		draw_image(app, app.img_enemy3)
	end
end

redef class Enemy4
	redef fun draw_on_display(app)
	do
		draw_image(app, app.img_enemy4)
		draw_rotated_image(app, app.img_enemy4_turret, 0, 0, self.angle)
	end
end

redef class EnemyKamikaze
	redef fun draw_on_display(app)
	do
		var angle = self.velocity_angle
		draw_rotated_image(app, app.img_enemy_kamikaze, 0, 0, angle)
	end
end

redef class Boss
	redef fun draw_on_display(app)
	do
		if flick_ttl > 0 then return
		draw_image(app, app.img_boss)
	end
end

redef class BossPart
	redef fun draw_on_display(app)
	do
		if flick_ttl > 0 then return
		if relx > 0 then
			self.boss.draw_image(app, app.img_boss_right)
		else
			self.boss.draw_image(app, app.img_boss_left)
		end
	end
end

redef class Money
	redef fun draw_on_display(app)
	do
		draw_image(app, app.img_money)
	end
end

redef class UpMissile
	redef fun draw_on_display(app)
	do
		draw_image(app, app.img_upmissile)
	end
end

redef class Explosion
	redef fun draw_on_display(app)
	do
		draw_image(app, app.img_explosion)
	end
end

redef class Star
	redef fun draw_on_display(app)
	do
		# Simulate depth:
		# More a star is fast, more it requires a bright image
		var img: Image
		if self.vy < 20 then
			img = app.img_star0
		else if self.vy < 40 then
			img = app.img_star1
		else
			img = app.img_star2
		end
		draw_image(app, img)
	end
end

redef class Scene
	fun draw_on_display(app: App) do end
	fun input(app: App, input_event: InputEvent): Bool do return false
end

redef class PlayScene
	redef fun draw_on_display(app)
	do
		app.display.clear( 0.0, 0.0, 0.0 )
		self.sprites.draw(app)
		for i in [0..player.money[
		do
			app.display.blit(app.img_money, 10, app.display.height-10-i)
		end
		for i in [1..player.nbshoots]
		do
			app.display.blit(app.img_player_shoot, 30, app.display.height-10 - i*10)
		end
		for i in [1..player.nbmissiles]
		do
			app.display.blit(app.img_player_missile, 40, app.display.height-10 - i*20)
		end
	end

	redef fun input(app, input_event)
	do
		var speed = 400
		if input_event isa KeyEvent then
			if input_event.is_arrow_down then
				if input_event.is_down then
					player.vy = speed
				else
					player.vy = 0
				end
			else if input_event.is_arrow_up then
				if input_event.is_down then
					player.vy = -speed
				else
					player.vy = 0
				end
			else if input_event.is_arrow_left then
				if input_event.is_down then
					player.vx = -speed
				else
					player.vx = 0
				end
			else if input_event.is_arrow_right then
				if input_event.is_down then
					player.vx = speed
				else
					player.vx = 0
				end
			end
			return true
		else if input_event isa PointerEvent then
			var x = (input_event.x * app.scale).to_i
			var y = (input_event.y * app.scale).to_i
			player.goes_to(x, y, speed)
			return true
		end
		return false # unknown event, can be handled by something else
	end
end

###

redef class MenuScene
	redef fun draw_on_display(app)
	do
		var display = app.display
		assert display != null
		blit_fs(display, app.img_splash)
		sprites.draw(app)
		if not play or ttl%10 > 5 then
			blit_fs(display, app.img_splash_play)
		end
	end

	fun blit_fs(d: Display, img: Image)
	do
		var w = d.width.to_f
		var h = d.height.to_f
		d.blit_stretched(img, 0.0,0.0, 0.0,h, w,h, w,0.0)
	end

	redef fun input(app, input_event)
	do
		if input_event isa KeyEvent then
			play = true
			return true
		else if input_event isa PointerEvent then
			play = true
			return true
		end
		return false
	end
end

###

redef class App
	super View

	var debug: Bool = false

	redef fun draw_sprite(s: Sprite)
	do
		s.draw_on_display(self)
		if debug and s.width != 0 and s.height != 0 then
			var left = s.left.to_f/scale
			var right = s.right.to_f/scale
			var top = s.top.to_f/scale
			var bot = s.bottom.to_f/scale
			display.blit_stretched(img_hitbox, right, top, right, bot, left, bot, left, top)
		end
	end

	var scene: ShotScene

	var img_hitbox: Image

	var img_splash: Image
	var img_splash_play: Image

	var img_player: Image
	var img_player_shoot: Image
	var img_player_missile: Image
	var img_enemy0: Image
	var img_enemy1: Image
	var img_enemy2: Image
	var img_enemy3: Image
	var img_enemy4: Image
	var img_enemy4_turret: Image
	var img_enemy_kamikaze: Image
	var img_enemy_shoot: Image
	var img_enemy_missile: Image
	var img_money: Image
	var img_upmissile: Image
	var img_explosion: Image
	var img_star0: Image
	var img_star1: Image
	var img_star2: Image

	var img_boss: Image
	var img_boss_left: Image
	var img_boss_right: Image

	redef fun window_created
	do
		super

		scale = (800.0 * 600.0 / display.width.to_f / display.height.to_f).sqrt * 100.0

		debug = args.length > 0 and args.first == "--debug"

		# TODO load assets here
		# ex: img = load_image( "img.png" )
		#     to get file located at assets/img.png before deployement
		self.img_hitbox = load_image("hitbox.png")

		self.img_splash = load_image("splash.png")
		self.img_splash_play = load_image("splash_play.png")

		self.img_player = load_image("player.png")
		self.img_player_shoot = load_image("player_shoot.png")
		self.img_player_missile = load_image("player_missile.png")
		self.img_enemy0 = load_image("enemy0.png")
		self.img_enemy1 = load_image("enemy1.png")
		self.img_enemy2 = load_image("enemy2.png")
		self.img_enemy3 = load_image("enemy3.png")
		self.img_enemy4 = load_image("enemy4.png")
		self.img_enemy4_turret = load_image("enemy4_turret.png")
		self.img_enemy_kamikaze = load_image("enemy_kamikaze.png")
		self.img_enemy_shoot = load_image("enemy_shoot.png")
		self.img_enemy_missile = load_image("enemy_missile.png")
		self.img_money = load_image("money.png")
		self.img_upmissile = load_image("up_missile.png")
		self.img_explosion = load_image("explosion.png")
		self.img_star0 = load_image("star0.png")
		self.img_star1 = load_image("star1.png")
		self.img_star2 = load_image("star2.png")
		self.img_boss = load_image("boss.png")
		self.img_boss_left = load_image("boss_left.png")
		self.img_boss_right = load_image("boss_right.png")

		var w = (display.width.to_f * scale).to_i
		var h = (display.height.to_f * scale).to_i
		self.scene = new MenuScene(w, h)
	end

	# Whole scaling to convert display pixels to game pixels
	var scale: Float = 200.0

	redef fun load_image(filename)
	do
		var res = super
		res.scale = 100.0 / self.scale
		return res
	end

	redef fun frame_core( display )
	# the arg display is not null but otherwise the same than self.display
	do
		if not paused then
			self.scene.update
			var next = self.scene.next_scene
			if next != null then
				self.scene = next
			end
			if not self.scene.exists then quit = true
		end
		self.scene.draw_on_display(self)
	end

	var paused: Bool = false

	redef fun input( input_event )
	do
		if input_event isa QuitEvent then # close window button
			quit = true # orders system to quit
			return true # this event has been handled
		else if input_event isa KeyEvent then
			if input_event.to_c == 'p' then
				paused = input_event.is_down
				return true # this event has been handled
			else if input_event.to_c == 'q' then
				quit = true # orders system to quit
				return true # this event has been handled
			end
		end

		# Maybe the event is specific to the scene
		return self.scene.input(self, input_event)
	end
end

if args.length > 0 and args.first == "--headless" then
	headless_run
	return
end

app.setup
app.run
