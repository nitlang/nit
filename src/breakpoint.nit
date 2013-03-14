# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2013 Lucas Bajolet <lucas.bajolet@gmail.com>
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

# Classes and methods relative to the management of Breakpoints for the Debugger
module breakpoint

# Contains all the informations of a Breakpoint for the Debugger
class Breakpoint

	# Line to break on
	var line: Int

	# File concerned by the breakpoint
	var file: String

	# Maximum times to break on self
	var max_breaks: Int

	init(line: Int, file: String)
	do
		self.line = line
		self.file = file
		self.max_breaks = -1
	end

	fun set_max_breaks(breaks: Int)
	do
		self.max_breaks = breaks
	end

	# When the breakpoint is encountered, the check-in function should be called
	fun check_in
	do
		if self.max_breaks > 0 then self.max_breaks -= 1
	end

	# Checks if the breakpoint is still valid (that is, if it has a remaining breaks number > 0 or == -1)
	fun is_valid: Bool
	do
		if max_breaks == 0 then
			return false
		else
			return true
		end
	end

end
