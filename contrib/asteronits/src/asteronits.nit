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

# Portable game to destroy asteroids
module asteronits is
	app_name "Asteronits"
	app_namespace "org.nitlanguage.asteronits"
	app_version(1, 0, git_revision)
end

import gamnit::flat

import gamnit::landscape

import game_logic
import spritesheet

redef class Spritesheet
	# Largest meteors, organized by color
	var meteors_big: Array[Array[Texture]] = [
		[meteor_brown_big1, meteor_brown_big2, meteor_brown_big3, meteor_brown_big4],
		[meteor_grey_big1, meteor_grey_big2, meteor_grey_big3, meteor_grey_big4]]

	# Medium size meteors, organized by color
	var meteors_med: Array[Array[Texture]] = [
		[meteor_brown_med1, meteor_brown_med3],
		[meteor_grey_med1, meteor_grey_med2]]

	# Small meteors, organized by color
	var meteors_small: Array[Array[Texture]] = [
		[meteor_brown_small1, meteor_brown_small2],
		[meteor_grey_small1, meteor_grey_small2]]

	# Tiny meteors, organized by color
	#
	# TODO use these in particles
	var meteors_tiny: Array[Array[Texture]] = [
		[meteor_brown_tiny1, meteor_brown_tiny2],
		[meteor_grey_tiny1, meteor_grey_tiny2]]

	# Available ships
	var ships: Array[Texture] = [enemy_green1]
end

redef class App

	# Current world in play
	var world = new World(12, 2, display.aspect_ratio) is lazy

	# Sound effects
	private var fx_fire = new Sound("sounds/fire.ogg")
	private var fx_explosion_ship = new Sound("sounds/explosion_ship.wav")
	private var fx_explosion_asteroids = new Sound("sounds/explosion_asteroids.wav")

	redef fun create_scene
	do
		super

		# Move the camera to show all the world world in the screen range
		world_camera.reset_height(world.half_height * 2.0)

		ui_camera.reset_height 720.0
	end

	# Main spritesheet with ships, asteroids and beams
	var spritesheet = new Spritesheet

	redef fun update(dt)
	do
		# Update game logic
		world.do_turn dt

		# Setup new world if all asteroids are destroyed
		if world.asteroids.is_empty then
			sprites.clear
			world = new World(world.n_asteroids*2, world.n_asteroid_parts+1, display.aspect_ratio)
		end
	end

	redef fun accept_event(event)
	do
		if super then return true

		if event isa QuitEvent then
			exit 0
		else if event isa KeyEvent then
			var thrust = event.thrust
			if thrust != 0.0 then
				app.world.ship.applied_thrust = if event.is_down then thrust else 0.0
				return true
			end

			var rot = event.rotation
			if rot != 0.0 then
				app.world.ship.applied_rotation = if event.is_down then rot else 0.0
				return true
			end

			if event.name == "space" and event.is_down then
				app.world.ship.fire
				return true
			else if event.name == "escape" then
				exit 0
			else if event.name == "." and event.is_down then
				dynamic_resolution_ratio *= 2.0
				print dynamic_resolution_ratio
			else if event.name == "," and event.is_down then
				dynamic_resolution_ratio /= 2.0
				print dynamic_resolution_ratio
			end
		end

		return false
	end
end

redef class SpacialObject
	# Main `Sprite` to draw for this object
	var sprite: Sprite is noinit

	# All `Sprites` composing this object
	var sprites: Collection[Sprite] = new Ref[Sprite](sprite) is lazy

	init do app.sprites.add_all sprites

	redef fun do_turn(dt)
	do
		super
		sprite.rotation = rotation - pi/2.0
	end

	redef fun destroy
	do
		super
		for s in sprites do app.sprites.remove s
	end
end

redef class Asteroid

	init
	do
		# Select texture from `size` and `color`
		var tex = if size == 3 then
				app.spritesheet.meteors_big[color].rand
			else if size == 2 then
				app.spritesheet.meteors_med[color].rand
			else app.spritesheet.meteors_small[color].rand

		sprite = new Sprite(tex, center)
		super
	end

	redef fun destroy
	do
		super
		app.fx_explosion_asteroids.play
	end
end

redef class Bullet
	init
	do
		sprite = new Sprite(app.spritesheet.laser_blue01, center)
		super
	end
end

redef class Ship
	init
	do
		sprite = new Sprite(app.spritesheet.ships.rand, center)
		sprites = [sprite, thrust_sprite]

		super
	end

	private var thrust_sprite = new Sprite(app.spritesheet.fire09, new Point3d[Float](0.0, 0.0, 0.0))

	private var sprites_with_fire: Array[Sprite] = [thrust_sprite, sprite] is lazy

	redef fun do_turn(dt)
	do
		super

		# Update position of the thrust sprite
		var dist_to_engine = 45.0
		thrust_sprite.center.x = center.x - dist_to_engine*rotation.cos
		thrust_sprite.center.y = center.y - dist_to_engine*rotation.sin
		thrust_sprite.center.z = center.z
		thrust_sprite.rotation = rotation - pi/2.0

		# Show or hide the thrust sprite
		if applied_thrust > 0.0 then
			thrust_sprite.alpha = 1.0

		else if thrust_sprite.alpha > 0.0 then
			thrust_sprite.alpha -= dt*4.0
			if thrust_sprite.alpha < 0.0 then thrust_sprite.alpha = 0.0
		end

		# HACK, the "enemy" ship used for the player points downwards
		sprite.rotation += pi
	end

	redef fun fire
	do
		super
		app.fx_fire.play
	end

	redef fun hit
	do
		super
		app.fx_explosion_ship.play
	end
end

redef class KeyEvent

	# How does this event affect the ship thrust?
	fun thrust: Float
	do
		if name == "up" or name == "w" then return 1.0
		return 0.0
	end

	# How does this event affect the ship thrust?
	fun rotation: Float
	do
		if name == "right" or name == "d" then return -1.0
		if name == "left" or name == "a" then return 1.0
		return 0.0
	end
end
