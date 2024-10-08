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

# Smart enemies
module ai

import core

redef class Enemy

	# Square of the range to shoot at the player
	fun range2: Float do return 32.0*32.0

	redef fun update(dt, world)
	do
		super

		var player = world.player
		if is_alive and player != null and player.is_alive and can_shoot(world) then
			# Shoot if possible
			if player.center.dist2(self.center) < range2 then
				aim_and_shoot(world, player)
			end
		end
	end

	# Aim to shoot at `target`
	fun aim_and_shoot(world: World, target: Body)
	do
		# TODO aim forward of `moving` target
		var angle = self.center.atan2(target.center)

		shoot(angle, world)
	end

	# Go to `target` using jetpack-like movement
	fun go_to(target: Point3d[Float], displacement: Float) do
		var sc = center
		var k = 1.0
		if target.x < sc.x then
			inertia.x -= k
			if inertia.x < -displacement then inertia.x = -displacement
		else
			inertia.x += k
			if inertia.x > displacement then inertia.x = displacement
		end
		if target.y < sc.y then
			inertia.y -= k
			if inertia.y < -displacement then inertia.y = -displacement
		else
			inertia.y += k
			if inertia.y > displacement then inertia.y = displacement
		end
	end
end

redef class JetpackEnemy
	redef fun update(dt, world)
	do
		super

		var player = world.player
		if is_alive and player != null and player.is_alive and can_shoot(world) then
			# Move towards player
			var target = player.center
			go_to(target, 40.0)
		end
	end
end

redef class Boss
	redef fun range2 do return 64.0*64.0
end
