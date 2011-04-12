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

# Test iterator method on IterableMap[K,E]
fun with_iterator(map: IterableMap[Int,Int])
do
	printn "Test iterator: "
        var iterator = map.iterator

        while iterator.has_next do
                printn "{iterator.current_key}:{iterator.current} "
                iterator.next
        end
	print ""
end

# Test iterate method on IterableMap[K,E]
fun with_iterate(map: IterableMap[Int,Int])
do
	printn "Test iterate with closure: "
	map.iterate !each(key, item) do
		printn "{key}:{item} "
	end
	print ""
end
