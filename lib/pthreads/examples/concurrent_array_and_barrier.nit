# This file is part of NIT (https://nitlanguage.org).
#
# Copyright 2014 Alexis Laferrière <alexis.laf@xymus.net>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#	 http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# A basic usage example of the modules `pthreads` and `pthreads::cocurrent_collections`
#
# 20 threads share an array and a barrier. They each insert 1000 strings into
# the array and wait at a barrier before finishing.
module concurrent_array_and_barrier is example

import pthreads::concurrent_collections

private class MyThread
	super Thread

	# This `ConcurrentArray` has its own `Mutex`
	var array: ConcurrentArray[String]

	# Use an explicit `Barrier`
	var barrier: Barrier

	var id: Int

	redef fun main
	do
		# Print and add to Array 1000 times
		for i in 1000.times do
			var str = "thread {id}: {i}"
			array.add str
		end

		# Wait at the `barrier`
		barrier.wait

		return id
	end
end

var n_threads = 20

# This `ConcurrentArray` has its own `Mutex`
var array = new ConcurrentArray[String]

# Use an explicit `Barrier`
var barrier = new Barrier(n_threads)

# Create all our threads
var threads = new Array[Thread]
for t in n_threads.times do
	var thread = new MyThread(array, barrier, t)
	threads.add thread
	thread.start
end

# Wait for the threads to complete
for thread in threads do
	print "Thread {thread.join or else "null"} is done"
end

print "{array.length} strings inserted"
