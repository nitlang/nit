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

# Support for pickable powerups (only health for now)
module powerups is serialize

import tanks

# A powerup item
class Powerup
	super Feature
	redef type R: PowerupRule
end

# Metadata of a powerup item
class PowerupRule
	super FeatureRule

	# Restore all health when picked up
	var restore_health: Bool
end

redef class Story
	# A powerup that restores all health
	var health = new PowerupRule(self, 2, true)

	# All `PowerupRule` in this story
	var powerups: Array[PowerupRule] = [health]
end

redef class Tank

	redef fun destroy(turn)
	do
		super

		# Put a random powerup at the center of the old tank
		var pos = new Pos(pos.x.floor+0.5, pos.y.floor+0.5)
		var powerup = new Powerup(turn.game.story.powerups.rand, pos)
		turn.add new FeatureChangeEvent(powerup, null, pos)

		# Add some debris around it
		var forward = new Pos((pos.x+heading.cos*1.1).floor+0.5, (pos.y+heading.sin*1.1).floor+0.5)
		var backward = new Pos((pos.x-heading.cos*1.1).floor+0.5, (pos.y-heading.sin*1.1).floor+0.5)
		turn.add new FeatureChangeEvent(new Feature(turn.game.story.debris, forward), null, forward)
		turn.add new FeatureChangeEvent(new Feature(turn.game.story.debris, backward), null, backward)
	end

	# Intercept collision detection of "absorb" powerups
	#
	# This is a wee bit hackish.
	# The collision detection on tank move can return a max of 4 items (1 per side).
	# If there is powerups, they may have hidden other features.
	# This could cause the tank to move over a feature and get stuck.
	# This is not a big problem as the tank can open fire to liberate itself,
	# or even simply go back as the speed is static.
	redef fun next_move_collisions(turn)
	do
		var collisions = super
		if collisions.is_empty then return collisions

		for coll in collisions do if not coll isa Powerup then
			# An unavoidable collision
			return collisions
		end

		# Only powerups! absorb them
		for powerup in collisions do
			if powerup isa Powerup then
				turn.add new FeatureChangeEvent(null, powerup, powerup.pos)

				if powerup.rule.restore_health then
					turn.add new TankHealthChange(self, rule.max_health)
				end
			end
		end

		return new HashSet[Feature]
	end
end
