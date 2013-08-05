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

import base_attr_init_val_inh

redef class A
	var aa1 = new W(3)
	var aa2: W = a1
	var aa3: W = aa1
end

redef class B
	super A
	var bb1 = new W(4)
	var bb2: W = b1
	var bb3: W = a1
	var bb4: W = bb1
	var bb5: W = aa1
end

var test1 = new A
test1.aa1.v.output
test1.aa2.v.output
test1.aa3.v.output

'\n'.output

var test2 = new B
test2.aa1.v.output
test2.aa2.v.output
test2.aa3.v.output
test2.bb1.v.output
test2.bb2.v.output
test2.bb3.v.output
test2.bb4.v.output
test2.bb5.v.output

