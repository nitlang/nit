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

# A grammar describing a language
class Gram
	# The productions (non-terminal) of the concrete grammar
	var prods = new Array[Production]

	# The additional abstract productions of the grammar
	# TODO clean AST
	var ast_prods = new Array[Production]

	# The tokens (terminals) of the grammar
	var tokens = new Array[Token]

	# Dump of the concrete grammar and the transformations
	fun pretty: String
	do
		var res = new FlatBuffer
		for p in prods do
			if p.spe != null then
				res.append("{p.name} \{-> {p.spe.name}\}=\n")
			else
				res.append("{p.name} =\n")
			end
			var last = null
			if not p.alts.is_empty then last = p.alts.last
			for a in p.alts do
				res.append("\t\{{a.name}:\} {a.elems.join(" ")}")
				if a.codes == null then a.make_codes
				res.append("\n\t\t\{-> {a.codes.join(", ")}\}")
				if a == last then res.append(" ;\n") else res.append(" |\n")
			end
			if p.is_nullable then res.append "\t// is nullable\n"
			if p.sample_alternative != null then
				res.append "\t// sample: {p.sample_to_s}\n"
			end

			if not p.firsts.is_empty then
				res.append "\t// firsts:\n"
				for x in p.firsts do res.append "\t//   {x}\n"
			end
			if not p.afters.is_empty then
				res.append "\t// afters:\n"
				for x in p.afters do res.append "\t//   {x}\n"
			end
		end
		return res.to_s
	end

	# Inline (ie. remove from the concrete grammar) some production
	# REQUIRE: no circular production in `prods`
	fun inline(prods: Collection[Production])
	do
		for p in self.prods do
			for a in p.alts.to_a do
				if a.phony then continue
				var to_inline = false
				for e in a.elems do
					if e isa Production and prods.has(e) then to_inline = true
				end
				if not to_inline then continue

				if a.codes == null then a.make_codes

				var a0 = new Alternative(p, a.name, new Array[Element])
				a0.trans = true
				a0.codes = new Array[Code]
				var pool = [a0]
				var pool2 = new Array[Alternative]
				for e in a.elems do
					if not e isa Production or not prods.has(e) then
						for x in pool do
							x.elems.add(e)
							x.codes.add(new CodePop)
						end
						continue
					end
					if p == e then
						print "Circular inlining on {p} :: {a}"
						abort
					end
					pool2.clear
					for a2 in e.alts do
						if a.phony then continue
						if a2.codes == null then a2.make_codes
						for x in pool do
							var name = a.name + "_" + pool2.length.to_s
							var na = new Alternative(p, name, new Array[Element])
							na.trans = true
							pool2.add(na)
							na.elems.add_all(x.elems)
							na.elems.add_all(a2.elems)
							na.codes = new Array[Code]
							na.codes.add_all(x.codes.as(not null))
							na.codes.add_all(a2.codes.as(not null))
						end
					end
					var tmp = pool
					pool = pool2
					pool2 = tmp
				end
				for x in pool do
					x.codes.add(a.codes.last)
				end
				p.ast_alts.add(a)
				p.alts.remove(a)
				p.alts.add_all(pool)
			end
		end
		for p in prods do
			self.prods.remove(p)
			self.ast_prods.add(p)
		end
	end

	# The starting production in the augmented grammar
	var start: nullable Production = null

	# Compute a LR automaton
	fun lr0: LRAutomaton
	do
		var start = new Production("_start")
		self.start = start
		start.accept = true
		var eof = new Token("Eof")
		tokens.add(eof)
		start.new_alt("Start", self.prods.first, eof)
		prods.add(start)

		analyse

		var automaton = new LRAutomaton(self)
		automaton.build
		return automaton
	end

	fun compute_sample_length
	do
		loop
			var changed = false
			for p in prods do
				for a in p.alts do
					if a.phony then continue
					var sample_length = 0
					for e in a.elems do
						if e isa Token then
							sample_length += 1
						else if e isa Production then
							var e_len = e.sample_length
							if e_len == null then continue label alts
							sample_length += e_len
						else
							abort
						end
					end
					var e_len = p.sample_length
					if e_len == null or e_len > sample_length then
						p.sample_length = sample_length
						p.sample_alternative = a
						changed = true
					end
				end label alts
			end
			if not changed then break
		end
	end

	# Compute `nullables`, `firsts` and `afters` of productions
	fun analyse
	do
		loop
			var changed = false
			for p in prods do
				if p.is_nullable then continue
				for a in p.alts do
					if a.phony then continue
					var nullabl = true
					for e in a.elems do
						if e isa Token then
							nullabl = false
							break
						else if e isa Production then
							if not e.is_nullable then nullabl = false
							break
						else
							abort
						end
					end
					if nullabl then
						p.is_nullable = true
						changed = true
					end
				end
			end
			if not changed then break
		end

		compute_sample_length

		loop
			var changed = false
			for p in prods do
				var fs = p.firsts
				for a in p.alts do
					if a.phony then continue
					var i = a.first_item
					loop
						var e = i.next
						if e == null then break
						if e isa Token then
							if try_add(fs, i) then changed = true
							break
						else if e isa Production then
							for t in e.firsts do
								if try_add(fs, t) then changed = true
							end
							if not e.is_nullable then break
						else
							abort
						end
						i = i.avance
					end
				end
			end
			if not changed then break
		end

		loop
			var changed = false
			for p1 in prods do
				for a in p1.alts do
					if a.phony then continue
					var p0: nullable Production = null
					var i = a.first_item
					loop
						var e = i.next
						if e == null then break
						var p = p0
						if e isa Production then p0 = e else p0 = null
						if p == null then
							i = i.avance
							continue
						end

						var afs = p.afters

						if e isa Token then
							if try_add(afs, i) then changed = true
						else if e isa Production then
							for t in e.firsts do
								if try_add(afs, t) then changed = true
							end
							if e.is_nullable then
								for t in e.afters do
									if try_add(afs, t) then changed = true
								end
							end
						else
							abort
						end
						i = i.avance
					end
					if p0 != null then
						var afs = p0.afters
						for t in p1.afters do
							if try_add(afs, t) then changed = true
						end
					end
				end
			end
			if not changed then break
		end
	end

	# used by `analyse`
	private fun try_add(set: Set[Item], t: Item): Bool
	do
		var res = not set.has(t)
		if res then set.add(t)
		return res
	end

