# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2011-2013 Alexis Laferrière <alexis.laf@xymus.net>
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

# Defines abstract display classes
module mnit_display

import mnit_input

# Any class with a size
interface Sized
	fun width: Int is abstract
	fun height: Int is abstract
end

# General image class, will be specialized for each classes
interface Image
	super Sized
	fun destroy is abstract

	#var scale: Float is abstract
	# Scale this image when blit
	fun scale: Float is abstract
	fun scale=( v: Float ) is abstract

	#var blended: Bool is abstract
	# Use blending on this image?
	fun blended: Bool is abstract
	fun blended=( v: Bool ) is abstract

	# Get another image from this one
	fun subimage( x, y, w, h: Int ): Image is abstract
end

# General class for everything drawable to
# Is used by drawable images and display
interface Drawable
	type I: Image

	# Call to prepare for drawing
	fun begin is abstract

	# Call when drawing is finished
	fun finish is abstract

	# Set viewport for drawing
	fun set_viewport( x, y, w, h: Int ) is abstract

	# Draw image on self, for top left position
	fun blit(image: I, x, y: Numeric) is abstract

	# Draw image on self, for top left position but scaled
	# the width and height of the target rectangle is specified
	fun blit_scaled(image: Image, x, y, w, h: Numeric)
	do
		var fx = x.to_f
		var fy = y.to_f
		var fx2 = fx + w.to_f
		var fy2 = fy + h.to_f
		blit_stretched(image, fx, fy, fx, fy2, fx2, fy2, fx2, fy)
	end

	# Draw image, centered at position
	fun blit_centered(image: I, x, y: Numeric) is abstract

	# Draw image, centered at position but rotated
	fun blit_rotated(image: I, x, y: Numeric, angle: Float) is abstract

	# Draw image, centered, rotated and scaled
	fun blit_rotated_scaled(image: I, x, y: Numeric, angle, scale: Float) is abstract

	# Draw image by specifying the positon of each image corners
	# Corners are in counter-clockwise order stating top left
	# a is top left, b is bottom left, c is bottom right and d is top right
	# ~~~
	# a-d
	# | |
	# b-c
	# ~~~
	fun blit_stretched(image: I, ax, ay, bx, by, cx, cy, dx, dy: Numeric)
		is abstract

	# Clear entire window with given color
	fun clear( r, g, b: Float ) is abstract
end

# General display class, is sized and drawable
interface Display
	super Sized
	super Drawable
end

# General drawable display image
interface DrawableImage
	super Drawable
	super Image
end
