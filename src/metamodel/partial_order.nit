# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
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

# Partial ordered sets (ie hierarchies)
module partial_order

# Handles partial ordered sets (ie hierarchies)
# Thez are built by adding new element at the bottom of the hierarchy
class PartialOrder[E: Object]
	super Collection[E]
	# Elements
	var _elements: Map[E, PartialOrderElement[E]]

	# Elements
	var _elements_list: Array[E]

	# The roots of the hierarchy are elements without greaters
	readable var _roots: Array[E]

# Collection

	redef fun is_empty do return _elements.is_empty
	
	redef fun length do return _elements.length

	redef fun first do return _elements_list.first

	redef fun has(e) do return _elements.has_key(e)

	redef fun has_only(e) do return _elements.length == 1 and _elements.values.first == e

	redef fun count(e)
	do
		if has(e) then
			return 1
		else
			return 0
		end
	end

	redef fun iterator do return _elements_list.iterator

# Access	

	# Return the element associed with the item
	fun [](e: E): PartialOrderElement[E]
	do
		return _elements[e]
	end

	# Return a dot representation
	fun to_dot: String
	do
		var s = new FlatBuffer
		s.append(to_dot_header)
		for e in _elements.values do
			s.append(to_dot_node(e.value))
			for d in e.direct_greaters do
				s.append(to_dot_edge(e.value, d))
			end
		end
		s.append("}\n")
		return s.to_s
	end

	# Called to display the header
	protected fun to_dot_header: String
	do
		return "digraph G \{\ngraph [rankdir=BT];\n"
	end
	
	# Called to display a node
	protected fun to_dot_node(e: E): String
	do
		return "\"{e}\";\n"
	end

	# Called to draw an edge between `e1' and `e2' when `e1' < `e2' 
	protected fun to_dot_edge(e1: E, e2: E): String
	do
		return "\"{e1}\" -> \"{e2}\";\n"
	end

	# Get an array consisting of only minimal elements
	fun select_smallests(c: nullable Collection[E]): Array[E]
	do
		if c == null then return new Array[E]
		assert has_all(c)
		var res = new Array[E].with_capacity(c.length)
		var tmp = new Array[E].with_capacity(c.length)
		for e in c do
			# try to add `e' to the set of smallests
			var r = add_to_smallests(e, res, tmp)
			if r then
				# `tmp' contains the new smallests
				# therefore swap
				var t = tmp
				tmp = res
				res = t
			end
		end
		return res
	end

	# Add a new element inferior of some others
	fun add(e: E, supers: nullable Collection[E]): PartialOrderElement[E]
	do
		assert not has(e)
		assert supers == null or has_all(supers)
		var directs = select_smallests(supers)
		var poe = new_poe(e, directs)
		_elements[e] = poe
		_elements_list.add(e)
		if supers == null or supers.is_empty then
			_roots.add(e)
		end
		return poe
	end

	# Are all these elements in the order
	fun has_all(e: Collection[E]): Bool
	do
		for i in e do
			if not has(i) then
				return false
			end
		end
		return true
	end

	# factory for partial order elements
	protected fun new_poe(e: E, directs: Array[E]): PartialOrderElement[E]
	do
		return new PartialOrderElement[E](self, e, directs)
	end

	protected fun add_to_smallests(e: E, from: Array[E], to: Array[E]): Bool
	# an element `e' 
	# some others elements `from' incomparable two by two
	# Return false if `from' < e
	# else return false and
	# fill `to' with smallests incomparable elements (including `e')
	do
		to.clear
		var poe = self[e]
		for i in from do
			if poe > i then
				return false
			end
			if not poe < i then
				to.add(i)
			end
		end
		to.add(e)
		return true
	end

	protected fun compute_smallers_for(poe: PartialOrderElement[E], set: Set[E])
	do
		var e = poe.value
		for s in _elements.values do
			if s < e then
				set.add(s.value)
			end
		end
	end

	init
	do
		_elements = new HashMap[E, PartialOrderElement[E]]
		_elements_list = new Array[E]
		_roots = new Array[E]
	end
