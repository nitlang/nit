# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import model::member

# Copied from the documentation of `Member::resolve_introducer`.

var g = new ProjectGraph("foo")
var m1 = new Attribute(g)
var m2 = new Attribute(g)
var m3 = new Attribute(g)

m1.model_id = "1"
m1.put_in_graph
m2.reimplement("1")
m2.put_in_graph
assert m1.resolve_introducer == m1.introducer
assert m2.resolve_introducer == m1.introducer

m3.model_id = "3"
m3.reimplement("3")
m3.put_in_graph
assert m3.resolve_introducer == null
