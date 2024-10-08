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

class A
	fun foo: Bool
	do
		return false
	end
end

class B
	super A
end

class C
	super A

	redef fun foo
	do
		return true
	end
end

class D
	super B
	super C

	redef fun foo
	do
		return super
	end

end

class E
	super C
	super B

	redef fun foo
	do
		return super
	end

end

(new A).foo.output
(new B).foo.output
(new C).foo.output
(new D).foo.output
(new E).foo.output
