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

# Simple numerical statistical analysis and presentation
module counter

import poset

# A counter counts occurrences of things
# Use this instead of a `HashMap[E, Int]`
class Counter[E: Object]
	super Map[E, Int]

	# Total number of counted occurrences
	var sum: Int = 0

	private var map = new HashMap[E, Int]

	redef fun iterator do return map.iterator

	# The number of counted occurrences of `e`
	redef fun [](e: E): Int
	do
		var map = self.map
		if map.has_key(e) then return map[e]
		return 0
	end

	redef fun []=(e: E, value: Int)
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

	# Count one more occurrence of `e`
	fun inc(e: E)
	do
		self.map[e] = self[e] + 1
		sum += 1
	end

	# Return an array of elements sorted by occurrences
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
		do return e.to_s
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

	# Return the element with the highest value
	fun max: nullable E do
		var max: nullable Int = null
		var elem: nullable E = null
		for e, v in map do
			if max == null or v > max then
				max = v
				elem = e
			end
		end
		return elem
	end

	# Return the couple with the lowest value
	fun min: nullable E do
		var min: nullable Int = null
		var elem: nullable E = null
		for e, v in map do
			if min == null or v < min then
				min = v
				elem = e
			end
		end
		return elem
	end

	# Values average
	fun avg: Float do
		if values.is_empty then return 0.0
		return (sum / values.length).to_f
	end

	# The standard derivation of the counter values
	fun std_dev: Float do
		var avg = self.avg
		var sum = 0.0
		for value in map.values do
			sum += (value.to_f - avg).pow(2.0)
		end
		return (sum / map.length.to_f).sqrt
	end
end

private class CounterComparator[E: Object]
	super Comparator[E]
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
