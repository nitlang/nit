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

# This module introduces an algorithm to remove the body of dead methods
package dead_method_removal

import reachable_method_analysis

redef class Program
	readable var _nb_removed_iroutines: Int = 0
	readable var _nb_not_removed_iroutines: Int = 0

	# Calling this method will change all iroutines that are dead
	# and put an abort in them
	fun optimize_dead_methods do
		with_each_iroutines !action(i,m) do
			if not rma.is_iroutine_reachable(i) then
				i.set_not_reachable(m)
				_nb_removed_iroutines = nb_removed_iroutines + 1
			else
				_nb_not_removed_iroutines = nb_not_removed_iroutines + 1
			end
		end
	end

	# This method will create a file and output informations about this optimization
	fun dump_dead_method_optimization(directory_name: String) do
		var f = new OFStream.open("{directory_name}/{main_module.name}.dmr_opt.log")

		f.write("Nb. dead iroutines removed: {nb_removed_iroutines}\n")
		f.write("Nb. live iroutines: {nb_not_removed_iroutines}\n")

		f.close
	end
end

redef class IRoutine
	# Simple helper function ...
	private fun set_not_reachable(m: MMModule) do
		var icb = new ICodeBuilder(m, self)
		icb.seq.icodes.clear
		icb.add_abort("This method should not be called !")
	end
end
