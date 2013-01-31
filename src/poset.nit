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
#  * reflexivity: an element is in relation with itself (ie `self.has(e)' implies `self.has_edge(e,e)')
#  * transitivity: `self.has_edge(e,f)' and `self.has_edge(f,g)' implies `self.has_edge(e,g)'
class POSet[E: Object]
	super NaiveCollection[E]
	super AbstractSorter[E]

	redef fun iterator do return nodes.iterator

	# All the nodes
	private var nodes: Set[E] = new HashSet[E]
	private var tos: HashMap[E, Set[E]] = new HashMap[E, Set[E]]
	private var froms: HashMap[E, Set[E]] = new HashMap[E, Set[E]]
	private var dtos: HashMap[E, Set[E]] = new HashMap[E, Set[E]]
	private var dfroms: HashMap[E, Set[E]] = new HashMap[E, Set[E]]
	private var elements: HashMap[E, POSetElement[E]] = new HashMap[E, POSetElement[E]]

	redef fun has(e) do return self.nodes.has(e)

	# Add a node (an element) to the posed
	# The new element is added unconnected to any other nodes (it is both a new root and a new leaf).
	# Return the POSetElement associated to `e'.
	# If `e' is already present in the POSet then just return the POSetElement (usually you will prefer []) is this case.
	fun add_node(e: E): POSetElement[E]
	do
		if nodes.has(e) then return self.elements[e]
		nodes.add(e)
		tos[e] = new HashSet[E]
		tos[e].add(e)
		froms[e] = new HashSet[E]
		froms[e].add(e)
		dtos[e] = new HashSet[E]
		dfroms[e] = new HashSet[E]
		var poe = new POSetElement[E](self, e, nodes.length)
		self.elements[e] = poe
		return poe
	end

	# Return a view of `e' in the poset.
	# This allows to asks manipulate elements in thier relation with others elements.
	#
	#     var poset = POSet[Something] = ...
	#     for x in poset do
	#         for y in poset[x].direct_greaters do
	#             print "{x} -> {y}"
	#         end
	#     end
	#
	# REQUIRE: has(e)
	fun [](e: E): POSetElement[E]
	do
		assert nodes.has(e)
		return self.elements[e]
	end

	# Add an edge from `f' to `t'.
	# Because a POSet is transitive, all transitive edges are also added to the graph.
	# If the edge already exists, the this function does nothing.
	# If a reverse edge (from `t' to 'f') already exists, a loop is created.
	#
	# FIXME: Do somethind clever to manage loops.
	fun add_edge(f, t: E)
	do
		add_node(f)
		add_node(t)
		# Skip if edge already present
		if tos[f].has(t) then return
		# Add the edge and close the transitivity
		for ff in froms[f] do
			for tt in tos[t] do
				froms[tt].add ff
				tos[ff].add tt
			end
		end
		# Update the transitive reduction
		if tos[t].has(f) then return # Skip the reduction if there is a loop

		for x in dfroms[t].to_a do
			if tos[x].has(f) then
				dfroms[t].remove(x)
				dtos[x].remove(t)
			end
		end
		for x in dtos[f].to_a do
			if froms[x].has(t) then
				dfroms[x].remove(f)
				dtos[f].remove(x)
			end
		end
		dtos[f].add t
		dfroms[t].add f
	end

	# Is there an edge (transitive or not) from `f' to `t'?
	# Since the POSet is reflexive, true is returned if `f == t'.
	fun has_edge(f,t: E): Bool
	do
		return nodes.has(f) and tos[f].has(t)
	end

	# Is there a direct edge from `f' to `t'?
	# Note that because of loops, the result may not be the expected one.
	fun has_direct_edge(f,t: E): Bool
	do
		return nodes.has(f) and dtos[f].has(t)
	end

	# Display the POSet in a gaphical windows.
	# Graphviz with a working -Txlib is expected.
	# Used fo debugging.
	fun show_dot
	do
		var f = new OProcess("dot", "-Txlib")
		#var f = stdout
		f.write "digraph \{\n"
		for x in nodes do
			for y in dtos[x] do
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
		var res = tos[a].length <=> tos[b].length
		if res != 0 then return res
		return elements[a].count <=> elements[b].count
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
#     var t: Thing ...
#     t.in_some_relation.greaters
#
class POSetElement[E: Object]
	# The poset self belong to
	var poset: POSet[E]

	# The real object behind the view
	var element: E

	# The rank of the
	# This attribute is used to force a total order for POSet#compare
	private var count: Int

	# Return the set of all elements `t' that have an edge from `element' to `t'.
	# Since the POSet is reflexive, element is included in the set.
	fun greaters: Collection[E]
	do
		return self.poset.tos[self.element]
	end

	# Return the set of all elements `t' that have a direct edge from `element' to `t'.
	fun direct_greaters: Collection[E]
	do
		return self.poset.dtos[self.element]
	end

	# Return the set of all elements `f' that have an edge from `f' to `element'.
	# Since the POSet is reflexive, element is included in the set.
	fun smallers: Collection[E]
	do
		return self.poset.froms[self.element]
	end

	# Return the set of all elements `f' that have an edge from `f' to `element'.
	fun direct_smallers: Collection[E]
	do
		return self.poset.dfroms[self.element]
	end

	# Is there an edge from `object' to `t'?
	fun <=(t: E): Bool
	do
		return self.poset.tos[self.element].has(t)
	end

	# Is `t != element' and is there an edge from `object' to `t'?
	fun <(t: E): Bool
	do
		return t != self.element and self.poset.tos[self.element].has(t)
	end
end
