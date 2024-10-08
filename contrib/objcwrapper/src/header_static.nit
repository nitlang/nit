# This file is part of NIT (https://nitlanguage.org).
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

# Filters preprocessed C-like header files to remove static code and keep their signatures.
#
# This tool is used in the process of parsing header files to extract
# information on the declared services (the functions and structures).
# This information is then used to generate bindings for Nit code
# to access these services.
#
# The C header sometimes contains static code. It deletes static code of
# headers, but keep their signatures. This tool is an extension of
# header_keeper. It searches the keyword static to identify
# the static code, and ignores the code into their brackets. The result is
# printed to sdtout.
#
# ~~~sh
# cat Pre-Processed/CGGeometry.h | header_static > Pre-Processed/static_header.h
# ~~~
#
# This module can also be used as a library.
# The main service is the method `header_static`
module header_static

redef class Char
	private fun is_endline: Bool do return "\};".has(self)
end

# Filters the preprocessed `input` to keep signatures for static code and write to the `output`
fun header_static(input: Reader, output: Writer) do
	var static_target = false
	var static_attribute_target = false
	var bracket_counter = 0
	var previous_letter = ""
	var instruction = ""
	var double_underscore = 0
	var position = 0

	while not input.eof do
		var line = input.read_line

		if line.has("typedef ") and line.has(";") then continue

		if line.has("static") then static_target = true

		if static_target then
			if line.to_s.has("__attribute__") then static_attribute_target = true
			for letter in line do
				if letter == '{' then bracket_counter += 1
				if letter == '}' then bracket_counter -= 1

				if letter == '_' and previous_letter == "_" and bracket_counter == 0 then
					double_underscore += 1
				end

				# Sometimes we lost space between return type and signature name,
				# because he has a return line between both.
				# We add a space before signature name for safety.
				if bracket_counter == 0 and letter == '_' and double_underscore >= 1 and not static_attribute_target then
					instruction = instruction.insert_at(" ", position - 2)
				end
				if bracket_counter == 0 and not letter.is_endline then instruction += letter.to_s
				if bracket_counter == 0 and letter.is_endline then
					instruction += ";"
					static_target = false
					static_attribute_target = false
				end

				if bracket_counter == 0 and (letter == '}' and double_underscore >= 1 or letter == ';') then
					output.write instruction + "\n"
				end

				if letter.is_endline and bracket_counter == 0 then
					double_underscore = 0
					position = 0
					instruction = ""
				end

				previous_letter = letter.to_s
				position += 1
			end
		else
			output.write line + "\n"
		end
	end
end

header_static(sys.stdin, sys.stdout)
