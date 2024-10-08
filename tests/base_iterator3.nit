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

class Test1
	fun iterator: nullable Iterator[String] do return null
end

class Test2
	fun iterator do end
end

class Test3
end

class Test4
	fun iterator: TestIterator do return new TestIterator
end

class TestIterator
end

# wrong return type
var test1 = new Test1
for v in test1 do print v

# wrong return type
var test2 = new Test2
for v in test2 do print v

# no method iterator
var test3 = new Test3
for v in test3 do print v

# wrong numbe of variables
for k, v in new Array[String] do print "{k}:{v}"
for v in new HashMap[String, String] do print v
