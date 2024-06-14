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
	var start: State is noinit

	# State that are accept states
	var accept = new Array[State]

	# Add an accept state without duplicate
	fun add_accept(s: State)
	do
		assert states.has(s)
		if accept.has(s) then return
		accept.add(s)
	end

	# All states
	var states = new Array[State]

	# Tokens associated on accept states.
	# Use `add_tag` to update
	var tags = new HashMap[State, Set[Token]]

	# Accept states associated on tokens.
	# Use `add_tag` to update
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

	# Remove all occurrences of a tag in an automaton
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

	# Remove tokens from conflicting state according the inclusion of language.
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

	# Initialize a new automaton for the empty language.
	# One state, no accept, no transition.
	init empty
	do
		var state = new State
		start = state
		states.add state
	end

	# Initialize a new automaton for the empty-string language.
	# One state, is accept, no transition.
	init epsilon
	do
		var state = new State
		start = state
		accept.add state
		states.add state
	end

	# Initialize a new automaton for all string of length 1.
	# Basically, it is /./.
	init any
	do
		cla(0, null)
	end

	# Initialize a new automation for the language that accepts only a single symbol.
	# Two state, the second is accept, one transition on `symbol`.
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

	# Concatenate `other` to `self`.
	# Other is modified and invalidated.
	fun concat(other: Automaton)
	do
		var s2 = other.start
		for a1 in accept do
			a1.add_trans(s2, null)
		end
		accept = other.accept
		states.add_all other.states
	end

	# `self` become the alternation of `self` and `other`.
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

	# Return a new automaton that recognize `self` but not `other`.
	# For a theoretical POV, this is the subtraction of languages.
	# Note: the implementation use `to_dfa` internally, so the theoretical complexity is not cheap.
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

	# Return a new automaton that reject `self`.
	# Basically, this is `/.*/.except(self)`
	fun negate: Automaton
	do
		var any = new Automaton.any
		any.close
		return any.except(self)
	end

	# `self` absorbs all states, transitions, tags, and acceptations of `other`.
	# An epsilon transition is added between `self.start` and `other.start`.
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
				var tf = t.symbol.as(not null).first
				var tl = t.symbol.as(not null).last
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

		# Remove their transitions and tags
		for s in bads do
			for t in s.ins.to_a do t.delete
			for t in s.outs.to_a do t.delete
			if tags.has_key(s) then
				for t in tags[s] do retrotags[t].remove(s)
				tags.keys.remove(s)
			end
		end

		# Keep only the good stuff
		states.clear
		states.add_all(goods)
		states.add(start)
	end

	# Generate a minimal DFA
	# REQUIRE: self is a DFA
	fun to_minimal_dfa: Automaton
	do
		assert_valid

		trim

		# Graph of known distinct states.
		var distincts = new HashMap[State, Set[State]]
		for s in states do
			distincts[s] = new HashSet[State]
		end

		# split accept states.
		# An accept state is distinct with a non accept state.
		for s1 in accept do
			for s2 in states do
				if distincts[s1].has(s2) then continue
				if not accept.has(s2) then
					distincts[s1].add(s2)
					distincts[s2].add(s1)
					continue
				end
				if tags.get_or_null(s1) != tags.get_or_null(s2) then
					distincts[s1].add(s2)
					distincts[s2].add(s1)
					continue
				end
			end
		end

		# Fixed point algorithm.
		# * Get 2 states s1 and s2 not yet distinguished.
		# * Get a symbol w.
		# * If s1.trans(w) and s2.trans(w) are distinguished, then
		#   distinguish s1 and s2.
		var changed = true
		var ints = new Array[Int] # List of symbols to check
		while changed do
			changed = false
			for s1 in states do for s2 in states do
				if distincts[s1].has(s2) then continue

				# The transitions use intervals. Therefore, for the states s1 and s2,
				# we need to check only the meaningful symbols. They are the `first`
				# symbol of each interval and the first one after the interval (`last+1`).
				ints.clear
				# Check only `s1`; `s2` will be checked later when s1 and s2 are switched.
				for t in s1.outs do
					var sym = t.symbol
					assert sym != null
					ints.add sym.first
					var l = sym.last
					if l != null then ints.add l + 1
				end

				# Check each symbol
				for i in ints do
					var ds1 = s1.trans(i)
					var ds2 = s2.trans(i)
					if ds1 == ds2 then continue
					if ds1 != null and ds2 != null and not distincts[ds1].has(ds2) then continue
					distincts[s1].add(s2)
					distincts[s2].add(s1)
					changed = true
					break
				end
			end
		end

		# We need to unify not-distinguished states.
		# Just add an epsilon-transition and DFAize the automaton.
		for s1 in states do for s2 in states do
			if distincts[s1].has(s2) then continue
			s1.add_trans(s2, null)
		end

		return to_dfa
	end

	# Assert that `self` is a valid automaton or abort
	fun assert_valid
	do
		assert states.has(start)
		assert states.has_all(accept)
		for s in states do
			for t in s.outs do assert states.has(t.to)
			for t in s.ins do assert states.has(t.from)
		end
		assert states.has_all(tags.keys)
		for t, ss in retrotags do
			assert states.has_all(ss)
		end
	end

	# Produce a graphviz string from the automatom
	#
	# Set `merge_transitions = false` to generate one edge by transition (default true).
	fun to_dot(merge_transitions: nullable Bool): Writable
	do
		var names = new HashMap[State, String]
		var ni = 0
		for s in states do
			names[s] = ni.to_s
			ni += 1
		end

		var f = new Buffer
		f.append("digraph g \{\n")
		f.append("rankdir=LR;")

		var state_nb = 0
		for s in states do
			f.append("s{names[s]}[shape=circle")
			#f.write("label=\"\",")
			if accept.has(s) then
				f.append(",shape=doublecircle")
			end
			if tags.has_key(s) then
				f.append(",label=\"")
				for token in tags[s] do
					f.append("{token.name.escape_to_dot}\\n")
				end
				f.append("\"")
			else
				f.append(",label=\"{state_nb}\"")
			end
			f.append("];\n")
			# TSymbols for each destination
			var outs = new HashMap[State, TSymbols]
			for t in s.outs do
				var a
				var s2 = t.to
				var c = t.symbol
				if outs.has_key(s2) then
					a = outs[s2]
				else
					a = new TSymbols
					outs[s2] = a
				end
				if c == null then
					a.epsilon = true
				else
					a.symbols.add(c)
				end
			end
			for s2, a in outs do
				var labe = ""
				a = a.merge_intervals
				if a.epsilon then
					labe += "ε"
					# else if false then
				else if merge_transitions or else true then
					# Present the negation if simpler
					if a.first == 0 and a.last == null then
						a = a.negate
						if a.symbols.is_empty then
							labe = "ANY"
						else
							labe = "NOT"
						end
					end
				end
				for c in a.symbols do
					if merge_transitions == false then labe = ""
					if not labe.is_empty then labe += "\n"
					labe += c.to_s
					if merge_transitions == false then
						f.append("s{names[s]}->s{names[s2]} [label=\"{labe.escape_to_dot}\"];\n")
					end
				end
				#labe = s.vade(s2).sample_to_s
				if merge_transitions or else true then
					f.append("s{names[s]}->s{names[s2]} [label=\"{labe.escape_to_c}\"];\n")
				end
			end
			state_nb += 1
		end
		f.append("empty->s{names[start]}; empty[label=\"\",shape=none];\n")
		f.append("\}\n")
		return f
	end

	# Transform a NFA to a DFA.
	# note: the DFA is not minimized.
	fun to_dfa: Automaton
	do
		assert_valid

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
					dfa.add_accept(dfa_state)
				end
			end

			# From the important values, build a sequence of TSymbols
			var a = alphabet.to_a
			default_comparator.sort(a)
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
					lastst.symbol.as(not null).last = sym.last
				else
					lastst = dfa_state.add_trans(dfa_dest, sym)
				end
			end
		end
		return dfa
	end

	# Transform a NFA to a epsilonless NFA.
	fun to_nfa_noe: Automaton
	do
		assert_valid

		trim

		var dfa = new Automaton.empty
		var n2d = new ArrayMap[Set[State], State]
		var seen = new ArraySet[Set[State]]
		var st = eclosure([start])
		var todo = [st]
		n2d[st] = dfa.start
		seen.add(st)
		while not todo.is_empty do
			var nfa_states = todo.pop
			#print "* work on {nfa_states.inspect}={nfa_states} (remains {todo.length}/{seen.length})"
			var dfa_state = n2d[nfa_states]
			for s in nfa_states do
				for t in s.outs do
					if t.symbol == null then continue
					var nfa_dest = eclosure([t.to])
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
					dfa_state.add_trans(dfa_dest, t.symbol)
				end

				# Mark accept and tags
				if accept.has(s) then
					if tags.has_key(s) then
						for t in tags[s] do
							dfa.add_tag(dfa_state, t)
						end
					end
					dfa.add_accept(dfa_state)
				end
			end
		end
		return dfa
	end

	# Epsilon-closure on a state of states.
	# Used by `to_dfa`.
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

	# Trans on a set of states.
	# Used by `to_dfa`.
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

	# Generate the Nit source code of the lexer.
	# `filepath` is the name of the output file.
	# `parser` is the name of the parser module (used to import the token classes).
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

	var out: Writer is noinit

	init do
		self.out = new FileWriter.open(filepath)
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

		add "# Lexer generated by nitcc for the grammar {name}\n"
		add "module {name}_lexer is generated, no_warning \"missing-doc\"\n"
		add("import nitcc_runtime\n")

		var p = parser
		if p != null then add("import {p}\n")

		add("class Lexer_{name}\n")
		add("\tsuper Lexer\n")
		add("\tredef fun start_state do return dfastate_{names[automaton.start]}\n")
		add("end\n")

		for s in automaton.states do
			var n = names[s]
			add("private fun dfastate_{n}: DFAState{n} do return once new DFAState{n}\n")
		end

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
				var is_ignored = false
				if token != null and token.name == "Ignored" then
					is_ignored = true
					add("\tredef fun is_ignored do return true\n")
				end
				add("\tredef fun make_token(position, source) do\n")
				if is_ignored then
					add("\t\treturn null\n")
				else
					if token == null then
						add("\t\tvar t = new MyNToken\n")
						add("\t\tt.text = position.extract(source)\n")
					else
						add("\t\tvar t = new {token.cname}\n")
						var ttext = token.text
						if ttext == null then
							add("\t\tt.text = position.extract(source)\n")
						else
							add("\t\tt.text = \"{ttext.escape_to_nit}\"\n")
						end
					end
					add("\t\tt.position = position\n")
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

				# Collect the sequence of tests in the dispatch sequence
				# The point here is that for each transition, there is a first and a last
				# So holes have to be identified
				var dispatch = new HashMap[Int, nullable State]
				var haslast: nullable State = null

				var last = -1
				for sym, next in trans do
					assert haslast == null
					assert sym.first > last
					if sym.first > last + 1 then
						dispatch[sym.first-1] = null
					end
					var l = sym.last
					if l == null then
						haslast = next
					else
						dispatch[l] = next
						last = l
					end
				end

				if dispatch.is_empty and haslast != null then
					# Only one transition that accepts everything (quite rare)
				else
					# We need to check
					add("\t\tvar c = char.code_point\n")
				end

				# Generate a sequence of `if` for the dispatch
				if haslast != null and last >= 0 then
					# Special case: handle up-bound first if not an error
					add("\t\tif c > {last} then return dfastate_{names[haslast]}\n")
					# previous become the new last case
					haslast = dispatch[last]
					dispatch.keys.remove(last)
				end
				for c, next in dispatch do
					if next == null then
						add("\t\tif c <= {c} then return null\n")
					else
						add("\t\tif c <= {c} then return dfastate_{names[next]}\n")
					end
				end
				if haslast == null then
					add("\t\treturn null\n")
				else
					add("\t\treturn dfastate_{names[haslast]}\n")
				end

				add("\tend\n")
			end
			add("end\n")
		end

		self.out.close
	end
