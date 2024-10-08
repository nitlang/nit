# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
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


fun quicksort(a: Array[Comparable])
do
	sub_quicksort(a, 0, a.length-1)
end

fun sub_quicksort(a: Array[Comparable], g: Int, d: Int)
do
	if g >= d then
		return
	end
	var pivot = a[d]
	var i = g
	var j = d - 1
	while j > i do
		while a[i] < pivot do
			i = i + 1
		end
		while j >= g and a[j] >= pivot do
			j = j - 1
		end
		if j > i then
			var t = a[i]
			a[i] = a[j]
			a[j] = t
		end
	end
	a[d] = a[i]
	a[i] = pivot
	sub_quicksort(a, g, i-1)
	sub_quicksort(a, i+1, d)
end

fun heapsort(a: Array[Comparable])
do
	var i = a.length / 2 - 1 
	while i >= 0 do
		sift_down(a, i, a.length - 1)
		i = i - 1
	end

	i = a.length - 1
	while i >= 1 do
		var t = a[0]
		a[0] = a[i]
		a[i] = t
		sift_down(a, 0, i-1)
		i = i - 1
	end
end

fun sift_down(a: Array[Comparable], root: Int, bottom: Int)
do
	var done = false
	while not done do
		var maxchild = root * 2 + 1
		if maxchild > bottom then
			return
		else if maxchild < bottom and a[maxchild] < a[root * 2 + 2] then
			maxchild = root * 2 + 2
		end

		var r = a[root]
		var c = a[maxchild] 
		if r < c then
			a[root] = c
			a[maxchild] = r
			root = maxchild
		else
			done = true 
		end
	end
end

var q = [6, 7, 3, 9, 1, 4, 2, 8, 5]
var h = [6, 7, 3, 9, 1, 4, 2, 8, 5]
print(q)
quicksort(q)
print(q)
print(h)
heapsort(h)
print(h)
