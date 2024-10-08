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

var i = 1
var b = true
var f = 1u8
var ni: nullable Int = 1
var nb: nullable Bool = true
var nf: nullable Byte = 1u8
var oi: nullable Object = 1
var ob: nullable Object = true
var of: nullable Object = 1u8


(i == i).output
(b == i).output
(f == i).output

'\n'.output

(i == ni).output
(b == ni).output
(f == ni).output

'\n'.output

(i == oi).output
(b == oi).output
(f == oi).output

'\n'.output
'\n'.output

(ni == i).output
(nb == i).output
(nf == i).output

'\n'.output

(ni == ni).output
(nb == ni).output
(nf == ni).output

'\n'.output

(ni == oi).output
(nb == oi).output
(nf == oi).output

'\n'.output
'\n'.output

(oi == i).output
(ob == i).output
(of == i).output

'\n'.output

(oi == ni).output
(ob == ni).output
(of == ni).output

'\n'.output

(oi == oi).output
(ob == oi).output
(of == oi).output

'\n'.output
'\n'.output
'\n'.output

(i == b).output
(b == b).output
(f == b).output

'\n'.output

(i == nb).output
(b == nb).output
(f == nb).output

'\n'.output

(i == ob).output
(b == ob).output
(f == ob).output

'\n'.output
'\n'.output

(ni == b).output
(nb == b).output
(nf == b).output

'\n'.output

(ni == nb).output
(nb == nb).output
(nf == nb).output

'\n'.output

(ni == ob).output
(nb == ob).output
(nf == ob).output

'\n'.output
'\n'.output

(oi == b).output
(ob == b).output
(of == b).output

'\n'.output

(oi == nb).output
(ob == nb).output
(of == nb).output

'\n'.output

(oi == ob).output
(ob == ob).output
(of == ob).output

'\n'.output
'\n'.output
'\n'.output

(i == f).output
(b == f).output
(f == f).output

'\n'.output

(i == nf).output
(b == nf).output
(f == nf).output

'\n'.output

(i == of).output
(b == of).output
(f == of).output

'\n'.output
'\n'.output

(ni == f).output
(nb == f).output
(nf == f).output

'\n'.output

(ni == nf).output
(nb == nf).output
(nf == nf).output

'\n'.output

(ni == of).output
(nb == of).output
(nf == of).output

'\n'.output
'\n'.output

(oi == f).output
(ob == f).output
(of == f).output

'\n'.output

(oi == nf).output
(ob == nf).output
(of == nf).output

'\n'.output

(oi == of).output
(ob == of).output
(of == of).output
