/* This file is part of NIT ( http://www.nitlanguage.org ).
 *
 * Copyright 2006 Jean Privat <jean@pryen.org>
 *
 * This file is free software, which comes along with NIT.  This software is
 * distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A 
 * PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
 * is kept unaltered, and a notification of the changes is added.
 * You  are  allowed  to  redistribute it and sell it, alone or is a part of
 * another product.
 */

#include "sdl_nit.h"

SDL_Event G_sdl_current_event;

int sdl_blit_surface_xy(SDL_Surface * s, SDL_Surface * d, int x, int y)
{
	static SDL_Rect r;
	r.x = x;
	r.y = y;
	return SDL_BlitSurface(s, NULL, d, &r);
}
