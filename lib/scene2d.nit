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

# Framework for 2D management of game elements
#
# TODO: collision framework (with quad tree?)
module scene2d

# The root class of the living objects (sprites, group of sprites, etc.)
abstract class LiveObject
	# Compute the position, state and appearance.
	fun update do end

	# Controls whether `update' and `draw' are automatically called by `LiveGroup'
	var exists = true is writable

	# Redefine this method to asks how to draw on a view
	fun draw(view: View) is abstract
end


# The basic atomic living and moving object.
#
# A sprite has a position and a velocity
class Sprite
	super LiveObject

	# x coordinate of the center point
	var x: Int = 0 is writable

	# y coordinate of the center point
	var y: Int = 0 is writable

	# width of the sprite
	var width: Int = 100 is writable

	# height of the sprite
	var height: Int = 100 is writable

	# X coordinate of left side.
	fun left: Int do return x - width/2

	# X coordinate of right side.
	fun right: Int do return x + width/2

	# Y coordinate of top.
	fun top: Int do return y - height/2

	# Y coordinate of bottom.
	fun bottom: Int do return y + height/2

	# x velocity (applied by `update')
	var vx: Int = 0 is writable

	# y velocity (applied by `update')
	var vy: Int = 0 is writable

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
		return self.right > other.left and self.left < other.right and self.bottom > other.top and self.top < other.bottom
	end

	# Return the current angle of velocity
	# Often used to rotate the displayed image with the correct angle
	fun velocity_angle: Float
	do
		return atan2(self.vx.to_f, -self.vy.to_f)
	end

	# Return the angle to target an other sprite
	fun angle_to(target: Sprite): Float
	do
		return atan2((target.x-self.x).to_f, (self.y-target.y).to_f)
	end

	# Update of vx and vy toward a given angle and magnitude
	fun set_velocity(angle: Float, maginude: Int)
	do
		var magf = maginude.to_f
		self.vx = (angle.sin * magf).to_i
		self.vy = (angle.cos * -magf).to_i
	end

end

# Organizational class to manage groups of sprites and other live objects.
class LiveGroup[E: LiveObject]
	super LiveObject
	super List[E]

	# Recursively update each live objects that `exists'
	redef fun update
	do
		for x in self do if x.exists then x.update
	end

	# Remove all live Objects that do not exists
	# Call this to cleanup the live group
	fun gc
	do
		var i = self.iterator
		while i.is_ok do
			var e = i.item
			if not e.exists then
				i.delete
			else if e isa LiveGroup[LiveObject] then
				e.gc
			end
			i.next
		end
	end

	# Recursively draw each live objects that `exists'
	redef fun draw(view)
	do
		for x in self do if x.exists then x.draw(view)
	end
end

# A state in the game logic
# A scene manage a bunch of live objects
class Scene
	super LiveObject
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
	#     class MyView
	#         super View
	#         redef fun draw_sprite(s) do s.draw_on_myview(self)
	#     end
	#     redef class Sprite
	#         # How to draw a sprite on my specific view
	#         fun draw_on_myview(myview: MyView) is abstract
	#     end
	fun draw_sprite(s: Sprite) is abstract
end
