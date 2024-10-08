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

# Core game logic of Action Nitro
module core

import geometry

# Root game object of the whole game logic
#
# Used as a visitor in all methods modifying the state of the world.
class World

	# The player, if the game has started
	var player: nullable Player = null is writable

	# All live platforms
	var planes = new Array[Platform]

	# All live enemies
	var enemies = new Array[Enemy]

	# All live bullets shot by `enemies`
	var enemy_bullets = new Array[Bullet]

	# All live bullets shot by `player`
	var player_bullets = new Array[Bullet]

	# All live powerups
	var powerups = new Array[Powerup]

	# Current open parachute, if any
	var parachute: nullable Parachute = null is writable

	# Altitude at which to enter space and trigger the boss
	var boss_altitude = 1200.0

	# Boss, the ISS occupied by bad guys
	var boss: nullable Boss = null is writable

	# Runtime of this game, in seconds
	var t = 0.0

	# Total score
	var score = 0

	# Approximate view of the camera, used to spawn stuff outside of the camera
	fun camera_view: Box[Float]
	do
		# TODO update from client
		var border = 100.0
		var player = player
		if player != null then
			return new Box[Float](
				player.center.x-border, player.center.x+border,
				player.center.y+border, player.center.y-border)
		else
			return new Box[Float](
				-border, border,
				border, -border)
		end
	end

	# Update the game logic for events over `dt` seconds
	fun update(dt: Float)
	do
		t += dt

		# Visit all other game logic objects
		for plane in planes.reverse_iterator do plane.update(dt, self)
		for enemy in enemies.reverse_iterator do enemy.update(dt, self)

		var player = player
		if player != null then player.update(dt, self)

		for i in enemy_bullets.reverse_iterator do i.update(dt, self)
		for i in player_bullets.reverse_iterator do i.update(dt, self)

		for powerup in powerups.reverse_iterator do powerup.update(dt, self)
		if parachute != null then parachute.update(dt, self)

		# Check if the player has reached the boss
		var cam = camera_view
		if player != null and player.altitude >= boss_altitude and boss == null then
			var w = 64.0
			var boss = new Boss(new Point3d[Float](player.center.x, cam.top - 20.0, 0.0), w, 4.0, new Ak47)
			self.boss = boss
			enemies.add boss

			for i in 6.times do
				var e = new WalkingEnemy(new Point3d[Float](boss.center.x & (w/2.0), boss.center.y + 4.0, -1.0.rand), 4.0, 4.0, new Pistol)
				enemies.add e
			end
		end
	end

	# Explosion at `center` of the given `force`
	fun explode(center: Point3d[Float], force: Float)
	do
		var lists = [planes, enemies: Sequence[Body]]
		var player = player
		if player != null then lists.add([player])

		for l in lists do
			for body in l do
				body.apply_force(center, force)
			end
		end
	end

	# Spawn or respawn the player
	fun spawn_player
	do
		var old_player = player
		var pos = null
		if old_player != null then
			# Respawn just above the death position
			pos = old_player.center
			pos.y += 50.0
		end

		if pos == null then
			# If `dev` is passed as a command line option, spawn near space
			var alt = 200.0
			if args.has("dev") then alt = boss_altitude - 10.0

			pos = new Point3d[Float](0.0, alt, 0.0)
		end

		player = new Player(pos, 4.0, 4.0, new Ak47)
	end
end

# A physical object responding to hollywood physics
abstract class Body
	super Boxed[Float]

	# Position at the center of the body
	var center: Point3d[Float]

	# Inertia of this body
	var inertia = new Point3d[Float](0.0, 0.0, 0.0) is writable

	# Is this body still alive?
	var is_alive = true

	# Mass of this object, used by `apply_force`
	fun mass: Float do return 1.0

	# Width of this object, used to detect collisions
	var width: Float

	# Height of this object, used to detect collisions
	var height: Float

	# Current health level, starts at `max_health`
	var health: Float = max_health

	# Maximum health for this object
	fun max_health: Float do return 100.0

	# Is this object affected by gravity?
	fun affected_by_gravity: Bool do return true

	# Is this object dead? TODO merge with is_alive
	fun dead: Bool do return health <= 0.0

	# Apply game logic for the last `dt` seconds within `world`
	fun update(dt: Float, world: World)
	do
		if affected_by_gravity then inertia.y -= 4.0

		center.x += dt * inertia.x
		center.y += dt * inertia.y
		center.z += dt * inertia.z

		# Hit the ground
		if bottom <= 0.0 and affected_by_gravity then
			center.y = height / 2.0
			inertia.y = 0.0
		end
	end

	# Apply a force, usually a result of `World::explode`
	fun apply_force(origin: Point3d[Float], force: Float)
	do
		var dx = center.x - origin.x
		var dy = center.y - origin.y

		var d2 = dx*dx + dy*dy
		var d = d2.sqrt
		#TODO if d2 > ? then return

		inertia.x += dx * force / d / mass * 4.0
		inertia.y += dy * force / d / mass * 12.0

		# Destabilize player
		if self isa Player then self.plane = null
	end

	# Is this object out of `world.camera_view`?
	fun out_of_screen(player: Player, world: World): Bool
	do
		var camera = world.camera_view
		if right < camera.left - 20.0 then return true
		if left > camera.right + 20.0 then return true
		if top < camera.bottom - 20.0 then return true
		if bottom > camera.top + 20.0 then return true
		return false
	end

	# Apply `damage` to this object
	fun hit(damage: Float, world: World)
	do
		self.health -= damage
		if self.health <= 0.0 then die(world)
	end

	# Die in the game logic, with graphical animations
	#
	# Calls `destroy` by default.
	fun die(world: World)
	do
		if not is_alive then return
		is_alive = false
		destroy world
	end

	# Destroy this objects and most references to it
	fun destroy(world: World) do end

	# ---
	# Box services

	redef fun top do return center.y + height / 2.0
	redef fun bottom do return center.y - height / 2.0
	redef fun left do return center.x - width / 2.0
	redef fun right do return center.x + width / 2.0
