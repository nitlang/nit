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

# A tool to analyse and compare regular expressions
module regexparser

import autom

# Parse an ERE-like Posix regular expression an produce a finite automaton
class RegexParser
	var current: Char = '\0'
	var eof = false
	var text: String
	var reader: Reader is noinit
	var pos = 0

	redef init
	do
		reader = new StringReader(text)
		next
	end

	fun next: Char
	do
		var c = current
		var n = reader.read_char
		if n == null then
			eof = true
			current = '\0'
		else
			current = n
		end
		pos += 1
		return c
	end

	#
	#
	# ```
	# assert "[ACB]".parse_regex.is_equivalent("A|B|C".parse_regex)
	# assert "[ACB]".parse_regex.is_equivalent("[A-C]".parse_regex)
	# assert "[A-C]".parse_regex.is_equivalent(new Automaton.cla('A'.code_point, 'C'.code_point))
	# ```
	fun parse_class: Automaton
	do
		var negate = false
		if current == '^' then
			next
			negate = true
		end
		var r = new Automaton.empty
		loop
			var c0 = parse_c
			var r1
			if eof then
				syntax_error
				abort
			else if current == '-' then
				next
				var c1 = parse_c
				r1 = new Automaton.cla(c0.code_point, c1.code_point)
				print "{c0} - {c1}"
			else
				r1 = new Automaton.atom(c0.code_point)
			end
			r.alternate(r1)
			if current == ']' then
				next
				break
			end
		end
		if negate then
			var any = new Automaton.any
			return any.except(r)
		end
		return r
	end

	fun parse_c: Char
	do
		if eof then syntax_error
		var c = next
		if c == '\\' then
			if eof then syntax_error
			c = next
			if c == 'n' then
				c = '\n'
			end
		end
		return c

	end

	fun syntax_error
	do
		print "Regex Syntax Error: Unexepected {current} at {pos}"
		abort
	end

	fun parse_char: Automaton
	do
		var c = current
		if match('[') then
			return parse_class
		else if eof or c == '|' or c == ')' then
			return new Automaton.epsilon
		else if match('(') then
			var r = parse
			expect ')'
			return r
		else if c == '?' or c == '*' or c == '+' or c == '{' then
			syntax_error
		else if c == '.' then
			next
			return new Automaton.any
		end
		return new Automaton.atom(parse_c.code_point)
	end

	#
	#
	# ```
	# assert "a?".parse_regex.is_equivalent("a|".parse_regex)
	# assert "a+".parse_regex.is_equivalent("aa*".parse_regex)
	# assert "a\{3}".parse_regex.is_equivalent("aaa".parse_regex)
	# assert "a\{1,3}".parse_regex.is_equivalent("a(aa?)?".parse_regex)
	# assert "a\{,3}".parse_regex.is_equivalent("a\{0,3}".parse_regex)
	# assert "a\{3,}".parse_regex.is_equivalent("aaa+".parse_regex)
	# assert "a\{,}".parse_regex.is_equivalent("a*".parse_regex)
	# ```
	fun parse_unary: Automaton
	do
		var r = parse_char
		if match('?') then
			r.optionnal
		else if match('*') then
			r.close
		else if match('+') then
			r.plus
		else if match('{') then
			var min
			if current == ',' then
				min = 0
			else
				min = parse_int
			end
			if match('}') then
				r = r.repeat(min)
			else if match(',') then
				if match('}') then
					r = r.repeat_close(min)
				else
					var max = parse_int
					if min > max then
						syntax_error
					end
					r = r.repeat_range(min,max)
					expect '}'
				end
			else
				syntax_error
			end
		end
		return r
	end

	fun parse_int: Int
	do
		var res = 0
		loop
			var c = current
			if eof or c < '0' or c > '9' then
				return res
			end
			res = res * 10 + (c.code_point - '0'.code_point)
			next
		end
	end

	fun parse_concat: Automaton
	do
		var r = parse_unary
		while not (eof or current == '|' or current == ')') do
			var r2 = parse_unary
			r.concat(r2)
		end
		return r
	end

	fun parse_alt: Automaton
	do
		var r = parse_concat
		while match('|') do
			var r2 = parse_concat
			r.alternate(r2)
		end
		return r
	end

	# Consume c or produce an error
	fun expect(c: Char)
	do
		if next != c then syntax_error
	end

	# If c is current, consume it and return true
	fun match(c: Char): Bool
	do
		if current == c then
			next
			return true
		else
			return false
		end
	end

	fun parse: Automaton
	do
		return parse_alt
	end
end

redef class String
	# Built the finite automaton of the given ERE.
	#
	# Note: the automaton is basic and not optimized
	#
	# ```
	# assert "".parse_regex.is_equivalent(new Automaton.epsilon)
	# assert ".".parse_regex.is_equivalent(new Automaton.any)
	# assert "A".parse_regex.is_equivalent(new Automaton.atom('A'.code_point))
	# ```
	fun parse_regex: Automaton
	do
		var p = new RegexParser(self)
		return p.parse
	end
end

var name="test"

var nfa = new Automaton.empty
var i = 0
for arg in args do
	i += 1
	var p = new RegexParser(arg)
	var a = p.parse
	if arg.length > 10 then
		arg = arg.substring(0,10) + "..."
	end
	var ta = new Token("{i}. {arg}")
	if args.length > 1 then
		a.tag_accept(ta)
	end
	nfa.absorb(a)
end

print "NFA automaton: {nfa.states.length} states (see {name}.nfa.dot)"
nfa.to_dot.write_to_file("{name}.nfa.dot")
var nfanoe = nfa.to_nfa_noe
nfanoe.to_dot.write_to_file("{name}.nfanoe.dot")
print "NFA automaton without epsilon: {nfanoe.states.length} states (see {name}.nfanoe.dot)"

var dfa = nfa.to_dfa
dfa.to_dot.write_to_file("{name}.dfanomin.dot")
print "DFA automaton (non minimal): {dfa.states.length} states (see {name}.dfanomin.dot)"

dfa = dfa.to_minimal_dfa

print "DFA automaton: {dfa.states.length} states (see {name}.dfa.dot)"
dfa.to_dot.write_to_file("{name}.dfa.dot")

for s in dfa.accept do
	var path = dfa.start.path(s)
	var l
	if args.length > 1 then
		l = dfa.tags[s].join(" ; ")
	else
		l = ""
	end
	if path == null then
		print "-> {l} is unreachable"
	else
		print "-> {l}: {path.sample_to_s}"
	end
end
