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

# Simple brainfuck interpreter
module brainfuck

# Interpreter for Brainfuck source code.
class BFInterpreter
	# Data cells
	var dr = new Array[Int]
	# Data pointer
	var dp = 0
	# Instruction pointer
	var ip = 0

	# The program being interpreted
	var program: Bytes

	# Create an interpreter for `program`.
	init do
		dr.add 0
	end

	# Create an interpreter for the file located at `path`.
	init from_file(path: String) do
		var ifs = new FileReader.open(path)
		init(ifs.read_all_bytes)
	end

	# Starts the interpretation of the loaded program
	fun start do
		loop
			if ip >= program.length then break
			eval
			ip += 1
		end
	end


	# Evaluates the current instruction
	fun eval do
		var instr = program[ip]
		if instr == u'.' then printn dr[dp].code_point
		if instr == u'[' then
			if dr[dp] == 0 then
				ip = find_matching_rbra
				return
			end
		end
		if instr == u']' then
			if dr[dp] != 0 then
				ip = find_matching_lbra
				return
			end
		end
		if instr == u'>' then
			dp += 1
			if dp >= dr.length then dr.add(0)
		end
		if instr == u'<' then
			dp -= 1
			if dp < 0 then abort
		end
		if instr == u'+' then
			dr[dp] = dr[dp] + 1
		end
		if instr == u'-' then
			dr[dp] = dr[dp] - 1
		end
		if instr == u',' then
			dr[dp] = getc.code_point
		end
	end

	# Seeks for the position of the matching `]` for the `[` located at `ip`
	fun find_matching_rbra: Int do
		var pos = ip + 1
		var lbracnt = 0
		loop
			if pos > program.length then abort
			if program[pos] == u']' then
				if lbracnt > 0 then
					lbracnt -= 1
				else
					break
				end
			end
			if program[pos] == u'[' then lbracnt += 1
			pos += 1
		end
		return pos
	end

	# Seeks for the position of the matching `[` for the `]` located at `ip`
	fun find_matching_lbra: Int do
		var pos = ip - 1
		var rbracnt = 0
		loop
			if pos < 0 then abort
			if program[pos] == u'[' then
				if rbracnt > 0 then
					rbracnt -= 1
				else
					break
				end
			end
			if program[pos] == u']' then rbracnt += 1
			pos -= 1
		end
		return pos
	end
end

new BFInterpreter.from_file(args[0]).start
