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

import core
#alt1 intrude import core::text::ropes
#alt2 intrude import core::text::ropes

var ons = new CString(9)
var base_str = "%Dégâštr"

var str: String = base_str
#alt1 str = new Concat(base_str, base_str)
#alt2 str = new Concat(base_str, base_str.substring_from(2))

var copy_len = (str.byte_length - 4).min(9)
str.copy_to_native(ons, copy_len, 4, 0)
print ons.to_s_unsafe(copy_len, copy=false)
