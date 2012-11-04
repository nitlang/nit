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

# Curses for Nit
module curses

# A curse windows
extern Window
	# Initialize the screen
	new is extern "initscr"

	# print a string somewhere
	# NOTE: as with the curses API, the position is (y,x)
	fun mvaddstr(y,x: Int, str: String) is extern import String::to_cstring

	fun refresh is extern
	fun wclear is extern
	fun delwin is extern
	fun endwin is extern
end
