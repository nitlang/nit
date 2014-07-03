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

# Injection of input events that are read frm a file.
# This cloud be used to replay an execution of a mnit application to debug or to benchmark it.
#
# The input file is given through the environment variable `MNIT_READ_INPUT`
#
# In order to reproduce executions, the behavior of the application must be deterministic
# for a given sequence of inputs.
# The main source of differences in executions is caused by the `rand` function,
# Set the environment variable `MNIT_SRAND` to a value to force srand to be initialized with this value.
#
# The input event file is made of event descriptions, one event by line.
#
# ~~~
# 10 click 10.0 20.0
# 20 quit
# ~~~
#
# The first field, an integer, is the delay (in frame count) since the previous event
# 0 means the event is launched in the same frame that the previous one.
#
# The second field, a string, is the kind of the event.
# Currently only `click` for PointerEvent and `quit` for QuitEvent are recognized.
#
# The following fields are the arguments that specific for each kind of event.
#
# * `quit` does not have arguments
# * `click` has 2 float arguments: `PointerEvent::x` and `PointerEvent::y`
module mnit_injected_input

import mnit_app

# Concrete event objects that are manually instantiated.
# Most InputEvent are extern classes and specific to one platform.
#
# However, subclasses of this `DummyInputEvent` are genuine Nit
# classes and can be instantiated, and more easily manipulated by the programmer.
interface DummyInputEvent
	super InputEvent
end

# A concrete QuitEvent
class DummyQuitEvent
	super DummyInputEvent
	super QuitEvent
	redef fun to_s do return "quit"
end

# A concrete PointerEvent
class DummyPointerEvent
	super DummyInputEvent
	super PointerEvent
	redef var x: Float
	redef var y: Float
	redef fun pressed do return true
	redef fun to_s do return "click {x} {y}"
end

redef class App
	# The stream where injected inputs are read
	private var injected_input_stream: nullable IStream = null

	redef fun setup
	do
		var env = "MNIT_SRAND".environ
		if env != null and env != "" then
			srand_from(env.to_i)
		end

		var input = "MNIT_READ_INPUT".environ
		if input != null and input != "" then
			injected_input_stream = new IFStream.open(input)
			print "GET injected_input_stream {input}"
		end

		super
	end

	# Number of frames before the next injected input
	private var wait_next_input = 0

	# What is the input to inject when `wait_next_input` become 0
	private var next_input: nullable DummyInputEvent

	redef fun full_frame
	do
		if injected_input_stream != null then generate_injected_input
		super
	end

	# Internal method to generate injected input events
	# Is called before each frame
	# Return `true` is an input event was injexted
	fun generate_injected_input: Bool
	do
		var res = false
		loop
			if wait_next_input > 0 then
				wait_next_input -= 1
				return res
			end
			var n = next_input
			if n != null then
				print "INPUT {n}"
				res = true
				input(n)
			end
			var l = injected_input_stream.read_line
			if l == "" then
				print "END OF INPUTS"
				injected_input_stream.close
				injected_input_stream = null
				input(new DummyQuitEvent)
				return true
			end
			print "read {l}"
			var fs = l.split(" ")
			if fs.length < 2 then
				print "BAD EVENT SPEC {l}"
				res = true
				input(new DummyQuitEvent)
			end
			wait_next_input = fs[0].to_i
			if fs[1] == "click" then
				next_input = new DummyPointerEvent(fs[2].to_f, fs[3].to_f)
			else if fs[1] == "quit" then
				next_input = new DummyQuitEvent
			else
				print "UNKNOWN EVENT {fs[1]} (on {l})"
				res = true
				input(new DummyQuitEvent)
				return true
			end
			print "WAIT {wait_next_input} for {next_input.to_s}"
		end
	end
end
