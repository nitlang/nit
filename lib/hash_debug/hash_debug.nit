# This file is part of NIT ( https://nitlanguage.org ).
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Inject behavior analysis to hash-collections (HashMap, HashSet, etc.)
# Accesses to hash collections are instrumented, and statistics are
# automatically displayed at the end of the program.
#
# This module helps to detect, and track bad behavior on hash-collections,
# especially collisions.
#
# Simple usage:
#
# 1. compile your program with `-m hash_debug`
# 2. execute your program.
#
# Advanced usage:
#
# import this module and use the functions `Sys::show_hash_stats` and
# `Sys::clear_hash_stats` at strategic points.
#
# You can also use some dynamic call-graph tools (like valgrind) and look
# at callers of `HashCollection::gt_collide` and `HashCollection::st_collide`.
module hash_debug

intrude import core::collection::hash_collection
import core

redef class Sys
	# Number of calls of `HashCollection::node_at_idx`
	var gt_count = 0
	# Number of calls of `HashCollection::node_at_idx` that collided
	var gt_coll = 0
	# Total length of collisions on calls of `HashCollection::node_at_idx` that collided
	var gt_tot_coll = 0
	# Total length of hash collections receiver of `HashCollection::node_at_idx`
	var gt_tot_length = 0
	# Total capacity of hash collections receiver `HashCollection::node_at_idx`
	var gt_tot_cap = 0

	# Number of calls of `HashCollection::store`
	var st_count = 0
	# Number of calls of `HashCollection::store` that collided
	var st_coll = 0
	# Total length of collisions on calls of `HashCollection::store` that collided
	var st_tot_coll = 0
	# Total length of hash collections receiver of `HashCollection::store`
	var st_tot_length = 0
	# Total capacity of hash collections receiver `HashCollection::store`
	var st_tot_cap = 0

	# Number of calls of `HashCollection::enlarge`
	var en_count = 0
	# Total length of hash collections receiver of `HashCollection::enlarge`
	var en_tot_length = 0
	# Total capacity of hash collections receiver `HashCollection::enlarge`
	var en_tot_cap = 0

	private fun div(n,d: Int): String
	do
		if d == 0 then return "NA"
		return (n.to_f / d.to_f).to_precision(2)
	end

	# Activate the automatic call of `show_hash_stats` at the end of programs
	# If false, you can still manually invoke `show_hash_stats`.
	#
	# Default: true
	var auto_hash_display = true is writable

	# Force the display of the current hash statistics
	fun show_hash_stats
	do
		if gt_count == 0 and st_count == 0 then
			print "~~~No hash statistics~~~"
			return
		end

		print """
~~~Hash statistics~~~
GET:
number of get and has_key: {{{gt_count}}}
number of collisions: {{{gt_coll}}} ({{{div(gt_coll*100,gt_count)}}}%)
average length of collisions: {{{div(gt_tot_coll,gt_coll)}}}
average length of considered collections: {{{div(gt_tot_length,sys.gt_count)}}}
average capacity of considered collections: {{{div(gt_tot_cap,sys.gt_count)}}} ({{{div(gt_tot_cap*100,gt_tot_length)}}}%)

STORE:
number of stores: {{{st_count}}}
number of collisions: {{{st_coll}}} ({{{div(st_coll*100,st_count)}}}%)
average length of collisions: {{{div(st_tot_coll,st_coll)}}}
average length of considered collections: {{{div(st_tot_length,sys.st_count)}}}
average capacity or considered collections: {{{div(st_tot_cap,sys.st_count)}}} ({{{div(st_tot_cap*100,st_tot_length)}}}%)

ENLARGE:
number of enlarge: {{{en_count}}}
average length of considered collections: {{{div(en_tot_length,sys.en_count)}}}
average capacity or considered collections: {{{div(en_tot_cap,sys.en_count)}}} ({{{div(en_tot_cap*100,en_tot_length)}}}%)
~~~~~~"""
	end

	# Reset the hash statistics to 0
	fun clear_hash_stats
	do
		gt_count = 0
		gt_coll = 0
		gt_tot_coll = 0
		gt_tot_length = 0
		gt_tot_cap = 0

		st_count = 0
		st_coll = 0
		st_tot_coll = 0
		st_tot_length = 0
		st_tot_cap = 0
	end

	redef fun run do
		super
		if auto_hash_display then show_hash_stats
	end
end

redef fun exit(i)
do
	if sys.auto_hash_display then sys.show_hash_stats
	super
end

redef class HashCollection[K]
	redef fun node_at_idx(i,k)
	do
		sys.gt_count += 1
		sys.gt_tot_length += _the_length
		sys.gt_tot_cap += _capacity
		var c = _array[i]
		if c != null and c._next_in_bucklet != null then gt_collide(i,k)

		return super
	end

	redef fun enlarge(c)
	do
		super
		sys.en_count += 1
		sys.en_tot_length += _the_length
		sys.en_tot_cap += _capacity
	end

	# Count and update length of collisions for `node_at_idx`
	# Note for dynamic call-graph analysis: callers of this functions are
	# responsible of collisions.
	fun gt_collide(i: Int, k: K)
	do
		var c = _array[i]
		sys.gt_coll += 1
		while c != null do
			sys.gt_tot_coll += 1
			c = c._next_in_bucklet
		end
	end

	redef fun store(i, n)
	do
		sys.st_count += 1
		if _array[i] != null then st_collide(i,n)
		sys.st_tot_length += _the_length
		sys.st_tot_cap += _capacity

		super
	end

	# Count and update length of collisions for `store`
	# Note for dynamic call-graph analysis: callers of this functions are
	# responsible of collisions.
	fun st_collide(i: Int, n: N)
	do
		var c = _array[i]
		sys.st_coll += 1
		sys.st_tot_coll += 1
		while c != null do
			sys.st_tot_coll += 1
			c = c._next_in_bucklet
		end
	end
end
