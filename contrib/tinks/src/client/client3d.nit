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

# 3D client for Tinks!
module client3d is
	app_name "Tinks! 3D"
	app_namespace "org.nitlanguage.tinks3d"
	app_version(1, 0, git_revision)

	android_api_target 10
	android_manifest """<uses-permission android:name="android.permission.INTERNET" />"""
end

import gamnit::depth

import base

redef class App

	# ---
	# Config

	# Maximum distance from the camera to hear events and display explosions
	private var far_dist2 = 2000.0

	# Approximate maximum distance from the camera to display features
	private var features_radius = 24

	# ---
	# Models

	# Models of rocks
	var models_rock = [
		new Model("models/Tall_Rock_1_01.obj"),
		new Model("models/Tall_Rock_2_01.obj"),
		new Model("models/Tall_Rock_3_01.obj"),
		new Model("models/Tall_Rock_4_01.obj")]

	# Models of trees
	var models_tree = [
		new Model("models/Oak_Dark_01.obj"),
		new Model("models/Oak_Green_01.obj"),
		new Model("models/Large_Oak_Dark_01.obj"),
		new Model("models/Large_Oak_Green_01.obj")]

	# Models of the debris left by a destroyed tank
	var models_debris = [
		new Model("models/debris0.obj"),
		new Model("models/debris1.obj")]

	# Model the health pickup
	var model_health = new Model("models/health.obj")

	# Model of the tank base (without the turret)
	var model_tank_base = new Model("models/tank.obj")

	# Model of the tank turret
	var model_tank_turret = new Model("models/tank-turret.obj")

	# Blast effect on the ground after an explosion
	private var blast_texture = new Texture("textures/blast.png")
	private var blast_material: TexturedMaterial do
		var mat = new TexturedMaterial([1.0]*4, [0.0]*4, [0.0]*4)
		mat.ambient_texture = blast_texture
		return mat
	end
	private var blast_model = new LeafModel(new Plane, blast_material)

	# ---
	# Particle effects

	# Explosion image for particle effect
	private var texture_explosion = new Texture("particles/explosion00.png")

	# Explosion particles
	var explosion_system = new ParticleSystem(20, explosion_program, texture_explosion)

	# Explosion image for particle effect
	private var texture_smoke = new Texture("particles/blackSmoke12.png")

	# Explosion particles
	var smoke_system = new ParticleSystem(200, smoke_program, texture_smoke)

	# ---
	# Sounds

	# Firing sound
	var turret_fire = new Sound("sounds/turret_fire.wav")

	# Turret is ready to fire sound
	var turret_ready = new Sound("sounds/turret_ready.mp3")

	# ---
	# Scene objects

	# Ground
	var ground: Actor is noinit
	private var ground_texture = new Texture("textures/fastgras01.png")

	# All `Feature` with an associated model, to be drawn on screen
	var features_in_sight = new Set[Feature]

	redef fun on_create
	do
		super

		# Show splash screen
		var logo = new Texture("textures/splash.png")
		show_splash_screen logo

		# Load everything
		for texture in all_root_textures do
			texture.load
			var error = texture.error
			if error != null then print_error error
		end
		for model in models do
			model.load
			if model.errors.not_empty then print_error model.errors.join("\n")
		end

		# Modify all textures so they have a higher ambient color
		for model in models do
			for leaf in model.leaves do
				var mat = leaf.material
				if mat isa TexturedMaterial then
					var mod = 0.25
					mat.ambient_color[0] = mat.diffuse_color[0] * mod
					mat.ambient_color[1] = mat.diffuse_color[1] * mod
					mat.ambient_color[2] = mat.diffuse_color[2] * mod

					var tex = mat.diffuse_texture
					if tex != null then mat.ambient_texture = tex
				end
			end
		end

		# Setup ground
		# TODO we may need to move this plane if the player goes far from the center
		var ground_mesh = new Plane
		ground_mesh.repeat_x = 1000.0
		ground_mesh.repeat_y = 1000.0

		var ground_material = new TexturedMaterial(
			[0.0, 0.1, 0.0, 1.0], [0.4, 0.4, 0.4, 1.0], [0.0]*4)
		ground_material.diffuse_texture = ground_texture

		var ground_model = new LeafModel(ground_mesh, ground_material)
		var ground = new Actor(ground_model, new Point3d[Float](0.0, 0.0, 0.0))
		ground.scale = 5000.0

		self.ground = ground
		actors.add ground

		# Config the view
		world_camera.near = 0.1

		# Sky color
		glClearColor(100.0/256.0, 120.0/256.0, 224.0/256.0, 1.0)

		# Move the sun a bit off right above
		light.position.x = 1000.0
		light.position.z = 500.0

		# Register our two systems
		particle_systems.add explosion_system
		particle_systems.add smoke_system

		# Connect to server (or launch one) and assign models to rules
		var context = context
		context.game.story.assign_models
	end

	redef fun update(dt)
	do
		# Game logic
		var turn = context.do_turn
		for event in turn.events do event.client_react

		# Is the player alive?
		var local_player = context.local_player
		var local_tank = null
		if local_player != null then local_tank = local_player.tank

		if local_tank != null then
			# Update camera position above the tank
			var pos = local_tank.pos
			world_camera.position.x = pos.x
			world_camera.position.z = pos.y
			world_camera.yaw = 1.5 * pi - local_tank.heading
			world_camera.position.y = 1.8
		end
	end

	redef fun accept_event(event)
	do
		# Let `pressed_keys` be populated first
		var s = super

		var local_player = context.local_player
		var local_tank = null
		if local_player != null then local_tank = local_player.tank

		# Quit game?
		if event isa QuitEvent or (event isa KeyEvent and event.name == "escape") then
			exit 0
		end

		if event isa KeyEvent then
			# Move tank?
			var direction_change = ["w", "a", "s", "d"].has(event.name)
			if direction_change and local_tank != null and local_player != null then
				var forward = pressed_keys.has("w")
				var backward = pressed_keys.has("s")
				var left = pressed_keys.has("a")
				var right = pressed_keys.has("d")

				# Cancel contradictory commands
				if forward and backward then
					forward = false
					backward = false
				end

				if left and right then
					left = false
					right = false
				end

				# Set movement and direction
				var move = 0.0
				if forward then
					move = 0.5
				else if backward then move = -0.5

				var ori = 0.0
				if left then
					ori = -local_tank.rule.max_direction/2.0
				else if right then ori = local_tank.rule.max_direction/2.0

				# Activate to invert the orientation on reverse, (for @R4p4Ss)
				#if backward then ori = -ori

				# Bonus when only moving or only turning
				if not forward and not backward then ori *= 2.0
				if not left and not right then move *= 2.0

				# Give order
				local_player.orders.add new TankDirectionOrder(local_tank, ori, move)
				return true
			end

			# Open fire?
			if event.name == "space" and local_tank != null and event.is_down then
				if local_player == null then return false

				# Open fire
				var heading = local_tank.heading
				var dist = 200.0
				var target = new Pos(local_tank.pos.x + dist*heading.cos, local_tank.pos.y + dist*heading.sin)
				local_player.orders.add new AimAndFireOrder(local_tank, target)
			end
		end

		# Open fire with a target?
		if event isa PointerEvent and event.pressed and not event.is_move then
			if local_player == null then return false

			var display = display
			if display == null then return false

			if local_tank == null then
				local_player.orders.add new SpawnTankOrder(local_player)
				return true
			end

			# Compute approximate target
			var dx = event.x / display.width.to_f
			dx = dx * 2.0 - 1.0 # center of the screen
			var fovx = display.aspect_ratio * world_camera.field_of_view_y
			fovx *= 0.8
			var heading = local_tank.heading + dx * fovx

			var dy = event.y / display.height.to_f
			dy = dy - 0.5
			if dy >= 0.0 then
				var ty = dy * world_camera.field_of_view_y
				var dist = world_camera.position.y / ty.tan / 1.6
				if dist > 200.0 then dist = 200.0

				# Issue fire order
				var target = new Pos(local_tank.pos.x + dist*heading.cos, local_tank.pos.y + dist*heading.sin)
				local_player.orders.add new AimAndFireOrder(local_tank, target)
			end
		end

		return s
	end