end

redef class Token
	# The associated text (if any, ie defined in the parser part)
	var text: nullable String is noautoinit, writable
end

# A state in a finite automaton
class State
	# Outgoing transitions
	var outs = new Array[Transition]

	# Ingoing transitions
	var ins = new Array[Transition]

	# Add a transitions to `to` on `symbol` (null means epsilon)
	fun add_trans(to: State, symbol: nullable TSymbol): Transition
	do
		var t = new Transition(self, to, symbol)
		outs.add(t)
		to.ins.add(t)
		return t
	end

	# Get the first state following the transition `i`.
	# Null if no transition for `i`.
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

	fun vade(s: State): TSymbols
	do
		var res = new TSymbols
		for t in outs do
			if t.to != s then continue
			var sym = t.symbol
			if sym != null then
				res.symbols.add sym
			end
		end
		return res
	end

	fun retro(s: State): TSymbols
	do
		var res = new TSymbols
		for t in ins do
			if t.from != s then continue
			var sym = t.symbol
			if sym != null then
				res.symbols.add sym
			end
		end
		return res
	end

	fun path(destination: State): nullable StatePath
	do
		var todo = [self]
		var paths = new HashMap[State, StatePath]
		while todo.not_empty do
			var s = todo.shift
			for o in s.outs do
				var s2 = o.to
				if paths.has_key(s2) then continue
				todo.add(s2)
				paths[s2] = new StatePath(s, s.vade(s2), s2)
				if s2 == destination then
					var p = paths[s2]
					while p.from != self do
						var pp = paths[p.from]
						pp.next = p
						p = pp
					end
					return p
				end
			end
		end
		return null
	end
