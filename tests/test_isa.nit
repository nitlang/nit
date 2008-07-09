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

var a : Object
print("int:")
a = 5
print(a isa Int)
print(not a isa String)
print(not a isa AbstractArray[Char])
print(not a isa Iterator[Int])
print(a isa Discrete)
print(a isa Object)

print("string:")
a = "Bonjour"
print(not a isa Int)
print(a isa String)
print(a isa AbstractArray[Char])
print(not a isa Iterator[Int])
print(not a isa Discrete)
print(a isa Object)

print("null:")
a = null
print(a isa Int)
print(a isa String)
print(a isa AbstractArray[Char])
print(a isa Iterator[Int])
print(a isa Discrete)
print(a isa Object)