end

# ---
# Story and rules (meta game objects)

redef class FeatureRule
	# Models of different alternatives
	var models: Array[Model] is noinit
end

redef class TankRule
	# Models of the tank base
	var base_model: Model is noinit

	# Models of the turret
	var turret_model: Model is noinit
end

redef class Story

	# Assign models from `app` to the corresponding rules
	fun assign_models
	do
		tree.models = app.models_tree
		rock.models = app.models_rock
		debris.models = app.models_debris

		for tank in tanks do
			tank.base_model = app.model_tank_base
			tank.turret_model = app.model_tank_turret
		end

		health.models = [app.model_health]
	end
end

# ---
# Game entities

redef class Feature
	# Actor representing this feature, if in sight
	var actor: nullable Actor = null

	# Instantiate `actor` and add it to the 3D world
	fun add_actor_to_scene
	do
		app.features_in_sight.add self

		var actor = actor
		if actor != null then
			# Reuse existing actor
			if not app.actors.has(actor) then app.actors.add actor
			return
		end

		# Apply a random model and rotation to new features
		actor = new Actor(rule.models.rand,
			new Point3d[Float](pos.x, 0.0, pos.y))
		actor.yaw = 2.0*pi.rand
		actor.scale = 0.75

		self.actor = actor
		app.actors.add actor
	end

	# Remove `actor` from the `actors` list as it will net be used anymore
	fun destroy_actor
	do
		var actor = actor
		if actor != null then
			app.actors.remove actor
			self.actor = null
		end
	end
