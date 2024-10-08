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


(i.is_same_instance(i)).output
(b.is_same_instance(i)).output
(f.is_same_instance(i)).output

'\n'.output

(i.is_same_instance(ni)).output
(b.is_same_instance(ni)).output
(f.is_same_instance(ni)).output

'\n'.output

(i.is_same_instance(oi)).output
(b.is_same_instance(oi)).output
(f.is_same_instance(oi)).output

'\n'.output
'\n'.output

(ni.is_same_instance(i)).output
(nb.is_same_instance(i)).output
(nf.is_same_instance(i)).output

'\n'.output

(ni.is_same_instance(ni)).output
(nb.is_same_instance(ni)).output
(nf.is_same_instance(ni)).output

'\n'.output

(ni.is_same_instance(oi)).output
(nb.is_same_instance(oi)).output
(nf.is_same_instance(oi)).output

'\n'.output
'\n'.output

(oi.is_same_instance(i)).output
(ob.is_same_instance(i)).output
(of.is_same_instance(i)).output

'\n'.output

(oi.is_same_instance(ni)).output
(ob.is_same_instance(ni)).output
(of.is_same_instance(ni)).output

'\n'.output

(oi.is_same_instance(oi)).output
(ob.is_same_instance(oi)).output
(of.is_same_instance(oi)).output

'\n'.output
'\n'.output
'\n'.output

(i.is_same_instance(b)).output
(b.is_same_instance(b)).output
(f.is_same_instance(b)).output

'\n'.output

(i.is_same_instance(nb)).output
(b.is_same_instance(nb)).output
(f.is_same_instance(nb)).output

'\n'.output

(i.is_same_instance(ob)).output
(b.is_same_instance(ob)).output
(f.is_same_instance(ob)).output

'\n'.output
'\n'.output

(ni.is_same_instance(b)).output
(nb.is_same_instance(b)).output
(nf.is_same_instance(b)).output

'\n'.output

(ni.is_same_instance(nb)).output
(nb.is_same_instance(nb)).output
(nf.is_same_instance(nb)).output

'\n'.output

(ni.is_same_instance(ob)).output
(nb.is_same_instance(ob)).output
(nf.is_same_instance(ob)).output

'\n'.output
'\n'.output

(oi.is_same_instance(b)).output
(ob.is_same_instance(b)).output
(of.is_same_instance(b)).output

'\n'.output

(oi.is_same_instance(nb)).output
(ob.is_same_instance(nb)).output
(of.is_same_instance(nb)).output

'\n'.output

(oi.is_same_instance(ob)).output
(ob.is_same_instance(ob)).output
(of.is_same_instance(ob)).output

'\n'.output
'\n'.output
'\n'.output

(i.is_same_instance(f)).output
(b.is_same_instance(f)).output
(f.is_same_instance(f)).output

'\n'.output

(i.is_same_instance(nf)).output
(b.is_same_instance(nf)).output
(f.is_same_instance(nf)).output

'\n'.output

(i.is_same_instance(of)).output
(b.is_same_instance(of)).output
(f.is_same_instance(of)).output

'\n'.output
'\n'.output

(ni.is_same_instance(f)).output
(nb.is_same_instance(f)).output
(nf.is_same_instance(f)).output

'\n'.output

(ni.is_same_instance(nf)).output
(nb.is_same_instance(nf)).output
(nf.is_same_instance(nf)).output

'\n'.output

(ni.is_same_instance(of)).output
(nb.is_same_instance(of)).output
(nf.is_same_instance(of)).output

'\n'.output
'\n'.output

(oi.is_same_instance(f)).output
(ob.is_same_instance(f)).output
(of.is_same_instance(f)).output

'\n'.output

(oi.is_same_instance(nf)).output
(ob.is_same_instance(nf)).output
(of.is_same_instance(nf)).output

'\n'.output

(oi.is_same_instance(of)).output
(ob.is_same_instance(of)).output
(of.is_same_instance(of)).output
