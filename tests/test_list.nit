# This file is part of NIT ( http://www.nitlanguage.org ).
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

do
    var l = new List[Int]
    l.add(1)
    printn(l.pick_first)
    l.add(2)
    l.add(3)
    printn(l.pick_first)
    printn(l.pick_first)
    l.add(4)
    printn(l.pick_first)

    l = new List[Int].from([1,2,3,4])

    var i = l.iterator
    while i.has_next do
	printn(i.current)
	i.next
    end

    l.prepend(0)
    l.prepend(-1)
    printn(l.pick_first)
    printn(l.first)
    printn(l.last)
    printn(l.pick_first)
    printn(l.pick_last)
    printn(l.pick_first)
    printn(l.pick_last)
    printn(l.pick_first)
end

print("\npart2")

do
    var l = new List[Int].from([1,2,3,4,5,6])
    print(l)
    print(l.has(3))
    print(not l.has(9))
    print(l.has(3))
    print(not l.has(-3))
    print(not l.has(30))
    print(l[1] == 2)
    print(l.first == 1)
    print(l.last == 6)
    print(l.length == 6)
    l[2] = -3
    l.first = -1
    l.last = -6
    l.remove(4)
    print(l)
end