end

# A production of a grammar
class Production
	super Element
	# The alternative of the production
	var alts = new Array[Alternative]

	# Additional alternatives in the AST
	var ast_alts = new Array[Alternative]

	# Is self the accept production
	var accept = false

	# Is self transformed to a other production for the AST
	# FIXME: cleanup AST
	var spe: nullable Production = null is writable

	# Is self contains only a single alternative (then no need for a abstract production class in the AST)
	# FIXME cleanup AST
	var altone = false is writable

	# The cname of the class in the AST
	# FIXME: cleanup AST
	redef fun acname do
		if spe != null then return spe.acname
		return super
	end

	# Is the production nullable
	var is_nullable = false

	# The lenght (in tokens) of the smallest sample
	var sample_length: nullable Int = null

	# The allternative used as the smallest sample
	var sample_alternative: nullable Alternative = null

	redef fun sample_to_s: String
	do
		var alt = sample_alternative.as(not null)
		var res = new Buffer
		for e in alt.elems do
			if not res.is_empty then res.add ' '
			res.append(e.sample_to_s)
		end
		return res.to_s
	end


	# The first tokens of the production
	var firsts = new HashSet[Item]

	# The tokens that may follows the production (as in SLR)
	var afters = new HashSet[Item]


	# Crate a new empty alternative
	fun new_alt0(name: String): Alternative
	do
		var a = new Alternative(self, name, new Array[Element])
		alts.add a
		return a
	end

	# Crate a new alternative with some elements
	fun new_alt(name: String, elems: Element...): Alternative
	do
		var a = new Alternative(self, name, elems)
		alts.add a
		return a
	end

	# Crate a new alternative with some elements
	fun new_alt2(name: String, elems: Array[Element]): Alternative
	do
		var a = new Alternative(self, name, elems)
		alts.add a
		return a
	end

	# Return a set of items for the production
	fun start_state: Array[Item]
	do
		var res = new Array[Item]
		for a in alts do
			if a.phony then continue
			res.add a.first_item
		end
		return res
	end

	# States in the LR automaton that has a outgoing transition on self
	var gotos = new ArraySet[LRState]
end

# An alternative of a production
class Alternative
	# The production
	var prod: Production

	# The name of the alternative
	var name: String is writable

	# The elements of the alternative
	var elems: Array[Element]

	# The first item of the alternative
	fun first_item: Item do return new Item(self, 0)

	# The name of the elements
	var elems_names = new Array[nullable String]

	# Return a name for a given element (or a number if unamed)
	fun elemname(i: Int): String
	do
		if i >= elems_names.length then return "{i}"
		var n = elems_names[i]
		if n == null then return "{i}"
		return n
	end

	redef fun to_s do return "{prod.name}::{name}={elems.join(" ")}"
	
	# A mangled name
	fun cname: String do
		return "N{name.to_cmangle}"
	end

	# The code for the reduction
	var codes: nullable Array[Code] = null is writable

	# Is the alternative transformed (ie not in the AST)
	var trans = false is writable

	# Is the alternative unparsable? (ie not in the automaton)
	var phony = false is writable

	# Initialize codes with the elements
	fun make_codes
	do
		if codes != null then return
		var codes = new Array[Code]
		self.codes = codes
		for e in elems do
			codes.add(new CodePop)
		end
		codes.add(new CodeNew(self))
	end
end

# A step in the construction of the AST.
# Used to model transformations
interface Code
end

# Get a element from the stack
class CodePop
	super Code
	redef fun to_s do return "pop"
