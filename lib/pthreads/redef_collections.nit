# This file is part of NIT (http://www.nitlanguage.org).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
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

# Redef _some_ basic collections to be thread-safe
#
# This modules is intended to be used with scripts or quick prototypes.
# It makes thread safe _all_ instances of _some_ collections which
# also slightly slow down single threaded use. For more robust software,
# it is recommended to use `threads::concurrent_collections`.
#
# Thread-safe collections:
#
# - [x] `Array`
# - [ ] `List`
# - [ ] `HashMap`
# - [ ] `HashSet`
# - [ ] `Ref`
# - [ ] `Queue`
module redef_collections

import pthreads

# Thread-safe refinements of most of the known methods (except `enlarge`)
redef class Array
	var mutex = new Mutex

	redef fun add(e)
	is
		no_contract
	do
		mutex.lock
		super
		mutex.unlock
	end

	redef fun []=(index, e)
	is
		no_contract
	do
		mutex.lock
		super
		mutex.unlock
	end

	redef fun [](index)
	is
		no_contract
	do
		mutex.lock
		var r = super
		mutex.unlock
		return r
	end

	redef fun remove_at(index)
	is
		no_contract
	do
		mutex.lock
		super
		mutex.unlock
	end

	redef fun shift
	is
		no_contract
	do
		mutex.lock
		var r = super
		mutex.unlock
		return r
	end

	redef fun unshift(e)
	is
		no_contract
	do
		mutex.lock
		super
		mutex.unlock
	end

	redef fun insert_all(from, pos)
	is
		no_contract
	do
		mutex.lock
		super
		mutex.unlock
	end

	redef fun swap_at(a, b)
	is
		no_contract
	do
		mutex.lock
		super
		mutex.unlock
	end

	redef fun ==(o)
	is
		no_contract
	do
		mutex.lock
		var r = super
		mutex.unlock
		return r
	end

	redef fun enlarge(cap)
	is
		no_contract
	do
		mutex.lock
		super
		mutex.unlock
	end
end
