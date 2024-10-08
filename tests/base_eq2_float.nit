# This file == part of NIT ( https://nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License == distributed on an "AS IS" BASIS,
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

(fp == fp).output
(fp == fm).output
(not fp == f1).output
(fp == ofp).output
(fp == ofm).output
(not fp == of1).output
(fp == op).output
(fp == om).output
(not fp == o1).output
'\n'.output
(fm == fp).output
(fm == fm).output
(not fm == f1).output
(fm == ofp).output
(fm == ofm).output
(not fm == of1).output
(fm == op).output
(fm == om).output
(not fm == o1).output
'\n'.output
(ofp == fp).output
(ofp == fm).output
(not ofp == f1).output
(ofp == ofp).output
(ofp == ofm).output
(not ofp == of1).output
(ofp == op).output
(ofp == om).output
(not ofp == o1).output
'\n'.output
(ofm == fp).output
(ofm == fm).output
(not ofm == f1).output
(ofm == ofp).output
(ofm == ofm).output
(not ofm == of1).output
(ofm == op).output
(ofm == om).output
(not ofm == o1).output
'\n'.output
(op == fp).output
(op == fm).output
(not op == f1).output
(op == ofp).output
(op == ofm).output
(not op == of1).output
(op == op).output
(op == om).output
(not op == o1).output
'\n'.output
(om == fp).output
(om == fm).output
(not om == f1).output
(om == ofp).output
(om == ofm).output
(not om == of1).output
(om == op).output
(om == om).output
(not om == o1).output