end

# Allocate a new AST node for an alternative using the correct number of popped elements
class CodeNew
	super Code

	# The associated alternative
	var alt: Alternative

	redef fun to_s do return "New {alt.name}/{alt.elems.length}"
end

# Allocate a new empty AST node array for an alternative
class CodeNewNodes
	super Code

	# The associated alternative
	var alt: Alternative

	redef fun to_s do return "NewArray {alt.name}"
end

# Add an element to a Nodes array
class CodeAdd
	super Code

	redef fun to_s do return "Add"
end

# Get null
class CodeNull
	super Code
	redef fun to_s do return "null"
end

# Elements of an alternative.
# Either a `Production` or a `Token`
abstract class Element
	# The name of the element
	var name: String
	redef fun to_s do return name

	# An example of a string
	fun sample_to_s: String is abstract

	private var acname_cache: nullable String = null

	# The mangled name of the element
	fun cname: String do return "N{name.to_cmangle}"

	# The name of the class in the AST
	fun acname: String do
		var res = acname_cache
		if res == null then
			res = "N{to_s.to_cmangle}"
			acname_cache = res
		end
		return res
	end

	# The name of the class in the AST
	fun acname=(s: String) do acname_cache = s
end

# A terminal element
class Token
	super Element
	# States of the LR automaton that shift on self
	var shifts = new ArraySet[LRState]
	# States of the LR automaton that reduce on self in the lookahead(1)
	var reduces = new ArraySet[LRState]

	redef fun sample_to_s
	do
		return to_s
	end
end

#

