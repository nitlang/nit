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

# Test callback to an extern constructor from extern code

import core::text

extern class IntPtr `{ int* `}
	new (v: Int) `{
		int *r = malloc(sizeof(int));
		*r = v;
		return r;
	`}

	redef fun to_s import CString, CString.to_s `{
		int len = snprintf(NULL, 0, "%d", *self) + 1;
		char *c = new_CString(len);
		sprintf(c, "%d", *self);
		return CString_to_s(c);
	`}
end

fun foo: IntPtr import IntPtr `{
	int *c = new_IntPtr(5678);
	return c;
`}

var a = new IntPtr(1234)
a.to_s.output
"\n".output

var b = foo
b.to_s.output
"\n".output
