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

# 2D management of game elements
#
# FIXME: game is a bad name
# TODO: collision framework (with quad tree?)
module game

# The root class of the living objects (sprites, group of sprites, etc.)
abstract class LiveObject
	# Compute the position, state and appearance.
	fun update do end

	# Controls whether `update' and `draw' are automatically called by `LiveGroup'
	var exists writable = true

	# Redefine this method to asks how to draw on a view
	fun draw(view: View) is abstract
end


# The basic atomic living and moving object.
#
# A sprite has a position and a velocity
class Sprite
	super LiveObject

	# x coordinate of the top-left point
	var x: Int writable = 0

	# y coordinate of the top-left point
	var y: Int writable = 0

	# width of the sprite
	var width: Int writable = 100

	# height of the sprite
	var height: Int writable = 100

	# x velocity (applied by `update')
	var vx: Int writable = 0

	# y velocity (applied by `update')
	var vy: Int writable = 0

	redef fun update
	do
		self.x += self.vx
		self.y += self.vy
	end

	redef fun draw(view) do view.draw_sprite(self)

	# Is self overlaps (or contains) an other sprite
	# `x', `y', `width', and `height' of both sprites are considered
	fun overlaps(other: Sprite): Bool
	do
		return self.x+self.width > other.x and self.x < other.x+other.width and self.y+self.height > other.y and self.y < other.y+other.width
	end
end

# Organizational class to manage groups of sprites and other live objects.
class LiveGroup[E: LiveObject]
	super LiveObject
	super List[E]

	init
	do
	end

	# Recursively update each live objects that `exists'
	redef fun update
	do
		for x in self do if x.exists then x.update
	end

	# Recursively draw each live objects that `exists'
	redef fun draw(view)
	do
		for x in self do if x.exists then x.draw(view)
	end
end

# Abstract view do draw sprites
#
# Concrete views are specific for each back-end.
# View can also be used to implements camera and other fun things.
interface View
	# Draw a specific sprite on the view
	#
	# This method must be implemented for each specific view.
	# A traditional way of implementation is to use a double-dispatch mechanism
	#
	# Exemple:
	#     class MyView
	#         redef fun draw_sprite(s) do s.draw_on_myview(self)
	#     end
	#     redef class Sprite
	#         # How to draw a sprite on my specific view
	#         fun draw_on_myview(myview: MyView) is abstract
	#     end
	fun draw_sprite(s: Sprite) is abstract
end
