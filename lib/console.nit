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

# Simple numerical statistical analysis and presentation
module console

# Redef String class to add a function to color the string
redef class String
	private fun add_escape_char(escapechar: String): String do
		return "{escapechar}{self}{esc}[0m"
	end

	private fun esc: Char do return 27.ascii
	fun gray: String do return add_escape_char("{esc}[30m")
	fun red: String do return add_escape_char("{esc}[31m")
	fun green: String do return add_escape_char("{esc}[32m")
	fun yellow: String do return add_escape_char("{esc}[33m")
	fun blue: String do return add_escape_char("{esc}[34m")
	fun purple: String do return add_escape_char("{esc}[35m")
	fun cyan: String do return add_escape_char("{esc}[36m")
	fun light_gray: String do return add_escape_char("{esc}[37m")
	fun bold: String do return add_escape_char("{esc}[1m")
	fun underline: String do return add_escape_char("{esc}[4m")
end

