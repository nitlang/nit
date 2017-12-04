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

# Simple example of joinable task using threadpool
module jointask_example is example

import threadpool

# Task computing a string
class StringTask
	super JoinTask

	# Sleeping time
	var sec: Int

	# result of `self` execution
	var value: String

	# ID for printing
	var id: Int

	redef fun main do
		nanosleep(sec, 0)
		value += " id: {id}"
	end
end

var tp = new ThreadPool
var t0 = new StringTask(10, "First, long task", 0)
var tasks = new Array[StringTask]
for i in 5.times do
	tasks.add(new StringTask(1, "Small task", i + 1))
end
tp.execute(t0)
for t in tasks do tp.execute(t)
for t in tasks do
	t.join
	print t.value
end
t0.join
print t0.value
