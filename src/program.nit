# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2009 Jean-Sebastien Gelinas <calestar@gmail.com>
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

# Common things to represent a Nit program/library
package program

import metamodel

# Instances of this class represent a program/library that will
# be analyzed/compiled by nitc
class Program
	# This module is the 'main' module, the one where we find the 'main' method
	readable var _module: MMModule

	# This method is the entry point of this program
	# There might be no entry point (if in fact we are compiling a library)
	readable var _main_method: nullable MMMethod = null

	# This is the class that contains the main method.
	# Would be null if there is no main method
	readable var _main_class: nullable MMLocalClass = null

	fun compute_main_method do
		# Check for the 'Sys' class
		var sysname = once "Sys".to_symbol
		if not module.has_global_class_named(sysname) then return
		var sys = module.class_by_name(sysname)

		# Check for 'Sys::main' method
		var entryname = once "main".to_symbol
		if not sys.has_global_property_by_name(entryname) then return

		_main_method = sys.select_method(entryname)
		_main_class = sys
	end

	init(m: MMModule) do
		_module = m
	end
end
