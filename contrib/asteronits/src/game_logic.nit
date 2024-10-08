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

# Pure game logic, independent of gamnit and other display concerns
module game_logic

import geometry::points_and_lines

# Root of all entities of a single play
class World

	# Number of original asteroids per play
	var n_asteroids: Int

	# Number of parts created when an asteroid explodes
	var n_asteroid_parts: Int

	# Ratio of the world: height / width
	var ratio_height_width: Float

	# Minimum half size of the world, applied either to `half_width` of `half_height`
	private var min_half_size = 500.0

	# Width of the world
	var half_width: Float = if ratio_height_width <= 1.0 then
			min_half_size
		else min_half_size * ratio_height_width is lazy

	# Height of the world
	var half_height: Float = if ratio_height_width >= 1.0 then
			min_half_size
		else min_half_size / ratio_height_width is lazy

	# Player's ship
	var ship = new Ship(self)

	# All live spacial objects
	var objects = new Array[SpacialObject].with_items(ship)

	# All live asteroids
	var asteroids = new Array[Asteroid]

	# All live bullets
	var bullets = new Array[SpacialObject]

	init
	do
		for a in n_asteroids.times do
			var asteroid = new Asteroid(self, 3)
			asteroid.center.x = half_width - 2.0*half_width.rand
			asteroid.center.y = half_height - 2.0*half_height.rand
			asteroid.rotation_inertia = 0.5 - 1.0.rand

			objects.add asteroid
			asteroids.add asteroid
		end
	end

	# Execute a turn that took `dt` seconds
	fun do_turn(dt: Float)
	do
		for object in objects do object.do_turn dt

		for object in objects.to_a do if not object isa Asteroid then

			for asteroid in asteroids.to_a do
				var d2 = object.center.dist2(asteroid.center)

				var r = object.radius + asteroid.radius
				if d2 < r*r then
					# Boom
					if object == ship then
						# The ship is invincible
						# TODO health and losing
						ship.hit
					else
						object.destroy
					end

					asteroid.destroy
					break
				end
			end
		end
	end
end

# Physical object in space physics
abstract class SpacialObject

	# World in which this object belongs
	var world: World

	# Current position
	var center = new Point3d[Float](0.0, 0.0, 0.0)

	# Position inertia, applied on `center` at each `do_turn`
	var inertia = new Point3d[Float](0.0, 0.0, 0.0)

	# Current rotation
	var rotation = 0.0

	# Rotation inertia, applied on `rotation` at each `do_turn`
	var rotation_inertia = 0.0

	# Rotation force, currently applied by the pilot
	var applied_rotation = 0.0 is writable

	# Thrust force, currently applied by the pilot
	var applied_thrust = 0.0 is writable

	# Radius of this object for collision detection
	var radius: Float is noinit

	# New instance copying the data from `other` with an optional `variation`
	init copy(other: SpacialObject, variation: nullable Float)
	do
		init other.world

		if variation == null then variation = 0.0

		center.x = other.center.x
		center.y = other.center.y
		center.z = other.center.z

		inertia.x = other.inertia.x + variation - 2.0*variation.rand
		inertia.y = other.inertia.y + variation - 2.0*variation.rand

		rotation = other.rotation
		if variation != 0.0 then rotation = 2.0 * pi.rand
	end

	# Apply `thrust` forward on this object
	fun apply_thrust(thrust: Float)
	do
		inertia.x += thrust * rotation.cos
		inertia.y += thrust * rotation.sin
	end

	# Execute a turn that took `dt` seconds
	fun do_turn(dt: Float)
	do
		# Forces to inertia
		var t = applied_thrust * 5.0
		inertia.x += t * rotation.cos
		inertia.y += t * rotation.sin

		# Arcade rotation
		var r = applied_rotation * 0.05
		rotation += r

		# Realistic rotation, kept for reference and reality minded individuals
		#var r = applied_rotation * 0.2
		#rotation_inertia += r
		#rotation_inertia = rotation_inertia.clamp(-2.0, 2.0)

		# Inertia to position
		rotation += rotation_inertia * dt
		center.x += inertia.x * dt
		center.y += inertia.y * dt
		center.z += inertia.z * dt

		# Wrap objects so they stay in the screen
		while center.x < -world.half_width do center.x += 2.0 * world.half_width
		while center.x > world.half_width do center.x -= 2.0 * world.half_width
		while center.y < -world.half_height do center.y += 2.0 * world.half_height
		while center.y > world.half_height do center.y -= 2.0 * world.half_height
	end

	# Destroy this object
	fun destroy do world.objects.remove self
end

# Player's ship
class Ship
	super SpacialObject

	init do radius = 20.0

	# Open fire forward
	fun fire
	do
		var bullet = new Bullet.copy(world.ship)
		bullet.center.z = -1.0 # in the background
		bullet.apply_thrust 500.0 # give a boost

		world.objects.add bullet
		world.bullets.add bullet
	end

	# Something hits the ship
	fun hit do end
end

# Asteroid, the main obstacle in this game
class Asteroid
	super SpacialObject

	# Size of this asteroid, should be greater than 0
	var size: Int

	# Color, or type, on this asteroid
	var color: Int = 2.rand

	init
	do
		rotation_inertia = 0.5 - 1.0.rand
		radius = 22.5 * size.to_f
	end

	# New asteroid breaking off from `other`
	init break_off(other: Asteroid)
	do
		size = other.size - 1
		color = other.color

		copy(other, 60.0)
	end

	# Explode and break off this asteroid
	redef fun destroy
	do
		super

		world.asteroids.remove self

		if size == 1 then return # Do not break off

		for p in world.n_asteroid_parts.times do
			var asteroid = new Asteroid.break_off(self)
			asteroid.size = size - 1
			asteroid.color = color

			asteroid.inertia.x += 1.0 - 2.0.rand
			asteroid.inertia.y += 1.0 - 2.0.rand

			world.objects.add asteroid
			world.asteroids.add asteroid
		end
	end
end

# Bullet or beam fired from a `Ship`
class Bullet
	super SpacialObject

	# Time left before this bullet expires
	var ttl = 5.0

	init do radius = 0.0

	redef fun do_turn(dt)
	do
		super

		ttl -= dt
		if ttl <= 0.0 then destroy
	end

	redef fun destroy
	do
		super
		world.bullets.remove self
	end
end
