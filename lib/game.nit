# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2006 Jean Privat <jean@pryen.org>
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A 
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# This module contains some classes that help to develop games
package game

import sdl

# This class helps to count events by unit of time.
# For example, an FPS counter:
#	var fps = new TickCounter
#	while(true) do
#		screen_draw
#		if fps.update then
#			print(fps)
#		end
#	end
class TickCounter
	# Register a new tick
	# Return true every time interval
	meth update: Bool
	do
		return update_with(sdl_get_ticks)
	end

	# Like `update' but with an explicit time instead of `sdl_get_ticks`
	meth update_with(time: Int): Bool
	do
		var f = _ticks + 1
		var dt = time - _time
		var ti = _time_interval
		if dt < ti then
			_ticks = f
			return false
		else if _time == 0 then
			_ticks = 0
			_time = time
			return false
		else
			_count = ti * f / dt
			_ticks = 0
			_time = time
			return true
		end
	end

	# The number of ticks in the last time interval
	readable attr _count: Int 
	
	redef meth to_s: String
	do
		return _count.to_s
	end

	# A ticks counter
	attr _ticks: Int

	# Last update time
	attr _time: Int

	# The time interval
	readable writable attr _time_interval: Int

	# Create a new counter (time interval is 1000)
	init
	do
		with_time(1000)
	end
	
	# Create a new counter
	init with_time(time_interval: Int)
	do
		_time_interval = time_interval
	end
end

class Rectangle
	meth left: Int is abstract
	meth right: Int is abstract
	meth top: Int is abstract
	meth bottom: Int is abstract
	meth width: Int is abstract
	meth height: Int is abstract
	
	meth contain_pixel(x: Int, y: Int): Bool
	# Is `self' contains the point (`x',`y') ?
	do
		return x >= left and
			x < right and
			y >= top and
			y < bottom
	end

	meth collide(o: Rectangle): Bool
	do
		var s_l = left
		var s_r = right
		var s_t = top
		var s_b = bottom
		var o_l = o.left
		var o_r = o.right
		var o_t = o.top
		var o_b = o.bottom
		return ((s_l <= o_l and o_l < s_r) or
			(s_l < o_r and o_r <= s_r) or
			(o_l <= s_l and s_l < o_r) or
			(o_l < s_r and s_r <= o_r)) and
			((s_t <= o_t and o_t < s_b) or
			(s_t < o_b and o_b <= s_b) or
			(o_t <= s_t and s_t < o_b) or
			(o_t < s_b and s_b <= o_b))
	end
end

# A sprite is a drawable element.
# It is represented by a main pixel (x,y) and an image (image)
class Sprite
special Rectangle

	# Absolute X coordinate of the main pixel in the screen
	readable writable attr _x: Int

	# Absolute Y coordinate of the main pixel in the screen
	readable writable attr _y: Int

	# Set two coordinates in one instruction
	meth set_xy(x: Int, y: Int)
	do
		self.x = x
		self.y = y
	end

	# The current image of the object
	readable attr _image: SDL_Surface

	# Relative X cordinate of the main pixel in the image
	readable attr _x_image: Int

	# Relative Y cordinate of the main pixel in the image
	readable attr _y_image: Int
	
	# Set image and relative coordinates in one instruction
	meth set_image(i: SDL_Surface, x: Int, y: Int)
	do
		_image = i
		_x_image = x
		_y_image = y
	end
	
	# Set image centered on the main pixel (adjust x_image and y_image)
	meth set_centered_image(i: SDL_Surface)
	do
		_image = i
		_x_image = i.width / 2
		_y_image = i.height / 2
	end

	redef meth left: Int
	do
		return _x - _x_image
	end
	
	redef meth top: Int
	do
		return _y - _y_image
	end

	redef meth right: Int
	do
		return _x - _x_image + _image.width
	end

	redef meth bottom: Int
	do
		return _y - _y_image + _image.height
	end

	redef meth width: Int
	do
		return _image.width
	end

	redef meth height: Int
	do
		return _image.height
	end
	
	# Draw the image on the surface
	meth blit_on(s: SDL_Surface)
	do
		_image.blit_on_xy(s, _x - _x_image, _y - _y_image)
	end
end

