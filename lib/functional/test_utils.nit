# This file is part of NIT ( https://nitlanguage.org ).
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

# This module contains util classes and methods for `test_iter_extras`.
import functional_types

class SumFn
        super Fun2[Int,Int,Int]

        redef fun call(x, y)
        do
                return x + y
        end
end

class MinFn[E: Comparable]
        super Fun2[E,E,E]

        redef fun call(x, y)
        do
                if x < y then
                        return x
                end
                return y
        end
end

class InitArrayFn[E]
        super Fun0[Array[E]]

        var initial_val: nullable E

        redef fun call
        do
                var xs = new Array[E]
                if initial_val != null then
                        xs.push(initial_val)
                end
                return xs
        end
end

class SnakeCaseFn
        super Fun1[String,String]

        redef fun call(x)
        do
                return x.to_snake_case
        end
end

class UpperCaseFn
        super Fun1[String, String]

        redef fun call(x)
        do
                return x.to_upper
        end
end

class IsLetterFn
        super Fun1[Char, Bool]

        redef fun call(c)
        do
                return c.is_letter
        end
end

class AddOneFn
        super Fun1[Int,Int]

        redef fun call(x)
        do
                return x + 1
        end
end

class CharsFn
        super Fun1[String, Iterator[Char]]

        redef fun call(str)
        do
                return str.chars.iterator
        end
end

class LowerThanFn
        super Fun1[Int, Bool]
        var target: Int
        redef fun call(x)
        do
                return x < target
        end
end

class IdFn[E]
        super Fun1[E,E]
        redef fun call(x)
        do
                return x
        end
end

class StrLenFn
        super Fun1[String,Int]
        redef fun call(x)
        do
                return x.length
        end
end

class AddOneProc
        super Proc1[Ref[Int]]
        redef fun call(x)
        do
                x.item += 1
        end
end

fun sum_fn: SumFn
do
        return new SumFn
end

fun min_int_fn: MinFn[Int]
do
        return new MinFn[Int]
end

fun new_int_arr(x: nullable Int): InitArrayFn[Int]
do
        return new InitArrayFn[Int](x)
end

fun snake_case_fn: SnakeCaseFn
do
        return new SnakeCaseFn
end

fun upper_fn: UpperCaseFn
do
        return new UpperCaseFn
end

fun is_letter_fn: IsLetterFn
do
        return new IsLetterFn
end

fun add_one: AddOneFn
do
        return new AddOneFn
end

fun add_one_proc: AddOneProc
do
        return new AddOneProc
end

fun chars_fn: CharsFn
do
        return new CharsFn
end

fun lower_than_fn(x: Int): LowerThanFn
do
        return new LowerThanFn(x)
end

fun id_int: IdFn[Int]
do
        return new IdFn[Int]
end

fun id_str: IdFn[String]
do
        return new IdFn[String]
end

fun str_len: StrLenFn
do
        return new StrLenFn
end
