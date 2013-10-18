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
end

redef class Nstr
	# The real value of the string
	fun value: String do return text.substring(1, text.length-2).unescape_nit
	redef fun make_rfa: Automaton
	do
		var a = new Automaton.epsilon
		var val
		for c in self.value do
			var b = new Automaton.atom(c.ascii)
			a.concat(b)
		end
		return a
	end
end

redef class Nch_dec
	# The real value of the char
	fun value: String do return text.substring_from(1).to_i.ascii.to_s
	redef fun make_rfa: Automaton
	do
		var a = new Automaton.atom(self.value.first.ascii)
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
		var c1 = children[0].as(Nstr).value
		var c2 = children[3].as(Nstr).value
		if c1.length != 1 or c2.length != 1 then
			print "Classes only works on single char"
			exit(1)
			abort
		end
		var a = new Automaton.cla(c1.first.ascii, c2.first.ascii)
		return a
	end
end

redef class Nre_any
	redef fun make_rfa: Automaton
	do
		var a = new Automaton.cla(0, 127)
		return a
	end
end
