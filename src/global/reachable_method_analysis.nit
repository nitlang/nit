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

# Module containing all bases for the reachable method analysis
package reachable_method_analysis

import icode
import program

redef class Program
	# This attribute is the ReachableMethodAnalysis results 
	readable writable var _rma: nullable ReachableMethodAnalysis = null

	# This method will create a file and output all reachable method names in it
	fun dump_reachable_methods(directory_name: String, algo: String) do
		var f = new OFStream.open("{directory_name}/{main_module.name}.reachable_methods.{algo}.log")
		with_each_methods !action(m) do
			if rma.is_method_reachable(m) then
				f.write("{m.full_name}\n")
			end
		end
		f.close
	end

	# This method will create a file and output all unreachable method names in it
	fun dump_unreachable_methods(directory_name: String, algo: String) do
		var f = new OFStream.open("{directory_name}/{main_module.name}.unreachable_methods.{algo}.log")
		with_each_methods !action(m) do
			if not rma.is_method_reachable(m) then
				f.write("{m.full_name}\n")
			end
		end
		f.close
	end
end

# Subclasses of this class would represent an analysis that produces
# at least a way of knowing if a property is reachable from the entry
# point of the program
interface ReachableMethodAnalysis
	fun is_iroutine_reachable(ir: nullable IRoutine): Bool is abstract
	fun is_method_reachable(method: MMMethod): Bool is abstract
end

# Default behavior is to say that all methods/iroutines are reachable
class DefaultReachableMethodAnalysis
	super ReachableMethodAnalysis
	redef fun is_iroutine_reachable(ir: nullable IRoutine): Bool do return true
	redef fun is_method_reachable(method: MMMethod): Bool do return true

	init do end
end
