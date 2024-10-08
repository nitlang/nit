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
import end
interface Object
end
class A
	var a: A = self
	var na: nullable A = self
end

var a = new A
__debug__ type A: a
__debug__ type A: a.a
__debug__ type nullable A: a.na
__debug__ type nullable A: a.a.na
__debug__ type A: a.na.a
