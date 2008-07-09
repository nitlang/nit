#ifndef __SDL_NIT
#define __SDL_NIT

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
#include "SDL.h"
#include "SDL_image.h"

/* General*/
#define sdl_init(x) \
	(atexit(SDL_Quit), SDL_Init(SDL_INIT_VIDEO))

/* Surface */
#define sdl_surface_width(x)	(((SDL_Surface *)(x))->w)
#define sdl_surface_height(x)	(((SDL_Surface *)(x))->h)

/* Video */
#define sdl_set_video_mode(x, w, h, d) \
	(SDL_SetVideoMode(w, h, d, SDL_SWSURFACE | SDL_DOUBLEBUF))
#define sdl_set_fullscreen_video_mode(x, w, h, d) \
	(SDL_SetVideoMode(w, h, d, SDL_SWSURFACE | SDL_DOUBLEBUF | SDL_FULLSCREEN))

#define sdl_load_bmp_native(x, c) \
	(IMG_Load(c))

#define sdl_blit_surface(s, d) \
	(SDL_BlitSurface((s), NULL, d, NULL))
int sdl_blit_surface_xy(SDL_Surface * s, SDL_Surface * d, int x, int y);

#define sdl_clear_sruface(s) \
	(SDL_FillRect((s), NULL, 0))

#define sdl_show_cursor_0(x) \
	(SDL_ShowCursor(SDL_QUERY) == SDL_ENABLE)
#define sdl_show_cursor_1(x, b) \
	(SDL_ShowCursor((b) ? SDL_ENABLE : SDL_DISABLE))

/* WM */
#define sdl_grab_0(x) \
	(SDL_WM_GrabInput(SDL_QUERY) == SDL_GRAB_ON)
#define sdl_grab_1(x, b) \
	(SDL_WM_GrabInput((b) ? SDL_GRAB_ON : SDL_GRAB_OFF))

/* Event */
#define sdl_evt_is_keyboard(x) \
	((((SDL_Event*)(x))->type == SDL_KEYDOWN) || ((((SDL_Event*)(x))->type == SDL_KEYUP)))
#define sdl_evt_as_keyboard(x) \
	(sdl_evt_is_keyboard((x)) ? (x) : NULL)
#define sdl_evt_is_mouse_button(x) \
	((((SDL_Event*)(x))->type == SDL_MOUSEBUTTONDOWN) || ((((SDL_Event*)(x))->type == SDL_MOUSEBUTTONUP)))
#define sdl_evt_as_mouse_button(x) \
	(sdl_evt_is_mouse_button((x)) ? (x) : NULL)
#define sdl_evt_is_mouse_motion(x) \
	(((SDL_Event*)(x))->type == SDL_MOUSEMOTION)
#define sdl_evt_as_mouse_motion(x) \
	(sdl_evt_is_mouse_motion((x)) ? (x) : NULL)
#define sdl_evt_is_expose(x) \
	(((SDL_Event*)(x))->type == SDL_VIDEOEXPOSE)
#define sdl_evt_is_quit(x) \
	(((SDL_Event*)(x))->type == SDL_QUIT)

#define sdl_keyboard_evt_state(x) \
	(((SDL_KeyboardEvent*)(x))->state == SDL_PRESSED)
#define sdl_mouse_button_evt_state(x) \
	(((SDL_MouseButtonEvent*)(x))->state == SDL_PRESSED)
#define sdl_mouse_button_evt_x(k) \
	(((SDL_MouseButtonEvent*)(k))->x)
#define sdl_mouse_button_evt_y(k) \
	(((SDL_MouseButtonEvent*)(k))->y)
#define sdl_mouse_button_evt_button(k) \
	(((SDL_MouseButtonEvent*)(k))->button)
#define sdl_mouse_evt_x(k) \
	(((SDL_MouseMotionEvent*)(k))->x)
#define sdl_mouse_evt_y(k) \
	(((SDL_MouseMotionEvent*)(k))->y)
#define sdl_mouse_evt_xrel(k) \
	(((SDL_MouseMotionEvent*)(k))->xrel)
#define sdl_mouse_evt_yrel(k) \
	(((SDL_MouseMotionEvent*)(k))->yrel)
					      
extern SDL_Event G_sdl_current_event;
#define sdl_current_event(x) \
	(&G_sdl_current_event)
#define sdl_poll_next_event(x) \
	(SDL_PollEvent(&G_sdl_current_event))

/* Time */

#define sdl_get_ticks(x) \
	(SDL_GetTicks())
#define sdl_delay(x, i) \
	(SDL_Delay((i)))
#endif
