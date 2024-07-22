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

	# Extends the grammar and compute information on productions
	fun prepare_for_automaton
	do
		var start = new Production("_start")
		self.start = start
		start.accept = true
		var eof = new Token("Eof")
		tokens.add(eof)
		start.new_alt("Start", self.prods.first, eof)
		prods.add(start)

		analyse
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

        # Pool of elements that are modified with + (reuse them!)
        var plusizes = new HashMap[Element, Production]

        # Create a + version of an element
        #
        # ```
        # foo = x bar+ y | z ;
        # ```
        #
        # becomes
        #
        # ```
        # foo = x abs0 y | z ;
        # abs0 = {one:} bar | {more:} abs0 bar ;
        # ```
        fun plusize(e: Element): Production
        do
                if plusizes.has_key(e) then return plusizes[e]
                var name = "{e}+"
                var prod = new Production(name)
                prod.acname = "Nodes[{e.acname}]"
                prods.add(prod)
                var alt1 = prod.new_alt("{name}_one", e)
                alt1.codes = [new CodeNewNodes(alt1), new CodePop, new CodeAdd: Code]
                var alt2 = prod.new_alt("{name}_more", prod, e)
                alt2.codes = [new CodePop, new CodePop, new CodeAdd: Code]
                plusizes[e] = prod
                return prod
        end

        # Pool of elements that are modified with ? (reuse them!)
        var quesizes = new HashMap[Element, Production]

        # Create a ? version of an element
        #
        # ```
        # foo = x bar? y | z ;
        # ```
        #
        # becomes
        #
        # ```
        # foo = x abs0 y | z ;
        # abs0 = {one:} bar | {none} Empty ;
        # ```
        fun quesize(e: Element): Production
        do
                if quesizes.has_key(e) then return quesizes[e]
                var name = "{e}?"
                var prod = new Production(name)
                prod.acname = "nullable {e.acname}"
                prods.add(prod)
                var a1 = prod.new_alt("{name}_one", e)
                a1.codes = [new CodePop]
                var a0 = prod.new_alt0("{name}_none")
                a0.codes = [new CodeNull]
                quesizes[e] = prod
                return prod
        end

        # Pool for anoymous grouped production (reuse them!)
        var groupizes = new HashMap[Array[Element], Production]

        # Create an anonymous production that groups some elements.
        # Note: an anonymous production is always returned, even if `es` is empty or single.
        fun groupize(es: Array[Element]): Production
        do
                if groupizes.has_key(es) then return groupizes[es]
                var name = "_group{groupizes.length}"
                var prod = new Production(name)
                prods.add(prod)
                var a1 = prod.new_alt2("{name}_single", es)
                groupizes[es] = prod
                return prod
        end



	# Generate the nodes classes
	fun gen_to_nit(filepath: String, name: String)
	do
		var g = new Generator

                g.add "# Parser generated by nitcc for the grammar {name}"
                g.add "module {name}_nodes is generated, no_warning(\"missing-doc\",\"old-init\")"
                g.add "import nitcc_runtime"

		for t in tokens do
			if t.name == "Eof" then
				g.add "redef class {t.acname}"
			else
				g.add "class {t.acname}"
				g.add "\tsuper NToken"
			end
			g.add "\tredef fun node_name do return \"{t.name.escape_to_nit}\""
			g.add "end"
		end

		var ps = prods.to_a
		ps.add_all(ast_prods)
		for p in ps do
			if p.spe == null and not p.altone then
				if p.name.has_suffix("?") or p.name.has_suffix("+") then continue
				g.add "# Production {p}"
				g.add "class {p.acname}"
				g.add "\tsuper NProd"
				g.add "\tredef fun node_name do return \"{p.name.escape_to_nit}\""
				g.add "end"
			end

			var als = p.alts.to_a
			als.add_all(p.ast_alts)
			for a in als do
				if a.trans then continue
				g.add "# Alternative {a}"
				g.add "class {a.cname}"
				if p.altone then
					g.add "\tsuper NProd"
				else
					g.add "\tsuper {p.acname}"
				end
				g.add "\tredef fun node_name do return \"{a.name.escape_to_nit}\""
				var initarg = new Array[String]
				for i in [0..a.elems.length[ do
					g.add "\t# Children {i}: {a.elems[i]}"
					g.add "\tvar n_{a.elemname(i)}: {a.elems[i].acname}"
					initarg.add("n_{a.elemname(i)}: {a.elems[i].acname}")
				end
				if initarg.is_empty then
					g.add "\tinit do end"
				else
					g.add "\tinit({initarg.join(", ")}) do"
					for i in [0..a.elems.length[ do
						g.add "\t\tself.n_{a.elemname(i)} = n_{a.elemname(i)}"
					end
					g.add "\tend"
				end
				g.add "\tredef fun number_of_children do return {a.elems.length}"
				g.add "\tredef fun child(i) do"
				for i in [0..a.elems.length[ do
					g.add "\t\tif i == {i} then return n_{a.elemname(i)}"
				end
				g.add "\t\tabort"
				g.add "\tend"
				g.add "end"
			end
		end
		g.write_to_file(filepath)
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
	redef fun sample_to_s
	do
		return to_s
	end
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

# Helper class to write file content
class Generator
	var out = new Array[String]
	fun add(s: String) do out.add(s)
	fun write_to_file(filepath: String)
	do
		var f = new FileWriter.open(filepath)
		for s in out do
			f.write(s)
			f.write("\n")
		end
		f.close
	end
end
