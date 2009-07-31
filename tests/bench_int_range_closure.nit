# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2009 Jean Privat <jean@pryen.org>
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


redef class Range[K]
	fun for_each(x: Int)
		!each(i: K)
	do
		var c = first
		var s = after
		while c < s do
			#print(("  " * x) + c.to_s)
			each(c)
			c = c.succ
		end
	end
end

var nb = 5
if not args.is_empty then nb = args.first.to_i

var cpt = 0
var r = [0..nb[
r.for_each(0) !each ii1 do
	r.for_each(1) !each ii2 do
		r.for_each(2) !each ii3 do
			if ii1 == ii2 and ii2 == ii3 then cpt += 1
		end
	end
end

print cpt
