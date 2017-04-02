# This file is part of NIT (http://www.nitlanguage.org).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#	 http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Simple service keeping track of which keys are currently pressed
#
# This service revolves around `app.pressed_keys`, a `Set` of the names of currently pressed keys.
# As a `Set`, `app.pressed_keys` can be iterated and queried with `has`.
#
# Limitations: The keys names are platform dependent.
#
# ~~~nitish
# redef class App
#     redef fun accept_event(event)
#     do
#         # First, pass the event to `super`, `pressed_keys` must see all
#         # events but it doesn't intercept any of them.
#         if super then return true
#         return false
#     end
#
#     redef fun update(dt)
#     do
#         for key in pressed_keys do
#             if k == "left" or k == "a" then
#                 # Act on key pressed down
#                 print "left or a is pressed down"
#             end
#         end
#     end
# end
# ~~~
module keys

import mnit::input
import gamnit

redef class App
	# Currently pressed keys
	var pressed_keys = new Set[String] is lazy

	# Register `event` to update `app.pressed_keys`
	private fun register_key_event(event: KeyEvent)
	do
		var key = event.name
		if event.is_down then
			app.pressed_keys.add key
		else if app.pressed_keys.has(key) then
			app.pressed_keys.remove key
		end
	end

	redef fun accept_event(event)
	do
		if event isa KeyEvent then register_key_event event

		return super
	end
end
