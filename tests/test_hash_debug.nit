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

import hash_debug

class A
	redef fun hash do return 0
end

sys.show_hash_stats
var s = new HashSet[A]
sys.show_hash_stats

print "\na1"
var a1 = new A
print s.has(a1)
sys.show_hash_stats
s.add(a1)
sys.show_hash_stats
s.add(a1)
sys.show_hash_stats
print s.has(a1)
sys.show_hash_stats

print "\na2"
var a2 = new A
print s.has(a2)
sys.show_hash_stats
s.add(a2)
sys.show_hash_stats
s.add(a2)
sys.show_hash_stats
print s.has(a2)
sys.show_hash_stats

print "\nend"
