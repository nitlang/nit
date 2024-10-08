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

import kernel

var t = true
var f = false

f.output
t.output

'\n'.output

(not f).output
(not t).output

'\n'.output

(f and f).output
(f and t).output
(t and f).output
(t and t).output

'\n'.output

(f or f).output
(f or t).output
(t or f).output
(t or t).output

'\n'.output

(f implies f).output
(f implies t).output
(t implies f).output
(t implies t).output
