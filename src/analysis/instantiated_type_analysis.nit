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

# Package containing all bases for instantiated type analysis
package instantiated_type_analysis

import program

redef class Program
	# This attribute is the InstantiatedTypeAnalysis results
	readable writable var _ita: nullable InstantiatedTypeAnalysis = null

	# We know which are really live, use that information !
	redef fun with_each_live_local_classes
		!action(m: MMLocalClass)
	do
		for c in module.local_classes do
			if ita == null or ita.as(not null).is_class_instantiated(c) then action(c)
		end
	end
end

# Subclasses of this class would represent an analysis that produces
# at least a way of knowing if a class is instantiated somewhere in a
# method that is reachable from the entry point of the program
class InstantiatedTypeAnalysis
	fun is_class_instantiated(local_class: MMLocalClass): Bool is abstract
end

# Default behavior is to say that all types are instantiated
class DefaultInstantiatedTypeAnalysis
special InstantiatedTypeAnalysis
	redef fun is_class_instantiated(local_class: MMLocalClass): Bool do return true

	init do end
end
