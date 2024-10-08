# This file is part of NIT ( https://nitlanguage.org ).
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

import serialization::serialization_core

# Pre-order set graph.
# This class models an incremental pre-order graph where new nodes and edges can be added (but not removed).
# Pre-order graph has two characteristics:
#  * reflexivity: an element is in relation with itself (ie `self.has(e) implies self.has_edge(e,e)`)
#  * transitivity: `(self.has_edge(e,f) and self.has_edge(f,g)) implies self.has_edge(e,g)`
#
# Nodes and edges are added to the POSet.
#
# ~~~
# var pos = new POSet[String]
# pos.add_edge("A", "B") # add A->B
# pos.add_edge("B", "C") # add B->C
# pos.add_node("D") # add unconnected node "D"
#
# # A -> B -> C    D
#
# assert pos.has_edge("A", "B") == true  # direct
# ~~~
#
# Since a poset is transitive, direct and indirect edges are considered by default.
# Direct edges (transitive-reduction) can also be considered independently.
#
# ~~~
# assert pos.has_edge("A", "C") == true  # indirect
# assert pos.has_edge("A", "D") == false # no edge
# assert pos.has_edge("B", "A") == false # edges are directed
#
# assert pos.has_direct_edge("A", "B") == true  # direct
# assert pos.has_direct_edge("A", "C") == false # indirect
# ~~~
#
# POSet are dynamic.
# It means that the transitivity is updated while new nodes and edges are added.
# The transitive-reduction (*direct edges*)) is also updated,
# so adding new edges can make some direct edge to disappear.
#
# ~~~
# pos.add_edge("A","D")
# pos.add_edge("D","B")
# pos.add_edge("A","E")
# pos.add_edge("E","C")
#
# # A -> D -> B
# # |         |
# # v         v
# # E ------> C
#
# assert pos.has_edge("D", "C") == true # new indirect edge
# assert pos.has_edge("A", "B") == true # still an edge
# assert pos.has_direct_edge("A", "B") == false  # but no-more a direct one
# ~~~
#
# Thanks to the `[]` method, elements can be considered relatively to the poset.
# SEE `POSetElement`
class POSet[E]
	super Collection[E]
	super Comparator
	super Cloneable
	super Serializable

	redef type COMPARED: E is fixed

	redef fun iterator do return elements.keys.iterator

	# All the nodes
	private var elements = new HashMap[E, POSetElement[E]]

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
	# This allows to view the elements in their relation with others elements.
	#
	#     var poset = new POSet[String]
	#     poset.add_chain(["A", "B", "D"])
	#     poset.add_chain(["A", "C", "D"])
	#     var a = poset["A"]
	#     assert a.direct_greaters.has_exactly(["B", "C"])
	#     assert a.greaters.has_exactly(["A", "B", "C", "D"])
	#     assert a.direct_smallers.is_empty
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
	#
	# ~~~
	# var pos = new POSet[String]
	# pos.add_edge("A", "B") # add A->B
	# assert pos.has_edge("A", "C") == false
	# pos.add_edge("B", "C") # add B->C
	# assert pos.has_edge("A", "C") == true
	# ~~~
	#
	# If a reverse edge (from `t` to `f`) already exists, a loop is created.
	#
	# FIXME: Do something clever to manage loops.
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

		# Remove transitive edges.
		# Because the sets of direct is iterated, the list of edges to remove
		# is stored and is applied after the iteration.
		# The usual case is that no direct edges need to be removed,
		# so start with a `null` list of edges.
		var to_remove: nullable Array[E] = null
		for x in te.dfroms do
			var xe = self.elements[x]
			if xe.tos.has(f) then
				if to_remove == null then to_remove = new Array[E]
				to_remove.add x
				xe.dtos.remove(t)
			end
		end
		if to_remove != null then
			for x in to_remove do te.dfroms.remove(x)
			to_remove.clear
		end

		for x in fe.dtos do
			var xe = self.elements[x]
			if xe.froms.has(t) then
				xe.dfroms.remove(f)
				if to_remove == null then to_remove = new Array[E]
				to_remove.add x
			end
		end
		if to_remove != null then
			for x in to_remove do fe.dtos.remove(x)
		end

		fe.dtos.add t
		te.dfroms.add f
	end

	# Add an edge between all elements of `es` in order.
	#
	# ~~~~
	# var pos = new POSet[String]
	# pos.add_chain(["A", "B", "C", "D"])
	# assert pos.has_direct_edge("A", "B")
	# assert pos.has_direct_edge("B", "C")
	# assert pos.has_direct_edge("C", "D")
	# ~~~~
	fun add_chain(es: SequenceRead[E])
	do
		if es.is_empty then return
		var i = es.iterator
		var e = i.item
		i.next
		for f in i do
			add_edge(e, f)
			e = f
		end
	end

	# Is there an edge (transitive or not) from `f` to `t`?
	#
	# SEE: `add_edge`
	#
	# Since the POSet is reflexive, true is returned if `f == t`.
	#
	# ~~~
	# var pos = new POSet[String]
	# pos.add_node("A")
	# assert pos.has_edge("A", "A") == true
	# ~~~
	fun has_edge(f,t: E): Bool
	do
		if not elements.keys.has(f) then return false
		var fe = self.elements[f]
		return fe.tos.has(t)
	end

	# Is there a direct edge from `f` to `t`?
	#
	# ~~~
	# var pos = new POSet[String]
	# pos.add_chain(["A", "B", "C"]) # add A->B->C
	# assert pos.has_direct_edge("A", "B") == true
	# assert pos.has_direct_edge("A", "C") == false
	# assert pos.has_edge("A", "C")        == true
	# ~~~
	#
	# Note that because of loops, the result may not be the expected one.
	fun has_direct_edge(f,t: E): Bool
	do
		if not elements.keys.has(f) then return false
		var fe = self.elements[f]
		return fe.dtos.has(t)
	end

	# Write the POSet as a graphviz digraph.
	#
	# Nodes are labeled with their `to_s` so homonymous nodes may appear.
	# Edges are unlabeled.
	fun write_dot(f: Writer)
	do
		f.write "digraph \{\n"
		var ids = new HashMap[E, Int]
		for x in elements.keys do
			ids[x] = ids.length
		end
		for x in elements.keys do
			var xstr = (x or else "null").to_s.escape_to_dot
			var nx = "n{ids[x]}"
			f.write "{nx}[label=\"{xstr}\"];\n"
			var xe = self.elements[x]
			for y in xe.dtos do
				var ny = "n{ids[y]}"
				if self.has_edge(y,x) then
					f.write "{nx} -> {ny}[dir=both];\n"
				else
					f.write "{nx} -> {ny};\n"
				end
			end
		end
		f.write "\}\n"
	end

	# Display the POSet in a graphical windows.
	# Graphviz with a working -Txlib is expected.
	#
	# See `write_dot` for details.
	fun show_dot
	do
		var f = new ProcessWriter("dot", "-Txlib")
		write_dot(f)
		f.close
		f.wait
	end

	# Compare two elements in an arbitrary total order.
	#
	# This function is mainly used to sort elements of the set in an coherent way.
	#
	# ~~~~
	# var pos = new POSet[String]
	# pos.add_chain(["A", "B", "C", "D", "E"])
	# pos.add_chain(["A", "X", "C", "Y", "E"])
	# var a = ["X", "C", "E", "A", "D"]
	# pos.sort(a)
	# assert a == ["E", "D", "C", "X", "A"]
	# ~~~~
	#
	# POSet are not necessarily total orders because some distinct elements may be incomparable (neither greater or smaller).
	# Therefore this method relies on arbitrary linear extension.
	# This linear extension is a lawful total order (transitive, anti-symmetric, reflexive, and total), so can be used to compare the elements.
	#
	# The abstract behavior of the method is thus the following:
	#
	# ~~~~nitish
	# if a == b then return 0
	# if has_edge(b, a) then return -1
	# if has_edge(a, b) then return 1
	# return -1 or 1 # according to the linear extension.
	# ~~~~
	#
	# Note that the linear extension is stable, unless a new node or a new edge is added.
	redef fun compare(a, b)
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

	# Filter elements to return only the greatest ones
	#
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
	# ~~~~
	# var pos = new POSet[String]
	# pos.add_chain(["A", "B", "C", "D", "E"])
	# pos.add_chain(["A", "X", "C", "Y", "E"])
	# var a = pos.linearize(["X", "C", "E", "A", "D"])
	# assert a == ["E", "D", "C", "X", "A"]
	# ~~~~
	fun linearize(elements: Collection[E]): Array[E] do
		var lin = elements.to_a
		sort(lin)
		return lin
	end

	redef fun clone do return sub(self)

	# Return an induced sub-poset
	#
	# The elements of the result are those given in argument.
	#
	# ~~~
	# var pos = new POSet[String]
	# pos.add_chain(["A", "B", "C", "D", "E"])
	# pos.add_chain(["A", "X", "C", "Y", "E"])
	#
	# var pos2 = pos.sub(["A", "B", "D", "Y", "E"])
	# assert pos2.has_exactly(["A", "B", "D", "Y", "E"])
	# ~~~
	#
	# The full relationship is preserved between the provided elements.
	#
	# ~~~
	# for e1 in pos2 do for e2 in pos2 do
	#    assert pos2.has_edge(e1, e2) == pos.has_edge(e1, e2)
	# end
	# ~~~
	#
	# Not that by definition, the direct relationship is the transitive
	# reduction of the full reduction. Thus, the direct relationship of the
	# sub-poset may not be included in the direct relationship of self because an
	# indirect edge becomes a direct one if all the intermediates elements
	# are absent in the sub-poset.
	#
	# ~~~
	# assert pos.has_direct_edge("B", "D")  == false
	# assert pos2.has_direct_edge("B", "D") == true
	#
	# assert pos2["B"].direct_greaters.has_exactly(["D", "Y"])
	# ~~~
	#
	# If the `elements` contains all then the result is a clone of self.
	#
	# ~~~
	# var pos3 = pos.sub(pos)
	# assert pos3 == pos
	# assert pos3 == pos.clone
	# ~~~
	fun sub(elements: Collection[E]): POSet[E]
	do
		var res = new POSet[E]
		for e in self do
			if not elements.has(e) then continue
			res.add_node(e)
		end
		for e in res do
			for f in self[e].greaters do
				if not elements.has(f) then continue
				res.add_edge(e, f)
			end
		end
		return res
	end

	# Two posets are equal if they contain the same elements and edges.
	#
	# ~~~
	# var pos1 = new POSet[String]
	# pos1.add_chain(["A", "B", "C", "D", "E"])
	# pos1.add_chain(["A", "X", "C", "Y", "E"])
	#
	# var pos2 = new POSet[Object]
	# pos2.add_edge("Y", "E")
	# pos2.add_chain(["A", "X", "C", "D", "E"])
	# pos2.add_chain(["A", "B", "C", "Y"])
	#
	# assert pos1 == pos2
	#
	# pos1.add_edge("D", "Y")
	# assert pos1 != pos2
	#
	# pos2.add_edge("D", "Y")
	# assert pos1 == pos2
	#
	# pos1.add_node("Z")
	# assert pos1 != pos2
	# ~~~
	redef fun ==(other) do
		if not other isa POSet[nullable Object] then return false
		if not self.elements.keys.has_exactly(other.elements.keys) then return false
		for e, ee in elements do
			if ee.direct_greaters != other[e].direct_greaters then return false
		end
		assert hash == other.hash
		return true
	end

	redef fun hash
	do
		var res = 0
		for e, ee in elements do
			if e == null then continue
			res += e.hash
			res += ee.direct_greaters.length
		end
		return res
	end

	redef fun core_serialize_to(serializer)
	do
		# Optimize written data because this structure has duplicated data
		# For example, serializing the class hierarchy of a simple program where E is String
		# result is before: 200k, after: 56k.
		serializer.serialize_attribute("elements", elements)
	end

	redef init from_deserializer(deserializer)
	do
		deserializer.notify_of_creation self
		var elements = deserializer.deserialize_attribute("elements")
		if elements isa HashMap[E, POSetElement[E]] then
			self.elements = elements
		end
	end
