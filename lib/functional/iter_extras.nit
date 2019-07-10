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

# This modules provides a new functional interface for `Iterator`.
module iter_extras

import functional_types
import cartesian

redef class Array

        # Sorts an array with a function.
        #
        # ~~~~nitish
        # class Person
        #       var name: String
        # end
        #
        # def get_name(p: Person) do return p.name
        #
        # var ps = [new Person("Turing"), new Person("Curry"), new Person("Alfredo")]
        # ps.sort_with(&get_name)
        # assert ps[0].name == "Alfredo"
        # assert ps[1].name == "Curry"
        # assert ps[2].name == "Turing"
        # ~~~~
        fun sort_with(f: Fun1[E, Comparable])
        do
                var cmp = new ComparatorWith[E](f)
                if length > 1 then
                        cmp.quick_sort(self, 0, length - 1)
                end
        end
end

redef interface Iterator[E]

        # Applies a function to every elements
        #
        # ~~~~nitish
        # fun add(x: Int): Int do return x + 1
        #
        # var f = &add
        # var xs = [1,2,3,4,5]
        # var actual = xs.iterator.map(f).to_a
        # assert actual == [2,3,4,5,6]
        # ~~~~
        fun map(f: Fun1[E,Object]): MapIter[E,Object]
        do
                return new MapIter[E,Object](self, f)
        end

        # Iterator that gives the current count and element as a pair
        fun enumerate: EnumerateIter[E]
        do
                return new EnumerateIter[E](self)
        end

        # Iterator that filters elements by a predicate
        #
        # ~~~~nitish
        # fun lt10(x: Int): Bool do return x < 10
        #
        # var pred = &lt10
        # var xs = [1..20]
        # var actual = xs.iterator.filter(pred).to_a
        # assert actual == [1..9].to_a
        # ~~~~
        fun filter(pred: Fun1[E,Bool]): FilterIter[E]
        do
                return new FilterIter[E](self,pred)
        end


        # Checks if at least one element respects a predicate
        #
        # ~~~~nitish
        # fun eq10(x: Int): Bool do return x == 10
        #
        # var pred = &eq10
        # var xs = [1,2,5,7,9,10,44]
        # assert xs.iterator.any(pred)
        # var ys = []
        # assert not ys.iterator.any(pred)
        # assert not [1,2,44].iterator.any(pred)
        # ~~~~
        fun any(pred: Fun1[E,Bool]): Bool
        do
                for x in self do
                        if pred.call(x) then
                                return true
                        end
                end
                return false
        end

        # Checks if all elements respect a predicate
        #
        # ~~~~nitish
        # fun lt10(x: Int): Bool do return x < 10
        #
        # var pred = &lt10
        # var xs = [1..9]
        # assert xs.iterator.all(pred)
        # assert [].iterator.all(pred)
        # assert not [1..10].iterator.all(pred)
        # ~~~~
        fun all(pred: Fun1[E,Bool]): Bool
        do
                for x in self do
                        if not pred.call(x) then
                                return false
                        end
                end
                return true
        end

        # Folds an iterator from the left
        #
        # ~~~~nitish
        # fun adder(x: Int, y: Int): Int do return x + y
        #
        # var xs = [1..10]
        # assert xs.iterator.fold(0, &adder) == 55
        # ~~~~
        fun fold(acc: Object, f: Fun2[Object, E, Object]): Object
        do
                for x in self do
                        acc = f.call(acc, x)
                end
                return acc
        end

        # Folds and apply two element at a time
        #
        # ~~~~nitish
        # fun min_int(x: Int, y: Int): Int
        # do
        #       if x < y then return x
        #       return y
        # end
        #
        # var xs = [100,423,51,1,-19,55,999,-18]
        # assert xs.iterator.fold1(&min_int) == -19
        # ~~~~
        # REQUIRE : length > 1
        fun fold1(f: Fun2[E,E,E]): E
        do
                var a1 = item
                next
                var a2 = item
                next
                var res = f.call(a1,a2)
                for x in self do
                        res = f.call(res, x)
                end
                return res
        end

        # Apply a mutation function over all elements
        #
        # ~~~~nitish
        # class Person
        #       var age: Int
        #       def incr_age
        #       do
        #               age += 1
        #       end
        # end
        #
        # var ps = [new Persone(1), new Person(2), new Person(3)]
        # var ages = ps.iterator.for_each(&Person::incr_age).map(&Person::age).to_a
        # assert ages == [2,3,4]
        # ~~~~
        fun for_each(f: Proc1[E])
        do
                for x in self do
                        f.call(x)
                end
        end

        # Maps every element to a nested structure then flattens it
        #
        # ~~~~nitish
        # fun chars_fn(s: String): Iterator[Char]
        # do
        #       return s.chars.iterator
        # end
        # var cs = ["aaa","bbb","ccc"]
        # assert cs.iterator.flat_map(&chars_fn).to_a.join == "aaabbbccc"
        # ~~~~
        fun flat_map(f: Fun1[E, Iterator[Object]]): FlatMapIter[E, Object]
        do
                return new FlatMapIter[E, Object](self, f)
        end

        # Generates an `Iterator` whose elements are sorted by the function
        # passed in argument.
        #
        # ~~~~nitish
        # class Person
        #       var name: String
        # end
        #
        # def get_name(p: Person) do return p.name
        #
        # var ps = [new Person("Turing"), new Person("Curry"), new Person("Alfredo")]
        # var ordered_names = ps.iterator.order_by(&get_name).map(&get_name).to_a
        # assert ordered_names == ["Alfredo", "Curry", "Turing"]
        # ~~~~
        fun order_by(f: Fun1[E, Comparable]): OrderedIter[E]
        do
                return new OrderedIter[E](self, f)
        end

