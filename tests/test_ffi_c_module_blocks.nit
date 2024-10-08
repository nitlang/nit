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

import core::kernel

in "C Header" `{
	// C types of public Nit classes must be in the C header block
	struct pub {long x;};
`}

in "C" `{
	// C types of private Nit classes can be in the C body block
	struct priv {long x;};
`}

extern class Pub `{ struct pub* `}
	new `{
		struct pub *res = malloc(sizeof(struct pub));
		res->x = 1234;
		return res;
	`}

	fun foo `{ printf("%ld\n", self->x); `}
end

private extern class Priv `{ struct priv* `}
	new `{
		struct priv *res = malloc(sizeof(struct priv));
		res->x = 2345;
		return res;
	`}

	fun foo `{ printf("%ld\n", self->x); `}
end

(new Pub).foo
(new Priv).foo
