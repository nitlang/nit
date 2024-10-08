# This file is part of NIT ( https://nitlanguage.org ).
#
# Copyright 2005-2008 Jean Privat <jean@pryen.org>
# Copyright 2009 Jean-Sebastien Gelinas <calestar@gmail.com>
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

srand_from(5)

print(pi)
print(pi.cos)
print(pi.sin)
print(pi.tan)
print(1.0.atan)
print(1.0.acos)
print(1.0.asin)

print(25.0.sqrt)
print(0.0.exp)
print(1.0.log)
print(4.0.pow(3.0))

print(0.1.cos.acos.cos.acos)
print(0.1.sin.asin.sin.asin)
print(0.1.tan.atan.tan.atan)
print(0.1.exp.log.exp.log)

var random_int: Int
var random_float: Float
for i in [0..100] do
	random_int = 1.rand
	random_float = 1.0.rand
	if random_int > 1 or random_int < 0 then print "Erroneous random int"
	if random_float > 1.0 or random_float < 0.0 then print "Erroneous random float"
end

