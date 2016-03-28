# This file is part of NIT ( http://www.nitlanguage.org ).
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

import science_hungry_people

redef class CookieRecipe
	redef fun find_best_recursive(ingredients, id, rem_tsp) do
		if id >= ingredients.length then return 0
		var ing = ingredients[id]
		if id == ingredients.length - 1 then
			var totals = new Array[Int].with_capacity(rem_tsp)
			for i in [0 .. rem_tsp] do
				self.ingredients[ing] = i
				if calories == 500 then totals.add(score)
			end
			return find_max(totals)
		end
		var totals = new Array[Int].with_capacity(rem_tsp)
		for i in [0 .. rem_tsp] do
			self.ingredients[ing] = i
			totals.add(find_best_recursive(ingredients, id + 1, rem_tsp - i))
		end
		return find_max(totals)
	end
end

super
