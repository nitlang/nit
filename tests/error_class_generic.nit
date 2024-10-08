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

import array

#alt1#redef class Array
#alt2#redef class Array[E: Float]
#alt3#redef class Array[E: Float, E: Int]
#alt4#class Array
#alt5#class Array[E: Float]
#alt6#class Array[E: Float, E: Int]
end

var c: Array = 5
c.output
