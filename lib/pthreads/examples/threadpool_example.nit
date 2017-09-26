# This file is part of NIT (http://www.nitlanguage.org).
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

# Simple example using threadpool
module threadpool_example is example

import threadpool

# Task printing "hello world" on standard output
class HWTask
	super JoinTask

	# Sleeping time
	var sec: Int

	# id
	var id: Int
	redef fun main do
		print "Hello from {id}"
		nanosleep(sec, 0)
		print "World from {id}"
	end
end

var tp = new ThreadPool
for i in 100.times do
	var t = new HWTask(2.rand, i)
	tp.execute(t)
end

nanosleep(20,10)
