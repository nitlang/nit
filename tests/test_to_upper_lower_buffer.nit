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

#alt1 import standard::text::ropes

var x: Buffer = new FlatBuffer.from("test")
#alt1 x = new RopeBuffer.from("test")
var y: Buffer = new FlatBuffer.from("TEST")
#alt1 y = new RopeBuffer.from("TEST")

x.upper
y.lower

assert x == "TEST"
assert y == "test"

