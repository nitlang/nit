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

# Finite automaton (NFA & DFA)
module autom

# For the class Token
import grammar

# A finite automaton
class Automaton
	# The start state
	var start: State

	# State that are accect states
	var accept = new Array[State]

	# All states
	var states = new Array[State]

	# Tokens associated on accept states
	# use `add_tag` to update
	var tags = new HashMap[State, Set[Token]]

	# Accept states associated on tokens
	# use `add_tag` to update
	var retrotags = new HashMap[Token, Set[State]]

	# Tag all accept states
	fun tag_accept(t: Token)
	do
		for s in accept do add_tag(s, t)
	end

	# Add a token to a state
	fun add_tag(s: State, t: Token)
	do
		if not tags.has_key(s) then
			var set = new ArraySet[Token]
			tags[s] = set
			set.add t
		else
			tags[s].add t
		end

		if not retrotags.has_key(t) then
			var set = new ArraySet[State]
			retrotags[t] = set
			set.add s
		else
			retrotags[t].add s
		end

		assert tags[s].has(t)
		assert retrotags[t].has(s)
	end

	# Remove all occurences of a tag in an automaton
	fun clear_tag(t: Token)
	do
		if not retrotags.has_key(t) then return
		for s in retrotags[t] do
			if not tags.has_key(s) then continue
			tags[s].remove(t)
			if tags[s].is_empty then tags.keys.remove(s)
		end
		retrotags.keys.remove(t)
	end

	# Remove tokens from conflicting state according the the inclusion of language
	# REQUIRE: self isa DFA automaton
	fun solve_token_inclusion
	do
		for s, ts in tags do
			if ts.length <= 1 then continue
			var losers = new Array[Token]
			for t1 in ts do
				for t2 in ts do
					if t1 == t2 then continue
					if retrotags[t1].length > retrotags[t2].length and retrotags[t1].has_all(retrotags[t2]) then
						losers.add(t1)
						break
					end
				end
			end
			for t in losers do
				ts.remove(t)
				retrotags[t].remove s
			end
		end
	end

	# Initialize a new automaton for the empty language
	# one state, no accept, no transition
	init empty
	do
		var state = new State
		start = state
		states.add state
	end

	# Initialize a new automaton for the empty-string language
	# one state, is accept, no transition
	init epsilon
	do
		var state = new State
		start = state
		accept.add state
		states.add state
	end

	# Initialize a new automation for the language that accepts only a single symbol
	# Two state, the second is accept, one transition on `symbol`
	init atom(symbol: Int)
	do
		var s = new State
		var a = new State
		var sym = new TSymbol(symbol, symbol)
		s.add_trans(a, sym)
		start = s
		accept.add a
		states.add s
		states.add a
	end

	# Initialize a new automation for the language that accepts only a range of symbols
	# Two state, the second is accept, one transition for `from` to `to`
	init cla(first: Int, last: nullable Int)
	do
		var s = new State
		var a = new State
		var sym = new TSymbol(first, last)
		s.add_trans(a, sym)
		start = s
		accept.add a
		states.add s
		states.add a
	end

	# Contatenate `other` to `self`
	# other is modified and invalidated.
	fun concat(other: Automaton)
	do
		var s2 = other.start
		for a1 in accept do
			a1.add_trans(s2, null)
		end
		accept = other.accept
		states.add_all other.states
	end

	# `self` become the alternation of `self` and `other`
	# `other` is modified and invalidated.
	fun alternate(other: Automaton)
	do
		var s = new State
		var a = new State
		s.add_trans(start, null)
		for a1 in accept do
			a1.add_trans(a, null)
		end
		s.add_trans(other.start, null)
		for a2 in other.accept do
			a2.add_trans(a, null)
			accept.add(a2)
		end

		start = s
		accept = [a]

		states.add s
		states.add a
		states.add_all other.states
	end

	# Return a new automaton that recognize `self` but not `other`
	# For a theorical POV, this is the substraction of languages.
	# Note: the implementation use `to_dfa` internally, so the theorical complexity is not cheap.
	fun except(other: Automaton): Automaton
	do
		var ta = new Token("1")
		self.tag_accept(ta)
		var tb = new Token("2")
		other.tag_accept(tb)

		var c = new Automaton.empty
		c.absorb(self)
		c.absorb(other)
		c = c.to_dfa
		c.accept.clear
		for s in c.retrotags[ta] do
			if not c.tags[s].has(tb) then
				c.accept.add(s)
			end
		end
		c.clear_tag(ta)
		c.clear_tag(tb)
		return c
	end

	# `self` absorbs all states, transisions, tags, and acceptations of `other`
	# An epsilon transition is added between `self.start` and `other.start`
	fun absorb(other: Automaton)
	do
		states.add_all other.states
		start.add_trans(other.start, null)
		for s, ts in other.tags do for t in ts do add_tag(s, t)
		accept.add_all other.accept
	end

	# Do the Kleene closure (*) on self
	fun close
	do
		for a1 in accept do
			a1.add_trans(start, null)
			start.add_trans(a1, null)
		end
	end

	# Do the + on self
	fun plus
	do
		for a1 in accept do
			a1.add_trans(start, null)
		end
	end

	# Do the ? on self
	fun optionnal
	do
		alternate(new Automaton.epsilon)
	end

	# Remove all transitions on a given symbol
	fun minus_sym(symbol: TSymbol)
	do
		var f = symbol.first
		var l = symbol.last
		for s in states do
			for t in s.outs.to_a do
				if t.symbol == null then continue

				# Check overlaps
				var tf = t.symbol.first
				var tl = t.symbol.last
				if l != null and tf > l then continue
				if tl != null and f > tl then continue

				t.delete

				# Add left and right part if non empty
				if tf < f then
					var sym = new TSymbol(tf,f-1)
					s.add_trans(t.to, sym)
				end
				if l != null then
					if tl == null then
						var sym = new TSymbol(l+1, null)
						s.add_trans(t.to, sym)
					else if tl > l then
						var sym = new TSymbol(l+1, tl)
						s.add_trans(t.to, sym)
					end
				end
			end
		end
	end

	# Fully duplicate an automaton
	fun dup: Automaton
	do
		var res = new Automaton.empty
		var map = new HashMap[State, State]
		map[start] = res.start
		for s in states do
			if s == start then continue
			var s2 = new State
			map[s] = s2
			res.states.add(s2)
		end
		for s in accept do
			res.accept.add map[s]
		end
		for s, ts in tags do for t in ts do
			res.add_tag(map[s], t)
		end
		for s in states do
			for t in s.outs do
				map[s].add_trans(map[t.to], t.symbol)
			end
		end
		return res
	end

	# Reverse an automaton in place
	fun reverse
	do
		for s in states do
			var tmp = s.ins
			s.ins = s.outs
			s.outs = tmp
			for t in s.outs do
				var tmp2 = t.from
				t.from = t.to
				t.to = tmp2
			end
		end
		var st = start
		if accept.length == 1 then
			start = accept.first
		else
			var st2 = new State
			start = st2
			states.add(st2)

			for s in accept do
				st2.add_trans(s, null)
			end
		end
		accept.clear
		accept.add(st)
	end

	# Remove states (and transitions) that does not reach an accept state
	fun trim
	do
		# Good states are those we want to keep
		var goods = new HashSet[State]
		goods.add_all(accept)

		var todo = accept.to_a

		# Propagate goodness
		while not todo.is_empty do
			var s = todo.pop
			for t in s.ins do
				var s2 = t.from
				if goods.has(s2) then continue
				goods.add(s2)
				todo.add(s2)
			end
		end

		# What are the bad state then?
		var bads = new Array[State]
		for s in states do
			if not goods.has(s) then bads.add(s)
		end

		# Remove their transitions
		for s in bads do
			for t in s.ins do t.delete
			for t in s.outs do t.delete
		end

		# Keep only the good stuff
		states.clear
		states.add_all(goods)
	end

	# Generate a minimal DFA
	# REQUIRE: self is a DFA
	fun to_minimal_dfa: Automaton
	do
		trim

		var distincts = new HashMap[State, Set[State]]
		for s in states do
			distincts[s] = new HashSet[State]
		end

		# split accept states
		for s1 in states do
			for s2 in states do
				if distincts[s1].has(s2) then continue
				if not accept.has(s1) then continue
				if not accept.has(s2) then
					distincts[s1].add(s2)
					distincts[s2].add(s1)
					continue
				end
				if tags[s1] != tags[s2] then
					distincts[s1].add(s2)
					distincts[s2].add(s1)
					continue
				end
			end
		end

		var changed = true
		var ints = new Array[Int]
		while changed do
			changed = false
			for s1 in states do for s2 in states do
				if distincts[s1].has(s2) then continue
				ints.clear
				for t in s1.outs do
					var sym = t.symbol
					assert sym != null
					ints.add sym.first
					var l = sym.last
					if l != null then ints.add l
				end
				for i in ints do
					var ds1 = s1.trans(i)
					var ds2 = s2.trans(i)
					if ds1 == null and ds2 == null then continue
					if ds1 != null and ds2 != null and not distincts[ds1].has(ds2) then continue
					distincts[s1].add(s2)
					distincts[s2].add(s1)
					changed = true
					break
				end
			end
		end

		for s1 in states do for s2 in states do
			if distincts[s1].has(s2) then continue
			s1.add_trans(s2, null)
		end

		return to_dfa
	end

	# Produce a graphvis file for the automaton
	fun to_dot(filepath: String)
	do
		var names = new HashMap[State, String]
		var ni = 0
		for s in states do
			names[s] = ni.to_s
			ni += 1
		end

		var f = new OFStream.open(filepath) 
                f.write("digraph g \{\n")

		for s in states do
			f.write("s{names[s]}[shape=oval")
			#f.write("label=\"\",")
			if accept.has(s) then
				f.write(",color=blue")
			end
			if tags.has_key(s) then
				f.write(",label=\"")
				for token in tags[s] do
					f.write("{token.name.escape_to_c}\\n")
				end
				f.write("\"")
			else
				f.write(",label=\"\"")
			end
			f.write("];\n")
			var outs = new HashMap[State, Array[nullable TSymbol]]
			for t in s.outs do
				var a
				var s2 = t.to
				var c = t.symbol
				if outs.has_key(s2) then
					a = outs[s2]
				else
					a = new Array[nullable TSymbol]
					outs[s2] = a
				end
				a.add(c)
			end
			for s2, a in outs do
				var labe = ""
				for c in a do
					if not labe.is_empty then labe += "\n"
					if c == null then
						labe += "''"
					else
						labe += c.to_s
					end
				end
				f.write("s{names[s]}->s{names[s2]} [label=\"{labe.escape_to_c}\"];\n")
			end
		end
		f.write("empty->s{names[start]}; empty[label=\"\",shape=none];\n")

                f.write("\}\n")
		f.close
	end

	# Transform a NFA to a DFA
	# note: the DFA is not miminized
	fun to_dfa: Automaton
	do
		trim

		var dfa = new Automaton.empty
		var n2d = new ArrayMap[Set[State], State]
		var seen = new ArraySet[Set[State]] 
		var alphabet = new HashSet[Int]
		var st = eclosure([start])
		var todo = [st]
		n2d[st] = dfa.start
		seen.add(st)
		while not todo.is_empty do
			var nfa_states = todo.pop
			#print "* work on {nfa_states.inspect}={nfa_states} (remains {todo.length}/{seen.length})"
			var dfa_state = n2d[nfa_states]
			alphabet.clear
			for s in nfa_states do
				# Collect important values to build the alphabet
				for t in s.outs do
					var sym = t.symbol
					if sym == null then continue
					alphabet.add(sym.first)
					var l = sym.last
					if l != null then alphabet.add(l)
				end

				# Mark accept and tags
				if accept.has(s) then
					if tags.has_key(s) then
						for t in tags[s] do
							dfa.add_tag(dfa_state, t)
						end
					end
					dfa.accept.add(dfa_state)
				end
			end

			# From the important values, build a sequence of TSymbols
			var a = alphabet.to_a
			(new ComparableSorter[Int]).sort(a)
			var tsyms = new Array[TSymbol]
			var last = 0
			for i in a do
				if last > 0 and last <= i-1 then
					tsyms.add(new TSymbol(last,i-1))
				end
				tsyms.add(new TSymbol(i,i))
				last = i+1
			end
			if last > 0 then
				tsyms.add(new TSymbol(last,null))
			end
			#print "Alphabet: {tsyms.join(", ")}"

			var lastst: nullable Transition = null
			for sym in tsyms do
				var nfa_dest = eclosure(trans(nfa_states, sym.first))
				if nfa_dest.is_empty then
					lastst = null
					continue
				end
				#print "{nfa_states} -> {sym} -> {nfa_dest}"
				var dfa_dest
				if seen.has(nfa_dest) then
					#print "* reuse {nfa_dest.inspect}={nfa_dest}"
					dfa_dest = n2d[nfa_dest]
				else
					#print "* new {nfa_dest.inspect}={nfa_dest}"
					dfa_dest = new State
					dfa.states.add(dfa_dest)
					n2d[nfa_dest] = dfa_dest
					todo.add(nfa_dest)
					seen.add(nfa_dest)
				end
				if lastst != null and lastst.to == dfa_dest then
					lastst.symbol.last = sym.last
				else
					lastst = dfa_state.add_trans(dfa_dest, sym)
				end
			end
		end
		return dfa
	end

	# epsilon-closure on a state of states
	# used by `to_dfa`
	private fun eclosure(states: Collection[State]): Set[State]
	do
		var res = new ArraySet[State]
		res.add_all(states)
		var todo = states.to_a
		while not todo.is_empty do
			var s = todo.pop
			for t in s.outs do
				if t.symbol != null then continue
				var to = t.to
				if res.has(to) then continue 
				res.add(to)
				todo.add(to)
			end
		end
		return res
	end

	# trans on a set of states
	# Used by `to_dfa`
	fun trans(states: Collection[State], symbol: Int): Set[State]
	do
		var res = new ArraySet[State]
		for s in states do
			for t in s.outs do
				var sym = t.symbol
				if sym == null then continue
				if sym.first > symbol then continue
				var l = sym.last
				if l != null and l < symbol then continue
				var to = t.to
				if res.has(to) then continue 
				res.add(to)
			end
		end
		return res
	end

	# Generate the Nit source code of the lexer
	# `filepath` is the name of the ouptit file
	# `parser` is the name of the parser module (used to import the token classes)
	fun gen_to_nit(filepath: String, name: String, parser: nullable String)
	do
		var gen = new DFAGenerator(filepath, name, self, parser)
		gen.gen_to_nit
	end
