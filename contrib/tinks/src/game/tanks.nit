# This file is part of NIT ( https://nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# See the License for the specific language governing permissions and
# limitations under the License.

# Tank and tank turret related logic
module tanks is serialize

import world

redef class TGame
	# All of the tanks in game
	var tanks = new TankSet

	redef fun do_turn
	do
		var turn = super
		for tank in tanks do tank.do_turn turn
		return turn
	end
end

# Stats of a tank kind, its config should be move to the `Story` if we want more than 1
class TankRule
	super Rule

	# Width of this tank
	var width: Float = 64.0/32.0

	# Height of this tank
	var length: Float = 100.0/32.0

	# Maximum `health` this tank can normally have
	var max_health = 4

	# Maximum speed of this tank (in world coordinate units per seconds)
	var max_speed = 2.0

	# Turret turning speed (in radians per second)
	var turret_turn_speed = 1.6

	# Waiting time between shots can be fired
	var turret_cooldown_time = 2.0

	# Maximum `direction_heading` heading, may be double
	var max_direction = 1.0
end

redef class Story
	# The main (and only) tank configuration in this game
	var tanks: Array[TankRule] = [new TankRule(self)]
end

# A tank!
class Tank
	super TTurnable
	super Ruled
	redef type R: TankRule

	# In world `Pos` of this entity
	var pos: Pos

	# Orientation of this entity
	var heading: Float

	# The turret mounted on this tank
	var turret = new Turret(self)

	# Commanded direction
	var direction_heading = 0.0

	# Commanded speed
	var direction_forwards = 0.0

	# Health of this tank, out of `rule.max_health`
	var health: Int = rule.max_health is lazy

	redef fun do_turn(turn)
	do
		var collisions = next_move_collisions(turn)

		if collisions.is_empty then
			var next = normal_next_pos(turn)
			self.pos = next.first
			self.heading = next.second
		end

		turret.do_turn turn

		if health > 0 then
			turn.add new TankMoveEvent(self, pos, direction_heading, direction_forwards, heading, turret.relative_heading)
		end
	end

	# What would be the next position if not blocked by terrain features?
	#
	# Returns a couple of the new position and heading.
	fun normal_next_pos(turn: TTurn): Couple[Pos, Float]
	do
		var heading = (heading + direction_heading * turn.dts).angle_normalize

		var speed = direction_forwards * rule.max_speed * turn.dts
		var pos = pos
		if speed != 0.0 then
			pos += heading.to_vector(speed)
		end

		return new Couple[Pos, Float](pos, heading)
	end

	# Damage this tank, server-side
	fun hit(turn: TTurn)
	do
		var damage = 1
		var health = health - damage

		if health <= 0 then
			destroy turn
		else
			turn.add new TankHealthChange(self, health)
		end
	end

	# Destroy this tank, server-side
	fun destroy(turn: TTurn)
	do
		turn.add new TankDeathEvent(self)
		turn.game.world.explode(turn, pos, 3)
	end

	# Collisions on the next move
	fun next_move_collisions(turn: TTurn): HashSet[Feature]
	do
		var next = normal_next_pos(turn)
		var features = new HashSet[Feature]

		# Use the lines between the corners to detect collisions
		var corners = corners_at(next)
		var prev_corner = corners.last
		for corner in corners do
			var feature = turn.game.world.first_collision(prev_corner, corner)
			if feature != null then features.add feature
			prev_corner = corner
		end

		return features
	end

	# Get the 4 corners at a `next` position
	fun corners_at(next: Couple[Pos, Float]): Array[Pos]
	do
		var next_pos = next.first
		var heading = next.second

		var corners = new Array[Pos]

		var hwy = rule.width/2.0 * (heading+pi/2.0).sin
		var hwx = rule.width/2.0 * (heading+pi/2.0).cos
		var hly = rule.length/2.0 * heading.sin
		var hlx = rule.length/2.0 * heading.cos
		corners.add new Pos(next_pos.x + hlx + hwx, next_pos.y + hly + hwy)
		corners.add new Pos(next_pos.x + hlx - hwx, next_pos.y + hly - hwy)
		corners.add new Pos(next_pos.x - hlx - hwx, next_pos.y - hly - hwy)
		corners.add new Pos(next_pos.x - hlx + hwx, next_pos.y - hly + hwy)

		return corners
	end
end

