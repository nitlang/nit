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

class A
	var a: Object
	fun b(b1: Int) is abstract
	fun c(c1: Int, c2: Int) is abstract
	fun d: Object is abstract
	fun e(e1: Int): Object is abstract
end

class B
	super A

	redef var a
	redef fun b(b1) do end
	redef fun c(c1, c2) do end
	redef fun d do return ""
	redef fun e(e1) do return ""
end

class C
	super A

	redef var a: Object
	redef fun b(b1: Int) do end
	redef fun c(c1: Int, c2: Int) do end
	redef fun d: Object do return ""
	redef fun e(e1: Int): Object do return ""
end

class D
	super A

	redef fun b(b1) do end
	redef fun c(c1, c2) do end
	redef fun d: Int do return 1
	redef fun e(e1: Int): Numeric do return 1
end

class E
	super A

	redef var d: Int = 1
end