# A LR automaton
class LRAutomaton
	# The grammar of the automaton
	var grammar: Gram

	# The set of states
	var states = new Array[LRState]

	fun build
	do
		var start = grammar.start

		var first = new LRState
		first.number = 0
		for i in start.start_state do first.add_item(i)
		var todo = new List[LRState]
		todo.add first
		states.add first

		while not todo.is_empty do
			# In LALR, we can "recompute" a state to propagate new lookaheads
			# This is equivalent of analysing a new LR(1) state, except that in LALR we reanalyse an existing one that was updated.
			var state = todo.shift

			# Extends the core
			for i in state.items.to_a do
				extends_state(state, i)
			end

			# Compute a new proto-state for each outgoing transitions
			var nexts = new HashMap[Element, LRState]
			for i in state.items do
				var e = i.next
				if e == null then continue
				if nexts.has_key(e) then
					nexts[e].add_item(i.avance)
				else
					var next = new LRState
					next.prev = state
					next.prefix.add_all(state.prefix)
					next.prefix.add(e)
					nexts[e] = next
					next.add_item(i.avance)
				end
			end

			# Process the protostate
			# Either it already exists and we connect to it (and update it in LALR)
			# Or its a new state, we will add it to the todo list.
			for e, next in nexts do
				#print "#states: {states.length}"

				# Look for an existing LR0 state in the automaton
				var new_state = true
				for n in states do
					if same_state(n, next) then
						var changed = merge_state(n, next)
						if changed then todo.add(n)
						next = n
						new_state = false
						break
					end
				end

				# If not, add it to the pool and the todo-list
				if new_state then
					next.number = states.length
					assert not states.has(next)
					states.add(next)
					todo.add(next)
				end

				# Add the transition if needed
				var n = state.trans(e)
				if n == null then
					var t = new LRTransition(state, next, e)
					state.outs.add t
					next.ins.add t
				else
					assert n == next
				end
			end
		end
		for state in states do
			state.analysis
		end
	end

	# Says if the two state should be merged into one
	fun same_state(s1, s2: LRState): Bool
	do
		if s1.core.length != s2.core.length then return false
		var count = 0
		for i1 in s1.core do
			for i2 in s2.core do
				if same_state_item(i1, i2) then
					count += 1
					break
				end
			end
		end
		return count == s1.core.length
	end

	# Used by `same_state` to compare two items
	fun same_state_item(i1, i2: Item): Bool
	do
		return i1 == i2
	end

	# Merge information of new_stat into old_state.
	# new_state will be discarded.
	# Return `true` if `old_state` need to be processed again (LALR only)
	fun merge_state(old_state, new_state: LRState): Bool
	do
		# Update to a shorter prefix if possible
		if new_state.prefix.length < old_state.prefix.length then
			new_state.prefix = old_state.prefix
			new_state.prev = old_state.prev
		end

		return false
	end

	# Recursively extends item outside the core
	fun extends_state(state: LRState, i: Item)
	do
		var e = i.next
		if e == null then return
		if not e isa Production then return
		for i2 in e.start_state do
			i2.add_after i.lookahead_of_production
			if state.add_item(i2) then extends_state(state, i2)
		end
	end

	# Dump of the automaton
	fun pretty: String
	do
		var res = new Array[String]
		res.add "* LRAutomaton: {states.length} states\n"
		for s in states do
			res.add "STATE {s}\n"
			res.add "\tCORE\n"
			for i in s.core do
				res.add "\t\t{i}\n"
				if i.next != null then continue
				for i2 in s.lookahead(i) do
					res.add "\t\t\t{i2}\n"
				end
			end
			res.add "\tOTHER ITEMS\n"
			for i in s.items do
				if s.core.has(i) then continue
				res.add "\t\t{i}\n"
				if i.next != null then continue
				for i2 in s.lookahead(i) do
					res.add "\t\t\t{i2}\n"
				end
			end
			var engine = new LREngine
			engine.start(s)
			res.add "\tPOSSIBLE EXIT {engine.find_exit}\n"
			res.add "\tTRANSITIONS {s.outs.length}\n"
			for t in s.outs do
				res.add "\t\t{t.elem} |-> s{t.to.number}\n"
			end
			res.add "\tACTIONS\n"
			if s.is_lr0 then
				res.add "\t\tSTATE LR0\n"
			else
				res.add "\t\tSTATE SLR\n"
				for t, a in s.guarded_reduce do
					if a.length > 1 then
						res.add "\t\t/!\\ REDUCE/REDUCE CONFLICT\n"
						break
					else if s.shifts.has(t) then
						res.add "\t\t/!\\ SHIFT/REDUCE CONFLICT\n"
						break
					end
				end
			end
			if not s.shifts.is_empty then
				res.add "\t\tSHIFT {s.shifts.join(" ")}\n"
			end
			for r in s.reduces do
				res.add "\t\tREDUCE {r}\n"
			end
		end
		return res.join
	end

	# Generate a graphviz file of the automaton
	# This generate a simple executable LR0 without much information
	fun to_dot_lr0(path: String)
	do
		var f = new FileWriter.open(path)
		f.write("digraph \{\n")
		f.write("rankdir=TB;\n")
		f.write("node[shape=box,style=rounded];\n")

		f.write("entry [style=invis];\nentry -> s{states.first.number}\n")
		for s in states do
			f.write "s{s.number} [label=\""
			for a in s.reduces do
				if a.prod.accept then
					f.write "ACCEPT\\n"
				else
					f.write "REDUCE {a.prod.name.escape_to_dot} WITH {a.elems.length} ELEMENTS\\n"
				end
			end
			if s.shifts.length > 0 then
				f.write "SHIFT\\n"
			end
			f.write "\""
			if not s.is_lr0 then f.write ",color=red"
			f.write "];\n"
			for t in s.outs do
				f.write "s{s.number} -> s{t.to.number} [label=\"{t.elem.to_s.escape_to_dot}\"];\n"
			end
		end
		f.write("\}\n")
		f.close
	end

	# Generate a graphviz file of the automaton
	fun to_dot(path: String)
	do
		var f = new FileWriter.open(path)
		f.write("digraph g \{\n")
		f.write("rankdir=LR;\n")
		f.write("node[shape=Mrecord,height=0];\n")

		for s in states do
			f.write "s{s.number} [label=\"{s.to_s.escape_to_dot}|"
			for i in s.core do
				f.write "{i.to_s.escape_to_dot}\\l"
			end
			f.write("|")
			for i in s.items do
				if s.core.has(i) then continue
				f.write "{i.to_s.escape_to_dot}\\l"
			end
			f.write "\""
			if not s.is_lr0 then
				var conflict = false
				for t, a in s.guarded_reduce do
					if a.length > 1 then
						f.write ",color=red"
						conflict = true
						break
					else if s.shifts.has(t) then
						f.write ",color=orange"
						conflict = true
						break
					end
				end
				if not conflict then
					f.write ",color=blue"
				end
			end
			f.write "];\n"
			for t in s.outs do
				f.write "s{s.number} -> s{t.to.number} [label=\"{t.elem.to_s.escape_to_dot}\"];\n"
			end
		end
		f.write("\}\n")
		f.close
	end

	# Generate the parser of the automaton
	fun gen_to_nit(filepath: String, name: String)
	do
		var gen = new Generator
		gen.gen_to_nit(self, name)
		var f = new FileWriter.open(filepath)
		for s in gen.out do
			f.write(s)
			f.write("\n")
		end
		f.close
	end
end

