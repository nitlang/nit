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

# Example of a calculation used nitcc
# see `calc.sablecc` for the grammar
module calc is example

# Reuse the test program to simplify the code
import calc_test_parser

# The main evaluator, as a visitiopn that stack values
class Calulator
	super Visitor

	# The stack of values
	var stack = new Array[Int]

	redef fun visit(n) do n.accept_calculator(self)
end

redef class Node
	# Default caculation is to visit the childrens
	fun accept_calculator(v: Calulator) do visit_children(v)
end

redef class Nint
	redef fun accept_calculator(v) do v.stack.push(text.to_i)
end

redef class Ne_add
	redef fun accept_calculator(v) do
		super
		v.stack.push(v.stack.pop+v.stack.pop)
	end
end

redef class Ne_sub
	redef fun accept_calculator(v) do
		super
		var n1 = v.stack.pop
		v.stack.push(v.stack.pop-n1)
	end
end

redef class Ne_neg
	redef fun accept_calculator(v) do
		super
		v.stack.push(-v.stack.pop)
	end
end

redef class Ne_mul
	redef fun accept_calculator(v) do
		super
		v.stack.push(v.stack.pop*v.stack.pop)
	end
end

redef class Ne_div
	redef fun accept_calculator(v) do
		super
		var n1 = v.stack.pop
		v.stack.push(v.stack.pop/n1)
	end
end

var t = new TestParser_calc
var n = t.main
var v = new Calulator
v.enter_visit(n)
print v.stack.pop
