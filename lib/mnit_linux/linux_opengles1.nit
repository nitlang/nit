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

module linux_opengles1 is pkgconfig("x11")

import mnit::opengles1

import sdl

in "C" `{
	NativeWindowType mnit_window;
	EGLNativeDisplayType mnit_native_display;

	SDL_Surface* mnit_sdl_surface;
`}

redef class Display
	fun wanted_width: Int do return 800
	fun wanted_height: Int do return 600
end

redef class Opengles1Display

	# display managing the window, events, fonts? and image loading?
	var sdl_display: SDLDisplay

	redef fun extern_init do
		sdl_display = new SDLDisplay( wanted_width, wanted_height )
		init_from_sdl( sdl_display )
		return super
	end

	fun init_from_sdl( sdl_display: SDLDisplay ): Bool is extern `{
		mnit_sdl_surface = sdl_display;

		mnit_window = (NativeWindowType)XOpenDisplay(NULL);
		mnit_native_display = (EGLNativeDisplayType)mnit_window;

		if (!mnit_window)
		{
			fprintf(stderr, "ERROR: unable to get display!n");
			return 3;
		}

		SDL_SysWMinfo mnit_sys_info;
		SDL_VERSION(&mnit_sys_info.version);
		if(SDL_GetWMInfo(&mnit_sys_info) <= 0)
		{
			printf("Unable to get window handle");
			return 0;
		}

		mnit_window = (EGLNativeWindowType)mnit_sys_info.info.x11.window;

		return 0;
	`}

	redef fun close
	do
		super

		sdl_display.destroy
	end
end

redef extern class Opengles1Image
	new from_sdl_image( sdl_image: SDLImage ) is extern `{
		return mnit_opengles_load_image( sdl_image->pixels,
			sdl_image->w, sdl_image->h,
			sdl_image->w, sdl_image->h, sdl_image->format->Amask );
	`}

	# using sdl
	new from_file( path: String ) is extern import String.to_cstring `{
		SDL_Surface *sdl_image;
		struct mnit_opengles_Texture *opengles_image;

		sdl_image = IMG_Load( String_to_cstring( path ) );
		if ( !sdl_image ) {
			fprintf(stderr, "SDL failed to load image <%s>: %s\n", String_to_cstring(path), IMG_GetError());
			return NULL;
		} else {
			opengles_image = mnit_opengles_load_image( sdl_image->pixels,
				sdl_image->w, sdl_image->h,
				sdl_image->w, sdl_image->h, sdl_image->format->Amask );
			SDL_FreeSurface(sdl_image);
			return opengles_image;
		}
	`}
end
