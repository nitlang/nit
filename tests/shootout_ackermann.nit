# This file is part of NIT ( https://nitlanguage.org ).
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

# The Comptuer Language Shootout Benchmarks
# http://shootout.alioth.debian.org
#
# contributed by Jean Privat

fun ack(m: Int, n: Int): Int
    do
	if m == 0 then
	    return n + 1
	else if n == 0 then
	    return ack(m - 1, 1)
	else
	    return ack(m - 1, ack(m, n - 1))
	end
    end

var num = 1
if args.length == 1 then
    num = args.first.to_i
end

print("Ack(3,{num}): {ack(3, num)}")
