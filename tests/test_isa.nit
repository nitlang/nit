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


print("int:")
var a1: Object = 5
print(a1 isa Int)
print(not a1 isa String)
print(not a1 isa AbstractArray[Char])
print(not a1 isa Iterator[Int])
print(a1 isa Discrete)
print(a1 isa Object)

print("string:")
var a2: Object = "Bonjour"
print(not a2 isa Int)
print(a2 isa String)
print(a2 isa Text)
print(not a2 isa Iterator[Int])
print(not a2 isa Discrete)
print(a2 isa Object)

print("null:")
var a3: nullable Object = null
print(a3 isa nullable Int)
print(a3 isa nullable String)
print(a3 isa nullable AbstractArray[Char])
print(a3 isa nullable Iterator[Int])
print(a3 isa nullable Discrete)
print(a3 isa nullable Object)
