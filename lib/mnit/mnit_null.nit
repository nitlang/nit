# This file is part of NIT ( http://www.nitlanguage.org ).
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

# Dummy mnit platform for headless executions
#
# Extends `mnit_injected_input` so that the whole application is simulated.
# This permits more debugging and benchmarking, even without screen (thinks
# regression tests).
#
# Assets loading and display operations are executed with an empty body,
# Except on frames that have some injected input events, in theses the
# description of all blit operations are printed to screen.
module mnit_null

import mnit_app
intrude import mnit_injected_input
import mnit_fps
import assets

# Dummy display that just display nothing
class NullDisplay
	super Display
	redef var width = 640
	redef var height = 480
	redef fun begin do end
	redef fun finish do end
	redef fun clear(r,g,b)
	do
		if not app.verbose then return
		print "CLEAR rgb({r};{g};{b})"
	end
	redef fun blit(image, x, y)
	do
		if not app.verbose then return
		print "BLIT {image} ({x},{y})"
	end
	redef fun blit_centered(image, x, y)
	do
		if not app.verbose then return
		print "BLIT {image} CENTERED ({x},{y})"
	end
	redef fun blit_rotated(image, x, y, a)
	do
		if not app.verbose then return
		print "BLIT {image} CENTERED ({x},{y}) ROTATED {a}"
	end
	redef fun blit_rotated_scaled(image, x, y, a, s)
	do
		if not app.verbose then return
		print "BLIT {image} CENTERED ({x},{y}) ROTATED {a} SCALED {s}"
	end
	redef fun blit_scaled(image, x, y, w, h)
	do
		if not app.verbose then return
		print "BLIT {image} ({x},{y}) -- ({x+w},{y+h})"
	end
	redef fun blit_stretched(image, ax, ay, bx, by, cx, cy, dx, dy)
	do
		if not app.verbose then return
		print "BLIT {image} ({ax},{ay}) -- ({bx},{by}) -- ({cx},{cy}) -- ({dx},{dy})"
	end
end

# Dummy image for a NullDisplay
class NullImage
	super Image
	var path: String
	redef fun to_s do return path
	redef var scale = 1.0 is redef writable
	redef var width = 32
	redef var height = 32
end

redef class App
	redef fun setup
	do
		super
		display = new NullDisplay
		window_created
	end

	# Force the printing of blit operations
	# So traces of execution can be generated
	# Managed by `generate_injected_input`
	private var verbose = false

	redef fun limit_fps do return

	redef fun generate_injected_input
	do
		var res = super
		verbose = res
		return res
	end
	redef fun generate_input
	do
		# An implementation is required but to avoid infinite loops
		# we just `quit` when the stream is closed.
		if injected_input_stream == null then
			print "END OF INPUT"
			quit = true
		end
	end

	redef fun try_loading_asset(path)
	do
		print "LOAD {path}"
		return new NullImage(path)
	end
end
