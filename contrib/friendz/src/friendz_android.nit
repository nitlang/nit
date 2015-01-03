# Monsterz - Chains of Friends
#
# 2010-2014 (c) Jean Privat <jean@pryen.org>
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the Do What The Fuck You Want To
# Public License, Version 2, as published by Sam Hocevar. See
# http://sam.zoy.org/projects/COPYING.WTFPL for more details.

# android version of the game
module friendz_android

import friendz
import mnit_android

redef class App
	redef fun window_created
	do
		super
		var w = screen_width
		display.set_viewport(0,0,w,w*display.height/display.width)
	end
end

redef class AndroidPointerEvent
	redef fun is_motion do return not just_went_down
end
