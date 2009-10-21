# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2009 Jean-Sebastien Gelinas <calestar@gmail.com>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#	 http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# This package introduces an optimization that removes 'get' tests when
# not reachable from an initializer
package remove_out_of_init_get_test

import reachable_from_init_method_analysis

redef class Program
	# Calling this method will remove all 'isset' that were generated automaticaly
	# before a attribute read if this attribute read is done in a method that
	# cannot be reached by a initializer
	fun optimize_out_of_init_getters do
		with_each_iroutines !action(i,m) do
			if not rfima.is_iroutine_reachable_from_init(i) then
				var remover = new GetterTestRemover
				remover.visit_iroutine(i)
			end
		end
	end
end

class GetterTestRemover
special ICodeVisitor
	redef fun visit_icode(ic)
	do
		# Replace 'x = isset(y)' by 'x = true'
		if ic isa IAttrIsset then
			var result = ic.result
			assert result != null
			var e =  new INative("TAG_Bool(true)", null)
			e.is_pure = true
			e.result = result
			current_icode.insert_before(e)
			current_icode.delete
		end

		super
	end
end