end

# Generate the Nit source code of the lexer
private class DFAGenerator
	var filepath: String
	var name: String
	var automaton: Automaton
	var parser: nullable String

	var out: OStream
	init(filepath: String, name: String, automaton: Automaton, parser: nullable String) do
		self.filepath = filepath
		self.name = name
		self.automaton = automaton
		self.parser = parser
		self.out = new OFStream.open(filepath)
	end

	fun add(s: String) do out.write(s)

	fun gen_to_nit
	do
		var names = new HashMap[State, String]
		var i = 0
		for s in automaton.states do
			names[s] = i.to_s
			i += 1
		end

		add "# Lexer generated by nitcc for the grammar {name}"
		add("import nitcc_runtime\n")

		var p = parser
		if p != null then add("import {p}\n")

		add("class Lexer_{name}\n")
		add("\tsuper Lexer\n")
		add("\tredef fun start_state do return dfastate_{names[automaton.start]}\n")
		add("end\n")

		add("redef class Object\n")
		for s in automaton.states do
			var n = names[s]
			add("\tprivate fun dfastate_{n}: DFAState{n} do return once new DFAState{n}\n")
		end
		add("end\n")

		add("class MyNToken\n")
		add("\tsuper NToken\n")
		add("end\n")

		for s in automaton.states do
			var  n = names[s]
			add("private class DFAState{n}\n")
			add("\tsuper DFAState\n")
			if automaton.accept.has(s) then
				var token
				if automaton.tags.has_key(s) then
					token = automaton.tags[s].first
				else
					token = null
				end
				add("\tredef fun is_accept do return true\n")
				add("\tredef fun make_token(position, text) do\n")
				if token != null and token.name == "Ignored" then
					add("\t\treturn null\n")
				else
					if token == null then
						add("\t\tvar t = new MyNToken\n")
					else
						add("\t\tvar t = new {token.cname}\n")
					end
					add("\t\tt.position = position\n")
					add("\t\tt.text = text\n")
					add("\t\treturn t\n")
				end
				add("\tend\n")
			end
			var trans = new ArrayMap[TSymbol, State]
			for t in s.outs do
				var sym = t.symbol
				assert sym != null
				trans[sym] = t.to
			end
			if trans.is_empty then
				# Do nothing, inherit the trans
			else
				add("\tredef fun trans(char) do\n")

				add("\t\tvar c = char.ascii\n")
				var haslast = false
				var last = -1
				for sym, next in trans do
					assert not haslast
					assert sym.first > last
					if sym.first > last + 1 then add("\t\tif c <= {sym.first-1} then return null\n")
					var l = sym.last
					if l == null then
						add("\t\treturn dfastate_{names[next]}\n")
						haslast= true
					else
						add("\t\tif c <= {l} then return dfastate_{names[next]}\n")
						last = l
					end
				end
				if not haslast then add("\t\treturn null\n")
				add("\tend\n")
			end
			add("end\n")
		end

		self.out.close
	end
