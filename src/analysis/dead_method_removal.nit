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

# This package introduces an algorithm to remove the body of dead methods
package dead_method_removal

import reachable_method_analysis

redef class Program
	# Calling this method will change all iroutines that are dead
	# and put an abort in them
	fun optimize_dead_methods do
		for m in module.mhe.greaters_and_self do
			for c in m.local_classes do

				# Process methods and attributes initialization
				for p in c.local_local_properties do
					var iroutine: nullable IRoutine = null

					if p isa MMAttribute then
						iroutine = p.iroutine
					else if p isa MMMethod then
						iroutine = p.iroutine
					end
					if iroutine == null then continue
	
					if not rma.is_iroutine_reachable(iroutine) then
						iroutine.set_not_reachable(m)
					end
				end

				# Process class-specific iroutines
				if c.init_var_iroutine != null and not rma.is_iroutine_reachable(c.init_var_iroutine) then
					c.init_var_iroutine.set_not_reachable(m)
				end
				if c.checknew_iroutine != null and not rma.is_iroutine_reachable(c.checknew_iroutine) then
					c.checknew_iroutine.set_not_reachable(m)
				end
				for i in c.new_instance_iroutine do
					if not rma.is_iroutine_reachable(i) then
						i.set_not_reachable(m)
					end
				end
			end
		end
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