end

# Base class for all iterators using functional types.
private abstract class FunIter[OLD,NEW]
        super Iterator[NEW]
        var my_iter: Iterator[OLD]

        redef fun next
        do
                my_iter.next
        end

        redef fun start
        do
                my_iter.start
        end

        redef fun finish
        do
                my_iter.finish
        end

        redef fun is_ok
        do
                return my_iter.is_ok
        end
end

# An iterator that maps each item with `f`.
class MapIter[A,B]
        super FunIter[A,B]
        var f: Fun1[A, B]

        redef fun item
        do
                return f.call(my_iter.item)
        end

end


# An iterator that maps each item to a pair containing the item with its
# current count.
class EnumerateIter[E]
        super FunIter[E, Pair[Int,E]]

        redef fun item
        do
               return new Pair[Int,E](0, my_iter.item)
        end
end

# An tierator that filter its element by a predicate `pred`.
class FilterIter[E]
        super FunIter[E,nullable E]
        var pred: Fun1[E, Bool]

        redef init
        do
                if is_ok and not pred.call(my_iter.item) then next
        end

        redef fun item
        do
                assert is_ok
                return my_iter.item
        end

        redef fun next
        do
                loop
                        my_iter.next
                        if not is_ok then
                                break
                        end
                        var x = my_iter.item
                        if pred.call(x) then
                                break
                        end
                end
        end
end

# An iterator that maps each item to an iterator and yield
# each item from it.
class FlatMapIter[A,B]
        super FunIter[A,B]
        var f: Fun1[A, Iterator[B]]
        protected var inner: nullable Iterator[B] = null

        redef init
        do
                try_compute_inner
        end

        redef fun item
        do
                return inner.as(not null).item
        end

        redef fun is_ok
        do
                return inner != null
        end

        redef fun next
        do
                inner.next
                if not inner.is_ok then
                        super
                        try_compute_inner
                end
        end

        # Tries to resolve the inner iterator.
        # Assigns null to `inner` if it fails.
        protected fun try_compute_inner
        do
                inner = null
                if not my_iter.is_ok then return
                var res = f.call(my_iter.item)
                if res.is_ok then inner = res
        end
end

# An iterator that yield each item in order
class OrderedIter[E]
        super FunIter[E,E]
        var f: Fun1[E, Comparable]

        private var sorted_iter: Iterator[E] is noinit
        private var sorted_arr: Array[E] is noinit
        redef init
        do
                sorted_arr = my_iter.to_a
                sorted_arr.sort_with(f)
                sorted_iter = sorted_arr.iterator
        end


        redef fun next
        do
                sorted_iter.next
        end

        redef fun item
        do
                return sorted_iter.item
        end


        redef fun is_ok
        do
                return sorted_iter.is_ok
        end

        redef fun finish
        do
                sorted_iter.finish
        end

        redef fun to_a
        do
                return sorted_arr
        end

end

# Comparator that use a function provided by the user to compare between elements.
class ComparatorWith[E]
        super Comparator
        redef type COMPARED: E

        var f: Fun1[E, Comparable]

        redef fun compare(a,b)
        do
                var x = f.call(a)
                var y = f.call(b)
                if x < y then return -1
                if x > y then return 1
                return 0
        end
end
