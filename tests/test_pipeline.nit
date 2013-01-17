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

import pipeline

var a1 = [1..1000]
var a2 = [1,2,1,1,1,3,2]

print a2.sort_filter.to_a
print a2.uniq.to_a
print a2.seq_uniq.to_a

##

print((a1 + a2).length)

print a2.alternate(0).to_a

print a2.skip(1).to_a

##

print a1.head(2).to_a
print a1.skip_head(998).to_a
print a1.tail(2).to_a
print a1.skip_tail(998).to_a

print a1.skip_head(1).head(3).skip_tail(1).tail(1).to_a