end

# View of an object in a poset
# This class is a helper to handle specific queries on a same object
#
# For instance, one common usage is to add a specific attribute for each poset a class belong.
#
# ~~~nitish
# class Thing
#     var in_some_relation: POSetElement[Thing]
#     var in_other_relation: POSetElement[Thing]
# end
# var t: Thing
# # ...
# t.in_some_relation.greaters
# ~~~
class POSetElement[E]
	super Serializable

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
	#
	# ~~~~
	# var pos = new POSet[String]
	# pos.add_chain(["A", "B", "C", "D"])
	# assert pos["B"].greaters.has_exactly(["B", "C", "D"])
	# ~~~~
	fun greaters: Collection[E]
	do
		return self.tos
	end

	# Return the set of all elements `t` that have a direct edge from `element` to `t`.
	#
	# ~~~~
	# var pos = new POSet[String]
	# pos.add_chain(["A", "B", "C", "D"])
	# assert pos["B"].direct_greaters.has_exactly(["C"])
	# ~~~~
	fun direct_greaters: Collection[E]
	do
		return self.dtos
	end

	# Return the set of all elements `f` that have an edge from `f` to `element`.
	# Since the POSet is reflexive, element is included in the set.
	#
	# ~~~~
	# var pos = new POSet[String]
	# pos.add_chain(["A", "B", "C", "D"])
	# assert pos["C"].smallers.has_exactly(["A", "B", "C"])
	# ~~~~
	fun smallers: Collection[E]
	do
		return self.froms
	end

	# Return the set of all elements `f` that have an edge from `f` to `element`.
	#
	# ~~~~
	# var pos = new POSet[String]
	# pos.add_chain(["A", "B", "C", "D"])
	# assert pos["C"].direct_smallers.has_exactly(["B"])
	# ~~~~
	fun direct_smallers: Collection[E]
	do
		return self.dfroms
	end

	# Is there an edge from `element` to `t`?
	#
	# ~~~~
	# var pos = new POSet[String]
	# pos.add_chain(["A", "B", "C", "D"])
	# assert     pos["B"] <= "D"
	# assert     pos["B"] <= "C"
	# assert     pos["B"] <= "B"
	# assert not pos["B"] <= "A"
	# ~~~~
	fun <=(t: E): Bool
	do
		return self.tos.has(t)
	end

	# Is `t != element` and is there an edge from `element` to `t`?
	#
	# ~~~~
	# var pos = new POSet[String]
	# pos.add_chain(["A", "B", "C", "D"])
	# assert     pos["B"] < "D"
	# assert     pos["B"] < "C"
	# assert not pos["B"] < "B"
	# assert not pos["B"] < "A"
	# ~~~~
	fun <(t: E): Bool
	do
		return t != self.element and self.tos.has(t)
	end

	# The length of the shortest path to the root of the poset hierarchy
	#
	# ~~~~
	# var pos = new POSet[String]
	# pos.add_chain(["A", "B", "C", "D"])
	# assert pos["A"].depth == 3
	# assert pos["D"].depth == 0
	# ~~~~
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

	redef fun core_serialize_to(serializer)
	do
		serializer.serialize_attribute("poset", poset)
		serializer.serialize_attribute("element", element)
		serializer.serialize_attribute("tos", tos)
		serializer.serialize_attribute("froms", froms)
		serializer.serialize_attribute("dtos", dtos)
		serializer.serialize_attribute("dfroms", dfroms)
		serializer.serialize_attribute("count", count)

		# Don't serialize `froms`, `dtos` and `tos` as they duplicate information.
		# TODO serialize them if a flag for extra info is set on `serializer`.
	end

	redef init from_deserializer(v)
	do
		# Code generated by the serialization_phase from the compiler frontend,
		# copied here for compatibility with nith.

		super
		v.notify_of_creation self

		var poset = v.deserialize_attribute("poset", "POSet[nullable Object]")
		if v.deserialize_attribute_missing then
			v.errors.add new Error("Deserialization Error: attribute `{class_name}::poset` missing from JSON object")
		else if not poset isa POSet[E] then
			v.errors.add new AttributeTypeError(self, "poset", poset, "POSet[nullable Object]")
			if v.keep_going == false then return
		else
			self.poset = poset
		end

		var element = v.deserialize_attribute("element", "nullable Object")
		if v.deserialize_attribute_missing then
			v.errors.add new Error("Deserialization Error: attribute `{class_name}::element` missing from JSON object")
		else if not element isa E then
			v.errors.add new AttributeTypeError(self, "element", element, "nullable Object")
			if v.keep_going == false then return
		else
			self.element = element
		end

		var tos = v.deserialize_attribute("tos", "HashSet[nullable Object]")
		if v.deserialize_attribute_missing then
		else if not tos isa HashSet[E] then
			v.errors.add new AttributeTypeError(self, "tos", tos, "HashSet[nullable Object]")
			if v.keep_going == false then return
		else
			self.tos = tos
		end

		var froms = v.deserialize_attribute("froms", "HashSet[nullable Object]")
		if v.deserialize_attribute_missing then
		else if not froms isa HashSet[E] then
			v.errors.add new AttributeTypeError(self, "froms", froms, "HashSet[nullable Object]")
			if v.keep_going == false then return
		else
			self.froms = froms
		end

		var dtos = v.deserialize_attribute("dtos", "HashSet[nullable Object]")
		if v.deserialize_attribute_missing then
		else if not dtos isa HashSet[E] then
			v.errors.add new AttributeTypeError(self, "dtos", dtos, "HashSet[nullable Object]")
			if v.keep_going == false then return
		else
			self.dtos = dtos
		end

		var dfroms = v.deserialize_attribute("dfroms", "HashSet[nullable Object]")
		if v.deserialize_attribute_missing then
		else if not dfroms isa HashSet[E] then
			v.errors.add new AttributeTypeError(self, "dfroms", dfroms, "HashSet[nullable Object]")
			if v.keep_going == false then return
		else
			self.dfroms = dfroms
		end

		var count = v.deserialize_attribute("count", "Int")
		if v.deserialize_attribute_missing then
			v.errors.add new Error("Deserialization Error: attribute `{class_name}::count` missing from JSON object")
		else if not count isa Int then
			v.errors.add new AttributeTypeError(self, "count", count, "Int")
			if v.keep_going == false then return
		else
			self.count = count
		end
	end
