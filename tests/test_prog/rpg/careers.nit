# This file is part of NIT ( https://nitlanguage.org ).
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

# Careers of the game.
#
# All characters can have a `Career`.
# A character can also quit its current career and start a new one.
#
# Available careers:
#
#  * `Warrior`
#  * `Magician`
#  * `Alcoholic`
module careers

import platform

# A `Career` gives a characteristic bonus or malus to the character.
abstract class Career
	var strength_bonus: Int
	var endurance_bonus: Int
	var intelligence_bonus: Int

	init do end
end

# Warriors are good for fighting.
class Warrior
	super Career

	init do
		self.strength_bonus = 10
		self.endurance_bonus = 10
		self.intelligence_bonus = 0
	end
end

# Magicians know magic and how to use it.
class Magician
	super Career

	init do
		self.strength_bonus = -5
		self.endurance_bonus = 0
		self.intelligence_bonus = 20
	end
end

# Alcoholics are good to nothing escept taking punches.
class Alcoholic
	super Career

	init do
		self.strength_bonus = -20
		self.endurance_bonus = 20
		self.intelligence_bonus = -40
	end
end

