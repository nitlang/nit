# This file is part of NIT ( http://www.nitlanguage.org ).
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

# This program micro-benches do/catches
# arg1 is the mode, arg2 is the depth

# mode 0, no catch, only calls
fun sub0(n: Int)
do
	if n < 0 then return
	do
		sub0(n-1)
		sub0(n-1)
	end
end

# mode 1, unused catches
fun sub1(n: Int)
do
	if n < 0 then return
	do
		sub1(n-1)
		sub1(n-1)
	catch
		print "dead code"
	end
end

# mode 2, many nested catches and aborts
fun sub2(n: Int)
do
	if n < 0 then abort
	do
		sub2(n-1)
		sub2(n-1)
	catch
		if n > 0 then print "dead code"
	end
end


var m = 1
if args.length > 0 then m = args[0].to_i

var n = 25
if args.length > 1 then n = args[1].to_i

if m == 0 then
	print "mode {m} (no catch, no abort), size n={n}"
	sub0(n)
else if m == 1 then
	print "mode {m} (catch, no abort), size n={n}"
	sub1(n)
else if m == 2 then
	print "mode {m} (catch, abort), size n={n}"
	sub2(n)
else
	abort
end
