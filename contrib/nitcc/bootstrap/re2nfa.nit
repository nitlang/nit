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

# Transformation of regular expression to NFA
module re2nfa

import nitcc_lexer
import autom

redef class Node
	# Build the NFA of the regular expression
	fun make_nfa: Automaton do
		print inspect
		abort
	end

	# The real value of the string
	fun value: String do
		print inspect
		abort
	end
end

redef class Nstr
	redef fun value do return text.substring(1, text.length-2).unescape_nit
	redef fun make_nfa
	do
		var a = new Automaton.epsilon
		for c in self.value.chars do
			var b = new Automaton.atom(c.code_point)
			a.concat(b)
		end
		return a
	end
end

redef class Nch_dec
	redef fun value do return text.substring_from(1).to_i.code_point.to_s
	redef fun make_nfa
	do
		var a = new Automaton.atom(self.value.chars.first.code_point)
		return a
	end
end

redef class Nch_hex
	redef fun value do return text.substring_from(2).to_hex.code_point.to_s
	redef fun make_nfa
	do
		var a = new Automaton.atom(self.value.chars.first.code_point)
		return a
	end
end

redef class NProd
	redef fun make_nfa
	do
		assert children.length == 1 else print "no make_nfa for {self}"
		return children.first.make_nfa
	end
end

redef class Nre_alter
	redef fun make_nfa
	do
		var a = children[0].make_nfa
		var b = children[2].make_nfa
		a.alternate(b)
		return a
	end
end

redef class Nre_minus
	redef fun make_nfa
	do
		var a = children[0].make_nfa
		var b = children[2].make_nfa.to_dfa
		for t in b.start.outs do
			if not t.to.outs.is_empty then
				# `b` is not a single char, so just use except
				# "a - b == a Except (Any* b Any*)"
				var any1 = new Automaton.cla(0, null)
				any1.close
				var any2 = new Automaton.cla(0, null)
				any2.close
				var b2 = any1
				b2.concat(b)
				b2.concat(any2)
				var c = a.except(b2)
				return c
			end
			a.minus_sym(t.symbol.as(not null))
		end
		return a
	end
end

redef class Nre_end
	redef fun make_nfa
	do
		print "{children.first.position.to_s}: NOT YET IMPLEMENTED: token `End`; replaced with an empty string"
		return new Automaton.epsilon
	end
end

redef class Nre_and
	redef fun make_nfa
	do
		var a = children[0].make_nfa
		var ta = new Token("1")
		a.tag_accept(ta)
		var b = children[2].make_nfa
		var tb = new Token("2")
		b.tag_accept(tb)

		var c = new Automaton.empty
		c.absorb(a)
		c.absorb(b)
		c = c.to_dfa
		c.accept.clear
		for s in c.retrotags[ta] do
			if c.tags[s].has(tb) then
				c.accept.add(s)
			end
		end
		c.clear_tag(ta)
		c.clear_tag(tb)
		return c
	end
end

redef class Nre_except
	redef fun make_nfa
	do
		var a = children[0].make_nfa
		var b = children[2].make_nfa
		return a.except(b)
	end
end

redef class Nre_shortest
	redef fun make_nfa
	do
		return children[2].make_nfa.shortest
	end
end

redef class Nre_longest
	redef fun make_nfa
	do
		return children[2].make_nfa.longest
	end
end

redef class Nre_prefixes
	redef fun make_nfa
	do
		var a = children[2].make_nfa
		a.trim
		a.accept.add_all a.states
		return a
	end
end

redef class Nre_conc
	redef fun make_nfa
	do
		var a = children[0].make_nfa
		var b = children[1].make_nfa
		a.concat(b)
		return a
	end
end

redef class Nre_star
	redef fun make_nfa
	do
		var a = children[0].make_nfa
		a.close
		return a
	end
end

redef class Nre_ques
	redef fun make_nfa
	do
		var a = children[0].make_nfa
		a.optionnal
		return a
	end
end

redef class Nre_plus
	redef fun make_nfa
	do
		var a = children[0].make_nfa
		a.plus
		return a
	end
end

redef class Nre_par
	redef fun make_nfa
	do
		return children[1].make_nfa
	end
end

redef class Nre_class
	redef fun make_nfa
	do
		var c1 = children[0].children[0].value
		var c2 = children[3].children[0].value
		if c1.length != 1 or c2.length != 1 then
			print "Classes expect a single char"
			exit(1)
			abort
		end
		var a = new Automaton.cla(c1.chars.first.code_point, c2.chars.first.code_point)
		return a
	end
end

redef class Nre_openclass
	redef fun make_nfa
	do
		var c1 = children[0].children[0].value
		if c1.length != 1 then
			print "Classes expect a single char"
			exit(1)
			abort
		end
		var a = new Automaton.cla(c1.chars.first.code_point, null)
		return a
	end
end

redef class Nre_any
	redef fun make_nfa
	do
		var a = new Automaton.cla(0, null)
		return a
	end
end
