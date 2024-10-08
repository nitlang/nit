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

import more_collections

fun test_list(l: Sequence[Int], n: Int)
do
	for i in [0..n[ do l.push i
	print "{l.length} {l.first} {l.last}"
	for i in [0..n[ do l.unshift -i-1
	print "{l.length} {l.first} {l.last}"
	for i in [0..n[ do l.unshift l.pop
	print "{l.length} {l.first} {l.last}"
	for i in [0..n[ do l.push l.shift
	print "{l.length} {l.first} {l.last}"
	for i in [0..n[ do l[i] = l[n+i]
	print "{l.length} {l.first} {l.last}"
	for i in [0..n] do l.insert(i*10, i*2)
	print "{l.length} {l.first} {l.last}"
	print ""
end

var nb = 100
if args.not_empty then nb = args.first.to_i

test_list(new Array[Int], nb)
test_list(new List[Int], nb)
test_list(new UnrolledList[Int], nb)
test_list(new CircularArray[Int], nb)
