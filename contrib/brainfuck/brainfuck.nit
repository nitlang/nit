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
class BFInterpret
	# Data cells
	var dr = new Array[Char]
	# Data pointer
	var dp = 0
	# Instruction pointer
	var ip = 0

	# The program being interpreted
	var program: String

	# Contains the set of valid instructions, used in next
	var valid_instr: Set[Char]

	# Starts interpretation of file `filename`
	init(filename: String) do
		var ifs = new IFStream.open(filename.simplify_path)
		valid_instr = new HashSet[Char]
		valid_instr.add_all "><[].,+-".chars
		dr.add 0.ascii
		program = ifs.read_all
		start
	end

	# Starts the interpretation of the loaded program
	fun start do
		loop
			if ip >= program.length then break
			eval
			next
		end
	end

	# Go to the next executable instruction
	fun next do
		ip += 1
		while ip < program.length and not valid_instr.has(program[ip]) do
			ip += 1
		end
	end

	# Evaluates the current instruction
	fun eval do
		var instr = program[ip]
		if instr == '.' then printn dr[dp]
		if instr == '[' then
			if dr[dp] == 0.ascii then
				ip = find_matching_rbra
				return
			end
		end
		if instr == ']' then
			if dr[dp] != 0.ascii then
				ip = find_matching_lbra
				return
			end
		end
		if instr == '>' then
			dp += 1
			if dp >= dr.length then dr.add(0.ascii)
		end
		if instr == '<' then
			dp -= 1
			if dp < 0 then abort
		end
		if instr == '+' then
			dr[dp] = (dr[dp].ascii + 1).ascii
		end
		if instr == '-' then
			dr[dp] = (dr[dp].ascii - 1).ascii
		end
		if instr == ',' then
			dr[dp] = getc
		end
	end

	# Seeks for the position of the matching `]` for the `[` located at `ip`
	fun find_matching_rbra: Int do
		var pos = ip + 1
		var lbracnt = 0
		loop
			if pos > program.length then abort
			if program[pos] == ']' then
				if lbracnt > 0 then
					lbracnt -= 1
				else
					break
				end
			end
			if program[pos] == '[' then lbracnt += 1
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
			if program[pos] == '[' then
				if rbracnt > 0 then
					rbracnt -= 1
				else
					break
				end
			end
			if program[pos] == ']' then rbracnt += 1
			pos -= 1
		end
		return pos
	end
end

var i = new BFInterpret(args[0])
