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
		s.add_trans(a, symbol)
		start = s
		accept.add a
		states.add s
		states.add a
	end

	# Initialize a new automation for the language that accepts only a range of symbols
	# Two state, the second is accept, one transition for `from` to `to`
	init cla(from, to: Int)
	do
		var s = new State
		var a = new State
		for symbol in [from..to] do
			s.add_trans(a, symbol)
		end
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
	fun minus_sym(symbol: Int)
	do
		for s in states do
			for t in s.outs.to_a do
				if t.symbol == symbol then t.delete
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

	# Produce a graphvis file for the automaton
	fun to_dot(filepath: String)
	do
		var f = new OFStream.open(filepath) 
                f.write("digraph g \{\n")

		for s in states do
			f.write("s{s.object_id}[shape=oval")
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
			end
			f.write("];\n")
			var outs = new HashMap[State, Array[nullable Int]]
			for t in s.outs do
				var a
				var s2 = t.to
				var c = t.symbol
				if outs.has_key(s2) then
					a = outs[s2]
				else
					a = new Array[nullable Int]
					outs[s2] = a
				end
				a.add(c)
			end
			for s2, a in outs do
				var labe = ""
				var lastc: nullable Int = null
				var elip = 0
				a.add(-1)
				for c in a do
					if c == null then
						if not labe.is_empty then labe += "\n"
						labe += "''"
					else if lastc == c - 1 then
						elip += 1
						lastc = c
					else
						if elip == 1 then
							assert lastc != null
							labe += "\n{sym_to_s(lastc)}"
						else if elip > 1 then
							assert lastc != null
							labe += " .. {sym_to_s(lastc)}"
						end
						if c == -1 then break
						if not labe.is_empty then labe += "\n"
						labe += sym_to_s(c)
						lastc = c
					end
				end
				f.write("s{s.object_id}->s{s2.object_id} [label=\"{labe.escape_to_c}\"];\n")
			end
		end
		f.write("empty->s{start.object_id}; empty[label=\"\",shape=none];\n")

                f.write("\}\n")
		f.close
	end

	# Transform a symbol to a string
	# Used by `to_dot`
	private fun sym_to_s(symbol: nullable Int): String
	do
		if symbol == null then
			return "''"
		else if symbol <= 32 then
			return "#{symbol}"
		else
			return symbol.ascii.to_s
		end
	end

	# Transform a NFA to a DFA
	# note: the DFA is not miminized
	fun to_dfa: Automaton
	do
		var dfa = new Automaton.empty
		var n2d = new ArrayMap[Set[State], State]
		var seen = new ArraySet[Set[State]] 
		var ts = new HashSet[Int]
		var st = eclosure([start])
		var todo = [st]
		n2d[st] = dfa.start
		seen.add(st)
		while not todo.is_empty do
			var nfa_states = todo.pop
			#print "* work on {nfa_states.inspect}={nfa_states} (remains {todo.length}/{seen.length})"
			var dfa_state = n2d[nfa_states]
			ts.clear
			for s in nfa_states do
				if accept.has(s) then
					if tags.has_key(s) then
						for t in tags[s] do
							dfa.add_tag(dfa_state, t)
						end
					end
					dfa.accept.add(dfa_state)
				end
				for t in s.outs do
					var sym = t.symbol
					if sym == null or ts.has(sym) then continue
					ts.add(sym)
					var nfa_dest = eclosure(trans(nfa_states, sym))
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
					dfa_state.add_trans(dfa_dest, sym)
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
				if t.symbol != symbol then continue
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
			add("class DFAState{n}\n")
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
			var trans = new ArrayMap[Int, State]
			for t in s.outs do
				var sym = t.symbol
				assert sym != null
				trans[sym] = t.to
			end
			if trans.is_empty then
				# Do nothing, inherit the trans
			else if trans.length == 1 then
				var sym = trans.keys.first
				var next = trans.values.first
				add("\tredef fun trans(c) do\n")
				add("\t\tif c.ascii == {sym} then return dfastate_{names[next]}\n")
				add("\t\treturn null\n")
				add("\tend\n")
			else
				add("\tredef fun trans(c) do\n")
				for sym, next in trans do
					add("\t\tif c.ascii == {sym} then return dfastate_{names[next]}\n")
				end
				add("\t\treturn null\n")
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
	fun add_trans(to: State, symbol: nullable Int): Transition
	do
		var t = new Transition(self, to, symbol)
		outs.add(t)
		to.ins.add(t)
		return t
	end
end

# A transition in a finite automaton
class Transition
	# The source state
	var from: State
	# The destination state
	var to: State
	# The symbol on the transition (null means epsilon)
	var symbol: nullable Int

	# Remove the transition from the automaton
	# Detash from `from` and `to`
	fun delete
	do
		from.outs.remove(self)
		to.ins.remove(self)
	end
end
