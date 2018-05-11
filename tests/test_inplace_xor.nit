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

import crypto

var xor_base = b"qwertyuiopasdfghjklzxcvbnm"
var xor_base_2 = xor_base.clone
var xor_base_3 = xor_base.clone
var key = b" "
var key2 = b" \x00"

var key_cstr = key.items
var xb_cstr = xor_base.items

xb_cstr.xor(key_cstr, 5, 1)

print xb_cstr.to_s_with_length(xor_base.length)

xb_cstr.xor(key_cstr, xor_base.length, 1)

print xb_cstr.to_s_with_length(xor_base.length)

var xb_cstr2 = xor_base_2.items
var xb_cstr3 = xor_base_3.items
var key2_cstr = key2.items

xb_cstr2.xor(key2_cstr, xor_base_2.length, 2, 1)

xb_cstr3.xor(key2_cstr, xor_base_3.length, 2)

print xb_cstr2.to_s_with_length(xor_base_2.length)
print xb_cstr3.to_s_with_length(xor_base_3.length)
