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


class BackIntComparator
	super Comparator
	redef type COMPARED: Int is fixed
	redef fun compare(a: Int, b: Int): Int
	do
		return b <=> a
	end

	init do end
end

class DecimalComparator
	super Comparator
	redef type COMPARED: Int is fixed
	redef fun compare(a: Int, b: Int): Int
	do
		return (a%10) <=> (b%10)
	end

	init do end
end

fun get_an_array(nb: Int): Array[Int]
do
	var res = new Array[Int].with_capacity(nb)
	var j = 64
	while res.length < nb do
		j = (j * 3451 + 234) % 56557
		var k = j % 90 + 10
		res.add(k)
	end
	return res
end

#

var q = get_an_array(50)
print(q.join(" "))
(default_comparator).sort(q)
print(q.join(" "))
(new DecimalComparator).sort(q)
print(q.join(" "))
(new BackIntComparator).sort(q)
print(q.join(" "))
(new DecimalComparator).sort(q)
print(q.join(" "))
