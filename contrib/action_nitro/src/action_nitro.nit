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

module action_nitro is
	app_name "Action Nitro"
	app_namespace "net.xymus.action_nitro"
	app_version(1, 0, git_revision)
end

import gamnit::depth
import gamnit::landscape

import game

import gen::texts
import gen::planes

redef class App

	# Game world
	var world: World = new World is lazy

	# ---
	# Game world assets

	# Textures of the biplane, jet, helicopter, parachute and powerups
	var planes_sheet = new PlanesImages

	# Animation when opening the parachute
	var parachute_animation = new Animation(planes_sheet.parachute, 16.0)

	# Animation for the player movement
	private var running_texture = new Texture("textures/player.png")
	private var running_animation: Animation = running_texture.to_animation(10.0, 12, 0)

	# Boss 3D model
	private var iss_model = new Model("models/iss.obj")

	# ---
	# Ground textures

	private var ground_texture = new Texture("textures/fastgras01.jpg")
	private var tree_texture = new Texture("textures/Tree03.png")

	# ---
	# Blood splatter

	private var splatter_texture = new Texture("textures/blood_splatter.png")
	private var splatter_material: TexturedMaterial do
		var mat = new TexturedMaterial([1.0]*4, [0.0]*4, [0.0]*4)
		mat.ambient_texture = splatter_texture
		return mat
	end
	private var splatter_model = new LeafModel(new Plane, splatter_material)

	# ---
	# Background

	private var city_texture = new TextureAsset("textures/city_background_clean.png")

	private var stars_texture = new Texture("textures/stars.jpg")
	private var stars = new Sprite(stars_texture, new Point3d[Float](0.0, 1100.0, -600.0)) is lazy

	# ---
	# Particle effects

	# Explosion particles
	var explosions = new ParticleSystem(100, explosion_program,
		new Texture("particles/explosion00.png"))

	# Blood explosion particles
	var blood = new ParticleSystem(100, explosion_program,
		new Texture("particles/blood07.png"))

	# Smoke for the background
	var smoke = new ParticleSystem(500, smoke_program,
		new Texture("particles/blackSmoke12.png"))

	# Static clouds particles
	var clouds = new ParticleSystem(1600, static_program,
		new Texture("particles/whitePuff12.png"))

	# ---
	# Sound effects

	# TODO
	#private var fx_fire = new Sound("sounds/fire.mp3")

	# ---
	# UI
	private var texts_sheet = new TextsImages

	private var tutorial_wasd = new Sprite(app.texts_sheet.tutorial_wasd,
		app.ui_camera.center.offset(0.0, -250.0, 0.0)) is lazy

	private var tutorial_arrows = new Sprite(app.texts_sheet.tutorial_arrows,
		app.ui_camera.center.offset(0.0, -350.0, 0.0)) is lazy

	private var tutorial_chute = new Sprite(app.texts_sheet.tutorial_chute,
		app.ui_camera.center.offset(0.0, -450.0, 0.0)) is lazy

	private var tutorial_goal = new Sprite(app.texts_sheet.goal,
		app.ui_camera.center.offset(0.0, 0.0, 0.0)) is lazy

	private var outro_directed = new Sprite(app.texts_sheet.directed,
		app.ui_camera.center.offset(0.0, 400.0, 0.0)) is lazy

	private var outro_created = new Sprite(app.texts_sheet.created,
		app.ui_camera.center.offset(0.0, -200.0, 0.0)) is lazy

	# ---
	# Counters for the UI

	private var score_counter = new CounterSprites(texts_sheet.n,
		new Point3d[Float](32.0, -64.0, 0.0))

	private var altitude_counter = new CounterSprites(texts_sheet.n,
		new Point3d[Float](1400.0, -64.0, 0.0))

	# Did the player asked to skip the intro animation?
	private var skip_intro = false

	redef fun on_create
	do
		blood.texture.as(RootTexture).premultiply_alpha = false
		explosions.texture.as(RootTexture).premultiply_alpha = false

		super

		show_splash_screen new Texture("textures/splash.jpg")

		# Load 3d models
		iss_model.load
		if iss_model.errors.not_empty then print_error iss_model.errors.join("\n")

		# Setup cameras
		world_camera.reset_height 60.0
		ui_camera.reset_height 1080.0

		# Register particle systems
		particle_systems.add smoke
		particle_systems.add clouds
		particle_systems.add blood
		particle_systems.add explosions

		# Stars background
		sprites.add stars
		stars.scale = 2.1

		# City background
		city_texture.pixelated = true
		var city_sprite = new Sprite(city_texture, new Point3d[Float](0.0, 370.0, -600.0))
		city_sprite.scale = 0.8
		sprites.add city_sprite

		# Setup ground
		var ground_mesh = new Plane
		ground_mesh.repeat_x = 100.0
		ground_mesh.repeat_y = 100.0

		var ground_material = new TexturedMaterial(
			[0.0, 0.1, 0.0, 1.0], [0.4, 0.4, 0.4, 1.0], [0.0]*4)
		ground_material.diffuse_texture = ground_texture

		var ground_model = new LeafModel(ground_mesh, ground_material)
		var ground = new Actor(ground_model, new Point3d[Float](0.0, 0.0, 0.0))
		ground.scale = 5000.0
		actors.add ground

		# Trees
		for i in 2000.times do
			var s = 0.1 + 0.1.rand
			var h = tree_texture.height * s
			var sprite = new Sprite(tree_texture,
				new Point3d[Float](0.0 & 1500.0, h/2.0 - 10.0*s, 10.0 - 609.0.rand))
			sprite.static = true
			sprite.scale = s
			sprites.add sprite

			var c = 1.0.rand
			c *= 0.7
			sprite.tint = [c, 1.0, c, 1.0]
		end

		# Clouds
		var no_clouds_layer = 200.0
		for i in [0 .. 32[ do
			var zp = 1.0.rand
			var x = 0.0 & 1000.0 * zp
			var y = no_clouds_layer + (world.boss_altitude - no_clouds_layer*2.0).rand
			var z = -500.0*zp - 10.0

			var r = 50.0 & 1.0
			for j in [0..32[ do
				var a = 2.0*pi.rand
				var rj = r.rand
				clouds.add(new Point3d[Float](x+2.0*a.cos*rj, y+a.sin*rj, z & 1.0),
					48000.0 & 16000.0, inf)
			end
		end

		# Move the sun to best light the ISS
		light.position.x = 2000.0
		light.position.z = 4000.0

		# Prepare for intro animation
		ui_sprites.add tutorial_goal
		world_camera.far = 1024.0
	end

	redef fun update(dt)
	do
		# Game logic
		world.update dt

		# Update background color
		var player = world.player
		var player_pos = if player != null then player.center else new Point3d[Float](0.0, 200.0, 0.0)
		var altitude = player_pos.y
		var p = altitude / world.boss_altitude
		var ip = 1.0 - p
		glClearColor(0.3*ip, 0.3*ip, ip, 1.0)
		stars.alpha = (1.4*p-0.4).clamp(0.0, 1.0)

		# Randomly add smoke
		var poss = [
			new Point3d[Float](291.0, 338.0, -601.0),
			new Point3d[Float](-356.0, 422.0, -601.0)]

		var r = 8.0
		if 2.rand == 0 then
			var pos = poss.rand
			smoke.add(
				new Point3d[Float](pos.x & r, pos.y & r, pos.z & r),
				96000.0 & 16000.0, 10.0)
		end

		# Move camera
		world_camera.position.x = player_pos.x
		world_camera.position.y = player_pos.y + 5.0

		# Cinematic?
		var t = world.t
		var intro_duration = 8.0
		if t < intro_duration and not skip_intro then
			var pitch = t/intro_duration
			pitch = (pitch*pi).sin
			world_camera.pitch = pitch
			return
		end

		if world.player == null then
			world_camera.pitch = 0.0
			world_camera.far = 700.0

			begin_play true
		end

		# Update counters
		score_counter.value = world.score
		var alt = 0
		if world.player != null then alt = world.player.altitude.to_i
		altitude_counter.value = alt

		# General movement on the X axis
		if player != null then
			player.moving = 0.0
			if pressed_keys.has("left") then player.moving -= 1.0
			if pressed_keys.has("right") then player.moving += 1.0
		end

		# Try to fire as long as a key is pressed
		if pressed_keys.not_empty then
			var a = inf
			if pressed_keys.has("a") then
				if pressed_keys.has("w") then
					a = 0.75 * pi
				else if pressed_keys.has("s") then
					a = 1.25 * pi
				else
					a = pi
				end
			else if pressed_keys.has("d") then
				if pressed_keys.has("w") then
					a = 0.25 * pi
				else if pressed_keys.has("s") then
					a = 1.75 * pi
				else
					a = 0.0
				end
			else if pressed_keys.has("w") then
				a = 0.50 * pi
			else if pressed_keys.has("s") then
				a = 1.50 * pi
			end

			if a != inf and player != null then
				player.shoot(a, world)
				hide_tutorial_wasd
			end
		end

		# Low-gravity controls
		if player != null and player.is_alive and player.altitude >= world.boss_altitude then
			var d = 50.0*dt
			for key in pressed_keys do
				if key == "up" then
					player.inertia.y += d
				else if key == "down" then
					player.inertia.y -= d
				else if key == "left" then
					player.inertia.x -= d
				else if key == "right" then
					player.inertia.x += d
				end
			end
		end

		# Detect if game won
		var won_at = won_at
		if won_at == null then
			var boss = world.boss
			if boss != null and not boss.is_alive then
				self.won_at = world.t
			end
		else
			# Show outro
			var t_since_won = world.t - won_at
			if t_since_won > 1.0 and not ui_sprites.has(outro_directed) then ui_sprites.add outro_directed
			if t_since_won > 2.0 and not ui_sprites.has(outro_created) then ui_sprites.add outro_created
		end
	end

	# Begin playing, after intro if `initial`, otherwise after death
	fun begin_play(initial: Bool)
	do
		ui_sprites.clear

		world.spawn_player
		world.planes.add new Airplane(new Point3d[Float](0.0, world.player.center.y - 10.0, 0.0), 16.0, 4.0)

		if initial then
			# Setup tutorial
			ui_sprites.add_all([tutorial_wasd, tutorial_arrows, tutorial_chute])
		end
	end

	# Seconds at which the game was won, using `world.t` as reference
	private var won_at: nullable Float = null

	# Remove the tutorial sprite about WASD from `ui_sprites`
	private fun hide_tutorial_wasd do if ui_sprites.has(tutorial_wasd) then ui_sprites.remove(tutorial_wasd)

	# Remove the tutorial sprite about arrows from `ui_sprites`
	private fun hide_tutorial_arrows do if ui_sprites.has(tutorial_arrows) then ui_sprites.remove(tutorial_arrows)

	# Remove the tutorial sprite about the parachute from `ui_sprites`
	private fun hide_tutorial_chute do if ui_sprites.has(tutorial_chute) then ui_sprites.remove(tutorial_chute)

	redef fun accept_event(event)
	do
		if super then return true

		if event isa QuitEvent then
			print perfs
			exit 0
		else if event isa KeyEvent then
			if event.name == "escape" and event.is_down then
				print perfs
				exit 0
			end

			var player = world.player
			if player != null and player.is_alive then

				# Hide tutorial about arrows once they are used
				var arrows = once ["left", "right"]
				if arrows.has(event.name) then hide_tutorial_arrows

				if player.altitude < world.boss_altitude then
					if event.name == "space" and event.is_down and not player.parachute_deployed and player.plane == null then
						player.parachute
						if player.parachute_deployed then
							var pc = player.center
							world.parachute = new Parachute(new Point3d[Float](pc.x, pc.y + 5.0, pc.z-0.1), 8.0, 5.0)
						end
						hide_tutorial_chute
					end

					if (event.name == "space" or event.name == "up") and event.is_down then
						player.jump
					end

					if event.name == "left" then
						var mod = if event.is_down then -1.0 else 1.0
						player.moving += mod
						player.animate_move
					else if event.name == "right" then
						var mod = if event.is_down then 1.0 else -1.0
						player.moving += mod
						player.animate_move
					end
				end
			end
		end

		# When player is dead, respawn on spacebar or pointer depressed
		if (event isa KeyEvent and event.name == "space") or
		   (event isa PointerEvent and not event.is_move and event.depressed) then
			var player = world.player
			if player == null then
				skip_intro = true
			else if not player.is_alive then
				begin_play false
			end
		end

		return false
	end
end

redef class Body
	# Sprite representing this entity if there is no `actor`
	fun sprite: Sprite is abstract

	# 3D actor
	fun actor: nullable Actor do return null

	init
	do
		var actor = actor
		if actor != null then
			app.actors.add actor
		else app.sprites.add sprite
	end

	redef fun destroy(world)
	do
		super

		var actor = actor
		if actor != null then
			app.actors.remove actor
		else app.sprites.remove sprite
	end
end

redef class Human
	redef fun die(world)
	do
		super

		death_animation
	end

	# Show death animation (explosion)
	fun death_animation
	do
		var force = 2.0
		health = 0.0
		for i in 16.times do
			app.blood.add(
				new Point3d[Float](center.x & force, center.y & force, center.z & force),
				(4096.0 & 2048.0) * force, 0.3 & 0.1)
		end
	end
end

redef class Platform
	init do sprite.scale = width/sprite.texture.width

	redef fun update(dt, world)
	do
		super

		if inertia.x < 0.0 then
			sprite.invert_x = false
		else if inertia.x > 0.0 then
			sprite.invert_x = true
		end
	end
end

redef class Airplane
	private fun texture: Texture do return if center.y < 600.0 then app.planes_sheet.biplane else app.planes_sheet.jet

	redef var sprite = new Sprite(texture, center) is lazy
end

redef class Helicopter
	redef var sprite = new Sprite(app.planes_sheet.helicopter, center) is lazy
end

redef class Boss
	redef var actor is lazy do
		var actor = new Actor(app.iss_model, center)
		actor.yaw = pi/2.0
		return actor
	end

	redef fun death_animation
	do
		var force = 64.0
		app.explosions.add(center, 4096.0 * force, 0.3)
		for i in (8.0*force).to_i.times do
			app.explosions.add(
				new Point3d[Float](center.x & force, center.y & force/8.0, center.z & force),
				(2048.0 & 1024.0) * force, 0.3 + 5.0.rand, 5.0.rand)
		end
	end
end

redef class Enemy
	redef var sprite = new Sprite(app.running_animation.frames.rand, center) is lazy
	init do sprite.scale = width/sprite.texture.width * 2.0
end

redef class Parachute
	redef var sprite = new Sprite(app.planes_sheet.parachute_open, center) is lazy
	init
	do
		sprite.scale = width / sprite.texture.width
		sprite.animate app.parachute_animation
	end
end

redef class Player
	redef var sprite = new Sprite(app.running_animation.frames.last, center) is lazy
	init do sprite.scale = width/sprite.texture.width * 2.0

	# Update current animation
	fun animate_move
	do
		if moving == 0.0 then
			sprite.animate_stop
		else sprite.animate(app.running_animation, -1.0)
	end

	redef fun update(dt, world)
	do
		super
		if moving > 0.0 then
			sprite.invert_x = false
		else if moving < 0.0 then
			sprite.invert_x = true
		end
	end

	redef fun die(world)
	do
		super

		if center.y < 10.0 then
			# Blood splatter on the ground
			var splatter = new Actor(app.splatter_model,
				new Point3d[Float](center.x, 0.05 & 0.04, center.y))
			splatter.scale = 32.0
			splatter.yaw = 2.0*pi.rand
			app.actors.add splatter
		end

		# Display respawn instructions
		app.ui_sprites.add new Sprite(app.texts_sheet.respawn, app.ui_camera.center.offset(0.0, 0.0, 0.0))
	end
end

redef class Bullet
	redef var sprite = new Sprite(weapon.bullet_texture, center) is lazy
	init
	do
		sprite.scale = 0.03
		sprite.rotation = angle
	end
end

redef class Weapon
	fun bullet_texture: Texture do return app.planes_sheet.bullet_ak
end

redef class Pistol
	redef fun bullet_texture do return app.planes_sheet.bullet_pistol
end

redef class RocketLauncher
	redef fun bullet_texture do return app.planes_sheet.bullet_rocket
end

redef class Powerup
	# Scale so it looks like 5 world units wide, not matter the size of the texture
	init do sprite.scale = 5.0/sprite.texture.width
end

redef class Ak47PU
	redef var sprite = new Sprite(app.planes_sheet.ak, center) is lazy
end

redef class RocketLauncherPU
	redef var sprite = new Sprite(app.planes_sheet.rocket, center) is lazy
end

redef class Life
	redef var sprite = new Sprite(app.planes_sheet.health, center) is lazy
	init do sprite.scale = 3.0/sprite.texture.height
end

redef class World

	redef fun explode(center, force)
	do
		super

		# Particles
		var range = 0.5 * force
		app.explosions.add(center, 4096.0 * force, 0.3)
		for i in (2.0*force).to_i.times do
			app.explosions.add(
				new Point3d[Float](center.x & range, center.y & range, center.z & range),
				(2048.0 & 1024.0) * force, 0.3 & 0.3, 0.5.rand)
		end
	end
end

# Manager to display numbers in sprite
class CounterSprites

	# TODO clean up and move up to lib

	# Number textures, from 0 to 9
	#
	# Require: `textures.length == 10`
	var textures: Array[Texture]

	# Center of the first digit in UI coordinates
	var anchor: Point3d[Float]

	# Last set of sprites generated to display the `value=`
	private var sprites = new Array[Sprite]

	# Update the value displayed by the counter by inserting new sprites into `app.ui_sprites`
	fun value=(value: Int)
	do
		# Clean up last used sprites
		for s in sprites do if app.ui_sprites.has(s) then app.ui_sprites.remove s
		sprites.clear

		# Build new sprites
		var s = value.to_s # TODO manipulate ints directly
		var x = 0.0
		for c in s do
			var i = c.to_i
			var tex = textures[i]

			x += tex.width/2.0
			sprites.add new Sprite(tex, new Point3d[Float](anchor.x + x, anchor.y, anchor.z))
			x += tex.width/2.0
		end

		# Register sprites to be drawn by `app.ui_camera`
		app.ui_sprites.add_all sprites
	end
end

redef class SmokeProgram

	# Redef source to get particles that move up faster
	redef fun vertex_shader_core do return """
		vec4 c = center;
		c.y += dt * 20.0;
		c.x += dt * dt * 2.0;

		gl_Position = c * mvp;
		gl_PointSize = scale / gl_Position.z * (pt+0.1);

		if (pt < 0.1)
			v_color *= pt / 0.1;
		else
			v_color *= 1.0 - pt*0.9;
	"""
end
