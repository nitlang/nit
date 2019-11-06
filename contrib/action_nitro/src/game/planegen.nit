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

# Enemy generation
module planegen

import core

redef class World

	# Max planes within view
	var max_planes = 12

	# Max human enemies within view
	var max_enemies = 2

	redef fun update(dt) do
		super
		spawn_enemy spawn_plane
	end

	# Randomly spawn a plane if needed
	fun spawn_plane: Bool do
		var p = player
		if p == null then return false
		if p.altitude >= boss_altitude then
			return false
		end
		for i in planes.reverse_iterator do
			if i.out_of_screen(p, self) then
				#print "Despawning plane"
				i.destroy self
			end
		end

		if p.dead then return false
		if planes.length >= max_planes then return false
		if 100.rand < 95 then return false

		var pos
		var xspawn = 50.0.rand
		var direction: Int
		if xspawn >= 25.0 then
			xspawn = camera_view.right - 1.0
			direction = 1
		else
			xspawn = camera_view.left - 8.0
			direction = 0
		end
		var yspawn
		if planes.length == 0 then
			#print "First plane spawn"
			yspawn = p.center.y & 25.0
		else
			var py = p.center.y
			var planes_below = 0
			var planes_above = 0
			var above_y = new Array[Float]
			var below_y = new Array[Float]
			for i in planes do
				#print "Plane coordinates = {i.center}"
				var iy = i.center.y
				if iy > py then
					planes_above += 1
					above_y.add iy
				else
					planes_below += 1
					below_y.add iy
				end
			end
			if planes_below < planes_above then
				if planes_below == 0 then
					yspawn = py - 15.0.rand
				else
					yspawn = below_y.rand - 25.0.rand
				end
			else
				if planes_above == 0 then
					yspawn = py + 15.0.rand
				else
					yspawn = above_y.rand + 25.0.rand
				end
			end
			if yspawn < 0.0 then
				yspawn = py + 15.0.rand
			end
		end
		pos = new Point3d[Float](xspawn, yspawn, 0.0 & 0.2)
		#print("Spawning plane at position {pos}")
		var platform_type = 100.rand
		var plane: Platform
		if platform_type < 90 then
			plane = new Airplane(pos, 16.0, 4.0)
		else
			plane = new Helicopter(pos, 16.0, 4.0)
		end
		var xspeed = 50.0
		if direction == 1 then xspeed = -xspeed
		plane.inertia = new Point3d[Float](xspeed, -0.1, 0.0)
		planes.add(plane)
		return true
	end

	# Randomly spawn an enemy if needed
	fun spawn_enemy(spawned_plane: Bool) do
		var p = player
		if p == null then return
		if p.altitude >= boss_altitude then
			for e in enemies.reverse_iterator do if e isa JetpackEnemy then
				e.destroy self
			end
			return
		end
		for i in enemies.reverse_iterator do
			if i.out_of_screen(p, self) then
				#print "Despawning enemy"
				i.destroy self
			end
		end

		if enemies.length >= max_enemies then return
		if 100.rand < 95 then return

		if spawned_plane then
			var pl = planes.last
			var pos = new Point3d[Float](pl.center.x, pl.center.y + pl.top / 2.0, 0.0)
			#print "Spawning walking enemy at positon {pos}"
			var enemy = new WalkingEnemy(pos, 3.0, 3.0, new Pistol)
			enemy.inertia = pl.inertia
			pl.enemy = enemy
			enemies.add enemy
			return
		end
		# 0: Up
		# 1: Right
		# 2: Down
		# 3: Left
		var dirspawn = 4.rand
		var xspawn
		var yspawn
		var xinertia
		var yinertia
		var cam = camera_view
		if dirspawn == 0 then
			xspawn = (cam.right - cam.left).rand
			yspawn = cam.top + 10.0
			yinertia = -(10.0.rand)
			xinertia = 0.0
		else if dirspawn == 1 then
			yspawn = (cam.top - cam.bottom).rand
			xspawn = cam.right + 10.0
			xinertia = -(10.0.rand)
			yinertia = 0.0
		else if dirspawn == 2 then
			xspawn = (cam.right - cam.left).rand
			yspawn = cam.bottom - 10.0
			yinertia = 10.0.rand
			xinertia = 0.0
		else if dirspawn == 3 then
			yspawn = (cam.top - cam.bottom).rand
			xspawn = cam.left - 10.0
			xinertia = 10.0.rand
			yinertia = 0.0
		else
			#print "Rand failed, should not happen"
			abort
		end
		var pos = new Point3d[Float](xspawn, yspawn, 0.0)
		#print "Spawning jetpack enemy at positon {pos}"
		var enemy = new JetpackEnemy(pos, 3.0, 3.0, new Pistol)
		enemy.inertia = new Point3d[Float](xinertia, yinertia, 0.0)
		enemies.add enemy
	end
end