end

# A state in a finite automaton
class State
	# Outgoing transitions

	var outs = new Array[Transition]
	# Ingoing tyransitions
	var ins = new Array[Transition]

	# Add a transitions to `to` on `symbol` (null means epsilon)
	fun add_trans(to: State, symbol: nullable TSymbol): Transition
	do
		var t = new Transition(self, to, symbol)
		outs.add(t)
		to.ins.add(t)
		return t
	end

	fun trans(i: Int): nullable State
	do
		for t in outs do
			var sym = t.symbol
			assert sym != null
			var f = sym.first
			var l = sym.last
			if i < f then continue
			if l != null and i > l then continue
			return t.to
		end
		return null
	end
end

# A range of symbols on a transition
class TSymbol
	var first: Int
	var last: nullable Int

	redef fun to_s
	do
		var res
		var f = first
		if f <= 32 then
			res = "#{f}"
		else
			res = f.ascii.to_s
		end
		var l = last
		if f == l then return res
		res += " .. "
		if l == null then return res
		if l <= 32 or l >= 127 then return res + "#{l}"
		return res + l.ascii.to_s
	end
end

# A transition in a finite automaton
class Transition
	# The source state
	var from: State
	# The destination state
	var to: State
	# The symbol on the transition (null means epsilon)
	var symbol: nullable TSymbol

	# Remove the transition from the automaton
	# Detash from `from` and `to`
	fun delete
	do
		from.outs.remove(self)
		to.ins.remove(self)
	end
end
