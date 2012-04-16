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

# Module containing all bases for the reachable from init method analysis
package reachable_from_init_method_analysis

import icode
import program
import reachable_method_analysis

redef class Program
	# This attribute is the ReachableFromInitMethodAnalysis results
	readable writable var _rfima: nullable ReachableFromInitMethodAnalysis = null

	# This method will create a file and output the name of all methods reachable
	# from an init in it
	fun dump_reachable_methods_from_init(directory_name: String) do
		var f = new OFStream.open("{directory_name}/{main_module.name}.reachable_methods_from_init.log")
		with_each_methods !action(m) do
			if rfima.is_method_reachable_from_init(m) then
				f.write("{m.full_name}\n")
			end
		end
		f.close
	end

	# This method will create a file and output the name of all reachable methods that
	# can not be reached from an init in it
	fun dump_unreachable_methods_from_init(directory_name: String) do
		var f = new OFStream.open("{directory_name}/{main_module.name}.unreachable_methods_from_init.log")
		with_each_methods !action(m) do
			if not rfima.is_method_reachable_from_init(m) and rma.is_method_reachable(m) then
				f.write("{m.full_name}\n")
			end
		end
		f.close
	end
end

# Subclasses of this class would represent an analysis that produces
# at least a way of knowing if a property is reachable from at least
# one init in the program
interface ReachableFromInitMethodAnalysis
	fun is_iroutine_reachable_from_init(ir: nullable IRoutine): Bool is abstract
	fun is_method_reachable_from_init(method: MMMethod): Bool is abstract
end

# Default behavior is to say that all methods/iroutines are reachable
# from at least one init
class DefaultReachableFromInitMethodAnalysis
	super ReachableFromInitMethodAnalysis
	redef fun is_iroutine_reachable_from_init(ir: nullable IRoutine): Bool do return true
	redef fun is_method_reachable_from_init(method: MMMethod): Bool do return true

	init do end
end
