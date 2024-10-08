# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2014 Julien Pagès <julien.pages@lirmm.fr>
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

# Perfect hashing and perfect numbering
module perfect_hashing

# Class for Perfect Hashing operations with perfect numbering
# It also stores the free identifiers for the perfect numbering
class Perfecthashing

	# Union of interval for implementing perfect numbering
	# Represents the interval of free identifiers
	# A null value represents the upper bound of identifier
	private var interval = new List[Couple[nullable Int, nullable Int]]

	# An array used as a temporary Hashtable for
	# checking there is no collision between identifiers
	private var tempht = new Array[nullable Int]

	# Initialize the structure of free identifiers
	init
	do
		# By default, all identifiers are available
		interval.push(new Couple[nullable Int, nullable Int](1, null))
	end

	# Returns a mask composed by discriminants bits
	# for these given identifiers
	# The mask + 1 value is the size of the hastable to create
	fun phand(ids: Array[Int]): Int
	do
		var mask = 1

		# If ids is null return 1
		if ids.length == 0 then
			return mask
		end

		var orMask = 0
		var andMask = 0
		for i in ids do
			orMask |= i
			andMask &= i
		end

		mask = orMask ^ andMask

		# Re-initialize the hashtable with null values
		for i in [0..(mask+1)] do tempht[i] = null

		# Optimize the already computed mask
		var newmask = 0
		var i = mask.highest_bit
		while i != 0 do
			if mask.getbit(i) == 1 then
				newmask = mask ^ (1 << i)

				# If there is no collision, replace the old mask
				if phandp(ids, newmask) then
					mask = newmask
				end
			end

			i -= 1
		end

		return mask + 1
	end

	# Checks if the mask is a perfect hashing function for
	# these identifiers
	fun phandp(ids: Array[Int], mask: Int): Bool
	do
		for i in ids do
			var hv = i & mask
			if tempht[hv] == mask then
				return false
			else
				tempht[hv] = mask
			end
		end

		return true
	end

	# Perfect numbering : give new free identifiers
	# ids : identifiers to hash (super-classes)
	# n : number of required free identifiers
	# idc : This array will be filled with n free identifiers
	# return the size of hashTable to create for theses identifiers (mask + 1)
	#
	#     var ph = new Perfecthashing
	#     var idc = new Array[Int]
	#     assert ph.pnand([3, 7, 10], 1, idc) == 6
	#     assert idc[0] == 4
	#     var idc1 = new Array[Int]
	#     assert ph.pnand([3, 7, 10], 1, idc1) == 6
	#     assert idc1[0] == 6
	fun pnand(ids: Array[Int], n: Int, idc: Array[Int]): Int
	do
		var mask = phand(ids) -1
		var i = 0
		while n+ids.length > (1 << mask.number_bits(1)) do
			# When there are not enough 1-bits
			if mask.getbit(i) == 0 then
				mask = mask ^ (1 << i)
			end
			i += 1
		end

		# Resetting hashtable
		for j in [0..(mask+1)] do tempht[j] = null

		# Set the temporary hashtable for `compute_least_free_ids`
		phandp(ids, mask)

		# Fill the given array with n free identifiers
		compute_least_free_ids(n, mask, idc)

		return mask + 1
	end


	# Compute free identifiers for future perfect numbering
	# n : number of required ids
	# mask : perfect hashing parameter
	# idc : This array will be filled with n free identifiers
	private fun compute_least_free_ids(n: Int, mask: Int, idc: Array[Int])
	do
		while n != 0 do
			idc.push(first_valid_id(mask))
			n = n - 1
		end
	end

	# Returns the first valid free identifier which correspond to this mask
	private fun first_valid_id(mask: Int): Int
	do
		# Search for the first valid free identifier
		var inter = interval.iterator
		var found = false
		var id = 0
		while inter.is_ok and not found do
			var i = inter.item.first.as(not null)
			while i != inter.item.second and not found do
				# Tests if this id is free for this mask
				var hv = i & mask

				# If the hashtable if full, push an empty item
				if hv >= tempht.length then
					tempht.push(null)
				end

				if tempht[hv] != mask then
					found = true
					id = i
				end
				i = i + 1
			end

			if not found then
				inter.next
			end
		end

		# Updates the structure of union of intervals
		if id == inter.item.first then
			if inter.item.first == inter.item.second then
				inter.delete
			else
				inter.item.first += 1
			end
		else
			if id != inter.item.first and id != inter.item.second then
				# We need to split in two this interval
				var last = inter.item.second
				inter.item.second = id - 1
				inter.next

				var p = new Couple[nullable Int, nullable Int](id + 1, last)
				if inter.is_ok then
					inter.insert_before(p)
				else
					interval.push(p)
				end
			else
				inter.item.second = id - 1
			end
		end

		return id
	end
end