end

redef class MapRead[K, V]
	# Return all elements of `keys` that have a value.
	#
	# ~~~
	# var map = new Map[String, String]
	# map["A"] = "a"
	# map["B"] = "b"
	# map["C"] = "c"
	#
	# assert map.filter_keys(["B"]) == ["B"]
	# assert map.filter_keys(["A", "Z", "C"]) == ["A", "C"]
	# assert map.filter_keys(["X", "Y", "Z"]).is_empty
	# ~~~
	#
	# `has_key` is used to filter.
	fun filter_keys(keys: Collection[nullable Object]): Array[K]
	do
		var res = new Array[K]
		for e in keys do
			if has_key(e) then res.add e
		end
		return res
	end

	# Search all the values in `pe.greaters`.
	#
	# Elements without values are ignored.
	#
	# Basically, values defined in all greater elements of `pe` are inherited.
	#
	# ~~~
	# var pos = new POSet[String]
	# pos.add_chain(["E", "D", "C", "B", "A"])
	# pos.add_chain(["D", "X", "B"])
	#
	# var map = new HashMap[String, String]
	# map["A"] = "a"
	# map["C"] = "c"
	# map["X"] = "x"
	# map["E"] = "e"
	#
	# assert map.lookup_all_values(pos["B"]).has_exactly(["a"])
	# assert map.lookup_all_values(pos["C"]).has_exactly(["a", "c"])
	# assert map.lookup_all_values(pos["D"]).has_exactly(["a", "c", "x"])
	# ~~~
	fun lookup_all_values(pe: POSetElement[K]): Set[V]
	do
		var res = new Set[V]
		for k in filter_keys(pe.greaters) do res.add self[k]
		return res
	end

	# Combine the values in `pe.greaters` from the most smaller elements that have a value.
	#
	# Elements without values are ignored.
	#
	# Basically, values defined in nearest greater elements of `pe` are inherited.
	#
	# ~~~
	# var pos = new POSet[String]
	# pos.add_chain(["E", "D", "C", "B", "A"])
	# pos.add_chain(["D", "X", "B"])
	#
	# var map = new HashMap[String, String]
	# map["A"] = "a"
	# map["C"] = "c"
	# map["X"] = "x"
	# map["E"] = "e"
	#
	# assert map.lookup_values(pos["B"]).has_exactly(["a"])
	# assert map.lookup_values(pos["C"]).has_exactly(["c"])
	# assert map.lookup_values(pos["D"]).has_exactly(["c", "x"])
	# ~~~
	fun lookup_values(pe: POSetElement[K]): Set[V]
	do
		var res = new Set[V]
		for k in pe.poset.select_smallest(filter_keys(pe.greaters)) do res.add self[k]
		return res
	end
end