end

# Something to stand on
abstract class Platform
	super Body

	redef fun mass do return 20.0

	redef fun affected_by_gravity do return false

	# Planes slow down when close to the player, `old_inertia` is the speed before it slowed down
	private var old_inertia_y: nullable Float = null

	# Enemy the spawned on the plane
	var enemy: nullable WalkingEnemy = null is writable

	redef fun die(world)
	do
		if not is_alive then return
		super
		world.explode(center, width)
		world.score += 1
		if 100.0.rand > 50.0 then world.powerups.add(new Powerup(self.center, world))
	end

	redef fun destroy(world)
	do
		world.planes.remove self
		super
	end

	# Distance to the player
	fun player_dist(world: World): Float do
		var p = world.player
		if p == null then return 0.0
		var px = p.center.x
		var dst = center.x - px
		return dst.abs
	end

	# Has this plane slowed down because it is close to the player?
	private var slowed_down = false

	# Has this plane already accelerated because it got far from the player?
	private var accelerated = false

	redef fun update(dt, world)
	do
		# High friction on the Y axis to stabilize after an `apply_force`
		inertia.y *= 0.95

		super

		# Slow down if close to the player
		var dst = player_dist(world)
		if dst < 20.0 then
			if not slowed_down then
				old_inertia_y = inertia.y

				var speed = 10.0 + 15.0.rand
				if inertia.x < 0.0 then
					inertia.x = -speed
				else inertia.x = speed
				inertia.y = 0.0
				inertia.z = 0.0

				slowed_down = true
				if enemy != null then
					enemy.inertia.x = inertia.x
					enemy.inertia.y = inertia.y
					enemy.inertia.z = inertia.z
				end
			end
		else if dst > 30.0 and not accelerated then
			var oi = old_inertia_y
			if oi == null then return

			inertia.y = oi
			accelerated = true
		end
	end
end

# Airplane, the basic `Platform`
class Airplane
	super Platform
end

# Helicopter, the player rotates on its blades
class Helicopter
	super Platform
end

# Parachute to slow down the player
class Parachute
	super Body

	redef var affected_by_gravity = false

	redef fun update(dt, world) do
		super
		inertia.x = 0.0
		inertia.y = 0.0
		inertia.z = 0.0
		center.x = world.player.center.x
		center.y = world.player.center.y + 5.0
	end
end

