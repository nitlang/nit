# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2012 Jean Privat <jean@pryen.org>
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

# Pre order sets and partial order set (ie hierarchies)
module poset

# Preorder set graph.
# This class modelize an incremental preorder graph where new node and edges can be added (but no removal)
# Preorder graph has two caracteristics:
#  * reflexivity: an element is in relation with itself (ie `self.has(e) implies self.has_edge(e,e)`)
#  * transitivity: `(self.has_edge(e,f) and self.has_edge(f,g)) implies self.has_edge(e,g)`
class POSet[E: Object]
	super Collection[E]
	super Comparator[E]

	redef fun iterator do return elements.keys.iterator

	# All the nodes
	private var elements: HashMap[E, POSetElement[E]] = new HashMap[E, POSetElement[E]]

	redef fun has(e) do return self.elements.keys.has(e)

	# Add a node (an element) to the posed
	# The new element is added unconnected to any other nodes (it is both a new root and a new leaf).
	# Return the POSetElement associated to `e`.
	# If `e` is already present in the POSet then just return the POSetElement (usually you will prefer []) is this case.
	fun add_node(e: E): POSetElement[E]
	do
		if elements.keys.has(e) then return self.elements[e]
		var poe = new POSetElement[E](self, e, elements.length)
		poe.tos.add(e)
		poe.froms.add(e)
		self.elements[e] = poe
		return poe
	end

	# Return a view of `e` in the poset.
	# This allows to asks manipulate elements in thier relation with others elements.
	#
	#     var poset: POSet[Something] # ...
	#     for x in poset do
	#         for y in poset[x].direct_greaters do
	#             print "{x} -> {y}"
	#         end
	#     end
	#
	# REQUIRE: has(e)
	fun [](e: E): POSetElement[E]
	do
		assert elements.keys.has(e)
		return self.elements[e]
	end

	# Add an edge from `f` to `t`.
	# Because a POSet is transitive, all transitive edges are also added to the graph.
	# If the edge already exists, the this function does nothing.
	# If a reverse edge (from `t` to `f`) already exists, a loop is created.
	#
	# FIXME: Do somethind clever to manage loops.
	fun add_edge(f, t: E)
	do
		var fe = add_node(f)
		var te = add_node(t)
		# Skip if edge already present
		if fe.tos.has(t) then return
		# Add the edge and close the transitivity
		for ff in fe.froms do
			var ffe = self.elements[ff]
			for tt in te.tos do
				var tte = self.elements[tt]
				tte.froms.add ff
				ffe.tos.add tt
			end
		end
		# Update the transitive reduction
		if te.tos.has(f) then return # Skip the reduction if there is a loop

		for x in te.dfroms.to_a do
			var xe = self.elements[x]
			if xe.tos.has(f) then
				te.dfroms.remove(x)
				xe.dtos.remove(t)
			end
		end
		for x in fe.dtos.to_a do
			var xe = self.elements[x]
			if xe.froms.has(t) then
				xe.dfroms.remove(f)
				fe.dtos.remove(x)
			end
		end
		fe.dtos.add t
		te.dfroms.add f
	end

	# Is there an edge (transitive or not) from `f` to `t`?
	# Since the POSet is reflexive, true is returned if `f == t`.
	fun has_edge(f,t: E): Bool
	do
		if not elements.keys.has(f) then return false
		var fe = self.elements[f]
		return fe.tos.has(t)
	end

	# Is there a direct edge from `f` to `t`?
	# Note that because of loops, the result may not be the expected one.
	fun has_direct_edge(f,t: E): Bool
	do
		if not elements.keys.has(f) then return false
		var fe = self.elements[f]
		return fe.dtos.has(t)
	end

	# Display the POSet in a gaphical windows.
	# Graphviz with a working -Txlib is expected.
	# Used fo debugging.
	fun show_dot
	do
		var f = new OProcess("dot", "-Txlib")
		#var f = stdout
		f.write "digraph \{\n"
		for x in elements.keys do
			f.write "\"{x}\";\n"
			var xe = self.elements[x]
			for y in xe.dtos do
				if self.has_edge(y,x) then
					f.write "\"{x}\" -> \"{y}\"[dir=both];\n"
				else
					f.write "\"{x}\" -> \"{y}\";\n"
				end
			end
		end
		f.write "\}\n"
		#f.close
		#f.wait
	end

	# Compare two elements in an arbitrary total order.
	# Tis function is mainly used to sort elements of the set in an arbitrary linear extension.
	# if a<b then return -1
	# if a>b then return 1
	# if a == b then return 0
	# else return -1 or 1
	# The total order is stable unless a new node or a new edge is added
	redef fun compare(a, b: E): Int
	do
		var ae = self.elements[a]
		var be = self.elements[b]
		var res = ae.tos.length <=> be.tos.length
		if res != 0 then return res
		return elements[a].count <=> elements[b].count
	end

	# Filter elements to return only the smallest ones
	#
	# ~~~
	# var s = new POSet[String]
	# s.add_edge("B", "A")
	# s.add_edge("C", "A")
	# s.add_edge("D", "B")
	# s.add_edge("D", "C")
	# assert s.select_smallest(["A", "B"]) == ["B"]
	# assert s.select_smallest(["A", "B", "C"]) == ["B", "C"]
	# assert s.select_smallest(["B", "C", "D"]) == ["D"]
	# ~~~
	fun select_smallest(elements: Collection[E]): Array[E]
	do
		var res = new Array[E]
		for e in elements do
			for f in elements do
				if e == f then continue
				if has_edge(f, e) then continue label
			end
			res.add(e)
		end label
		return res
	end

	# ~~~
	# var s = new POSet[String]
	# s.add_edge("B", "A")
	# s.add_edge("C", "A")
	# s.add_edge("D", "B")
	# s.add_edge("D", "C")
	# assert s.select_greatest(["A", "B"]) == ["A"]
	# assert s.select_greatest(["A", "B", "C"]) == ["A"]
	# assert s.select_greatest(["B", "C", "D"]) == ["B", "C"]
	# ~~~
	# Filter elements to return only the greatest ones
	fun select_greatest(elements: Collection[E]): Array[E]
	do
		var res = new Array[E]
		for e in elements do
			for f in elements do
				if e == f then continue
				if has_edge(e, f) then continue label
			end
			res.add(e)
		end label
		return res
	end

	# Sort a sorted array of poset elements using linearization order
	fun linearize(elements: Collection[E]): Array[E] do
		var lin = elements.to_a
		sort(lin)
		return lin
	end
