# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2014 Johann DUBOIS <johann.dubois@outlook.com>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Business code of component "calculatrice"
module calculator

import sca
import additionProxy
import multiplicationProxy

# Calculator component
class Calculator 

	# references
	var additionProxy: AdditionProxy
	var multiplicationProxy: MultiplicationProxy 

	init(composite:SCAComposite) do
		self.additionProxy = new AdditionProxy(composite)
		self.multiplicationProxy = new MultiplicationProxy (composite)
	end

	# Calling the method of Addition component
	fun addition(a:Int, b:Int): Int do
		return additionProxy.plus(a,b)
	end

	# Calling the method of Multiplication component
	fun multiplication(a:Int, b:Int): Int do
		return multiplicationProxy.fois(a,b)
	end

end
