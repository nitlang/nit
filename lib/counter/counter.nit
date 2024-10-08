# This file is part of NIT ( https://nitlanguage.org ).
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

# Simple numerical statistical analysis and presentation
module counter

import poset

# A counter counts occurrences of things
# Use this instead of a `HashMap[E, Int]`
#
# ~~~
# var c = new Counter[String].from(["a", "a", "b", "b", "b", "c"])
# assert c["a"]   == 2
# assert c["b"]   == 3
# assert c["c"]   == 1
# assert c["d"]   == 0
# ~~~
#
# The counter class can also be used to gather statistical informations.
#
# ~~~~
# assert c.length == 3   # because 3 distinct values
# assert c.max    == "b" # because "b" has the most count (3)
# assert c.avg    == 2.0 # because it is the mean of the counts
# ~~~~
class Counter[E]
	super Map[E, Int]

	# Total number of counted occurrences
	#
	# ~~~
	# var c = new Counter[String]
	# assert c.sum == 0
	# c.inc_all(["a", "a", "b", "b", "b", "c"])
	# assert c.sum == 6
	# ~~~
	var sum: Int = 0

	private var map = new HashMap[E, Int]

	redef fun iterator do return map.iterator

	# The number of counted occurrences of `e`
	redef fun [](e)
	do
		var map = self.map
		if map.has_key(e) then return map[e]
		return 0
	end

	redef fun []=(e, value)
	do
		sum -= self[e]
		self.map[e] = value
		sum += value
	end

	redef fun keys do return map.keys

	redef fun values do return map.values

	redef fun length do return map.length

	redef fun is_empty do return map.is_empty

	redef fun clear do
		sum = 0
		map.clear
	end

	redef fun add_all(other) do
		for k, v in other do
			self[k] += v
		end
	end

	# Count one more occurrence of `e`
	fun inc(e: E)
	do
		self.map[e] = self[e] + 1
		sum += 1
	end

	# Count one more for each element of `es`
	fun inc_all(es: Collection[E])
	do
		for e in es do inc(e)
	end

	# Decrement the value of `e` by 1
	fun dec(e: E) do
		if not has_key(e) then
			self.map[e] = 0
		else
			self.map[e] = self[e] - 1
			sum += - 1
		end
	end

	# Decrement the value for each element of `es`
	fun dec_all(es: Collection[E])
	do
		for e in es do dec(e)
	end

	# A new Counter initialized with `inc_all`.
	init from(es: Collection[E])
	do
		inc_all(es)
	end

	# Return an array of elements sorted by occurrences
	#
	# ~~~
	# var c = new Counter[String].from(["a", "a", "b", "b", "b", "c"])
	# assert c.sort == ["c", "a", "b"]
	# ~~~
	fun sort: Array[E]
	do
		var res = map.keys.to_a
		var sorter = new CounterComparator[E](self)
		sorter.sort(res)
		return res
	end

	# The method used to display an element
	# @toimplement by default just call `to_s` on the element
	protected fun element_to_s(e: E): String
	do
		if e == null then return "null"
		return e.to_s
	end

	# Display statistical information
	fun print_summary
	do
		var list = self.sort
		print " population: {list.length}"
		if list.is_empty then return
		print " minimum value: {self[list.first]}"
		print " maximum value: {self[list.last]}"
		print " total value: {self.sum}"
		print " average value: {div(self.sum,list.length)}"
		print " distribution:"
		var count = 0
		var sum = 0
		var limit = self[list.first]
		for t in list do
			if self[t] > limit then
				print "  <={limit}: sub-population={count} ({div(count*100,list.length)}%); cumulated value={sum} ({div(sum*100,self.sum)}%)"
				count = 0
				sum = 0
				while self[t] > limit do
					limit = limit * 2
					if limit == 0 then limit = 1
				end
			end
			count += 1
			sum += self[t]
		end
		print "  <={limit}: sub-population={count} ({div(count*100,list.length)}%); cumulated value={sum} ({div(sum*100,self.sum)}%)"
	end

	# Display up to `count` most used elements and `count` least used elements
	# Use `element_to_s` to display the element
	fun print_elements(count: Int)
	do
		print " list:"
		var list = self.sort
		var min = count
		if list.length <= count*2 then min = list.length
		for i in [0..min[ do
			var t = list[list.length-i-1]
			print "  {element_to_s(t)}: {self[t]} ({div(self[t]*100,self.sum)}%)"
		end
		if list.length <= count*2 then return
		print "  ..."
		for i in [0..min[ do
			var t = list[min-i-1]
			print "  {element_to_s(t)}: {self[t]} ({div(self[t]*100,self.sum)}%)"
		end
	end

	# Return the element with the highest value (aka. the mode)
	#
	# ~~~
	# var c = new Counter[String].from(["a", "a", "b", "b", "b", "c"])
	# assert c.max == "b"
	# ~~~
	#
	# If more than one max exists, the first one is returned.
	fun max: nullable E do
		var max: nullable Int = null
		var elem: nullable E = null
		for e in map.keys do
			var v = map[e]
			if max == null or v > max then
				max = v
				elem = e
			end
		end
		return elem
	end

	# Return the couple with the lowest value
	#
	# ~~~
	# var c = new Counter[String].from(["a", "a", "b", "b", "b", "c"])
	# assert c.min == "c"
	# ~~~
	#
	# If more than one min exists, the first one is returned.
	fun min: nullable E do
		var min: nullable Int = null
		var elem: nullable E = null
		for e in map.keys do
			var v = map[e]
			if min == null or v < min then
				min = v
				elem = e
			end
		end
		return elem
	end

	# Values average (aka. arithmetic mean)
	#
	# ~~~
	# var c = new Counter[String].from(["a", "a", "b", "b", "b", "c"])
	# assert c.avg == 2.0
	# ~~~
	fun avg: Float do
		if values.is_empty then return 0.0
		return (sum / values.length).to_f
	end

	# The standard derivation of the counter values
	#
	# ~~~
	# var c = new Counter[String].from(["a", "a", "b", "b", "b", "c"])
	# assert c.std_dev > 0.81
	# assert c.std_dev < 0.82
	# ~~~
	fun std_dev: Float do
		var avg = self.avg
		var sum = 0.0
		for value in map.values do
			sum += (value.to_f - avg).pow(2.0)
		end
		return (sum / map.length.to_f).sqrt
	end

	# The information entropy (Shannon entropy) of the elements in the counter (in bits).
	fun entropy: Float
	do
		var res = 0.0
		var sum = self.sum.to_f
		for k, v in self do
			var f = v.to_f / sum
			res = res - f * f.log_base(2.0)
		end
		return res
	end

	# Prints the content of the counter along with statistics
	#
	# Content is printed in order (if available) from lowest to highest on the keys.
	# Else, it is printed as-is
	fun print_content do
		var a = keys.to_a
		if a isa Array[Comparable] then default_comparator.sort(a)
		var subtotal = 0
		for i in a do
			subtotal += self[i]
			printn("* ", i or else "null", " = ", self[i], " => occurences ", self[i].to_f / sum.to_f * 100.0, "%, cumulative ", subtotal.to_f / sum.to_f * 100.0, "% \n")
		end
	end

	# Packs elements into separate arrays based on their occurences
	#
	# ~~~nit
	#	var x = "aaaabbbeeecccddhhgjt"
	#	var c = new Counter[Char]
	#	for i in x do c.inc i
	#	var ret = c.pack
	#	assert ret.join(", ") == """[t,g,j], [d,h], [c,b,e], [a]"""
	# ~~~
	fun pack: Array[Array[E]] do
		var ret = new Array[Array[E]]
		var base = self.sort
		if base.is_empty then return ret
		var curr = new Array[E]
		curr.push base.first
		var curr_score = self[base.first]
		base.shift
		for i in base do
			if self[i] == curr_score then
				curr.push i
				continue
			end
			curr_score = self[i]
			ret.push curr
			curr = new Array[E]
			curr.push i
		end
		if not curr.is_empty then ret.push curr
		return ret
	end
end

redef class Collection[E]
	# Create and fill up a counter with the elements of `self.
	#
	# ~~~
	# var cpt = "abaa".chars.to_counter
	# assert cpt['a'] == 3
	# assert cpt['b'] == 1
	# assert cpt.length == 2
	# assert cpt.sum == 4
	# ~~~
	fun to_counter: Counter[E]
	do
		var res = new Counter[E]
		res.inc_all(self)
		return res
	end
end

private class CounterComparator[E]
	super Comparator
	redef type COMPARED: E
	var counter: Counter[E]
	redef fun compare(a,b) do return self.counter.map[a] <=> self.counter.map[b]
end

redef class POSet[E]
	private fun show_counter(c: Counter[Int])
	do
		var list = c.sort
		default_comparator.sort(list)
		for e in list do
			print " {e} -> {c[e]} times ({div(c[e]*100, c.sum)}%)"
		end
	end

	# Display exhaustive metrics about the poset
	fun print_metrics
	do
		var nb_greaters = new Counter[E]
		var nb_direct_greaters = new Counter[E]
		var nb_smallers = new Counter[E]
		var nb_direct_smallers = new Counter[E]
		var nb_direct_edges = 0
		var nb_edges = 0
		for n in self do
			var ne = self[n]
			nb_edges += ne.greaters.length
			nb_direct_edges += ne.direct_greaters.length
			nb_greaters[n] = ne.greaters.length
			nb_direct_greaters[n] = ne.direct_greaters.length
			nb_smallers[n] = ne.smallers.length
			nb_direct_smallers[n] = ne.direct_smallers.length
		end
		print "Number of nodes: {self.length}"
		print "Number of edges: {nb_edges} ({div(nb_edges,self.length)} per node)"
		print "Number of direct edges: {nb_direct_edges} ({div(nb_direct_edges,self.length)} per node)"
		print "Distribution of greaters"
		nb_greaters.print_summary
		print "Distribution of direct greaters"
		nb_direct_greaters.print_summary
		print "Distribution of smallers"
		nb_smallers.print_summary
		print "Distribution of direct smallers"
		nb_direct_smallers.print_summary
	end
end

# Helper function to display `n/d` and handle division by 0
fun div(n: Int, d: Int): String
do
	if d == 0 then return "na"
	return ((100*n/d).to_f/100.0).to_precision(2)
end
