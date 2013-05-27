# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2012 Alexis Laferrière <alexis.laf@xymus.net>
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

import realtime

redef extern Timespec
	fun simplify : Int
	do
		return sec*1000000 + nanosec/1000
	end
end

var c = new Clock
var t0 = c.total.simplify

print "sleeping 1s"
nanosleep(1, 0)
print c.total.sec >= 1
print c.lapse.sec >= 1

var t1 = c.total.simplify

print "sleeping 5000ns"
nanosleep(0, 5000)
print c.lapse.nanosec >= 5000

var t2 = c.total.simplify

print t0 <= t1
print t1 <= t2