private class Generator
	var out = new Array[String]
	fun add(s: String) do out.add(s)
	fun gen_to_nit(autom: LRAutomaton, name: String)
	do
		var states = autom.states
		var gram = autom.grammar

		add "# Parser generated by nitcc for the grammar {name}"
		add "module {name}_parser is generated, no_warning(\"missing-doc\",\"old-init\")"
		add "import nitcc_runtime"

		add "class Parser_{name}"
		add "\tsuper Parser"
		add "\tredef fun start_state do return state_{states.first.number}"
		add "end"
		
		for s in states do
			add "private fun state_{s.number}: LRState{s.number} do return once new LRState{s.number}"
		end
		for p in gram.prods do
			add "private fun goto_{p.cname}: Goto_{p.cname} do return once new Goto_{p.cname}"
			for a in p.alts do
				add "private fun reduce_{a.cname}(parser: Parser) do"
				gen_reduce_to_nit(a)
				add "end"
			end
		end

		add "redef class NToken"
		for s in states do
			if not s.need_guard then continue
			add "\t# guarded action for state {s}"
			add "\t# {s.shifts.length} shift(s) and {s.reduces.length} reduce(s)"
			add "\tprivate fun action_s{s.number}(parser: Parser) do"
			if s.reduces.length != 1 then
				add "\t\tparser.parse_error"
			else
				add "\t\treduce_{s.reduces.first.cname}(parser)"
				#gen_reduce_to_nit(s.reduces.first)
			end
			add "\tend"
		end
		add "end"

		for t in gram.tokens do
			if t.name == "Eof" then
				add "redef class {t.cname}"
			else
				add "class {t.cname}"
			end
			add "\tsuper NToken"
			for s in t.shifts do
				if not s.need_guard then continue
				add "\tredef fun action_s{s.number}(parser) do"
				gen_shift_to_nit(s, t)
				add "\tend"
			end
			for s in t.reduces do
				if not s.need_guard then continue
				if s.reduces.length <= 1 then continue
				add "\tredef fun action_s{s.number}(parser) do"
				add "\t\treduce_{s.guarded_reduce[t].first.alt.cname}(parser)"
				#gen_reduce_to_nit(s.guarded_reduce[t].first.alt)
				add "\tend"
			end
			add "\tredef fun node_name do return \"{t.name.escape_to_nit}\""
			add "end"
		end

		add "redef class LRGoto"
		for s in states do
			if s.gotos.length <= 1 then continue
			add "\tprivate fun goto_s{s.number}(parser: Parser) do abort"
		end
		add "end"

		for p in gram.prods do
			add "class Goto_{p.cname}"
			add "\tsuper LRGoto"
			for s in p.gotos do
				if s.gotos.length <= 1 then continue
				add "\tredef fun goto_s{s.number}(parser) do"
				gen_goto_to_nit(s, p)
				add "\tend"
			end
			add "end"
		end

		var ps = gram.prods.to_a
		ps.add_all(gram.ast_prods)
		for p in ps do
			if p.spe == null and not p.altone then
				if p.name.has_suffix("?") or p.name.has_suffix("+") then continue
				add "class {p.acname}"
				add "\tsuper NProd"
				add "\tredef fun node_name do return \"{p.name.escape_to_nit}\""
				add "end"
			end

			var als = p.alts.to_a
			als.add_all(p.ast_alts)
			for a in als do
				if a.trans then continue
				add "class {a.cname}"
				if p.altone then
					add "\tsuper NProd"
				else
					add "\tsuper {p.acname}"
				end
				add "\tredef fun node_name do return \"{a.name.escape_to_nit}\""
				var initarg = new Array[String]
				for i in [0..a.elems.length[ do
					add "\tvar n_{a.elemname(i)}: {a.elems[i].acname}"
					initarg.add("n_{a.elemname(i)}: {a.elems[i].acname}")
				end
				if initarg.is_empty then
					add "\tinit do end"
				else
					add "\tinit({initarg.join(", ")}) do"
					for i in [0..a.elems.length[ do
						add "\t\tself.n_{a.elemname(i)} = n_{a.elemname(i)}"
					end
					add "\tend"
				end
				add "\tredef fun number_of_children do return {a.elems.length}"
				add "\tredef fun child(i) do"
				for i in [0..a.elems.length[ do
					add "\t\tif i == {i} then return n_{a.elemname(i)}"
				end
				add "\t\tabort"
				add "\tend"
				add "end"
			end
		end

		for s in states do
			add "# State {s}"
			add "private class LRState{s.number}"
			add "\tsuper LRState"

			add "\tredef fun to_s do return \"{s.to_s.escape_to_nit}\""
			
			var err = new Array[String]
			for t in s.outs do
				var e = t.elem
				if e isa Production then err.add e.name
			end
			if err.is_empty then for t in s.outs do
				var e = t.elem
				if e isa Token then err.add e.name
			end

			add "\tredef fun error_msg do return \"{err.join(", ").escape_to_nit}\""

			add "\tredef fun action(parser) do"
			if s.need_guard then
				add "\t\tparser.peek_token.action_s{s.number}(parser)"
			else if s.reduces.length == 1 then
				add "\t\treduce_{s.reduces.first.cname}(parser)"
				#gen_reduce_to_nit(s.reduces.first)
			else
				abort
			end
			add "\tend"
			
			if not s.gotos.is_empty then
				add "\tredef fun goto(parser, goto) do"
				if s.gotos.length > 1 then
					add "\t\tgoto.goto_s{s.number}(parser)"
				else
					gen_goto_to_nit(s, s.gotos.first)
				end
				add "\tend"
			end

			add "end"
		end


	end

	fun gen_shift_to_nit(s: LRState, t: Token)
	do
		var dest = s.trans(t)
		add "\t\tparser.shift(state_{dest.number})"

	end

	fun gen_goto_to_nit(s: LRState, p: Production)
	do
		var dest = s.trans(p)
		add "\t\tparser.push(state_{dest.number})"
	end

	fun gen_reduce_to_nit(alt: Alternative)
	do
		add "\t\t# REDUCE {alt}"
		var i = alt.elems.length - 1
		for e in alt.elems.to_a.reversed do
			add "\t\tvar n{i} = parser.pop.as({e.acname})"
			i -= 1
		end

		alt.make_codes
		var cpt = 0
		i = 0
		var st = new Array[String]
		for c in alt.codes.as(not null) do
			if c isa CodePop then
				st.add "n{i}"
				i += 1
			else if c isa CodeNull then
				st.add "null"
			else if c isa CodeNew then
				var calt = c.alt
				cpt += 1
				var from = st.length - calt.elems.length
				var args = new List[String]
				for j in [from..st.length[ do
					args.unshift(st.pop)
				end

				if args.is_empty then
					add "\t\tvar p{cpt} = new {calt.cname}"
				else
					add "\t\tvar p{cpt} = new {calt.cname}({args.join(", ")})"
				end
				#var x = 0
				#for j in [from..st.length[ do
					#if st[j] == "null" then continue
					#add "\t\tp{cpt}.n_{calt.elemname(x)} = {st[j]}"
					#x += 1
				#end
				st.add("p{cpt}")
			else if c isa CodeNewNodes then
				cpt += 1
				add "\t\tvar p{cpt} = new {c.alt.prod.acname}"
				st.add("p{cpt}")
			else if c isa CodeAdd then
				var a1 = st.pop
				var a0 = st.last
				add "\t\t{a0}.children.add({a1})"
			end
		end
		assert st.length == 1
		add "\t\tvar prod = {st.first}"

		add "\t\tparser.node_stack.push prod"
		if alt.prod.accept then
			add "\t\tparser.stop = true"
		else
			add "\t\tparser.goto(goto_{alt.prod.cname})"
		end
	end
end

# A state in a LR automaton
class LRState
	# Shortest prefix to go to this state
	# Is empty for the start state
	var prefix = new Array[Element]

	# The previous node according to the prefix
	# Is null for the start state
	var prev: nullable LRState = null

	# Number
	var number = -1

	# Set of all items
	var items = new HashSet[Item]

	# Set of items only in the core
	var core = new HashSet[Item]

	# Outgoing transitions
	var ins = new Array[LRTransition]

	# Ingoing transitions
	var outs = new Array[LRTransition]

	# Trans function
	fun trans(e: Element): nullable LRState
	do
		for t in outs do if t.elem == e then return t.to
		return null
	end

	redef fun to_s do return "{number} {prefix.join(" ")}"

	# Add and item in the core
	# If the item already exists, merge the after
	fun add_item(i: Item): Bool
	do
		if items.has(i) then
			for i2 in items do
				if i2 != i then continue
				return i2.add_after(i.after)
			end
			return false
		end

		items.add(i)
		if i.pos > 0 or i.alt.prod.accept then core.add(i)
		return true
	end

	# Lookahead after the reduction of i
	fun lookahead(i: Item): Set[Item]
	do
		var res = i.after
		if res.is_empty then
			# no after, it means we are in SLR mode
			# So return the global afters of the production
			return i.alt.prod.afters
		end
		return res
	end

	# Set of all reductions
	var reduces = new ArraySet[Alternative]
	# Set of all shifts
	var shifts = new ArraySet[Token]
	# Set of all goto
	var gotos = new ArraySet[Production]
	# Reduction guarded by tokens
	var guarded_reduce = new HashMap[Token, Set[Item]]
	# Shifts guarded by tokens
	var guarded_shift = new HashMap[Token, Set[Item]]

	# Does the state need a guard to perform an action?
	fun need_guard: Bool do return not shifts.is_empty or reduces.length > 1

	# Is the state LR0?
	fun is_lr0: Bool do return reduces.length <= 1 and shifts.is_empty or reduces.is_empty

	# Compute guards and conflicts
	fun analysis
	do
		# Collect action and conflicts
		for i in items do
			var n = i.next
			if n == null then
				reduces.add(i.alt)
				for i2 in lookahead(i) do
					var t = i2.next
					assert t isa Token
					t.reduces.add(self)
					if not guarded_reduce.has_key(t) then
						guarded_reduce[t] = new ArraySet[Item]
					end
					guarded_reduce[t].add(i)
				end
			else if n isa Token then
				shifts.add(n)
				n.shifts.add(self)
				if not guarded_shift.has_key(n) then
					guarded_shift[n] = new ArraySet[Item]
				end
				guarded_shift[n].add(i)
			else if n isa Production then
				gotos.add(n)
				n.gotos.add(self)
			else
				abort
			end
		end
		# Token to remove as reduction guard to solve S/R conflicts
		var removed_reduces = new Array[Token]
		for t, a in guarded_reduce do
			if a.length > 1 then
				print "---"
				print "REDUCE/REDUCE Conflict on state {self} for token {t}:"
				print "A possible past: {prefix}"
				conflicting_items.add_all a
				var worst_exit = null
				for i in a do
					var engine = new LREngine
					engine.start(self)
					engine.reduce(i.alt)
					var exit = engine.find_exit
					if worst_exit == null or exit.length > worst_exit.length then worst_exit = exit
				end
				var amb = 0
				for i in a do
					var engine = new LREngine
					engine.start(self)
					engine.reduce(i.alt)
					for e in worst_exit.as(not null) do
						if not engine.try_shift(e) then break
					end
					print "REDUCE on item: {i}"
					var exit = engine.find_exit
					print "A possible future: {exit}"
					print engine.tree.dump
					if exit == worst_exit then amb += 1
				end
				if amb > 1 then
					print "AMBIGUITY detected: same elements, different trees"
				end
			end
			if guarded_shift.has_key(t) then
				var ri = a.first
				var confs = new Array[Item]
				var ress = new Array[String]
				var g = guarded_shift[t]
				for si in lookahead(ri) do
					if si.next != t then continue
					if not g.has(si) then
						confs.add(si)
						continue
					end
					var p = ri.alt.prod
					var csi: nullable Item = null
					for bsi in back_expand(si) do
						if bsi.alt.prod == p then
							csi = bsi
							break
						end
					end
					if csi == null then
						confs.add(si)
						continue
					end
					ress.add "\tshift:  {si}"
					if si != csi then
						ress.add "\tcore shift: {csi}"
					end
				end
				if confs.is_empty then
					print "---"
					print "Automatic Dangling on state {self} for token {t}:"
					print "\treduce: {ri}"
					for r in ress do print r
					removed_reduces.add t
				else
					print "---"
					print "SHIFT/REDUCE Conflict on state {self} for token {t}:"
					print "A possible past: {prefix}"
					removed_reduces.add t
					conflicting_items.add_all a
					conflicting_items.add_all guarded_shift[t]

					var worst_exit = null
					for i in guarded_shift[t] do
						print "SHIFT on item: {i}"
						var engine = new LREngine
						engine.start(self)
						for e in i.future do engine.shift(e)
						var exit = engine.find_exit
						print "A possible future: {exit}"
						print engine.tree.dump
						if worst_exit == null or exit.length < worst_exit.length then
							worst_exit = exit
						end
					end
					var engine = new LREngine
					engine.start(self)
					engine.reduce(ri.alt)
					for e in worst_exit.as(not null) do
						if not engine.try_shift(e) then break
					end
					var reduce_exit = engine.find_exit
					print "REDUCE on item: {ri}"
					var exit = engine.find_exit
					print "A possible future: {exit}"
					print engine.tree.dump
					if exit == worst_exit then
						print "AMBIGUITY detected: same elements, different trees"
					end
				end
			end
		end
		for t in removed_reduces do
			guarded_reduce.keys.remove(t)
			t.reduces.remove(self)
		end
	end

	# Items within a reduce/reduce or a shift/reduce conflict.
	#
	# Is computed by `analysis`
	var conflicting_items = new ArraySet[Item]

	# Return `i` and all other items of the state that expands, directly or indirectly, to `i`
	fun back_expand(i: Item): Set[Item]
	do
		var res = new ArraySet[Item]
		var todo = [i]
		res.add(i)
		while not todo.is_empty do
			var x = todo.pop
			if x.pos > 0 then continue
			var p = x.alt.prod
			for y in items do
				if y.next != p then continue
				if res.has(y) then continue
				res.add(y)
				todo.add(y)
			end
		end
		return res
	end
end

# Execution engine simulator on a LR automaton.
# It has a stack of LR states and AST nodes.
class LREngine
	# The stack of stale, starts with start state
	var state_stack = new Array[nullable LRState]

	# A stack of AST node, reduced production and shifted token are pushed onto
	var node_stack = new Array[CSTNode]

	# The sequence of elements shifted for the first state
	var past = new Array[Element]

	# The sequence of elements shifted since the first state
	var future = new Array[Element]

	# The current state (top of the stack)
	fun state: nullable LRState do return state_stack.last

	# Initialize the engine on a given `state`.
	# A consistent `past` is created to reach `state`.
	# Subsequent shifts will be added to the `future`.
	fun start(state: LRState)
	do
		var start = state
		loop
			var prev = start.prev
			if prev == null then break
			start = prev
		end
		state_stack.add(start)
		for e in state.prefix do shift(e)
		assert self.state == state

		var tmp = future
		future = past
		past = tmp
	end

	# Perform a shift on `e` for the current `state` and add it to `future`.
	# Both tokens and productions can be shifted.
	# If the shift is impossible, the current state become null,
	fun shift(e: Element)
	do
		state_stack.add state.trans(e)
		future.add(e)
		node_stack.add(new CSTNode(e))
	end

	# Perform a reduction on an alternative `a` on the current state.
	fun reduce(a: Alternative)
	do
		assert can_reduce(a)
		var len = a.elems.length
		for i in [0..len[ do state_stack.pop
		var node = new CSTNode(a.prod)
		for i in [0..len[ do node.children.unshift(node_stack.pop)
		node_stack.add(node)

		# TODO something smart when accepting
		if a.prod.accept then
			state_stack.add null
			return
		end

		state_stack.add state.trans(a.prod)
	end

	# Return true if the elements in the stack are compatible with the reduction.
	fun can_reduce(alternative: Alternative): Bool
	do
		var idx = node_stack.length - alternative.elems.length
		if idx < 0 then return false
		for i in [0..alternative.elems.length[ do
			if alternative.elems[i] != node_stack[idx+i].element then return false
		end
		return true
	end

	# Try to shift on the current state.
	# If not doable, try to reduce something, then shift.
	# Return true is a shift was done.
	fun try_shift(e: Element): Bool
	do
		var s = state.trans(e)
		if s == null then
			if not try_reduce then
				return false
			end
			return try_shift(e)
		end
		shift(e)
		return true
	end

	# Try to reduce something on the current state.
	fun try_reduce: Bool
	do
		for i in state.core do
			# Filter out items that are not reduction
			if i.next != null then continue
			if can_reduce(i.alt) then
				reduce(i.alt)
				return true
			end
		end
		return false
	end

	fun tree: CSTNode do return node_stack.last

	fun find_exit: Array[Element]
	do
		var set = new HashSet[LRState]
		loop
			var state = self.state
			if state == null then break
			if set.has(state) then
				# We are looping, just abort
				break
			end
			set.add(state)
			# Heuristic, the first item is an accepting one or something that exit without looping
			var item = state.core.first
			for e in item.future do shift(e)
			reduce(item.alt)
		end
		return future
	end
end

# A CST node of the LREngine
class CSTNode
	var element: Element
	var children = new Array[CSTNode]

	fun dump(prefix: nullable String): String
	do
		if prefix == null then prefix = ""
		var res = element.to_s + "\n"
		if children.length == 0 then return res
		var p2 = prefix + "│ "
		for c in [0..children.length-1[ do
			res += prefix + "├╴"
			res += children[c].dump(p2)
		end
		res += prefix + "└╴"
		res += children.last.dump(prefix + "  ")
		return res
	end
end

# A transition in a LR automaton
class LRTransition
	# The origin state
	var from: LRState
	# The destination state
	var to: LRState
	# The element labeling the transition
	var elem: Element
end

# A alternative with a cursor (dot) before an element
class Item
	# The alternative
	var alt: Alternative
	# The dot index (0 means before the first element)
	var pos: Int
	# The lookahead at the end of the item
	var after = new ArraySet[Item]

	redef fun ==(o) do return o isa Item and alt == o.alt and pos == o.pos
	redef fun hash do return alt.hash + pos

	redef fun to_s
	do
		var b = new FlatBuffer
		b.append("{alt.prod.name}→")
		for i in [0..alt.elems.length[
		do
			if pos == i then b.append("·") else b.append(" ")
			b.append(alt.elems[i].to_s)
		end
		if pos == alt.elems.length then b.append("·")
		if not after.is_empty then
			b.append(", ")
			var toks = new ArraySet[Token]
			for a in after do toks.add(a.next.as(Token))
			b.append(toks.join("/"))
		end
		return b.to_s
	end

	fun add_after(items: Collection[Item]): Bool
	do
		var res = false
		for i in items do
			if after.has(i) then continue
			after.add i
			res = true
		end
		return res
	end

	# The element that follows the dot, null if the dot is at the end
	fun next: nullable Element
	do
		if pos >= alt.elems.length then return null
		return alt.elems[pos]
	end

	# LALR and LR1 lookahead. Return what follows the next production
	fun lookahead_of_production: Set[Item]
	do
		assert next isa Production
		var res = new HashSet[Item]
		var item = self
		var p = pos
		while p < alt.elems.length do
			p = p + 1

			if p == alt.elems.length then
				# We are at the end
				res.add_all(after)
				break
			end

			var next = alt.elems[p]
			if next isa Token then
				item = new Item(alt, p)
				res.add(item)
				break
			else if next isa Production then
				res.add_all(next.firsts)
				if not next.is_nullable then break
			else
				abort # impossible
			end
		end
		#print "lookahead {self} -> {res}"
		return res
	end

	# The item that advanced once
	fun avance: Item
	do
		assert pos < alt.elems.length
		var res = new Item(alt, pos+1)
		res.add_after after
		return res
	end

	fun future: Array[Element]
	do
		var res = new Array[Element]
		for i in [pos .. alt.elems.length[ do
			res.add alt.elems[i]
		end
		return res
	end
end
