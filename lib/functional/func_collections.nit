# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2019 Louis-Vincent Boudreault <lv.boudreault95@gmail.com>
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

# In place data manipulation inside an hashmap
#
# Provides a Monad-like structure to do computation over hashmap entries.
# Warning: The Entry API is not thread-safe, i.e concurrent entry manipulation
# might put the Map in a inconsistent state. In multithreading environment, you
# should use guards before creating an `Entry`.

module func_collections
import iter_extras

abstract class Entry[K,V]
        var map: Map[K,V]
        var key: K


        # If the entry is occupied, then it applies the function
        # to the underlying element. Otherwise, nothing is done.
        fun and_do(f: Proc1[V]): Entry[K,V] do
                return self
        end

        # If the entry is vacant, assign the value `x` as the default
        # value in the `Map`.
        fun or_insert(x: V): V is abstract

        # Same as `Entry::or_insert` except the value is provided by a function.
        fun or_insert_with(x: Fun0[V]): V is abstract
end

# The entry (key) in the hashmap doesn't exist
class Vacant[K,V]
        super Entry[K,V]

        redef fun or_insert(x)
        do
                map[key] = x
                return map[key]
        end

        redef fun or_insert_with(f)
        do
                return or_insert(f.call)
        end
end

# The entry (key) in the hashmap exists
class Occupied[K,V]
        super Entry[K,V]

        redef fun or_insert(x)
        do
                return map[key]
        end


        redef fun or_insert_with(f)
        do
                # duplicate from or_insert
                return map[key]
        end

        redef fun and_do(f)
        do
                f.call(map[key])
                return self
        end
end

redef interface Map[K,V]

        # A view over a key-value pair.
        #
        # ~~~~nitish
        # fun square(x: Int): Int do return x * x
        #
        # var m = new HashMap[String, Int]
        # m.entry("ten").or_insert(10)
        # assert m["ten"] == 10
        # m.entry("ten").or_insert(100)
        # assert m["ten"] == 10
        # m.entry("ten").and_do(&square).and_do(&square)
        # assert m["ten"] == 10000
        # ~~~~
        fun entry(k: K): Entry[K,V] do
                if has_key(k) then
                        return new Occupied[K,V](self, k)
                end
                return new Vacant[K,V](self, k)
        end
end
