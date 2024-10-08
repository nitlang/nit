# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# An example to test and demonstrate the `sdl2` lib with `image` and `events`
module minimal is example

import sdl2::all

# Check for an error, then print and clear it
#
# Some errors are not fatal, so we ignore them at this level.
fun check_error(loc: String)
do
	var error = sys.sdl.error.to_s
	if not error.is_empty then
		print "at {loc}: {error}"
		sys.sdl.clear_error
	end
end

# Init `sdl2`, including video and events
sys.sdl.initialize((new SDLInitFlags).video)
check_error "init"

# Init `sdl2::image`
sdl.img.initialize((new SDLImgInitFlags).png)
check_error "img_init"

# Create a window
var window = new SDLWindow("Window title!".to_cstring, 800, 600, (new SDLWindowFlags).opengl)
check_error "window"

# Create a render, the suffested one
var renderer = new SDLRenderer(window, -1, (new SDLRendererFlags).accelerated)
check_error "renderer"

# Load an image
var surface = new SDLSurface.load("assets/fighter.png".to_cstring)
check_error "surface"
assert not surface.address_is_null

# Alternative code to load a BMP image without `sdl2::image`
#
# var surface = new SDLSurface.load_bmp("assets/fighter.bmp".to_cstring)

# Set the window icon
window.icon = surface
check_error "icon"

# Get a texture out of that surface
var texture = new SDLTexture.from_surface(renderer, surface)
check_error "texture"

# Allocate memory for reusable objects
var event = new SDLEventBuffer.malloc
var src = new SDLRect.nil
var dst = new SDLRect(0, 0, 128, 128)

# Set the colors we will be using
var white = new SDLColor(255, 255, 255, 255)
var green = new SDLColor(  0, 255,   0, 255)
var spacy = new SDLColor( 25,  25,  50, 255)

loop
	# Loop over events until we get a quit event
	while event.poll_event do
		var higher_event = event.to_event
		if higher_event isa SDLQuitEvent then
			break label out
		else if higher_event isa SDLMouseButtonDownEvent then
			# Update `dst` to be centered on the latest click
			dst.x = higher_event.x - dst.w/2
			dst.y = higher_event.y - dst.h/2
		end
	end

	# Clear the screen with a spacy color
	renderer.draw_color = spacy
	renderer.clear

	# Draw the target box for the following `copy`
	renderer.draw_color = green
	renderer.draw_rect dst

	# Copy a texture to the screen
	renderer.draw_color = white
	renderer.copy(texture, src, dst)

	# Copy the back buffer to the screen
	renderer.present

	check_error "present"

	33.delay
end label out

# Free all resources
event.free
src.free
dst.free

texture.free
surface.free

window.destroy
sdl.img.quit
sys.sdl.quit
