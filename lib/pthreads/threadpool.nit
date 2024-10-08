# This file is part of NIT (https://nitlanguage.org).
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

# Introduces a minimal ThreadPool implementation using Tasks
module threadpool

intrude import pthreads
import concurrent_collections

# A simple ThreadPool implemented with an array
class ThreadPool
	private var queue = new ConcurrentList[Task]
	private var mutex = new Mutex
	private var cond = new NativePthreadCond
	private var threads = new Array[PoolThread]

	# Number of threads used, can only grow after the first call to `execute`
	var nb_threads = 5 is optional, writable

	private fun create_threads do
		while threads.length < nb_threads do
			var t = new PoolThread(queue, mutex, cond)
			t.start
			threads.add t
		end
	end

	# Adds a Task into the queue
	fun execute(task: Task) do
		create_threads
		queue.push(task)
		cond.signal
	end

	# Join all threads, waiting for all tasks to be completed
	fun join_all do
		# Wait
		for t in threads do t.join

		# Reset
		threads.clear
	end
end

# A Thread running in a threadpool
private class PoolThread
	super Thread

	var queue: ConcurrentList[Task]
	var mutex: Mutex
	var cond : NativePthreadCond

	redef fun main do
		loop
			var t = null
			mutex.lock
			if queue.is_empty then cond.wait(mutex.native.as(not null))
			if not queue.is_empty then
				t = queue.shift
			end
			mutex.unlock
			if t != null then
				t.main
				t.after_main
			end
		end
	end
end

redef class Task
	# Additional work executed after `main` from a `ThreadPool`
	private fun after_main do end
end

# A Task which is joinable, meaning it can return a value and if the value is not set yet, it blocks the execution
class JoinTask
	super Task

	# Is `self` done?
	var is_done = false

	private var mutex = new Mutex
	private var cond: nullable NativePthreadCond = null

	# Return immediatly if the task terminated, or block waiting for `self` to terminate
	fun join do
		mutex.lock
		if not is_done then
			var cond = new NativePthreadCond
			self.cond = cond
			cond.wait(mutex.native.as(not null))
		end
		mutex.unlock
	end

	redef fun after_main do
		# TODO move this at the end of main so all `JoinTask` can be joined
		# no matter what calls `main`.

		mutex.lock
		is_done = true
		var tcond = cond
		if tcond != null then tcond.signal
		mutex.unlock
	end
end
