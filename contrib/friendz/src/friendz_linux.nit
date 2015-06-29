# Monsterz - Chains of Friends
#
# 2010-2014 (c) Jean Privat <jean@pryen.org>
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the Do What The Fuck You Want To
# Public License, Version 2, as published by Sam Hocevar. See
# http://sam.zoy.org/projects/COPYING.WTFPL for more details.

# Linux (SDL) version of the game
module friendz_linux

import friendz
import mnit_linux
import linux::audio

redef class Display
	redef fun wanted_width do return app.screen_width
	redef fun wanted_height do return app.screen_height
end

redef class SDLDisplay
	redef fun enable_mouse_motion_events do return true
end

redef class SDLMouseMotionEvent
	redef fun is_motion do return true
end
