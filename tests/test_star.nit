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

fun foo(a: Int...)
    do
	print(a)
    end

fun bar(b: Int, a: Int...)
    do
	print("{b}, {a}")
    end

fun baz(a: Int..., b: Int)
    do
	print("{a}, {b}")
    end

fun foobar(b: Int, a: Int..., c: Int)
    do
	print("{c}, {a}, {b}")
    end

foo(1)
foo(1,2)
bar(1,2)
bar(1,2,3)
baz(1,2)
baz(1,2,3)
foobar(1,2,3)
foobar(1,2,3,4)
