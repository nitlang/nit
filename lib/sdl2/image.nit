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

# Services of the SDL_image 2.0 library
#
# Offers `SDLSurface::load` which supports more image formats than `sdl2::sdl2`
# alone: JPG, PNG, TIF, GIT, ICO and much more.
module image is
	pkgconfig "sdl2"
	ldflags "-lSDL2_image"
end

import sdl2

in "C" `{
	#include <SDL2/SDL_image.h>
`}

redef class SDL
	# Access to the global methods of `sdl2::image`
	var img = new IMG is lazy
end

# Holds the global methods of `sdl2::image`
class IMG
	# Get the `IMG` singleton
	new do return once new IMG.internal

	# TODO make this private and only called through `sys.sdl.img`
	init internal do end

	# Initialize the image library
	fun initialize(flags: SDLImgInitFlags): SDLImgInitFlags `{
		return IMG_Init(flags);
	`}

	# Finalize and clean up the image library
	fun quit `{ IMG_Quit(); `}

	# Get the latest image library error
	fun error: CString `{ return (char*)IMG_GetError(); `}
end

redef extern class SDLSurface
	# Load the image at `path` inferring its type from the file extension
	new load(path: CString) `{ return IMG_Load(path); `}
end

# Flags from `sys.sdl.img.initialize`
extern class SDLImgInitFlags `{ IMG_InitFlags `}
	# Get the default empty flag set
	new `{ return 0; `}

	# Add the JPG support to this flag set
	fun jpg: SDLImgInitFlags `{ return self | IMG_INIT_JPG; `}

	# Add the PNG support to this flag set
	fun png: SDLImgInitFlags `{ return self | IMG_INIT_PNG; `}

	# Add the TIF support to this flag set
	fun tif: SDLImgInitFlags `{ return self | IMG_INIT_TIF; `}

	# Add the WEBP support to this flag set
	fun webp: SDLImgInitFlags `{ return self | IMG_INIT_WEBP; `}
end
