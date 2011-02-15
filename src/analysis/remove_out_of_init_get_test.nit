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

# This module introduces an optimization that removes 'get' tests when
# not reachable from an initializer
package remove_out_of_init_get_test

import reachable_from_init_method_analysis

redef class Program
	readable var _nb_optimized_isset: Int = 0

	# Calling this method will remove all 'isset' that were generated automaticaly
	# before a attribute read if this attribute read is done in a method that
	# cannot be reached by a initializer
	fun optimize_out_of_init_getters do
		with_each_iroutines !action(i,m) do
			if not rfima.is_iroutine_reachable_from_init(i) then
				var remover = new GetterTestRemover
				remover.visit_iroutine(i)
				_nb_optimized_isset = nb_optimized_isset + remover.nb_optimized_isset
			end
		end
	end

	# This method will create a file and output informations about this optimization
	fun dump_out_of_init_information(directory_name: String) do
		var f = new OFStream.open("{directory_name}/{main_module.name}.out_of_init_opt.log")
		var nb_not_optimized = 0

		with_each_iroutines !action(i,m) do
			var counter = new IssetCounter
			counter.visit_iroutine(i)
			nb_not_optimized = nb_not_optimized + counter.nb_isset
		end

		f.write("Nb. optimized isset: {nb_optimized_isset}\n")
		f.write("Nb. not optimized: {nb_not_optimized}\n")

		f.close
	end
end

class IssetCounter
	super ICodeVisitor
	readable var _nb_isset: Int = 0

	redef fun visit_icode(ic)
	do
		if ic isa IAttrIsset then
			_nb_isset = nb_isset + 1
		end

		super
	end
end

class GetterTestRemover
	super ICodeVisitor
	readable var _nb_optimized_isset: Int = 0

	redef fun visit_icode(ic)
	do
		# Replace 'x = isset(y)' by 'x = true'
		if ic isa IAttrIsset then
			var result = ic.result
			assert result != null
			var e =  new IBoolValue(true)
			e.result = result
			current_icode.insert_before(e)
			current_icode.delete
			_nb_optimized_isset = nb_optimized_isset + 1
		end

		super
	end
end
