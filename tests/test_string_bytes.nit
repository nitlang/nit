# This file is part of NIT ( http://www.nitlanguage.org ).
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

var x = "This string is cool"

var y = x + x + x + x

var z = x * 4

print x.bytes.iterator.to_a
print y.bytes.iterator.to_a
print z.bytes.iterator.to_a

print x.bytes.reverse_iterator.to_a
print y.bytes.reverse_iterator.to_a
print z.bytes.reverse_iterator.to_a

var b = new FlatBuffer.from(x)

print b.bytes.to_a
print b.bytes.reverse_iterator.to_a
