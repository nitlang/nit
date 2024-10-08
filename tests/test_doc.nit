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

# Synopsys
# Paragraph
# same paragraph
#
# Other paragraph with `code`
#
# * bullet
# * other buller
# * last
#   but long
#   bullet
#
#     some
#     block
#
# a first example
#
#     assert 1 + 1 == 2
#
# and a last example to illustrate the `to_s` method on `A`.
#
#     var a = new A
#     assert a.to_s == "A"
class A
	redef fun to_s do return "A"
end