end

# View of an objet in a poset
# This class is a helper to handle specific queries on a same object
#
# For instance, one common usage is to add a specific attribute for each poset a class belong.
#
#     class Thing
#         var in_some_relation: POSetElement[Thing]
#         var in_other_relation: POSetElement[Thing]
#     end
#     var t: Thing # ...
#     t.in_some_relation.greaters
#
class POSetElement[E: Object]
	# The poset self belong to
	var poset: POSet[E]

	# The real object behind the view
	var element: E

	private var tos = new HashSet[E]
	private var froms = new HashSet[E]
	private var dtos = new HashSet[E]
	private var dfroms = new HashSet[E]

	# The rank of the
	# This attribute is used to force a total order for POSet#compare
	private var count: Int

	# Return the set of all elements `t` that have an edge from `element` to `t`.
	# Since the POSet is reflexive, element is included in the set.
	fun greaters: Collection[E]
	do
		return self.tos
	end

	# Return the set of all elements `t` that have a direct edge from `element` to `t`.
	fun direct_greaters: Collection[E]
	do
		return self.dtos
	end

	# Return the set of all elements `f` that have an edge from `f` to `element`.
	# Since the POSet is reflexive, element is included in the set.
	fun smallers: Collection[E]
	do
		return self.froms
	end

	# Return the set of all elements `f` that have an edge from `f` to `element`.
	fun direct_smallers: Collection[E]
	do
		return self.dfroms
	end

	# Is there an edge from `element` to `t`?
	fun <=(t: E): Bool
	do
		return self.tos.has(t)
	end

	# Is `t != element` and is there an edge from `element` to `t`?
	fun <(t: E): Bool
	do
		return t != self.element and self.tos.has(t)
	end

	# The length of the shortest path to the root of the poset hierarchy
	fun depth: Int do
		if direct_greaters.is_empty then
			return 0
		end
		var min = -1
		for p in direct_greaters do
			var d = poset[p].depth + 1
			if min == -1 or d < min then
				min = d
			end
		end
		return min

	end
end
