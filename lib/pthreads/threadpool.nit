# This file is part of NIT (http://www.nitlanguage.org).
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
	private var queue = new ConcurrentList[Task].wrap(new List[Task])
	private var mutex = new Mutex
	private var cond = new NativePthreadCond

	# Number of threads used
	var nb_threads: Int is noinit

	init do
		for i in [0..nb_threads[ do
			var t = new PoolThread(queue, mutex, cond)
			t.start
		end
	end

	private fun set_nb_threads(nb: nullable Int) is autoinit do nb_threads = nb or else 5

	# Adds a Task into the queue
	fun execute(task: Task) do
		queue.push(task)
		cond.signal
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
			var t: nullable Task = null
			mutex.lock
			if queue.is_empty then cond.wait(mutex.native.as(not null))
			if not queue.is_empty then
				t = queue.pop
			end
			mutex.unlock
			if t != null then t.main
		end
	end
end
