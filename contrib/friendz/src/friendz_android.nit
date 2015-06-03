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
import android::landscape
import android::audio
import android::assets_and_resources
redef class App
	# Zoom applied for the device display from the game logic coordinates
	var zoom = 1.0

	redef fun on_create
	do
		super
		var h = screen_height
		display.set_viewport(0,0,h*display.width/display.height,h)

		zoom = display.height.to_f / h.to_f
		default_mediaplayer.looping = true
	end

	redef fun input(input_event)
	do
		if input_event isa KeyEvent then
			return false
		else
			return super
		end
	end
end

redef class AndroidPointerEvent
	redef fun is_motion do return not just_went_down

	redef fun x do return super / app.zoom
	redef fun y do return super / app.zoom
end