end

redef class Tank
	# Actors representing this tank, both the base and the turret
	var actors: Array[Actor] is lazy do
		var actors = new Array[Actor]
		var actor = new Actor(app.model_tank_base, new Point3d[Float](0.0, 0.0, 0.0))
		app.actors.add actor
		actors.add actor

		var tank_turret = new Actor(app.model_tank_turret, new Point3d[Float](0.0, 0.0, 0.0))
		app.actors.add tank_turret
		actors.add tank_turret
		return actors
	end
end

# ---
# Events

redef class TEvent
	private fun client_react do end
end

redef class FeatureChangeEvent
	redef fun client_react
	do
		var old_feature = old_feature
		if old_feature != null then old_feature.destroy_actor

		var feature = feature
		if feature != null then feature.add_actor_to_scene
	end
end

redef class ExplosionEvent
	redef fun client_react
	do
		for feature in destroyed_features do feature.destroy_actor

		# Particles
		app.explosion_system.add(new Point3d[Float](pos.x, 1.0, pos.y), 4096.0, 0.3)
		for i in 8.times do
			app.explosion_system.add(
				new Point3d[Float](pos.x & 1.0, 1.0 & 1.0, pos.y & 1.0),
				2048.0 & 1024.0, 0.3 & 0.1)
		end

		# Blast mark on the ground
		var blast = new Actor(app.blast_model, new Point3d[Float](pos.x, 0.05 & 0.04, pos.y))
		blast.scale = 3.0
		blast.yaw = 2.0*pi.rand
		app.actors.add blast

		# Smoke
		for s in 32.times do
			var dt = 0.2 * s.to_f + 0.1.rand
			app.smoke_system.add(
				new Point3d[Float](pos.x & 0.2, 0.0, pos.y & 0.2),
				1024.0 & 512.0, 10.0 & 4.0, dt)
		end
	end
end

redef class OpenFireEvent
	redef fun client_react
	do
		if tank.pos.dist2_3d(app.world_camera.position) < app.far_dist2 then
			# Within earshot
			app.turret_fire.play

			# Particle
			var d = 1.7
			var a = tank.turret.heading - 0.025 # Correct to center the art
			var pos = new Point3d[Float](tank.pos.x + d*a.cos, 1.25, tank.pos.y + d*a.sin)
			app.explosion_system.add(pos, 0.75*256.0, 0.15)
		end
	end
end

redef class TurretReadyEvent
	redef fun client_react
	do
		if tank.pos.dist2_3d(app.world_camera.position) < app.far_dist2 then
			# Within earshot
			app.turret_ready.play
		end
	end
end

redef class TankMoveEvent
	redef fun client_react
	do
		var pos = tank.pos
		for actor in tank.actors do
			actor.center.x = pos.x
			actor.center.z = pos.y
		end

		tank.actors[0].yaw = -tank.heading + pi
		tank.actors[1].yaw = -tank.turret.heading + pi

		# Keep going only for the local tank
		var local_player = app.context.local_player
		if local_player != tank.player then return

		var center = tank.pos
		var d = app.features_radius
		var l = center.x.to_i - d
		var r = center.x.to_i + d
		var t = center.y.to_i - d
		var b = center.y.to_i + d

		# Remove out of range features
		for feature in app.features_in_sight.to_a do
			var x = feature.pos.x.to_i
			var y = feature.pos.y.to_i
			if x < l or x > r or y < t or y > b then
				var actor = feature.actor
				app.actors.remove actor
				app.features_in_sight.remove feature
			end
		end

		# Add newly in range features
		for x in [l..r[ do
			for y in [t..b[ do
				var feature = app.context.game.world[x, y]
				if feature != null then
					feature.add_actor_to_scene
				end
			end
		end
	end
end

redef class TankDeathEvent
	redef fun client_react
	do
		for actor in tank.actors do app.actors.remove actor
		tank.actors.clear
	end
end

# ---
# Misc services

redef class Point[N]
	# Square of the distance to 3D coordinates `other`
	#
	# Same as `dist2` but using `other.z` as the Y value
	# to adapt from the flat plane on X/Y to X/Z.
	private fun dist2_3d(other: Point3d[Numeric]): N
	do
		var dx = other.x.sub(x)
		var dy = other.z.sub(y)
		var s = (dx.mul(dx)).add(dy.mul(dy))
		return x.value_of(s)
	end
end

redef class Float
	# Fuzzy value in `[self-variation..self+variation]`
	fun &(variation: Float): Float do return self - variation + 2.0*variation.rand
end
