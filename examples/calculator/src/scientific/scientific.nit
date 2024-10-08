# This file is part of NIT ( https://nitlanguage.org ).
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

# Extends the portable calculator app with scientific operations
module scientific is
	app_name "app.nit Calc Sci"
	app_namespace "org.nitlanguage.scientific_calculator"
	app_files
end

import calculator

redef class CalculatorWindow
	init
	do
		# All the button labels, row by row
		var rows = [["√",  "x²", "xⁿ", "e"  ],
		            ["log","ln", "%",  "x!" ],
		            ["π",  "sin","cos","tan"]]

		for row in rows do
			var row_layout = new HorizontalLayout(parent=layout)

			for op in row do
				var but = new Button(parent=row_layout, text=op)
				buttons[op] = but
			end
		end

		super
	end
end
