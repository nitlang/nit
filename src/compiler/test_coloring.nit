# This file is part of NIT ( http://www.nitlanguage.org ).
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

module test_coloring is test

import coloring

class TestPOSetColorer
	test

	fun test_ids_strictly_positive is test do
		var poset = new POSet[String]
		poset.add_node "A"

		var colorer = new POSetColorer[String]
		colorer.colorize(poset)

		assert colorer.ids["A"] > 0
	end
end