# Human body
abstract class Human
	super Body

	# Input direction in `[-1.0 .. 1.0]`
	var moving = 0.0 is writable

	# `moving` speed when on a plane, applied directly to `center`
	var walking_speed = 20.0

	# `moving` speed when in freefall, applied to `inertia`
	var freefall_accel = 150.0

	# Acceleration on the X axis applied when jumping
	var jump_accel = 24.0

	# On which plane is standing `self`? if any.
	var plane: nullable Platform = null

	# Position in relation to `plane`
	private var dx_to_plane = 0.0

	# Equipped weapon
	var weapon: Weapon

	# Rotation status when on a copter bladers, used by `update`
	private var ltr = false

	# Is the parachute currently deployed?
	var parachute_deployed = false

	redef var affected_by_gravity = true

	# Altitude (in meters)
	fun altitude: Float do return center.y

	# Apply a jump from input
	fun jump
	do
		var plane = plane
		if plane != null then
			# On solid plane, jump
			inertia.y += 120.0
			inertia.x = plane.inertia.x + moving * jump_accel

			self.plane = null
		end
	end

	# Deploy parachute on input
	fun parachute
	do
		var plane = plane
		if plane == null and not parachute_deployed then
			# Deploy parachute
			parachute_deployed = true
			inertia.y = -10.0

			self.plane = null
		end
	end

	redef fun update(dt, world)
	do
		if not is_alive then return

		if altitude >= world.boss_altitude then
			# In space
			affected_by_gravity = false
			inertia.y *= 0.99
			super
			return
		end

		# In atmosphere

		# On a plane?
		var on_plane = plane
		if on_plane != null then
			# Is it still alive?
			if not on_plane.is_alive then
				on_plane = null
				self.plane = null
			end
		end

		if on_plane != null then
			# On a plane, applying special physics do not call super!

			# Precise movements
			center.x = on_plane.center.x + dx_to_plane + moving * walking_speed * dt
			center.y = on_plane.top + height / 2.0
			if plane isa Helicopter then
				center.y = plane.top + height / 2.0 + 1.5
				var left_blade = plane.center.x - 5.0
				var right_blade = plane.center.x + 5.0
				var px = center.x
				var blade_speed = 0.5
				if ltr then
					if px >= right_blade then ltr = false
					center.x = on_plane.center.x + dx_to_plane + moving * walking_speed * dt + blade_speed
				else
					if px <= left_blade then ltr = true
					center.x = on_plane.center.x + dx_to_plane + moving * walking_speed * dt - blade_speed
				end
			end

			# Detect fall
			if not (plane.left < right and plane.right > left) then
				self.plane = null
			end
		else
			# Freefall

			# Only influence the inertia
			inertia.x += moving * freefall_accel * dt
			inertia.x *= 0.99

			var old_y = bottom
			super
			if parachute_deployed then
				if inertia.y < -10.0 then inertia.y = -10.0
			end

			# Detect collision with planes
			for plane in world.planes do # TODO optimize with quad tree
				if plane.left < right and plane.right > left then
					if old_y > plane.top and bottom <= plane.top then
						var parachute = world.parachute
						if parachute != null then
							parachute.die world
							world.parachute = null
						end
						parachute_deployed = false
						# Landed on a plane
						plane.inertia.y += inertia.y / plane.mass

						# Update self
						self.plane = plane
						inertia.x = 0.0
						inertia.y = 0.0
						center.y = plane.top + height / 2.0
						if plane isa Helicopter then
							center.y = plane.top + height / 2.0 + 4.0
						end
						break
					end
				end
			end
		end

		on_plane = self.plane
		if on_plane != null then
			dx_to_plane = center.x - on_plane.center.x
		end

		# Die when hitting the ground
		if bottom <= 0.0 then
			die world
			inertia.x = 0.0
			inertia.y = 0.0
		end

		return
	end

	# Is the weapon ready to shoot?
	fun can_shoot(world: World): Bool
	do
		return is_alive and world.t - weapon.last_shot >= weapon.cooldown
	end

	# Open fire at `angle`!
	fun shoot(angle: Float, world: World)
	do
		if not can_shoot(world) then return

		var x_inertia = angle.cos * weapon.power
		var y_inertia = angle.sin * weapon.power
		var new_center = new Point3d[Float](self.center.x, self.center.y, self.center.z - 0.2)

		var bullet = register_bullet(new_center, angle, world)
		bullet.inertia.x = x_inertia
		bullet.inertia.y = y_inertia
		weapon.last_shot = world.t
	end

	# Add a bullet, which type depends on `self`
	protected fun register_bullet(new_center: Point3d[Float], angle: Float, world: World): Bullet
	do
		var bullet = new EnemyBullet(new_center, 2.0, 2.0, angle, self.weapon, world.t)
		world.enemy_bullets.add(bullet)
		return bullet
	end
end

# Player character
class Player
	super Human

	# Basic starting weapon to which `self` reverts when out of bullets for powerup
	var basic_weapon = new Ak47

	redef fun shoot(angle, world)
	do
		super

		# Consume limited bullets from powerups
		if can_shoot(world) then
			weapon.bullet_number -= 1
			if weapon.bullet_number <= 0 then self.weapon = basic_weapon
		end
	end

	redef fun register_bullet(new_center, angle, world)
	do
		var bullet = new PlayerBullet(new_center, 2.0, 2.0, angle, self.weapon, world.t)
		world.player_bullets.add(bullet)
		return bullet
	end

	redef fun update(dt, world)
	do
		super

		# Catch powerups
		for p in world.powerups.reverse_iterator do
			if self.intersects(p) then
				p.apply self
				p.die world
			end
		end
	end

	redef fun max_health do return 200.0
end

