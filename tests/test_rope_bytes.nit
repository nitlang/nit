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

intrude import core::text::ropes
import core

var lft = "à" + "1" * 40 + "é"
var rht = "ć" + "2" * 40 + "ç"

var rp = new Concat(lft, rht)

print rp

var bts = rp.bytes.to_a

assert bts.length == 88

print bts.join(" ")
