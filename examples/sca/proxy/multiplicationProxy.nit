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

# Module of commponent proxy "multiplication" that contains the SCA specification
# This is used when a component wants to make a reference to another, so it uses the proxy
module multiplicationProxy

import sca 
import multiplication

class MultiplicationProxy
	super SCAComponentImp 
	
	init(composite:SCAComposite) do
		with_name "multiplicationProxy"
		
		# Add reference to multiplication
		var multiplication_service = composite.get("multiplicationContext").get_service("multiplication_service")
		var ref_multiplication = new SCAReference("multiplication_reference", multiplication_service)
		self.add_reference ref_multiplication
	end
	
	fun fois(a:Int, b:Int): Int do
		# initialization parameters to send
		var params = new List[Parameter]
		var p1 = new Parameter("a", a)
		var p2 = new Parameter("b", b)
		params.add p1
		params.add p2

		# call to "multiplication" reference to send the message to the method "fois"
		var r = self.get_reference("multiplication_reference").invoke("fois", params)

		return r.to_s.to_i
	end
end