# A tank turret
class Turret
	super TTurnable

	# The `Tank` on which is mounted this turret
	var tank: Tank

	# Orientation of this turret relative to the tank
	var relative_heading = 0.0

	# Absolute orientation of this turret
	fun heading: Float do return (tank.heading+relative_heading).angle_normalize

	# Current target to aim for and fire upon
	var target: nullable Pos = null

	# Seconds left before the turret can open fire again
	var cooldown = 0.0

	redef fun do_turn(turn)
	do
		if cooldown > 0.0 then
			cooldown = cooldown - turn.dts

			if cooldown <= 0.0 then
				cooldown = 0.0

				# Notify clients
				turn.add new TurretReadyEvent(tank)
			end
		end

		var target = target
		if target != null then

			var angle_to_target = tank.pos.atan2(target)
			var d = (heading - angle_to_target).angle_normalize

			var max_angle = tank.rule.turret_turn_speed * turn.dts
			if d.abs < max_angle then
				self.relative_heading = angle_to_target - tank.heading

				if cooldown == 0.0 then
					# On target, fire
					fire turn
					self.target = null
				end
			else
				# Turn towards target
				if d < 0.0 then
					self.relative_heading += max_angle
				else self.relative_heading -= max_angle
			end
		end
	end

	# Open fire!
	fun fire(turn: TTurn)
	do
		var dst = target
		assert dst != null

		# Is there something between the tank and the target?
		var hit = turn.game.world.first_collision(tank.pos, dst)
		if hit != null then dst = hit.pos

		# Events!
		turn.add new OpenFireEvent(tank)
		turn.game.world.explode(turn, dst, 2)

		# The turret need time to reload, cooldown!
		cooldown = tank.rule.turret_cooldown_time
	end
end

redef class World
	redef fun explode(turn, center, force)
	do
		super

		for tank in game.tanks do
			if tank.health == 0 then continue
			if center.dist(tank.pos) <= force.to_f + 1.0 then
				tank.hit turn
			end
		end
	end
end

# A collection of `Tank` that could be optimized
class TankSet
	super HashSet[Tank]
end

# A `tank` centric order
abstract class TankOrder
	super TOrder

	# The `Tank` at the center of this order
	var tank: Tank
end

# A command to change the behavior of `tank`
class TankDirectionOrder
	super TankOrder

	# Desired direction, in [-1.0..1.0]
	var direction_heading: Float

	# Desired speed, in [-1.0..1.0]
	var direction_forwards: Float

	redef fun apply(game)
	do
		# TODO use events
		var direction_heading = direction_heading
		direction_heading = direction_heading.clamp(-1.0, 1.0)
		tank.direction_heading = direction_heading*tank.rule.max_direction

		var direction_forwards = direction_forwards
		direction_forwards = direction_forwards.clamp(-1.0, 1.0)
		tank.direction_forwards = direction_forwards*tank.rule.max_speed
	end
end

# Order to aim and fire at `target`
class AimAndFireOrder
	super TankOrder

	# Target for the turret
	var target: Pos

	redef fun apply(game)
	do
		tank.turret.target = target
	end
end

# A `tank` centric event
abstract class TankEvent
	super TEvent

	# The `Tank` at the center of this event
	var tank: Tank
end

# `tank` opens fire
class OpenFireEvent
	super TankEvent
end

# The turret of `tank` is ready to open fire
class TurretReadyEvent
	super TankEvent
end

# `tank` has been destroyed
class TankDeathEvent
	super TankEvent

	redef fun apply(game)
	do
		tank.health = 0
		game.tanks.remove tank
	end
end

# The health of `tank` changes to `new_health`
class TankHealthChange
	super TankEvent

	# The new health for `tank`
	var new_health: Int

	redef fun apply(game)
	do
		tank.health = new_health
	end
end

# A `tank` moved
#
# TODO this event is too big, divide in 2 or more and move more logic client-side
class TankMoveEvent
	super TankEvent

	# The position
	var pos: Pos

	# The direction of the "wheels"
	var direction_heading: Float

	# The speed
	var direction_forwards: Float

	# Orientation of the tank
	var tank_heading: Float

	# Orientation of the turret
	var turret_heading: Float

	redef fun apply(game)
	do
		tank.pos = pos
		tank.direction_heading = direction_heading
		tank.direction_forwards = direction_forwards
		tank.heading = tank_heading
		tank.turret.relative_heading = turret_heading
	end
end
