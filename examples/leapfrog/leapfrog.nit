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

# game of leapfrog: be a sheep and avoid the duck to grab apples
#
# This module is an example of a simple game using a curses backend
module leapfrog

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
	var stunt_ttl: Int = 0 is writable

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

class PlayScene
	super Scene

	var apples = new LiveGroup[Apple]
	var duck = new Duck
	var sheep = new Sheep

	var score = 0

	var sprites = new LiveGroup[LiveObject]

	init
	do
		sprites.add(apples)
		sprites.add(duck)
		sprites.add(sheep)
	end

	redef fun update
	do

		# Call update on all sprites
		sprites.update

		# Need a new apple
		if 10.rand < 2  then
			var a = new Apple
			a.x = (60.rand + 10) * 100
			a.y = 0
			a.vx = 0
			a.vy = 70.rand + 30
			apples.add(a)
		end

		# Eat apple or fallen apple
		for a in apples do
			if not a.exists then continue
			if a.overlaps(sheep) then
				score += 1
				a.exists = false
			end
			if a.y > 2000 then
				a.exists = false
			end
		end

		# Sheep vs duck
		if sheep.overlaps(duck) then
			if sheep.is_jumping and sheep.vy > 0 then
				duck.stunt_ttl = 5
				sheep.vy = -150
			else
				if sheep.x < duck.x then
					sheep.x = duck.x - sheep.width
				else
					sheep.x = duck.x + duck.width
				end
				sheep.vx = - sheep.vx
				duck.vx = - duck.vx
			end
		end
	end

end