end

class PartialOrderElement[E: Object]
	# The partial order where belong self
	readable var _order: PartialOrder[E] 

	# The value handled by self
	readable var _value: E 
	
	# Current rank in the hierarchy
	# Roots have 0
	# Sons of roots have 1
	# Etc.
	readable var _rank: Int 

	# Elements that are direclty greater than self
	readable var _direct_greaters: Array[E]
	
	# Elements that are direclty smallers than self
	readable var _direct_smallers: Array[E]

	# Elements that are strictly greater than self
	readable var _greaters: Set[E]

	# Cached result of greaters_and_self
	var _greaters_and_self_cache: nullable Array[E]

	# Elements that are self or greater than self
	fun greaters_and_self: Collection[E]
	do
		if _greaters_and_self_cache == null then
			_greaters_and_self_cache = _greaters.to_a
			_greaters_and_self_cache.add(_value)
		end
		return _greaters_and_self_cache.as(not null)
	end
	
	# Cached value of _order.length to validade smallers_cache
	var _smallers_last_length: Int = 0

	# Cached result of smallers
	var _smallers_cache: Set[E]

	# Elements that are strictly smaller than self
	fun smallers: Collection[E]
	do
		if _smallers_last_length < _order.length then
			_order.compute_smallers_for(self, _smallers_cache)
			_smallers_last_length = _order.length
		end
		return _smallers_cache
	end

	# Cached result of linear_extension
	var _linear_extension_cache: nullable Array[E]

	# Return a linear extension of self
	# FIXME: Uses the C++ algo that is not good!
	fun linear_extension: Array[E]
	do
		if _linear_extension_cache == null then
			var res = new Array[E]
			var res2 = new Array[E]
			res.add(value)
			for s in direct_greaters do
				var sl = order[s].linear_extension
				res2.clear
				for e in res do
					if not sl.has(e) then res2.add(e)
				end
				res2.append(sl)

				var tmp = res
				res = res2
				res2 = tmp
			end
			_linear_extension_cache = res
		end
		return _linear_extension_cache.as(not null)
	end

	# Cached result of reverse_linear_extension
	var _reverse_linear_extension_cache: nullable Array[E]

	# Return a reverse linear extension of self
	# FIXME: Uses the C++ algo that is not good!
	fun reverse_linear_extension: Array[E]
	do
		if _reverse_linear_extension_cache == null then
			var res = new HashSet[E]
			for s in direct_greaters do
				var sl = order[s].linear_extension
				res.add_all(sl)
			end
			res.add(value)
			_linear_extension_cache = res.to_a
		end
		return _linear_extension_cache.as(not null)
	end

	# Is value < o according to order?
	fun <(o: E): Bool
	do
		return _greaters.has(o)
	end

	# Is value <= o according to order?
	fun <=(o: E): Bool
	do
		return _value == o or _greaters.has(o)
	end

	# Is value > o according to order?
	fun >(o: E): Bool
	do
		return _order[o] < _value
	end

	# Is value >= o according to order?
	fun >=(o: E): Bool
	do
		return _value == o or _order[o] < _value
	end

	protected fun register_direct_smallers(e: E)
	do
		_direct_smallers.add(e)
	end

	protected init(o: PartialOrder[E], e: E, directs: Array[E])
	do
		_order = o
		_value = e
		_direct_greaters = directs
		_direct_smallers = new Array[E]
		
		_greaters = new HashSet[E]
		_smallers_cache = new HashSet[E]
		
		var g = _greaters
		var r = 0
		for ee in directs do
			g.add(ee)
			var poee = _order[ee]
			if poee.rank >= r then
				r = poee.rank + 1
			end
			poee.register_direct_smallers(e)
			for eee in poee.greaters do
				g.add(eee)
			end
		end
		_rank = r
	end
end
