# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2005-2008 Jean Privat <jean@pryen.org>
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

fun nsieve(n: Int): Int
do
	var count = 0
	var array = new FlatBuffer.with_capacity(n)
	for i in [0..n[ do
		array.chars[i] = 'o'
	end
	for i in [2..n[ do
		if array.chars[i] == 'o' then
			var j = i * 2
			while j < n do
				array.chars[j] = 'x'
				j = j + i
			end
			count = count + 1
		end
	end
	return count
end

fun test(n: Int)
do
	var m = 10000.lshift(n)
	print("Primes up to {m} {nsieve(m)}")
end

var n = 2
if args.length == 1 then
	n = args.first.to_i
end

test(n)
if n >= 1 then
	test(n-1)
end
if n >= 2 then
	test(n-2)
end