end

class StatePath
	var from: State
	var symbols: TSymbols
	var to: State
	var next: nullable StatePath

	fun sample_to_s: String
	do
		var res = ""
		var p
		p = self
		while p != null do
			res += p.symbols.sample_to_s
			p = p.next
		end
		return res
	end
end



# A range of symbols on a transition
class TSymbol
	# The first symbol in the range
	var first: Int

	# The last symbol if any.
	#
	# `null` means infinity.
	var last: nullable Int

	redef fun to_s
	do
		var res
		var f = first
		if f <= 32 then
			res = "#{f}"
		else
			res = f.code_point.to_s
		end
		var l = last
		if f == l then return res
		res += " .. "
		if l == null then return res
		if l <= 32 or l >= 127 then return res + "#{l}"
		return res + l.code_point.to_s
	end

	# Return the minimum on self and the given interval
	fun sample_on(min, max: Int): Int
	do
		if first > min then min = first
		var l = last
		if l != null and l < max then max = l
		if min <= max then return min
		return -1
	end
end

# An union of symbols
#
# Is used to manipulate an agregated edge between states
class TSymbols
	# List of all tsymbols?
	var symbols = new Array[TSymbol]
	# Is epsilon inside?
	var epsilon = false

	# Return a equivalent TSymbols with no overlapping symbols
	fun merge_intervals: TSymbols
	do
		if self.symbols.is_empty then return self
		var tsyms = new TSymbols
		(new TSymbolComparator).sort(self.symbols)

		var first = self.symbols.first.first
		var last
		last = first
		for s in self.symbols do
			if last + 1 >= s.first then
				var sl = s.last
				if sl == null then
					last = null
					break
				end
				if sl > last then
					last = sl
				end
			else
				tsyms.symbols.add(new TSymbol(first, last))
				first = s.first
				last = s.last
				if last == null then
					break
				end
			end
		end
		tsyms.symbols.add(new TSymbol(first, last))

		tsyms.epsilon = self.epsilon
		return tsyms
	end

	# Return the reverse of self
	fun negate: TSymbols
	do
		assert not epsilon
		var ts2 = merge_intervals
		var negprev = 0
		var res = new TSymbols
		for s in ts2.symbols do
			if s.first > 0 then
				res.symbols.add(new TSymbol(negprev+1, s.first-1))
			end
			var l = s.last
			if l == null then
				# Fast exit, we are done
				return res
			else
				negprev = l
			end
		end
		# Last one is open
		res.symbols.add(new TSymbol(negprev+1, null))
		return res
	end

	fun first: Int
	do
		var min = symbols.first.first
		for s in symbols do
			if s.first < min then
				min = s.first
			end
		end
		return min
	end

	fun last: nullable Int
	do
		var max = symbols.first.last
		if max == null then return null
		for s in symbols do
			var l = s.last
			if l == null then return null
			if l > max then
				max = l
			end
		end
		return max
	end

	fun sample_to_s: String
	do
		if symbols.is_empty then return "ɛ"
		var s = sample
		if s <= 32 or s >=127 then return "#{s}"
		return s.code_point.to_s
	end

	# Return a human-oriented example (eg. prefer `A` over `%` over `#12`)
	fun sample: Int
	do
		var res = sample_on('A'.code_point, 'Z'.code_point)
		if res != -1 then return res
		res = sample_on('a'.code_point, 'a'.code_point)
		if res != -1 then return res
		res = sample_on('0'.code_point, '9'.code_point)
		if res != -1 then return res
		res = sample_on('!'.code_point, '~'.code_point)
		if res != -1 then return res
		return first
	end

	# Return the minimum on self and the given interval
	fun sample_on(min, max: Int): Int
	do
		var res = -1
		for s in symbols do
			var r = s.sample_on(min, max)
			if res == -1 then
				res = r
			else if r == -1 then
			else if r < res then
				res = r
			end
		end
		return res
	end
end

class TSymbolComparator
	super Comparator
	redef type COMPARED: TSymbol
	redef fun compare(a, b)
	do
		return a.first <=> b.first
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

	# Remove the transition from the automaton.
	# Detach from `from` and `to`.
	fun delete
	do
		from.outs.remove(self)
		to.ins.remove(self)
	end
end
