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
var ni: Int = 0
var nb: Bool = false
var nf: Byte = 0u8
var oi: Object = 1
var ob: Object = true
var of: Object = 1u8


(i.is_same_type(i)).output
(b.is_same_type(i)).output
(f.is_same_type(i)).output

'\n'.output

(i.is_same_type(ni)).output
(b.is_same_type(ni)).output
(f.is_same_type(ni)).output

'\n'.output

(i.is_same_type(oi)).output
(b.is_same_type(oi)).output
(f.is_same_type(oi)).output

'\n'.output
'\n'.output

(ni.is_same_type(i)).output
(nb.is_same_type(i)).output
(nf.is_same_type(i)).output

'\n'.output

(ni.is_same_type(ni)).output
(nb.is_same_type(ni)).output
(nf.is_same_type(ni)).output

'\n'.output

(ni.is_same_type(oi)).output
(nb.is_same_type(oi)).output
(nf.is_same_type(oi)).output

'\n'.output
'\n'.output

(oi.is_same_type(i)).output
(ob.is_same_type(i)).output
(of.is_same_type(i)).output

'\n'.output

(oi.is_same_type(ni)).output
(ob.is_same_type(ni)).output
(of.is_same_type(ni)).output

'\n'.output

(oi.is_same_type(oi)).output
(ob.is_same_type(oi)).output
(of.is_same_type(oi)).output

'\n'.output
'\n'.output
'\n'.output

(i.is_same_type(b)).output
(b.is_same_type(b)).output
(f.is_same_type(b)).output

'\n'.output

(i.is_same_type(nb)).output
(b.is_same_type(nb)).output
(f.is_same_type(nb)).output

'\n'.output

(i.is_same_type(ob)).output
(b.is_same_type(ob)).output
(f.is_same_type(ob)).output

'\n'.output
'\n'.output

(ni.is_same_type(b)).output
(nb.is_same_type(b)).output
(nf.is_same_type(b)).output

'\n'.output

(ni.is_same_type(nb)).output
(nb.is_same_type(nb)).output
(nf.is_same_type(nb)).output

'\n'.output

(ni.is_same_type(ob)).output
(nb.is_same_type(ob)).output
(nf.is_same_type(ob)).output

'\n'.output
'\n'.output

(oi.is_same_type(b)).output
(ob.is_same_type(b)).output
(of.is_same_type(b)).output

'\n'.output

(oi.is_same_type(nb)).output
(ob.is_same_type(nb)).output
(of.is_same_type(nb)).output

'\n'.output

(oi.is_same_type(ob)).output
(ob.is_same_type(ob)).output
(of.is_same_type(ob)).output

'\n'.output
'\n'.output
'\n'.output

(i.is_same_type(f)).output
(b.is_same_type(f)).output
(f.is_same_type(f)).output

'\n'.output

(i.is_same_type(nf)).output
(b.is_same_type(nf)).output
(f.is_same_type(nf)).output

'\n'.output

(i.is_same_type(of)).output
(b.is_same_type(of)).output
(f.is_same_type(of)).output

'\n'.output
'\n'.output

(ni.is_same_type(f)).output
(nb.is_same_type(f)).output
(nf.is_same_type(f)).output

'\n'.output

(ni.is_same_type(nf)).output
(nb.is_same_type(nf)).output
(nf.is_same_type(nf)).output

'\n'.output

(ni.is_same_type(of)).output
(nb.is_same_type(of)).output
(nf.is_same_type(of)).output

'\n'.output
'\n'.output

(oi.is_same_type(f)).output
(ob.is_same_type(f)).output
(of.is_same_type(f)).output

'\n'.output

(oi.is_same_type(nf)).output
(ob.is_same_type(nf)).output
(of.is_same_type(nf)).output

'\n'.output

(oi.is_same_type(of)).output
(ob.is_same_type(of)).output
(of.is_same_type(of)).output
