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
	fun make_rfa: Automaton do
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
	redef fun value: String do return text.substring(1, text.length-2).unescape_nit
	redef fun make_rfa: Automaton
	do
		var a = new Automaton.epsilon
		var val
		for c in self.value.chars do
			var b = new Automaton.atom(c.ascii)
			a.concat(b)
		end
		return a
	end
end

redef class Nch_dec
	redef fun value: String do return text.substring_from(1).to_i.ascii.to_s
	redef fun make_rfa: Automaton
	do
		var a = new Automaton.atom(self.value.chars.first.ascii)
		return a
	end
end

redef class Nch_hex
	redef fun value: String do return text.substring_from(2).to_hex.ascii.to_s
	redef fun make_rfa: Automaton
	do
		var a = new Automaton.atom(self.value.chars.first.ascii)
		return a
	end
end

redef class NProd
	redef fun make_rfa: Automaton
	do
		assert children.length == 1 else print "no make_rfa for {self}"
		return children.first.make_rfa
	end
end

redef class Nre_alter
	redef fun make_rfa
	do
		var a = children[0].make_rfa
		var b = children[2].make_rfa
		a.alternate(b)
		return a
	end
end

redef class Nre_minus
	redef fun make_rfa
	do
		var a = children[0].make_rfa
		var b = children[2].make_rfa.to_dfa
		for t in b.start.outs do
			if not t.to.outs.is_empty then
				print "Not Yet Implemented Error: '-' only works on single char"
				exit(1)
			end
			a.minus_sym(t.symbol.as(not null))
		end
		return a
	end
end

redef class Nre_and
	redef fun make_rfa
	do
		var a = children[0].make_rfa
		var ta = new Token("1")
		a.tag_accept(ta)
		var b = children[2].make_rfa
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
	redef fun make_rfa
	do
		var a = children[0].make_rfa
		var b = children[2].make_rfa
		return a.except(b)
	end
end

redef class Nre_shortest
	redef fun make_rfa
	do
		var a = children[2].make_rfa
		a = a.to_dfa
		for s in a.accept do
			for t in s.outs.to_a do t.delete
		end
		return a
	end
end

redef class Nre_longest
	redef fun make_rfa
	do
		var a = children[2].make_rfa
		a = a.to_dfa
		for s in a.accept.to_a do
			if not s.outs.is_empty then a.accept.remove(s)
		end
		return a
	end
end

redef class Nre_conc
	redef fun make_rfa
	do
		var a = children[0].make_rfa
		var b = children[1].make_rfa
		a.concat(b)
		return a
	end
end

redef class Nre_star
	redef fun make_rfa
	do
		var a = children[0].make_rfa
		a.close
		return a
	end
end

redef class Nre_ques
	redef fun make_rfa
	do
		var a = children[0].make_rfa
		a.optionnal
		return a
	end
end

redef class Nre_plus
	redef fun make_rfa
	do
		var a = children[0].make_rfa
		a.plus
		return a
	end
end

redef class Nre_par
	redef fun make_rfa
	do
		return children[1].make_rfa
	end
end

redef class Nre_class
	redef fun make_rfa: Automaton
	do
		var c1 = children[0].children[0].value
		var c2 = children[3].children[0].value
		if c1.length != 1 or c2.length != 1 then
			print "Classes only works on single char"
			exit(1)
			abort
		end
		var a = new Automaton.cla(c1.chars.first.ascii, c2.chars.first.ascii)
		return a
	end
end

redef class Nre_any
	redef fun make_rfa: Automaton
	do
		var a = new Automaton.cla(0, null)
		return a
	end
end
