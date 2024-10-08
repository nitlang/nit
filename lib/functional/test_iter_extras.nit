# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2019 Louis-Vincent Boudreault <lv.boudreault95@gmail.com>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/license/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

module test_iter_extras is test

import iter_extras
private import test_utils

redef class Ref[E]
        redef fun ==(other) do
                if other isa Ref[E] then
                        return self.item == other.item
                end
                return false
        end
end

# test cases using `iter_extras::Iterator::map`
class TestMapIter
        test

        # test case for an empty `Array` of `Int`
        fun add_one_on_empty_array is test do
                var xs = new Array[Int]
                var actual = xs.iterator.map(add_one).to_a
                assert actual.is_empty
        end

        # test case for an `Array` containing one `Int`
        fun add_one_on_singleton_array is test do
                var xs = [1]
                var actual = xs.iterator.map(add_one).to_a
                assert actual[0] == 2
        end

        # test case for `Range`, adding one to each elements (1 to 10)
        fun add_one_on_range_1_to_10 is test do
                var xs = [1..10]
                var actual = xs.iterator.map(add_one).to_a
                var expected = [2,3,4,5,6,7,8,9,10,11]
                assert actual == expected
        end

        # test multiple application of map of an `Array[String]`.
        fun snake_and_upper_strings is test do
                var cs = ["helloWorld", "worldHello", "testCase"]
                var actual = cs.iterator.map(snake_case_fn).map(upper_fn).to_a
                var expected = ["HELLO_WORLD", "WORLD_HELLO", "TEST_CASE"]
                assert actual == expected
        end
end

# test cases using `iter_extras::Iterator::for_each`
class TestForEach
        test

        fun add_one_to_all is test do
                var xs = new Array[Ref[Int]]
                var expected = new Array[Ref[Int]]
                for i in [1..10] do
                        var r1 = new Ref[Int](i)
                        var r2 = new Ref[Int](i+1)
                        xs.push(r1)
                        expected.push(r2)
                end
                xs.iterator.for_each(add_one_proc)
                assert xs == expected
        end

        fun for_each_empty_array is test do
                var xs = new Array[Ref[Int]]
                xs.iterator.for_each(add_one_proc)
                assert xs.is_empty
        end

        fun for_each_on_singleton_array is test do
                var r1 = new Ref[Int](1)
                var r2 = new Ref[Int](2)
                var xs = [r1]
                xs.iterator.for_each(add_one_proc)
                assert r1 == r2
                assert xs == [r2]
        end
end

# test cases using `iter_extras::Iterator::filter`
class TestFilterIter
        test

        # test case for an empty `Array`
        fun filter_empty_array is test  do
                var xs = new Array[Int]
                var lt10 = lower_than_fn(10)
                var actual = xs.iterator.filter(lt10).to_a
                assert actual.is_empty
        end

        # test case for a `Range` whose elements doesn't match the predicate
        fun filter_nomatch is test do
                var xs = [1..10]
                var lt0 = lower_than_fn(0)
                var actual = xs.iterator.filter(lt0).to_a
                assert actual.is_empty
        end

        # test case for a `Range` whose elements match 50% of a given predicate
        fun filter_half_match_on_range_1_to_10 is test do
                var xs = [1..10]
                var lt6 = lower_than_fn(6)
                var actual = xs.iterator.filter(lt6).to_a
                var expected = [1,2,3,4,5]
                assert actual == expected
        end

        # test case for an `Array` whose last element is the only matching element
        # for a given predicate
        fun only_last_element_is_a_letter is test do
                var xs = "123a"
                var actual = xs.iterator.filter(is_letter_fn).to_a.join
                assert actual == "a"
        end

        # test case for a `String` containing mixed alphanumeric characters
        fun only_letters is test do
                var cs = "aaa123b4bb3333c1c32c"
                assert cs.iterator.filter(is_letter_fn).to_a.join == "aaabbbccc"
        end

        # test case for a `String` containing only one letter in the middle
        fun has_any_letter_true is test do
                var cs = "12345a12345"
                assert cs.iterator.any(is_letter_fn)
        end

        # test case for an empty `String` that should not contain any letter
        fun empty_string_has_no_letter is test do
                var cs = ""
                assert not cs.iterator.any(is_letter_fn)
        end

        # test case for a `String` representing a number, should not have any letter
        fun numeric_string_has_no_letter is test do
                var cs = "123456"
                assert not cs.iterator.any(is_letter_fn)
        end
end

# test cases using `iter_extras::Iterator::flat_map`
class TestFlatMapIter
        test

        # test case for combining three `String`
        fun combine_aaa_bbb_ccc_to_aaabbbccc is test do
                var cs = ["aaa","bbb","ccc"]
                assert cs.iterator.flat_map(chars_fn).to_a.join == "aaabbbccc"
        end

        fun combine_empty_strings is test do
                var cs = ["", ""]
                assert cs.iterator.flat_map(chars_fn).to_a.join == ""
        end

        fun flat_map_over_empty_array is test do
                var cs = new Array[String]
                assert cs.iterator.flat_map(chars_fn).to_a.join == ""
        end
end

# test cases using `iter_extras::Iterator::fold`
class TestFoldIter
        test

        fun sum_an_empty_array is test do
                var xs = new Array[Int]
                var actual = xs.iterator.fold(0, sum_fn)
                assert actual == 0
        end

        fun sum_1_to_10 is test do
                var xs = [1..10]
                var actual = xs.iterator.fold(0, sum_fn)
                assert actual == 55
        end

        fun fold_one_element is test do
                var xs = [1]
                var actual = xs.iterator.fold(0, sum_fn)
                assert actual == xs[0]
        end
end

# test cases using `iter_extras::Iterator::fold1`
class TestFold1Iter
        test

        fun find_min_in_mixed_array is test do
                var xs = [45,424,11,43,7,5,8,9,1,-100]
                var actual = xs.iterator.fold1(min_int_fn)
                assert actual == -100
        end

        fun fold1_with_2_elements is test do
                var xs = [0,-100]
                var actual = xs.iterator.fold1(min_int_fn)
                assert actual == -100
        end
end

# test cases using `iter_extras::Iterator::order_by`
class TestOrderedIter
        test

        fun order_empty_list_of_numbers is test do
                var xs = new Array[Int]
                var actual = xs.iterator.order_by(id_int).to_a
                assert actual == xs
        end

        fun order_list_of_ints is test do
                var xs = [5,4,3,2,1]
                var actual = xs.iterator.order_by(id_int).to_a
                var expected = [1,2,3,4,5]
                assert actual == expected
        end

        fun order_singleton_list_of_ints is test do
                var xs = [1]
                var actual = xs.iterator.order_by(id_int).to_a
                assert actual == xs
        end

        fun order_list_of_strings_by_alphabetical_order is test do
                var xs = ["louis", "florian", "alexis", "jean", "alexandre"]
                var actual = xs.iterator.order_by(id_str).to_a
                var expected = ["alexandre", "alexis", "florian", "jean", "louis"]
                assert actual == expected
        end

        fun order_list_of_strings_by_length is test do
                var xs = ["louis", "florian", "alexis", "jean", "alexandre"]
                var actual = xs.iterator.order_by(str_len).to_a
                var expected = ["jean", "louis", "alexis", "florian", "alexandre"]
                assert actual == expected
        end
end
