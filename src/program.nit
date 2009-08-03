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

	init(m: MMModule) do
		_module = m
	end
end
