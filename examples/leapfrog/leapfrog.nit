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

# game of leapfrog: be a sheep and avoid the duck to grab apples
#
# This module is an example of a simple game using a curses backend
module leapfrog

import quadtree
import scene2d

# A falling apple
# If the sheep grab it, it scores one point.
class Apple
	super Sprite
end

# Common class for the sheep and the duck
class Animal
	super Sprite

	# Is the sprite stunned?
	# 0 if no, >0 if stunned.
	# The value indicate the number of step that remain to be stunt
	#
	# If a animal is stunned, it cannot move horizontally
	var stunt_ttl: Int writable = 0

	# Common update for animal
	# handle stunt and edge collision
	redef fun update
	do
		if stunt_ttl > 0 then
			stunt_ttl -= 1
		else
			self.x += self.vx
		end
		self.y += self.vy

		if self.x + self.width > 7900 then
			self.vx = -self.vx
			self.x = 7900 - self.width
		else if self.x < 0 then
			self.vx = -self.vx
			self.x = 0
		end
	end
end

# The player sprite
class Sheep
	super Animal

	# Which frame to show when walking
	var leg_state: Int = 0

	# Is the sheep currently jumping (or falling)
	var is_jumping = false

	init
	do
		self.y = 2000 - 200
		self.vx = 100
		self.width = 600
		self.height = 200
	end

	redef fun update
	do
		super

		if is_jumping then
			if self.y + self.height > 2000 then
				is_jumping = false
				self.vy = 0
				self.y = 2000 - self.height
			else
				self.vy += 10 # gravity
			end
		end
		if not is_jumping then
			self.leg_state = 1 - self.leg_state # change leg
		end
	end

	# Try to jump is possible (ie if walking and not stunt)
	fun jump
	do
		if is_jumping or stunt_ttl > 0 then return
		self.vy = -100
		self.is_jumping = true
	end
end

# The nemesis of the sheep.
# It just go back and forth
class Duck
	super Animal
	init
	do
		self.y = 2000 - 200
		self.x = 7900 - 400
		self.vx = -80
		self.width = 400
		self.height = 200
	end
end

class FootBar 
	super Sprite
	
	init
	do
		self.x = 0
		self.y = 2000
		self.width = 7000
		self.height = 10
	end

end

class PlayScene
	super Scene

	var bar = new FootBar
	var apples = new LiveGroup[Apple]
	var duck = new Duck
	var sheep = new Sheep
	var score = 0
	var sprites = new LiveGroup[LiveObject]
	var qd = new Quadtree[Sprite].with(0, 0, 8000, 2000, 0, 3, null)

	init
	do
		qd.nw
		sprites.add(bar)
		qd.addItem(bar)
		sprites.add(apples)
		sprites.add(duck)
		sprites.add(sheep)
		for a in apples do qd.addItem(a)
		qd.addItem(duck)
		qd.addItem(sheep)
	end

	redef fun update
	do

		# Call update on all sprites
		sprites.update
		updateQuadTree

		var spritesWithSheep = qd.retrieve(sheep)
		for sp in spritesWithSheep
		do
			# Eat apple or fallen apple
			if sp isa Apple then
				if sp.overlaps(sheep)  and sp.exists then
					score += 1
					sp.exists = false
					qd.remove(sp)
				end
			end

			# Sheep vs duck
			if sp isa Duck then
				if sp.overlaps(sheep) then
					if sheep.is_jumping and sheep.vy > 0 then
						sp.stunt_ttl = 5
						sheep.vy = -150
					else
						if sheep.x < sp.x then
							sheep.x = sp.x - sheep.width
						else
							sheep.x = sp.x + sp.width
						end
						sheep.vx = - sheep.vx
						sp.vx = - sp.vx
					end
				end
			end
		end

		# Need a new apple
		if 10.rand < 2  then
			var a = new Apple
			a.x = (60.rand + 10) * 100
			a.y = 0
			a.vx = 0
			a.vy = 70.rand + 30
			apples.add(a)
			qd.addItem(a)
		end
		
		for a in apples do
			if not a.exists then 
				qd.remove(a) 
				continue
			end
			if a.y > 2000 then
				a.exists = false
				qd.remove(a)
			end
		end		

	end

	fun updateQuadTree
	do
		qd.clear
		for a in apples do qd.updatePosition(a)
		qd.updatePosition(sheep)
		qd.updatePosition(duck)
	end

end

