# This file is part of NIT ( https://nitlanguage.org ).
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

var c1 = [1..4]

# Simple comprehension
var a1 = [for i in c1 do i*2]
print a1.join(",")

# Cartesian product
var a2 = [for i in c1 do for j in c1 do i * 10 + j]
print a2.join(",")

# Cartesian product and filters
var a3 = [for i in c1 do if i.is_odd then for j in c1 do if j.is_even then i * 10 + j]
print a3.join(",")

# Nesting (useless)
var a4 = [for i in [for i in c1 do i*2] do i + 1]
print a4.join(",")

# Multi-dimensional
var a5 = [for i in c1 do [for j in c1 do i*10+j]]
print([for i in a5 do i.join(",")].join(";"))

# Multi-iteration (zip)
var a6 = [for i in c1, j in c1.reverse_iterator do i * 10 + j]
print a6.join(",")
