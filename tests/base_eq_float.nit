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

(fp is fp).output
(fp is fm).output
(not fp is f1).output
(fp is ofp).output
(fp is ofm).output
(not fp is of1).output
(fp is op).output
(fp is om).output
(not fp is o1).output
'\n'.output
(fm is fp).output
(fm is fm).output
(not fm is f1).output
(fm is ofp).output
(fm is ofm).output
(not fm is of1).output
(fm is op).output
(fm is om).output
(not fm is o1).output
'\n'.output
(ofp is fp).output
(ofp is fm).output
(not ofp is f1).output
(ofp is ofp).output
(ofp is ofm).output
(not ofp is of1).output
(ofp is op).output
(ofp is om).output
(not ofp is o1).output
'\n'.output
(ofm is fp).output
(ofm is fm).output
(not ofm is f1).output
(ofm is ofp).output
(ofm is ofm).output
(not ofm is of1).output
(ofm is op).output
(ofm is om).output
(not ofm is o1).output
'\n'.output
(op is fp).output
(op is fm).output
(not op is f1).output
(op is ofp).output
(op is ofm).output
(not op is of1).output
(op is op).output
(op is om).output
(not op is o1).output
'\n'.output
(om is fp).output
(om is fm).output
(not om is f1).output
(om is ofp).output
(om is ofm).output
(not om is of1).output
(om is op).output
(om is om).output
(not om is o1).output
