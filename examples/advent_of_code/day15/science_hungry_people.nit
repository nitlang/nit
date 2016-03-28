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

redef class String
	fun remove_last: String do return self.substring(0, length - 1)
end

class Ingredient
	var name: String
	var capacity_tsp: Int
	var durability_tsp: Int
	var flavour_tsp: Int
	var texture_tsp: Int
	var calories_tsp: Int

	init do name = name.substring(0, name.length - 1)

	fun capacity(tsp: Int): Int do return capacity_tsp * tsp
	fun durability(tsp: Int): Int do return durability_tsp * tsp
	fun flavour(tsp: Int): Int do return flavour_tsp * tsp
	fun texture(tsp: Int): Int do return texture_tsp * tsp
	fun calories(tsp: Int): Int do return calories_tsp * tsp
end

class CookieRecipe
	var ingredients = new HashMap[Ingredient, Int]

	fun capacity: Int do
		var cp = 0
		for k, v in ingredients do cp += k.capacity(v)
		return if cp > 0 then cp else 0
	end

	fun durability: Int do
		var cp = 0
		for k, v in ingredients do cp += k.durability(v)
		return if cp > 0 then cp else 0
	end

	fun flavour: Int do
		var cp = 0
		for k, v in ingredients do cp += k.flavour(v)
		return if cp > 0 then cp else 0
	end

	fun texture: Int do
		var cp = 0
		for k, v in ingredients do cp += k.texture(v)
		return if cp > 0 then cp else 0
	end

	fun calories: Int do
		var cp = 0
		for k, v in ingredients do cp += k.calories(v)
		return if cp > 0 then cp else 0
	end

	fun score: Int do return capacity * durability * flavour * texture

	fun find_best(max_tsp: Int): Int do return find_best_recursive(ingredients.keys.to_a, 0, max_tsp)

	fun find_best_recursive(ingredients: SequenceRead[Ingredient], id, rem_tsp: Int): Int do
		if id >= ingredients.length then return 0
		var ing = ingredients[id]
		if id == ingredients.length - 1 then
			var totals = new Array[Int].with_capacity(rem_tsp)
			for i in [0 .. rem_tsp] do
				self.ingredients[ing] = i
				totals.add(score)
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

fun find_max(arr: Array[Int]): Int do
	if arr.is_empty then return 0
	var max = arr.first
	for i in [1 .. arr.length[ do
		if arr[i] > max then max = arr[i]
	end
	return max
end

if args.is_empty then
	print "Usage: ./{program_name.basename.strip_extension} input.txt"
	exit 1
end

var lns = args[0].to_path.read_lines

var recipe = new CookieRecipe
for i in lns do
	var els = i.split(" ")
	var ingredient = new Ingredient(els[0].remove_last, els[2].remove_last.to_i, els[4].remove_last.to_i, els[6].remove_last.to_i, els[8].remove_last.to_i, els[10].to_i)
	recipe.ingredients[ingredient] = 0
end

print recipe.find_best(100)
