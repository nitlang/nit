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

# Package containing all bases for the reachable from init method analysis
package reachable_as_init

import icode
import program

redef class Program
	# This attribute is the ReachableAsInitAnalysis results
	readable writable var _rai: nullable ReachableAsInitAnalysis = null
end

# Subclasses of this class would represent an analysis that produces
# at least a way of knowing if an initializer is called at least once
# as an initializer (and not as part of another initializer)
# in a specific class
class ReachableAsInitAnalysis
	fun is_method_reachable_as_init(method: MMMethod, c: MMLocalClass): Bool is abstract
end

# Default behavior is to say that all initializers are called as init
class DefaultReachableAsInitAnalysis
special ReachableAsInitAnalysis
	redef fun is_method_reachable_as_init(method: MMMethod, c: MMLocalClass): Bool do
		if method.global.is_init and method.global.is_init_for(c) then return true
		return false
	end

	init do end
end