# Enemy that can shoot
abstract class Enemy
	super Human

	redef fun max_health do return 20.0

	redef fun die(world)
	do
		super
		world.score += 1
		if 100.0.rand > 90.0 then world.powerups.add(new Powerup(self.center, world))
	end

	redef fun destroy(world)
	do
		super
		world.enemies.remove self
	end
end

# Enemy walking on a platform
class WalkingEnemy
	super Enemy
end

# Enemy with a jetpack
class JetpackEnemy
	super Enemy

	redef fun affected_by_gravity do return false
end

# The main boss, the ISS taken over by bad guys
class Boss
	super Enemy

	# TODO this should not subclass Human!

	redef fun max_health do return 2000.0

	redef fun affected_by_gravity do return false

	redef fun die(world)
	do
		super
		world.score += 999
	end
end

# Bonus powerup
class Powerup
	super Body

	# Seconds to live
	var lifespan = 10.0

	# When has this powerup been created
	var created = 0.0 is writable

	redef fun affected_by_gravity do return false

	new(center: Point3d[Float], world: World)
	do
		var v = 3.rand
		var powerup: nullable Powerup = null
		if v == 0 then powerup = new Ak47PU(center, 5.0, 5.0)
		if v == 1 then powerup = new RocketLauncherPU(center, 5.0, 5.0)
		if v == 2 then powerup = new Life(center, 5.0, 5.0)
		assert powerup != null

		powerup.inertia.y = -2.0
		powerup.created = world.t
		return powerup
	end

	# Apply this powerup to `player`
	fun apply(player: Player) do end

	redef fun update(dt, world)
	do
		super
		if world.t - created > lifespan then die(world)
	end

	redef fun destroy(world)
	do
		super
		world.powerups.remove(self)
	end
end

# Weapon usable by a `Human` and `Boss`
abstract class Weapon

	# Second at which the last shot was taken
	var last_shot = 0.0

	# Number of bullets in the chamber, the weapon is lost when it reaches 0
	var bullet_number: Int is abstract

	# Damage made by a single bullet
	fun damage: Float is abstract

	# Seconds between each shot
	fun cooldown: Float is abstract

	# Speed of the bullet when leaving the weapon
	fun power: Float is abstract

	# Seconds to live of the bullets
	fun bullet_lifespan: Float is abstract
end

# Bullet fired by a `weapon`
abstract class Bullet
	super Body

	# Orientation
	var angle: Float

	# `Weapon` that fired `self`
	var weapon: Weapon

	# Second at which this bullet was fired
	var creation_time: Float

	redef fun affected_by_gravity do return false

	redef fun update(dt, world)
	do
		super
		if world.t - creation_time >= weapon.bullet_lifespan then die world
	end

	# Hit `body`
	fun hit_enemy(body: Body, world: World)
	do
		body.hit(self.weapon.damage, world)
		die world
	end
end

# `Bullet` shot by the player
class PlayerBullet
	super Bullet

	redef fun update(dt, world)
	do
		super

		for i in world.planes do if self.intersects(i) then hit_enemy(i, world)
		for i in world.enemies do if self.intersects(i) then hit_enemy(i, world)
	end

	redef fun destroy(world) do
		super
		world.player_bullets.remove self
	end
end

# `Bullet` shot by an enemy
class EnemyBullet
	super Bullet

	redef fun update(dt, world) do
		super

		var player = world.player
		if player != null and self.intersects(player) then hit_enemy(player, world)
	end

	redef fun destroy(world) do
		super
		world.enemy_bullets.remove self
	end
end

# Fast shooting weapon
class Ak47
	super Weapon

	redef var damage = 10.0

	redef var cooldown = 0.1

	redef var power = 70.0

	redef var bullet_lifespan = 3.0

	redef var bullet_number = 200
end

# Powerup to equip an `Ak47`
class Ak47PU
	super Powerup

	redef fun apply(player) do player.weapon = new Ak47
end

# Slow but powerful rocket launcher
class RocketLauncher
	super Weapon

	redef var damage = 500.0

	redef var cooldown = 1.5

	redef var power = 50.0

	redef var bullet_lifespan = 5.0

	redef var bullet_number = 20
end

# Powerup to equip a `RocketLauncher`
class RocketLauncherPU
	super Powerup

	redef fun apply(player) do player.weapon = new RocketLauncher
end

# Base weapon, a bit slow
class Pistol
	super Weapon

	redef var damage = 10.0

	redef var cooldown = 0.3

	redef var power = 70.0

	redef var bullet_lifespan = 3.0

	redef var bullet_number = 10000
end

# Healing powerup
class Life
	super Powerup

	redef fun apply(player) do player.health += 50.0
end

redef class Float
	# Fuzzy value in `[self-variation..self+variation]`
	fun &(variation: Float): Float do return self - variation + 2.0*variation.rand
end
