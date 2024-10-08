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

fun get_float(f: Float): Float do return f
fun get_object(f: Float): Object do return f

var fp: Float = get_float(0.0)
var fm: Float = get_float(-0.0)
var f1: Float = get_float(1.0)
var ofp: Object = get_float(0.0)
var ofm: Object = get_float(-0.0)
var of1: Object = get_float(1.0)
var op: Object = get_object(0.0)
var om: Object = get_object(-0.0)
var o1: Object = get_object(1.0)

fp.output
fm.output
f1.output
ofp.output
ofm.output
of1.output
op.output
om.output
o1.output

(fp.is_same_instance(fp)).output
(fp.is_same_instance(fm)).output
(not fp.is_same_instance(f1)).output
(fp.is_same_instance(ofp)).output
(fp.is_same_instance(ofm)).output
(not fp.is_same_instance(of1)).output
(fp.is_same_instance(op)).output
(fp.is_same_instance(om)).output
(not fp.is_same_instance(o1)).output
'\n'.output
(fm.is_same_instance(fp)).output
(fm.is_same_instance(fm)).output
(not fm.is_same_instance(f1)).output
(fm.is_same_instance(ofp)).output
(fm.is_same_instance(ofm)).output
(not fm.is_same_instance(of1)).output
(fm.is_same_instance(op)).output
(fm.is_same_instance(om)).output
(not fm.is_same_instance(o1)).output
'\n'.output
(ofp.is_same_instance(fp)).output
(ofp.is_same_instance(fm)).output
(not ofp.is_same_instance(f1)).output
(ofp.is_same_instance(ofp)).output
(ofp.is_same_instance(ofm)).output
(not ofp.is_same_instance(of1)).output
(ofp.is_same_instance(op)).output
(ofp.is_same_instance(om)).output
(not ofp.is_same_instance(o1)).output
'\n'.output
(ofm.is_same_instance(fp)).output
(ofm.is_same_instance(fm)).output
(not ofm.is_same_instance(f1)).output
(ofm.is_same_instance(ofp)).output
(ofm.is_same_instance(ofm)).output
(not ofm.is_same_instance(of1)).output
(ofm.is_same_instance(op)).output
(ofm.is_same_instance(om)).output
(not ofm.is_same_instance(o1)).output
'\n'.output
(op.is_same_instance(fp)).output
(op.is_same_instance(fm)).output
(not op.is_same_instance(f1)).output
(op.is_same_instance(ofp)).output
(op.is_same_instance(ofm)).output
(not op.is_same_instance(of1)).output
(op.is_same_instance(op)).output
(op.is_same_instance(om)).output
(not op.is_same_instance(o1)).output
'\n'.output
(om.is_same_instance(fp)).output
(om.is_same_instance(fm)).output
(not om.is_same_instance(f1)).output
(om.is_same_instance(ofp)).output
(om.is_same_instance(ofm)).output
(not om.is_same_instance(of1)).output
(om.is_same_instance(op)).output
(om.is_same_instance(om)).output
(not om.is_same_instance(o1)).output
