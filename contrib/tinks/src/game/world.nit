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

# Physical world logic
module world is serialize

import noise
import more_collections

import framework

redef class TGame
	# The physical world in which this game happens
	var world = new World(self)
end

# A terrain features (a rock, a tree, etc.)
class Feature
	super Ruled
	redef type R: FeatureRule

	# Top-left corner of this feature
	var pos: Pos
end

# Metadata for a `Feature`
class FeatureRule
	super Rule

	# Strength to resist on `World::explode`
	var strength: Int
end

# The physical world of the `game`
class World
	# Associated `TGame`
	var game: TGame

	# Past blast sites
	var blast_sites = new Array[Pos]

	private var mountain_map: Noise do
		var map = new PerlinNoise
		map.period = 10.0
		return map
	end

	private var forest_map: Noise do
		var map = new PerlinNoise
		map.period = 24.0
		return map
	end

	# Cache of discovered features, also keeps tracks of changes
	private var features_cache = new FeatureMap

	# Get the `Feature` at `x, y`, if any
	fun [](x, y: Int): nullable Feature
	do
		if features_cache.has(x, y) then return features_cache[x, y]

		# Generate a feature from the noise map
		var pos = new Pos(x.to_f+0.5, y.to_f+0.5)

		var feature = null
		if mountain_map[x.to_f, y.to_f] > 0.55 then
			feature = new Feature(game.story.rock, pos)
		else if forest_map[x.to_f, y.to_f] > 0.5 then
			feature = new Feature(game.story.tree, pos)
		end

		# Update cache
		features_cache[x, y] = feature

		return feature
	end

	# Detect the first collision with a `Feature` from `src` to `dst`
	#
	# This is the main collision detection method used by tanks shots, and at tank movement.
	# The idea is to check all cases between `src` and `dst` and return the first feature found.
	# Returns `null` if there is no obstacle features.
	#
	# Example of the cases that would be checked between `s` and `d`:
	#
	# ~~~raw
	# ................
	# .s###...........
	# ....######......
	# .........####d..
	# ................
	# ~~~
	fun first_collision(src, dst: Pos): nullable Feature
	do
		var going_left = dst.x < src.x
		var angle = src.atan2(dst)
		var slope = angle.tan

		# Soften slopes approaching infinity
		if slope > 100.0 then slope = 100.0
		if slope < -100.0 then slope = -100.0

		# For each column (over x) from src.x to dst.x
		var x0 = src.x.floor.to_i
		var x1 = dst.x.floor.to_i
		for x in [x0 .. x1].smart_step do
			var dx = x.to_f - src.x
			var y0 = src.y + dx*slope
			var y1 = src.y + (dx+1.0)*slope

			var first = y0.floor.to_i
			var last = y1.floor.to_i
			if going_left then
				# Invert the first and last element of the range
				var swap = first
				first = last
				last = swap
			end

			# For each row (over y)
			# from where the line enters the column to where it leaves it
			for y in [first .. last].smart_step do
				if not y.in_between_floats(src.y, dst.y) then continue

				var feature = self[x.to_i, y]
				if feature != null then return feature
			end
		end

		return null
	end

	# Apply an explosion at `center` of the given `power`
	fun explode(turn: TTurn, center: Pos, power: Int)
	do
		var x = center.x.floor.to_i
		var y = center.y.floor.to_i
		var range = [-power .. power]
		var features = new Array[Feature]

		for dx in range do
			for dy in range do
				var f = self[x+dx, y+dy]
				var force = (power-dx.abs) + (power-dy.abs)
				if f != null and f.rule.strength <= force then features.add f
			end
		end

		turn.add new ExplosionEvent(center, power, features)
	end
end

# Map of features organized by their coordinates
#
# The naive implementation is using a `HashMap2`.
# This class can be redefed with optimizations as needed.
class FeatureMap
	super HashMap2[Int, Int, nullable Feature]
end

redef class Story
	# Forest tree
	var tree = new FeatureRule(self, 2)

	# Big rock
	var rock = new FeatureRule(self, 3)

	# Metallic debris
	var debris = new FeatureRule(self, 4)
end

# An explosion
class ExplosionEvent
	super TEvent

	# Center of the explosion
	var pos: Pos

	# Power of the blast
	var power: Int

	# All the features this explosion destroys
	var destroyed_features: Array[Feature]

	redef fun apply(game)
	do
		for feature in destroyed_features do
			game.world.features_cache[feature.pos.x.floor.to_i, feature.pos.y.floor.to_i] = null
		end

		game.world.blast_sites.add pos
		if game.world.blast_sites.length > 100 then game.world.blast_sites.shift
	end
end

# The feature at `pos` changes to `feature`
class FeatureChangeEvent
	super TEvent

	# New `Feature`, if any
	var feature: nullable Feature

	# Previous feature, if any
	var old_feature: nullable Feature

	# `Pos` of this change
	var pos: Pos

	redef fun apply(game)
	do
		game.world.features_cache[pos.x.floor.to_i, pos.y.floor.to_i] = feature
	end
end

# ---
# Services

# Position in the world
class Pos
	super Point[Float]

	# Add `self` to `other` and return the new position
	fun +(other: Point[Float]): Pos
	do
		var nx = other.x.add(x)
		var ny = other.y.add(y)
		return new Pos(x.value_of(nx), y.value_of(ny))
	end
end

redef universal Int
	# Is `self` in between `a` and `b`?
	#
	# ~~~
	# assert 1.in_between_floats(0.0, 2.0)
	# assert 1.in_between_floats(2.0, 0.0)
	# assert not 1.in_between_floats(2.0, 4.0)
	# ~~~
	fun in_between_floats(a, b: Float): Bool
	do
		var f = to_f
		if a < b then return a.floor - 1.0 < f and f < b.ceil
		return a.ceil > f and f > b.floor - 1.0
	end
end

redef universal Float
	# Get the vector with `self` as direction and the given `magnitude`
	fun to_vector(magnitude: Float): Pos
	do
		return new Pos(cos*magnitude, sin*magnitude)
	end
end

redef class Range[E]
	# Step appropriately to go from `first` to `last`
	#
	# ~~~
	# assert [1..3].smart_step.to_a == [1, 2, 3]
	# assert [3..1].smart_step.to_a == [3, 2, 1]
	# ~~~
	fun smart_step: Iterator[E]
	do
		var step = 1
		if first > last then step = -1
		return self.step(step)
	end
end
