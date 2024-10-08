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

# Test the multi-threaded dynamic `do catch` mechanism
import pthreads

# A Thread that does a lot of `do catch`
class CatchThread
	super Thread

	var x = 10000
	var caught = 0

	redef fun main do
		do
			rec_do_catch
		catch
		end
		print "caught {caught} aborts"
		return null
	end

	fun rec_do_catch do
		do
			x -= 1
			if x > 0 then
				rec_do_catch
			else
				abort
			end
		catch
			self.caught += 1
			abort
		end
	end
end

var ts = new Array[CatchThread]
var nb_threads = 10
for i in [0..nb_threads[ do
	var t = new CatchThread
	ts.add(t)
	t.start
end
for t in ts do t.join
